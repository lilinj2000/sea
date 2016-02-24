#include "MDServiceImpl.hh"

#include "MDOptions.hh"
#include "MDSpiImpl.hh"
#include "SeaLog.hh"
#include "EESQuoteDefinePrint.hh"

namespace sea
{

MDServiceImpl::MDServiceImpl(soil::Options* options, MDServiceCallback* callback) :
    md_api_(NULL),
    callback_(callback),
    request_id_(0)
{
  SEA_TRACE <<"MDServiceImpl::MDServiceImpl()" ;

  cond_.reset( soil::STimer::create() );

  md_queue_.reset( new soil::MsgQueue<DepthMarketData, MDServiceImpl>(this) );
  
  options_ = dynamic_cast<MDOptions*>(options);

  md_api_ = CreateEESQuoteApi() ;
  if( !md_api_ )
  {
    SEA_ERROR <<"create quote api failed.";
    
    throw std::runtime_error("crate quote api failed.");
  }
  
  md_spi_.reset( new MDSpiImpl(this) );

  if( options_->protocol=="tcp" )
  {
    EqsTcpInfo tcpInfo;

    strncpy(tcpInfo.m_eqsIp, options_->eqs_ip.data(), sizeof(tcpInfo.m_eqsIp));
    tcpInfo.m_eqsPort = options_->eqs_port;

    SEA_DEBUG <<tcpInfo;

    std::vector<EqsTcpInfo> tcpInfos;
    tcpInfos.push_back( tcpInfo );
  
    if( !md_api_->ConnServer(tcpInfos, md_spi_.get()) )
    {
      SEA_ERROR <<"conn to server failed. [" <<options_->eqs_ip
                <<":" <<options_->eqs_port <<"]";

      throw std::runtime_error("conn server failed.");
    }

    wait("login");
  }
  else if( options_->protocol=="multi" )
  {
    EqsMulticastInfo multiInfo;
    strncpy(multiInfo.m_mcIp, options_->multi_ip.data(), sizeof(multiInfo.m_mcIp));
    multiInfo.m_mcPort = options_->multi_port;
    strncpy(multiInfo.m_mcLoacalIp, options_->local_ip.data(), sizeof(multiInfo.m_mcLoacalIp));
    multiInfo.m_mcLocalPort = options_->local_port;
    strncpy(multiInfo.m_exchangeId, options_->exchange_id.data(), sizeof(multiInfo.m_exchangeId));

    SEA_DEBUG <<multiInfo;

    std::vector<EqsMulticastInfo> multiInfos;
    multiInfos.push_back( multiInfo );

    if( !md_api_->InitMulticast(multiInfos, md_spi_.get()) )
    {
      SEA_ERROR <<"init multicast failed.";

      throw std::runtime_error("init multicast failed.");
    }
  }
  else
  {
    std::string error_msg = "the protocol - " + options_->protocol;
    error_msg += " is wrong.";
    
    throw std::runtime_error(error_msg);
  }

}

MDServiceImpl::~MDServiceImpl()
{
  SEA_TRACE <<"MDServiceImpl::~MDServiceImpl()" ;

  if( md_api_ )
  {
    md_api_->DisConnServer();
  
    DestroyEESQuoteApi( md_api_ );
  
    md_api_ = NULL;
  }

}

void MDServiceImpl::subMarketData(const std::string& instru)
{
  SEA_TRACE <<"MDServiceImpl::subMarketData()" ;
  
  md_api_->RegisterSymbol(EQS_FUTURE, instru.data());

}

void MDServiceImpl::unsubMarketData(const std::string& instru)
{
  SEA_TRACE <<"MDServiceImpl::unsubMarketData()" ;

  md_api_->UnregisterSymbol(EQS_FUTURE, instru.data());
}

std::string MDServiceImpl::tradingDay()
{
  SEA_TRACE <<"MDServiceImpl::tradingDate()" ;

  return nullptr;
}

void MDServiceImpl::login()
{
  SEA_TRACE <<"MDServiceImpl::login()" ;

  EqsLoginParam req;
  memset(&req, 0x0, sizeof(req));
  
  strncpy( req.m_loginId, options_->user_id.data(), sizeof(req.m_loginId) );
  strncpy( req.m_password, options_->password.data(), sizeof(req.m_password) );

  SEA_PDU <<req;
  
  md_api_->LoginToEqs(req);

}

void MDServiceImpl::wait(const std::string& hint)
{
  if( cond_->wait(2000) )
  {
    if( !hint.empty() )
      throw std::runtime_error(hint + " time out");
  }
}

void MDServiceImpl::notify()
{
  cond_->notifyAll();
}

void MDServiceImpl::pushData(DepthMarketData* data)
{
  md_queue_->pushMsg( data );
}


soil::Options* MDService::createOptions()
{
  return new MDOptions();
}

MDService* MDService::createService(soil::Options* options, MDServiceCallback* callback)
{
  return new MDServiceImpl(options, callback);
}

} // namespace sea
