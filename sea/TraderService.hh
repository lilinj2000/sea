#ifndef SEA_TRADER_SERVICE_HH
#define SEA_TRADER_SERVICE_HH

#include <string>

#include "soil/Config.hh"

namespace sea
{

class TraderServiceCallback
{
 public:
  
  virtual void onOrderAccept(int client_order_token, int market_order_token) = 0;
  
  virtual void onOrderMarketAccept(int market_order_token) = 0;

  virtual void onOrderReject(int client_order_token) = 0;

  virtual void onOrderMarketReject(int market_order_token) = 0;

  virtual void onOrderExecution(int client_order_token,
                                int market_order_token,
                                unsigned int quntity,
                                double price) = 0;

  virtual void onOrderCxled(int client_order_token,
                            int market_order_token,
                            unsigned int quntity) = 0;

  virtual void onCxlOrderReject(int market_order_token) = 0;

  virtual ~TraderServiceCallback() {}
};


class TraderService
{
 public:

  virtual std::string tradingDay() = 0;

  virtual int orderOpenBuy(const std::string& instru,
                           double price, int volume) = 0;

  virtual int orderOpenBuyFAK(const std::string& instru,
                              double price, int volume) = 0;

  virtual int orderOpenBuyFOK(const std::string& instru,
                              double price, int volume) = 0;

  virtual int orderOpenSell(const std::string& instru,
                            double price, int volume) = 0;

  virtual int orderOpenSellFAK(const std::string& instru,
                              double price, int volume) = 0;

  virtual int orderOpenSellFOK(const std::string& instru,
                              double price, int volume) = 0;

  virtual int orderCloseBuy(const std::string& instru,
                            double price, int volume) = 0;

  virtual int orderCloseSell(const std::string& instru,
                            double price, int volume) = 0;

  virtual int queryAccount() = 0;
  
  virtual ~TraderService() {}

  static soil::Options* createOptions();
  
  static TraderService* createService(soil::Options* options, TraderServiceCallback* callback);

};


}; // namesapce sea

#endif // SEA_TRADER_SERVICE_HH
