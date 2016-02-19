#ifndef SEA_MDSERVICE_HH
#define SEA_MDSERVICE_HH

#include <string>

#include "soil/Config.hh"
#include "sea/SeaDef.hh"

namespace sea
{

class MDServiceCallback
{
 public:

  virtual void onRspSubMarketData(const std::string& instru, bool success) = 0;

  virtual void onRspUnsubMarketData(const std::string& instru, bool success) = 0;

  virtual void onRtnMarketData(const DepthMarketData*) = 0;

  virtual void onRspError(int errord_id, const std::string& error_msg)= 0;
  
  virtual ~MDServiceCallback() {}
};

class MDService
{
 public:

  virtual void subMarketData(const std::string& instru) = 0;

  virtual void unsubMarketData(const std::string& instruments) = 0;

  virtual std::string tradingDay() = 0;

  virtual ~MDService() {};

  static soil::Options* createOptions();
  
  static MDService* createService(soil::Options* options, MDServiceCallback* callback);

}; 

}; // namesapce sea

#endif // SEA_MDSERVICE_HH
