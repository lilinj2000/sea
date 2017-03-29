// Copyright (c) 2010
// All rights reserved.

#ifndef SEA_TRADER_OPTIONS_HH
#define SEA_TRADER_OPTIONS_HH

#include <string>
#include "soil/Config.hh"

namespace sea {
namespace po = boost::program_options;

class TraderOptions : public soil::Options {
 public:
  TraderOptions();
  virtual ~TraderOptions();

  virtual po::options_description* configOptions();

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

 private:
  boost::program_options::options_description options_;
};

}  // namespace sea

#endif
