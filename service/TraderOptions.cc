// Copyright (c) 2010
// All rights reserved.

#include <boost/program_options.hpp>
#include <fstream>
#include <iostream>
#include "TraderOptions.hh"

namespace sea {

TraderOptions::TraderOptions():
    options_("SeaTraderOptions") {
  namespace po = boost::program_options;

  options_.add_options()
      ("sea_trader.svr_address", po::value<std::string>(&svr_address),
       "svr address")
      ("sea_trader.svr_port", po::value<int>(&svr_port),
       "service port")
      ("sea_trader.qry_address", po::value<std::string>(&qry_address),
       "qry address")
      ("sea_trader.qry_port", po::value<int>(&qry_port),
       "qry port")
      ("sea_trader.user_id", po::value<std::string>(&user_id),
       "user id")
      ("sea_trader.password", po::value<std::string>(&password),
       "password")
      ("sea_trader.prod_info", po::value<std::string>(&prod_info),
       "prod info")
      ("sea_trader.mac_addr", po::value<std::string>(&mac_addr),
       "mac addr")
      ("sea_trader.account_id", po::value<std::string>(&account_id),
       "account id")
      ("sea_trader.exchange_id", po::value<unsigned int>(&exchange_id),
       "exchange id");
  return;
}

TraderOptions::~TraderOptions() {
}

po::options_description* TraderOptions::configOptions() {
  return &options_;
}

}  // namespace sea
