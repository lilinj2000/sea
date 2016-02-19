#include <memory>
#include "gtest/gtest.h"
#include "service/MDServiceImpl.hh"
#include "service/SeaLog.hh"

namespace sea
{

class MDServiceImplTest : public ::testing::Test
{
public:

  MDServiceImplTest()
  {
  }

  void SetUp()
  {
    options_.reset( MDService::createOptions() );

    std::unique_ptr<soil::Config> config( soil::Config::create() );
    config->configFile() = "md.cfg";
    config->registerOptions( options_.get() );
    config->loadConfig();

    SEA_LOG_INIT("log.cfg");
    
    cond_.reset( soil::STimer::create() );
    
    service_.reset( MDService::createService(options_.get(), NULL) );
  }

  void TearDown()
  {
  }

 protected:
  std::unique_ptr<sea::MDService> service_;

  std::unique_ptr<soil::Options> options_;

  std::unique_ptr<soil::STimer> cond_;

};

TEST_F(MDServiceImplTest, loginTest)
{
  ASSERT_TRUE ( true );
}

TEST_F(MDServiceImplTest, subMarketDataTest)
{
  std::string instru("cu1603");

  service_->subMarketData(instru);

  cond_->wait(20000);
    
  ASSERT_TRUE ( true );
}

};  // namespace sea
