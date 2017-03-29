#include "gtest/gtest.h"

#include "service/SeaLog.hh"
#include "service/TraderServiceImpl.hh"

namespace sea {

class TraderServiceImplTest : public ::testing::Test {
 public:
  TraderServiceImplTest() {
  }
  
  void SetUp() {
    options_.reset(TraderService::createOptions());

    std::unique_ptr<soil::Config> config(soil::Config::create());
    config->configFile() = "trader.cfg";
    config->registerOptions(options_.get());
    config->loadConfig();

    SEA_LOG_INIT("log.cfg");

    cond_.reset(soil::STimer::create());

    service_.reset(TraderService::createService(options_.get(), nullptr));
  }

  void TearDown() {
  }

 protected:
  std::unique_ptr<TraderService> service_;
  
  std::unique_ptr<soil::Options> options_;
  
  std::unique_ptr<soil::STimer> cond_;

};

TEST_F(TraderServiceImplTest, loginTest) {
  ASSERT_TRUE( true );
}

TEST_F(TraderServiceImplTest, orderOpenBuyTest) {
  std::string instru = "cu1705";
  double price = 2889;
  int volume = 1;
  
  service_->orderOpenBuy(instru, price, volume);

  cond_->wait(2000);

  ASSERT_TRUE(true);
}

TEST_F(TraderServiceImplTest, orderOpenBuyFAKTest) {
  std::string instru = "cu1705";
  double price = 3000;
  int volume = 1;
  
  service_->orderOpenBuyFAK(instru, price, volume);

  cond_->wait(2000);

  ASSERT_TRUE(true);
}

TEST_F(TraderServiceImplTest, orderOpenBuyFOKTest) {

  std::string instru = "cu1705";
  double price = 33210;
  int volume = 10;
  
  service_->orderOpenBuyFOK(instru, price, volume);

  cond_->wait(2000);

  ASSERT_TRUE(true);
}

TEST_F(TraderServiceImplTest, orderOpenSellFOKTest) {
  std::string instru = "cu1602";
  double price = 42820;
  int volume = 10;
  
  service_->orderOpenSellFOK(instru, price, volume);

  cond_->wait(2000);

  ASSERT_TRUE(true);
}

TEST_F(TraderServiceImplTest, queryAccountTest) {
  service_->queryAccount();

  cond_->wait(2000);

  ASSERT_TRUE(true);
}

}  // namespace sea
