#include "TraderServiceImpl.hh"

#include "SeaLog.hh"
#include "TraderOptions.hh"
#include "TraderSpiImpl.hh"

#include "EesTraderDefinePrint.hh"

namespace sea
{

TraderServiceImpl::TraderServiceImpl(soil::Options* options, TraderServiceCallback* callback) :
    trader_api_(NULL),
    callback_(callback),
    request_id_(0),
    max_order_ref_(-1)
{
  SEA_TRACE <<"TraderServiceImpl::TraderServiceImpl()" ;

  cond_.reset( soil::STimer::create() );

  options_ = dynamic_cast<TraderOptions*>(options);
  
  trader_api_ = CreateEESTraderApi();
      
  trader_spi_.reset( new TraderSpiImpl(this) );
  
  trader_api_->ConnServer(options_->front_address.data(),
                          options_->port,
                          trader_spi_.get());
      
  wait("login");
}

TraderServiceImpl::~TraderServiceImpl()
{
  SEA_TRACE <<"TraderServiceImpl::~TraderServiceImpl()" ;

  trader_api_->DisConnServer();
  
  DestroyEESTraderApi( trader_api_ );
  
  trader_api_ = NULL;
}


std::string TraderServiceImpl::tradingDay()
{
  SEA_TRACE <<"TraderServiceImpl::tradingDate()" ;

  return trading_day_;
}

int TraderServiceImpl::orderOpenBuy(const std::string& instru,
                                    double price, int volume)
{
  SEA_TRACE <<"TraderServiceImpl::orderOpenBuy()" ;

  SEA_DEBUG <<"instru: " <<instru
            <<"\t price: " <<price
            <<"\t volume: " <<volume;

  int order_ref = -1;

  // std::unique_ptr<EES_EnterOrderField> req( orderField(order_ref) );

  // strncpy(req->InstrumentID, instru.data(), sizeof(req->InstrumentID));
  // req->Direction = XELE_FTDC_D_Buy;
  // req->LimitPrice = price;
  // req->VolumeTotalOriginal = volume;

  // try
  // {
  //   orderGo( req.get() );
  // }
  // catch( ... )
  // {
  //   throw std::runtime_error("order open buy failed.");
  
  return order_ref;
}

int TraderServiceImpl::orderOpenBuyFAK(const std::string& instru,
                                       double price, int volume)
{
  SEA_TRACE <<"TraderServiceImpl::orderOpenBuyFAK()" ;

  SEA_DEBUG <<"instru: " <<instru
            <<"\t price: " <<price
            <<"\t volume: " <<volume;

  int order_ref = -1;

  // std::unique_ptr<EES_EnterOrderField> req( orderField(order_ref) );

  // strncpy(req->InstrumentID, instru.data(), sizeof(req->InstrumentID));
  // req->Direction = XELE_FTDC_D_Buy;
  // req->LimitPrice = price;
  // req->VolumeTotalOriginal = volume;

  // req->TimeCondition = XELE_FTDC_TC_IOC;
  

  // try
  // {
  //   orderGo( req.get() );
  // }
  // catch( ... )
  // {
  //   throw std::runtime_error("order open buy FAK failed.");
  // }
  
  return order_ref;

}

int TraderServiceImpl::orderOpenBuyFOK(const std::string& instru,
                                       double price, int volume)
{
  SEA_TRACE <<"TraderServiceImpl::orderOpenBuyFOK()" ;

  SEA_DEBUG <<"instru: " <<instru
            <<"\t price: " <<price
            <<"\t volume: " <<volume;

  int order_ref = -1;

  // std::unique_ptr<EES_EnterOrderField> req( orderField(order_ref) );

  // strncpy(req->InstrumentID, instru.data(), sizeof(req->InstrumentID));
  // req->Direction = XELE_FTDC_D_Buy;
  // req->LimitPrice = price;
  // req->VolumeTotalOriginal = volume;

  // req->TimeCondition = XELE_FTDC_TC_IOC;
  // req->VolumeCondition = XELE_FTDC_VC_CV;

  // try
  // {
  //   orderGo( req.get() );
  // }
  // catch( ... )
  // {
  //   throw std::runtime_error("order open buy FOK failed.");
  // }
  
  return order_ref;

}


int TraderServiceImpl::orderOpenSell(const std::string& instru,
                                      double price, int volume)
{
  SEA_TRACE <<"TraderServiceImpl::orderOpenSell()" ;

  SEA_DEBUG <<"instru: " <<instru
            <<"\t price: " <<price
            <<"\t volume: " <<volume;

  int order_ref = -1;

  // std::unique_ptr<EES_EnterOrderField> req( orderField(order_ref) );

  // strncpy(req->InstrumentID, instru.data(), sizeof(req->InstrumentID));
  // req->Direction = XELE_FTDC_D_Sell;
  // req->LimitPrice = price;
  // req->VolumeTotalOriginal = volume;

  // try
  // {
  //   orderGo( req.get() );
  // }
  // catch( ... )
  // {
  //   throw std::runtime_error("order open sell failed.");
  // }

  return order_ref;
}

int TraderServiceImpl::orderOpenSellFAK(const std::string& instru,
                                       double price, int volume)
{
  SEA_TRACE <<"TraderServiceImpl::orderOpenSellFAK()" ;

  SEA_DEBUG <<"instru: " <<instru
            <<"\t price: " <<price
            <<"\t volume: " <<volume;

  int order_ref = -1;

  // std::unique_ptr<EES_EnterOrderField> req( orderField(order_ref) );

  // strncpy(req->InstrumentID, instru.data(), sizeof(req->InstrumentID));
  // req->Direction = XELE_FTDC_D_Sell;
  // req->LimitPrice = price;
  // req->VolumeTotalOriginal = volume;

  // req->TimeCondition = XELE_FTDC_TC_IOC;
  
  // try
  // {
  //   orderGo( req.get() );
  // }
  // catch( ... )
  // {
  //   throw std::runtime_error("order open sell FAK failed.");
  // }
  
  return order_ref;

}

int TraderServiceImpl::orderOpenSellFOK(const std::string& instru,
                                       double price, int volume)
{
  SEA_TRACE <<"TraderServiceImpl::orderOpenSellFOK()" ;

  SEA_DEBUG <<"instru: " <<instru
            <<"\t price: " <<price
            <<"\t volume: " <<volume;

  int order_ref = -1;

  // std::unique_ptr<EES_EnterOrderField> req( orderField(order_ref) );

  // strncpy(req->InstrumentID, instru.data(), sizeof(req->InstrumentID));
  // req->Direction = XELE_FTDC_D_Sell;
  // req->LimitPrice = price;
  // req->VolumeTotalOriginal = volume;

  // req->TimeCondition = XELE_FTDC_TC_IOC;
  // req->VolumeCondition = XELE_FTDC_VC_CV;

  // try
  // {
  //   orderGo( req.get() );
  // }
  // catch( ... )
  // {
  //   throw std::runtime_error("order open sell FOK failed.");
  // }
  
  return order_ref;

}


int TraderServiceImpl::orderCloseBuy(const std::string& instru,
                                     double price, int volume)
{
  SEA_TRACE <<"TraderServiceImpl::orderCloseBuy()" ;

  SEA_DEBUG <<"instru: " <<instru
            <<"\t price: " <<price
            <<"\t volume: " <<volume;

  int order_ref = -1;

  // std::unique_ptr<EES_EnterOrderField> req( orderField(order_ref) );

  // strncpy(req->InstrumentID, instru.data(), sizeof(req->InstrumentID));
  // req->Direction = XELE_FTDC_D_Buy;
  // req->LimitPrice = price;
  // req->VolumeTotalOriginal = volume;
  // req->CombOffsetFlag[0] = XELE_FTDC_OF_CloseToday;

  // try
  // {
  //   orderGo( req.get() );
  // }
  // catch( ... )
  // {
  //   throw std::runtime_error("order close buy failed.");
  // }

  return order_ref;

}

int TraderServiceImpl::orderCloseSell(const std::string& instru,
                                     double price, int volume)
{
  SEA_TRACE <<"TraderServiceImpl::orderCloseSell()" ;

  SEA_DEBUG <<"instru: " <<instru
            <<"\t price: " <<price
            <<"\t volume: " <<volume;

  int order_ref = -1;

  // std::unique_ptr<EES_EnterOrderField> req( orderField(order_ref) );

  // strncpy(req->InstrumentID, instru.data(), sizeof(req->InstrumentID));
  // req->Direction = XELE_FTDC_D_Sell;
  // req->LimitPrice = price;
  // req->VolumeTotalOriginal = volume;
  // req->CombOffsetFlag[0] = XELE_FTDC_OF_CloseToday;

  // try
  // {
  //   orderGo( req.get() );
  // }
  // catch( ... )
  // {
  //   throw std::runtime_error("order close sell failed.");
  // }

  return order_ref;

}

int TraderServiceImpl::queryAccount()
{
  SEA_TRACE <<"TraderServiceImpl::queryAccount()" ;

  // CXeleFtdcQryClientAccountField req;
  // memset(&req, 0x0, sizeof(req));
  
  // strncpy( req.ClientID, options_->client_id.data(), sizeof(req.ClientID) );

  // SEA_PDU <<req;
  
  // int result = trader_api_->ReqQryClientAccount(&req, ++request_id_);

  // if( result!=0 )
  // {
  //   SEA_ERROR <<"return code " <<result;
  //   throw std::runtime_error("query account failed.");
  // }

}

void TraderServiceImpl::initSession(EES_LogonResponse* pLogon)
{
  // trading_day_ = pRspUserLogin->TradingDay;
  
  // max_order_ref_ = atoi(pRspUserLogin->MaxOrderLocalID);;
}

void TraderServiceImpl::login()
{
  SEA_TRACE <<"TraderServiceImpl::login()" ;

  RESULT result = trader_api_->UserLogon(options_->user_id.data(),
                                         options_->password.data(),
                                         options_->prod_info.data(),
                                         options_->mac_addr.data());

  if( result!=NO_ERROR )
  {
    SEA_ERROR <<"return code " <<result;
    throw std::runtime_error("login failed.");
  }

}

void TraderServiceImpl::wait(const std::string& hint)
{
  if( cond_->wait(2000) )
  {
    if( !hint.empty() )
      throw std::runtime_error(hint + " time out");
  }
}

void TraderServiceImpl::notify()
{
  cond_->notifyAll();
}

EES_EnterOrderField* TraderServiceImpl::orderField(int& order_ref)
{
  std::unique_ptr<EES_EnterOrderField> req( new EES_EnterOrderField() );

  // order_ref = ++max_order_ref_;
  
  // strncpy(req->ParticipantID, options_->participant_id.data(), sizeof(req->ParticipantID));
  // strncpy(req->ClientID, options_->client_id.data(), sizeof(req->ClientID));
  // strncpy(req->UserID, options_->user_id.data(), sizeof(req->UserID));

  
  // req->OrderPriceType = XELE_FTDC_OPT_LimitPrice;

  // // req->CombOffsetFlag[0] = XELE_FTDC_OF_Open;
  // req->CombOffsetFlag[0] = XELE_FTDC_OF_Open;
  
  // req->CombHedgeFlag[0] = XELE_FTDC_OPT_AnyPrice;
  // req->TimeCondition = XELE_FTDC_TC_GFD;
  // req->VolumeCondition = XELE_FTDC_VC_AV;
  // req->MinVolume = 1;
  // req->ContingentCondition = XELE_FTDC_CC_Immediately;
  // req->ForceCloseReason = XELE_FTDC_FCC_NotForceClose;

  // char OrderRef[13];
  // snprintf(OrderRef, sizeof(OrderRef), "%d", order_ref);
  // strncpy(req->OrderLocalID, OrderRef, sizeof(req->OrderLocalID));

  // req->IsAutoSuspend = 0;

  return req.release();
}

void TraderServiceImpl::orderGo(EES_EnterOrderField* req)
{
  SEA_TRACE <<"TraderServiceImpl::orderGo()";
  
  SEA_PDU <<*req;
  
  // int result = trader_api_->ReqOrderInsert(req, ++request_id_);

  // if( result!=0 )
  // {
  //   SEA_ERROR <<"return code " <<result;
  //   throw ;
  // }
}

soil::Options* TraderService::createOptions()
{
  return new TraderOptions();
}

TraderService* TraderService::createService(soil::Options* options, TraderServiceCallback* callback)
{
  return new TraderServiceImpl(options, callback);
}

} // namespace sea
