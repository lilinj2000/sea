#ifndef SEA_TRADER_OPTIONS_HH
#define SEA_TRADER_OPTIONS_HH

#include "soil/Config.hh"

#include <string>

namespace sea
{
namespace po = boost::program_options;

class TraderOptions : public soil::Options
{
 public:

  TraderOptions();
  
  virtual ~TraderOptions();

  virtual po::options_description* configOptions();

  std::string front_address;
  int port;
  
  std::string user_id;
  std::string password;

  std::string prod_info;
  std::string mac_addr;

  std::string account_id;

  unsigned char exchange_id;
  
 private:

  boost::program_options::options_description options_;
};

}  


#endif 
