// Copyright 2017 The Sea Authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// -----------------------------------------------------------------------------
// File: [file_name]
// -----------------------------------------------------------------------------
//
// [file_descrition]
//
// Example:
//
//   ... ...
//
//


#ifndef SERVICE_TRADER_SERVICE_IMPL_H_
#define SERVICE_TRADER_SERVICE_IMPL_H_

#include <memory>
#include <atomic>
#include <string>

#include "sea/TraderService.h"
#include "EesTraderApi.h"
#include "soil/s_timer.h"
#include "soil/json.h"

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
