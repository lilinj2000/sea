#include "TraderServiceImpl.hh"

#include "SeaLog.hh"
#include "TraderOptions.hh"
#include "TraderSpiImpl.hh"

#include "EesTraderDefinePrint.hh"

#include "soil/NumberToString.hh"
#include "soil/Macro.hh"

namespace sea
{

TraderServiceImpl::TraderServiceImpl(soil::Options* options, TraderServiceCallback* callback) :
    trader_api_(NULL),
    callback_(callback),
    request_id_(0)
{
  SEA_TRACE <<"TraderServiceImpl::TraderServiceImpl()" ;

  cond_.reset( soil::STimer::create() );

  options_ = dynamic_cast<TraderOptions*>(options);
  
  trader_api_ = CreateEESTraderApi();
  if( !trader_api_ )
  {
    SEA_ERROR <<"create trader api failed.";

    throw std::runtime_error("crate trader api failed.");
  }
      
  trader_spi_.reset( new TraderSpiImpl(this) );
  
  RESULT ret = trader_api_->ConnServer(options_->front_address.data(),
                                       options_->port,
                                       trader_spi_.get());

  if( ret!=NO_ERROR )
  {
    SEA_ERROR <<"conn to server failed. [" <<options_->front_address
              <<":" <<options_->port <<"]";

    throw std::runtime_error("conn server failed.");
  }
      
  wait("login");
}

TraderServiceImpl::~TraderServiceImpl()
{
  SEA_TRACE <<"TraderServiceImpl::~TraderServiceImpl()" ;

  if( trader_api_ )
  {
    trader_api_->DisConnServer();
  
    DestroyEESTraderApi( trader_api_ );
  
    trader_api_ = NULL;
  }
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

  std::unique_ptr<EES_EnterOrderField> req( orderField() );

  req->m_Side = EES_SideType_open_long;
  S_INPUT( req.get(), EES_EnterOrderField, m_Symbol, instru.data() );
  req->m_Price = price;
  req->m_Qty = volume;

  int order_ref = req->m_ClientOrderToken;
  
  try
  {
    orderGo( req.get() );
  }
  catch( ... )
  {
    throw std::runtime_error("order open buy failed.");
  }
  
  return order_ref;
}

int TraderServiceImpl::orderOpenBuyFAK(const std::string& instru,
                                       double price, int volume)
{
  SEA_TRACE <<"TraderServiceImpl::orderOpenBuyFAK()" ;

  SEA_DEBUG <<"instru: " <<instru
            <<"\t price: " <<price
            <<"\t volume: " <<volume;

  std::unique_ptr<EES_EnterOrderField> req( orderField() );

  req->m_Side = EES_SideType_open_long;
  S_INPUT( req.get(), EES_EnterOrderField, m_Symbol, instru.data() );
  req->m_Price = price;
  req->m_Qty = volume;
  req->m_Tif = EES_OrderTif_IOC;

  int order_ref = req->m_ClientOrderToken;

  try
  {
    orderGo( req.get() );
  }
  catch( ... )
  {
    throw std::runtime_error("order open buy FAK failed.");
  }
  
  return order_ref;

}

int TraderServiceImpl::orderOpenBuyFOK(const std::string& instru,
                                       double price, int volume)
{
  SEA_TRACE <<"TraderServiceImpl::orderOpenBuyFOK()" ;

  SEA_DEBUG <<"instru: " <<instru
            <<"\t price: " <<price
            <<"\t volume: " <<volume;

  std::unique_ptr<EES_EnterOrderField> req( orderField() );

  req->m_Side = EES_SideType_open_long;
  S_INPUT( req.get(), EES_EnterOrderField, m_Symbol, instru.data() );
  req->m_Price = price;
  req->m_Qty = volume;
  req->m_Tif = EES_OrderTif_IOC;

  req->m_MinQty = volume;
  int order_ref = req->m_ClientOrderToken;

  try
  {
    orderGo( req.get() );
  }
  catch( ... )
  {
    throw std::runtime_error("order open buy FOK failed.");
  }
  
  return order_ref;

}


int TraderServiceImpl::orderOpenSell(const std::string& instru,
                                      double price, int volume)
{
  SEA_TRACE <<"TraderServiceImpl::orderOpenSell()" ;

  SEA_DEBUG <<"instru: " <<instru
            <<"\t price: " <<price
            <<"\t volume: " <<volume;

  std::unique_ptr<EES_EnterOrderField> req( orderField() );

  req->m_Side = EES_SideType_open_short;
  S_INPUT( req.get(), EES_EnterOrderField, m_Symbol, instru.data() );
  req->m_Price = price;
  req->m_Qty = volume;

  int order_ref = req->m_ClientOrderToken;

  try
  {
    orderGo( req.get() );
  }
  catch( ... )
  {
    throw std::runtime_error("order open sell failed.");
  }

  return order_ref;
}

int TraderServiceImpl::orderOpenSellFAK(const std::string& instru,
                                       double price, int volume)
{
  SEA_TRACE <<"TraderServiceImpl::orderOpenSellFAK()" ;

  SEA_DEBUG <<"instru: " <<instru
            <<"\t price: " <<price
            <<"\t volume: " <<volume;

  std::unique_ptr<EES_EnterOrderField> req( orderField() );

  req->m_Side = EES_SideType_open_short;
  S_INPUT( req.get(), EES_EnterOrderField, m_Symbol, instru.data() );
  req->m_Price = price;
  req->m_Qty = volume;
  req->m_Tif = EES_OrderTif_IOC;

  int order_ref = req->m_ClientOrderToken;

  try
  {
    orderGo( req.get() );
  }
  catch( ... )
  {
    throw std::runtime_error("order open sell FAK failed.");
  }
  
  return order_ref;

}

int TraderServiceImpl::orderOpenSellFOK(const std::string& instru,
                                       double price, int volume)
{
  SEA_TRACE <<"TraderServiceImpl::orderOpenSellFOK()" ;

  SEA_DEBUG <<"instru: " <<instru
            <<"\t price: " <<price
            <<"\t volume: " <<volume;

  std::unique_ptr<EES_EnterOrderField> req( orderField() );

  req->m_Side = EES_SideType_open_short;
  S_INPUT( req.get(), EES_EnterOrderField, m_Symbol, instru.data() );
  req->m_Price = price;
  req->m_Qty = volume;
  req->m_Tif = EES_OrderTif_IOC;
  req->m_Qty = volume;
  
  int order_ref = req->m_ClientOrderToken;

  try
  {
    orderGo( req.get() );
  }
  catch( ... )
  {
    throw std::runtime_error("order open sell FOK failed.");
  }
  
  return order_ref;

}


int TraderServiceImpl::orderCloseBuy(const std::string& instru,
                                     double price, int volume)
{
  SEA_TRACE <<"TraderServiceImpl::orderCloseBuy()" ;

  SEA_DEBUG <<"instru: " <<instru
            <<"\t price: " <<price
            <<"\t volume: " <<volume;

  std::unique_ptr<EES_EnterOrderField> req( orderField() );

  req->m_Side = EES_SideType_close_today_short;
  S_INPUT( req.get(), EES_EnterOrderField, m_Symbol, instru.data() );
  req->m_Price = price;
  req->m_Qty = volume;

  int order_ref = req->m_ClientOrderToken;
  
  try
  {
    orderGo( req.get() );
  }
  catch( ... )
  {
    throw std::runtime_error("order close buy failed.");
  }

  return order_ref;

}

int TraderServiceImpl::orderCloseSell(const std::string& instru,
                                     double price, int volume)
{
  SEA_TRACE <<"TraderServiceImpl::orderCloseSell()" ;

  SEA_DEBUG <<"instru: " <<instru
            <<"\t price: " <<price
            <<"\t volume: " <<volume;

  std::unique_ptr<EES_EnterOrderField> req( orderField() );

  req->m_Side = EES_SideType_close_today_long;
  S_INPUT( req.get(), EES_EnterOrderField, m_Symbol, instru.data() );
  req->m_Price = price;
  req->m_Qty = volume;

  int order_ref = req->m_ClientOrderToken;

  try
  {
    orderGo( req.get() );
  }
  catch( ... )
  {
    throw std::runtime_error("order close sell failed.");
  }

  return order_ref;

}

int TraderServiceImpl::queryAccount()
{
  SEA_TRACE <<"TraderServiceImpl::queryAccount()" ;

  
  RESULT result = trader_api_->QueryAccountBP(options_->account_id.data(), ++request_id_);

  if( result!=NO_ERROR )
  {
    SEA_ERROR <<"return code " <<result;
    throw std::runtime_error("query account balance failed.");
  }

}

void TraderServiceImpl::initSession(EES_LogonResponse* pLogon)
{
  trading_day_ = soil::numToString(pLogon->m_TradingDate);
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

EES_EnterOrderField* TraderServiceImpl::orderField()
{
  std::unique_ptr<EES_EnterOrderField> req( new EES_EnterOrderField() );

  EES_ClientToken order_token = 0;

  trader_api_->GetMaxToken(&order_token);

  S_INPUT(req.get(), EES_EnterOrderField, m_Account, options_->account_id.data());

  req->m_Exchange = options_->exchange_id;

  req->m_SecType = EES_SecType_fut;
      
  req->m_ForceCloseReason = EES_ForceCloseType_not_force_close;

  req->m_ClientOrderToken = order_token + 1;

  req->m_CustomField = 0;

  return req.release();
}

void TraderServiceImpl::orderGo(EES_EnterOrderField* req)
{
  SEA_TRACE <<"TraderServiceImpl::orderGo()";
  
  SEA_PDU <<*req;
  
  RESULT result = trader_api_->EnterOrder( req );

  if( result!=NO_ERROR )
  {
    SEA_ERROR <<"return code " <<result;
    throw std::runtime_error("order insert failed.");
  }
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
