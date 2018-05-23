// Copyright (c) 2010
// All rights reserved.

#ifndef SEA_MD_OPTIONS_HH
#define SEA_MD_OPTIONS_HH

#include <string>
#include <cstdint>
#include "soil/Config.hh"

namespace sea {
namespace po = boost::program_options;

class MDOptions : public soil::Options {
 public:
  MDOptions();
  virtual ~MDOptions();

  virtual po::options_description* configOptions();

  std::string eqs_ip;
  uint16_t eqs_port;

  std::string user_id;
  std::string password;

  std::string protocol;

  std::string multi_ip;
  uint16_t multi_port;
  std::string local_ip;
  uint16_t local_port;
  std::string exchange_id;

 private:
  boost::program_options::options_description options_;
};

}  // namespace sea
#endif
