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
