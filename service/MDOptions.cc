#include "MDOptions.hh"

#include <fstream>
#include <iostream>
#include <boost/program_options.hpp>

namespace sea
{

MDOptions::MDOptions():
    options_("MDOptions")
{
  namespace po = boost::program_options;

  options_.add_options()
      ("sea_md.eqs_ip", po::value<std::string>(&eqs_ip), 
       "eqs ip address")
      ("sea_md.eqs_port", po::value<unsigned short>(&eqs_port), 
       "eqs port")
      ("sea_md.user_id", po::value<std::string>(&user_id), 
       "user id")
      ("sea_md.password", po::value<std::string>(&password), 
       "password")
      ("sea_md.protocol", po::value<std::string>(&protocol), 
       "protocol")
      ("sea_md.multi_ip", po::value<std::string>(&multi_ip), 
       "multi ip address")
      ("sea_md.multi_port", po::value<unsigned short>(&multi_port), 
       "multi port")
      ("sea_md.local_ip", po::value<std::string>(&local_ip), 
       "local ip address")
      ("sea_md.local_port", po::value<unsigned short>(&local_port), 
       "local port")
      ("sea_md.exchange_id", po::value<std::string>(&exchange_id), 
       "exchange id")
      ;

  return;
  
}

MDOptions::~MDOptions()
{
}

po::options_description* MDOptions::configOptions()
{
  return &options_;
}

};  
