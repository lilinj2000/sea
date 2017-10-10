#include "gtest/gtest.h"

#include "service/TraderServiceImpl.hh"

namespace sea {

using soil::json::get_item_value;

class TraderServiceTest :
      public ::testing::Test,
      public TraderCallback {
 public:
  TraderServiceTest() {
    rapidjson::Document config;
    soil::json::load_from_file(&config, "trader.json");
    soil::log::init(config);

    get_item_value(&instru, config, "/test/instru");
    get_item_value(&price, config, "/test/price");
    get_item_value(&volume, config, "/test/volume");

    cond.reset(soil::STimer::create());

    service.reset(
        TraderService::create(
            config,
            this));
  }
  
  void SetUp() {
  }

  void TearDown() {
  }

 protected:
  std::unique_ptr<TraderService> service;
  std::unique_ptr<soil::STimer> cond;

  std::string instru;
  double price;
  int volume;
};

TEST_F(TraderServiceTest, openBuyOrderFOKTest) {
  service->openBuyOrderFOK(
      instru,
      price,
      volume);

  cond->wait(2000);
                           
  SUCCEED();
}


}  // namespace sea
