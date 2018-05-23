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


#ifndef SERVICE_TRADER_OPTIONS_H_
#define SERVICE_TRADER_OPTIONS_H_

#include <string>
#include "soil/json.h"

namespace sea {

class TraderOptions {
 public:
  explicit TraderOptions(
      const rapidjson::Document& doc);

  std::string svr_address;
  int svr_port;

  std::string qry_address;
  int qry_port;

  std::string user_id;
  std::string password;

  std::string prod_info;
  std::string mac_addr;

  std::string account_id;

  unsigned int exchange_id;
};

}  // namespace sea

#endif