#include "TraderOptions.hh"

#include <fstream>
#include <iostream>
#include <boost/program_options.hpp>

namespace sea
{

TraderOptions::TraderOptions():
    options_("TraderOptions")
{
  namespace po = boost::program_options;

  options_.add_options()
      ("sea_trader.front_address", po::value<std::string>(&front_address), 
       "front address")
      ("sea_trader.port", po::value<int>(&port), 
       "service port")
      ("sea_trader.user_id", po::value<std::string>(&user_id), 
       "user id")
      ("sea_trader.password", po::value<std::string>(&password), 
       "password")
      ("sea_trader.prod_info", po::value<std::string>(&prod_info), 
       "prod info")
      ("sea_trader.mac_addr", po::value<std::string>(&mac_addr), 
       "mac addr")
      ;

  return;
  
}

TraderOptions::~TraderOptions()
{
}

po::options_description* TraderOptions::configOptions()
{
  return &options_;
}

};  
