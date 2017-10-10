// Copyright (c) 2010
// All rights reserved.

#include "TraderOptions.hh"

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
