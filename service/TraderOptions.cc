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


#include "service/TraderOptions.h"

namespace sea {

using soil::json::get_item_value;

TraderOptions::TraderOptions(
    const rapidjson::Document& doc) {
  get_item_value(&svr_address,
                 doc,
                 "/sea_trader/svr_address");

  get_item_value(&svr_port,
                 doc,
                 "/sea_trader/svr_port");

  get_item_value(&qry_address,
                 doc,
                 "/sea_trader/qry_address");

  get_item_value(&qry_port,
                 doc,
                 "/sea_trader/qry_port");

  get_item_value(&user_id,
                 doc,
                 "/sea_trader/user_id");

  get_item_value(&password,
                 doc,
                 "/sea_trader/password");

  get_item_value(&prod_info,
                 doc,
                 "/sea_trader/prod_info");

  get_item_value(&mac_addr,
                 doc,
                 "/sea_trader/mac_addr");

  get_item_value(&account_id,
                 doc,
                 "/sea_trader/account_id");

  get_item_value(&exchange_id,
                 doc,
                 "/sea_trader/exchange_id");

  return;
}

}  // namespace sea
