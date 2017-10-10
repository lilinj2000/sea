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
#include "soil/json.hh"

namespace sea {

class TraderOptions;
class TraderSpiImpl;

class TraderServiceImpl :
      public TraderService {
 public:
  TraderServiceImpl(
      const rapidjson::Document& doc,
      TraderCallback* callback);

  virtual ~TraderServiceImpl();

  virtual int32_t openBuyOrder(
      const std::string& instru,
      double price,
      int volume);

  virtual int32_t openBuyOrderFAK(
      const std::string& instru,
      double price,
      int volume);

  virtual int32_t openBuyOrderFOK(
      const std::string& instru,
      double price,
      int volume);

  void login();

  void initSession(EES_LogonResponse* pLogon);

  void wait(const std::string& hint = "");

  void notify();

  TraderCallback* callback() {
    return callback_;
  }

 protected:
  std::shared_ptr<EES_EnterOrderField> orderField(
      const std::string& instru,
      double price,
      int volume);

  void orderGo(EES_EnterOrderField* req);

 private:
  std::unique_ptr<TraderOptions> options_;

  std::unique_ptr<TraderSpiImpl> trader_spi_;

  EESTraderApi* trader_api_;

  TraderCallback* callback_;

  std::atomic_int request_id_;

  std::unique_ptr<soil::STimer> cond_;
};

};  // namespace sea

#endif
