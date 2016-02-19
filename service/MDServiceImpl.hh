#ifndef SEA_MDSERVICE_IMPL_HH
#define SEA_MDSERVICE_IMPL_HH

#include <memory>
#include <atomic>

#include "sea/MDService.hh"
#include "EESQuoteApi.h"

#include "soil/STimer.hh"
#include "soil/MsgQueue.hh"


namespace sea
{

class MDOptions;
class MDSpiImpl;

class MDServiceImpl : public MDService
{
 public:
		
  MDServiceImpl(soil::Options* options, MDServiceCallback* callback);
		
  virtual ~MDServiceImpl();

  virtual void subMarketData(const std::string& instru);

  virtual void unsubMarketData(const std::string& instru);

  virtual std::string tradingDay();

  void login();

  void wait(const std::string& hint="");
  
  void notify();

  void pushData(DepthMarketData* data);

  inline
  void msgCallback(const DepthMarketData* msg)
  {
    if( callback_ )
      callback_->onRtnMarketData( msg );
  }

 protected:
  
 private:

  MDOptions* options_;
  
  EESQuoteApi* md_api_;
  
  std::unique_ptr<MDSpiImpl> md_spi_;

  MDServiceCallback* callback_;
  
  std::atomic<int> request_id_;

  std::unique_ptr<soil::MsgQueue<DepthMarketData, MDServiceImpl> > md_queue_;

  std::unique_ptr<soil::STimer> cond_;
};


}; // namesapce sea

#endif
