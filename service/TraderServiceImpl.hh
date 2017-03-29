// Copyright (c) 2010
// All rights reserved.

#ifndef SEA_TRADER_SERVICE_IMPL_HH
#define SEA_TRADER_SERVICE_IMPL_HH

#include <memory>
#include <atomic>
#include <string>

#include "sea/TraderService.hh"
#include "EesTraderApi.h"

#include "soil/STimer.hh"

namespace sea {

class TraderOptions;
class TraderSpiImpl;

class TraderServiceImpl : public TraderService {
 public:
  TraderServiceImpl(soil::Options* options, TraderServiceCallback* callback);

  virtual ~TraderServiceImpl();

  virtual std::string tradingDay();

  virtual int orderOpenBuy(const std::string& instru,
                           double price, int volume);

  virtual int orderOpenBuyFAK(const std::string& instru,
                              double price, int volume);

  virtual int orderOpenBuyFOK(const std::string& instru,
                              double price, int volume);

  virtual int orderOpenSell(const std::string& instru,
                            double price, int volume);

  virtual int orderOpenSellFAK(const std::string& instru,
                              double price, int volume);

  virtual int orderOpenSellFOK(const std::string& instru,
                              double price, int volume);

  virtual int orderCloseBuy(const std::string& instru,
                            double price, int volume);

  virtual int orderCloseSell(const std::string& instru,
                            double price, int volume);

  virtual int queryAccount();

  void login();

  void initSession(EES_LogonResponse* pLogon);

  void wait(const std::string& hint = "");

  void notify();

  TraderServiceCallback* callback() { return callback_; }

  TraderOptions* options() { return options_; }

 protected:
  EES_EnterOrderField* orderField();

  void orderGo(EES_EnterOrderField* req);

 private:
  TraderOptions* options_;

  EESTraderApi* trader_api_;

  std::unique_ptr<TraderSpiImpl> trader_spi_;

  TraderServiceCallback* callback_;

  std::atomic_int request_id_;

  std::unique_ptr<soil::STimer> cond_;

  std::string trading_day_;
};

};  // namespace sea

#endif
