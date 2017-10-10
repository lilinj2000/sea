// Copyright (c) 2010
// All rights reserved.

#ifndef SEA_TRADER_OPTIONS_HH
#define SEA_TRADER_OPTIONS_HH

#include <string>
#include "soil/json.hh"

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
