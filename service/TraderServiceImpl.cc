// Copyright (c) 2010
// All rights reserved.

#include "TraderServiceImpl.hh"

#include "TraderOptions.hh"
#include "TraderSpiImpl.hh"
#include "EesTraderDefinePrint.hh"
#include "soil/Macro.hh"
#include "soil/Log.hh"

namespace sea {

TraderServiceImpl::TraderServiceImpl(
    const rapidjson::Document& doc,
    TraderCallback* callback) :
    trader_api_(nullptr),
    callback_(callback),
    request_id_(0) {
  SOIL_FUNC_TRACE;

  cond_.reset(soil::STimer::create());

  options_.reset(new TraderOptions(doc));

  trader_api_ = CreateEESTraderApi();
  if (!trader_api_) {
    throw std::runtime_error("crate trader api failed.");
  }

  trader_spi_.reset(new TraderSpiImpl(this));
  RESULT ret = trader_api_->ConnServer(
      options_->svr_address.data(),
      options_->svr_port,
      trader_spi_.get(),
      options_->qry_address.data(),
      options_->qry_port);

  if (ret != NO_ERROR) {
    SOIL_ERROR("conn to server failed.");
    SOIL_ERROR("svr info: {}:{}",
               options_->svr_address,
               options_->svr_port);
    SOIL_ERROR("qry info: {}:{}",
               options_->qry_address,
               options_->qry_port);

    throw std::runtime_error("conn server failed.");
  }

  wait("login");
}

TraderServiceImpl::~TraderServiceImpl() {
  SOIL_FUNC_TRACE;

  if (trader_api_) {
    trader_api_->DisConnServer();

    DestroyEESTraderApi(trader_api_);

    trader_api_ = nullptr;
  }
}

int32_t TraderServiceImpl::openBuyOrder(
    const std::string& instru,
    double price,
    int volume) {
  SOIL_FUNC_TRACE;

  std::shared_ptr<EES_EnterOrderField> req
      = orderField(instru, price, volume);

  int32_t order_ref = req->m_ClientOrderToken;
  orderGo(req.get());

  return order_ref;
}

int32_t TraderServiceImpl::openBuyOrderFAK(
    const std::string& instru,
    double price,
    int volume) {
  SOIL_FUNC_TRACE;

  std::shared_ptr<EES_EnterOrderField> req
      = orderField(instru, price, volume);
  req->m_Tif = EES_OrderTif_IOC;
  int32_t order_ref = req->m_ClientOrderToken;

  orderGo(req.get());

  return order_ref;
}

int32_t TraderServiceImpl::openBuyOrderFOK(
    const std::string& instru,
    double price,
    int volume) {
  SOIL_FUNC_TRACE;
  
  std::shared_ptr<EES_EnterOrderField> req
      = orderField(instru, price, volume);
  req->m_Tif = EES_OrderTif_IOC;
  req->m_MinQty = volume;
  int32_t order_ref = req->m_ClientOrderToken;

  orderGo(req.get());

  return order_ref;
}

// int TraderServiceImpl::orderOpenSell(const std::string& instru,
//                                       double price, int volume) {
//   SEA_TRACE <<"TraderServiceImpl::orderOpenSell()";

//   SEA_DEBUG <<"instru: " <<instru
//             <<"\t price: " <<price
//             <<"\t volume: " <<volume;

//   std::unique_ptr<EES_EnterOrderField> req(orderField());

//   req->m_Side = EES_SideType_open_short;
//   S_INPUT(req.get(), EES_EnterOrderField, m_Symbol, instru.data());
//   req->m_Price = price;
//   req->m_Qty = volume;

//   int order_ref = req->m_ClientOrderToken;

//   try {
//     orderGo(req.get());
//   }
//   catch (...) {
//     throw std::runtime_error("order open sell failed.");
//   }

//   return order_ref;
// }

// int TraderServiceImpl::orderOpenSellFAK(const std::string& instru,
//                                        double price, int volume) {
//   SEA_TRACE <<"TraderServiceImpl::orderOpenSellFAK()";

//   SEA_DEBUG <<"instru: " <<instru
//             <<"\t price: " <<price
//             <<"\t volume: " <<volume;

//   std::unique_ptr<EES_EnterOrderField> req(orderField());

//   req->m_Side = EES_SideType_open_short;
//   S_INPUT(req.get(), EES_EnterOrderField, m_Symbol, instru.data());
//   req->m_Price = price;
//   req->m_Qty = volume;
//   req->m_Tif = EES_OrderTif_IOC;

//   int order_ref = req->m_ClientOrderToken;

//   try {
//     orderGo(req.get());
//   }
//   catch (...) {
//     throw std::runtime_error("order open sell FAK failed.");
//   }

//   return order_ref;
// }

// int TraderServiceImpl::orderOpenSellFOK(const std::string& instru,
//                                        double price, int volume) {
//   SEA_TRACE <<"TraderServiceImpl::orderOpenSellFOK()";

//   SEA_DEBUG <<"instru: " <<instru
//             <<"\t price: " <<price
//             <<"\t volume: " <<volume;

//   std::unique_ptr<EES_EnterOrderField> req(orderField());

//   req->m_Side = EES_SideType_open_short;
//   S_INPUT(req.get(), EES_EnterOrderField, m_Symbol, instru.data());
//   req->m_Price = price;
//   req->m_Qty = volume;
//   req->m_Tif = EES_OrderTif_IOC;
//   req->m_Qty = volume;

//   int order_ref = req->m_ClientOrderToken;

//   try {
//     orderGo(req.get());
//   }
//   catch (...) {
//     throw std::runtime_error("order open sell FOK failed.");
//   }

//   return order_ref;
// }

// int TraderServiceImpl::orderCloseBuy(const std::string& instru,
//                                      double price, int volume) {
//   SEA_TRACE <<"TraderServiceImpl::orderCloseBuy()";

//   SEA_DEBUG <<"instru: " <<instru
//             <<"\t price: " <<price
//             <<"\t volume: " <<volume;

//   std::unique_ptr<EES_EnterOrderField> req(orderField());

//   req->m_Side = EES_SideType_close_today_short;
//   S_INPUT(req.get(), EES_EnterOrderField, m_Symbol, instru.data());
//   req->m_Price = price;
//   req->m_Qty = volume;

//   int order_ref = req->m_ClientOrderToken;

//   try {
//     orderGo(req.get());
//   }
//   catch (...) {
//     throw std::runtime_error("order close buy failed.");
//   }

//   return order_ref;
// }

// int TraderServiceImpl::orderCloseSell(const std::string& instru,
//                                      double price, int volume) {
//   SEA_TRACE <<"TraderServiceImpl::orderCloseSell()";

//   SEA_DEBUG <<"instru: " <<instru
//             <<"\t price: " <<price
//             <<"\t volume: " <<volume;

//   std::unique_ptr<EES_EnterOrderField> req(orderField());

//   req->m_Side = EES_SideType_close_today_long;
//   S_INPUT(req.get(), EES_EnterOrderField, m_Symbol, instru.data());
//   req->m_Price = price;
//   req->m_Qty = volume;

//   int order_ref = req->m_ClientOrderToken;

//   try {
//     orderGo(req.get());
//   }
//   catch (...) {
//     throw std::runtime_error("order close sell failed.");
//   }

//   return order_ref;
// }

// int TraderServiceImpl::queryAccount() {
//   SEA_TRACE <<"TraderServiceImpl::queryAccount()";

//   RESULT result = trader_api_->QueryAccountBP(
//       options_->account_id.data(),
//       ++request_id_);

//   if (result != NO_ERROR) {
//     SEA_ERROR <<"return code " <<result;
//     throw std::runtime_error("query account balance failed.");
//   }
// }

void TraderServiceImpl::initSession(
    EES_LogonResponse* pLogon) {
  SOIL_FUNC_TRACE;
}

void TraderServiceImpl::login() {
  SOIL_FUNC_TRACE;

  RESULT result = trader_api_->UserLogon(
      options_->user_id.data(),
      options_->password.data(),
      options_->prod_info.data(),
      options_->mac_addr.data());

  if (result != NO_ERROR) {
    throw std::runtime_error(
        fmt::format("login failed, return code {}",
                    result));
  }
}

void TraderServiceImpl::wait(
    const std::string& hint) {
  if (cond_->wait(2000)) {
    if (!hint.empty())
      throw std::runtime_error(hint + " time out");
  }
}

void TraderServiceImpl::notify() {
  cond_->notifyAll();
}

std::shared_ptr<EES_EnterOrderField>
TraderServiceImpl::orderField(
    const std::string& instru,
    double price,
    int volume) {
  std::shared_ptr<EES_EnterOrderField> req(
      new EES_EnterOrderField());

  EES_ClientToken order_token = 0;

  trader_api_->GetMaxToken(&order_token);

  S_INPUT(req.get(), EES_EnterOrderField,
          m_Account, options_->account_id.data());

  req->m_Exchange = options_->exchange_id;
  req->m_SecType = EES_SecType_fut;
  req->m_ClientOrderToken = order_token + 1;
  req->m_CustomField = 0;

  req->m_Side = EES_SideType_open_long;
  S_INPUT(req.get(),
          EES_EnterOrderField,
          m_Symbol, instru.data());
  req->m_Price = price;
  req->m_Qty = volume;


  return req;
}

void TraderServiceImpl::orderGo(
    EES_EnterOrderField* req) {
  SOIL_FUNC_TRACE;

  SOIL_DEBUG_IF_PRINT(req);
  RESULT result = trader_api_->EnterOrder(req);
  if (result != NO_ERROR) {
    throw std::runtime_error(
        fmt::format("order insert failed."
                    " return code is {}",
                    result));
  }
}


TraderService* TraderService::create(
    const rapidjson::Document& doc,
    TraderCallback* callback) {
  return new TraderServiceImpl(doc, callback);
}

}  // namespace sea
