#ifndef SEA_DEF_HH
#define SEA_DEF_HH

#include <string>
#include <ostream>
#include <set>
#include "soil/DateTime.hh"

namespace sea
{

struct DepthMarketData
{
  std::string TradingDay;
  std::string InstrumentID;
  std::string ExchangeID;
  std::string ExchangeInstID;
  double LastPrice;
  double PreSettlementPrice;
  double PreClosePrice;
  double PreOpenInterest;
  double OpenPrice;
  double HighestPrice;
  double LowestPrice;
  int Volume;
  double Turnover;
  double OpenInterest;
  double ClosePrice;
  double SettlementPrice;
  double UpperLimitPrice;
  double LowerLimitPrice;
  double PreDelta;
  double CurrDelta;
  std::string UpdateTime;
  int UpdateMillisec;
  double BidPrice1;
  double BidVolume1;
  double AskPrice1;
  double AskVolume1;
  double BidPrice2;
  double BidVolume2;
  double AskPrice2;
  double AskVolume2;
  double BidPrice3;
  double BidVolume3;
  double AskPrice3;
  double AskVolume3;
  double BidPrice4;
  double BidVolume4;
  double AskPrice4;
  double AskVolume4;
  double BidPrice5;
  double BidVolume5;
  double AskPrice5;
  double AskVolume5;
  double AveragePrice;

  soil::DateTime time_stamp;
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, DepthMarketData const& aDepthMarketData)
{
  os <<std::endl;
  os <<"{" <<std::endl;
  os <<"    \"DepthMarketDataField\": {" <<std::endl;
  os <<"        \"TradingDay\": \"" <<aDepthMarketData.TradingDay  <<"\"," <<std::endl;
  os <<"        \"InstrumentID\": \"" <<aDepthMarketData.InstrumentID  <<"\"," <<std::endl;
  os <<"        \"ExchangeID\": \"" <<aDepthMarketData.ExchangeID  <<"\"," <<std::endl;
  os <<"        \"ExchangeInstID\": \"" <<aDepthMarketData.ExchangeInstID  <<"\"," <<std::endl;
  os <<"        \"LastPrice\": \"" <<aDepthMarketData.LastPrice  <<"\"," <<std::endl;
  os <<"        \"PreSettlementPrice\": \"" <<aDepthMarketData.PreSettlementPrice  <<"\"," <<std::endl;
  os <<"        \"PreClosePrice\": \"" <<aDepthMarketData.PreClosePrice  <<"\"," <<std::endl;
  os <<"        \"PreOpenInterest\": \"" <<aDepthMarketData.PreOpenInterest  <<"\"," <<std::endl;
  os <<"        \"OpenPrice\": \"" <<aDepthMarketData.OpenPrice  <<"\"," <<std::endl;
  os <<"        \"HighestPrice\": \"" <<aDepthMarketData.HighestPrice  <<"\"," <<std::endl;
  os <<"        \"LowestPrice\": \"" <<aDepthMarketData.LowestPrice  <<"\"," <<std::endl;
  os <<"        \"Volume\": \"" <<aDepthMarketData.Volume  <<"\"," <<std::endl;
  os <<"        \"Turnover\": \"" <<aDepthMarketData.Turnover  <<"\"," <<std::endl;
  os <<"        \"OpenInterest\": \"" <<aDepthMarketData.OpenInterest  <<"\"," <<std::endl;
  os <<"        \"ClosePrice\": \"" <<aDepthMarketData.ClosePrice  <<"\"," <<std::endl;
  os <<"        \"SettlementPrice\": \"" <<aDepthMarketData.SettlementPrice  <<"\"," <<std::endl;
  os <<"        \"UpperLimitPrice\": \"" <<aDepthMarketData.UpperLimitPrice  <<"\"," <<std::endl;
  os <<"        \"LowerLimitPrice\": \"" <<aDepthMarketData.LowerLimitPrice  <<"\"," <<std::endl;
  os <<"        \"PreDelta\": \"" <<aDepthMarketData.PreDelta  <<"\"," <<std::endl;
  os <<"        \"CurrDelta\": \"" <<aDepthMarketData.CurrDelta  <<"\"," <<std::endl;
  os <<"        \"UpdateTime\": \"" <<aDepthMarketData.UpdateTime  <<"\"," <<std::endl;
  os <<"        \"UpdateMillisec\": \"" <<aDepthMarketData.UpdateMillisec  <<"\"," <<std::endl;
  os <<"        \"BidPrice1\": \"" <<aDepthMarketData.BidPrice1  <<"\"," <<std::endl;
  os <<"        \"BidVolume1\": \"" <<aDepthMarketData.BidVolume1  <<"\"," <<std::endl;
  os <<"        \"AskPrice1\": \"" <<aDepthMarketData.AskPrice1  <<"\"," <<std::endl;
  os <<"        \"AskVolume1\": \"" <<aDepthMarketData.AskVolume1  <<"\"," <<std::endl;
  os <<"        \"BidPrice2\": \"" <<aDepthMarketData.BidPrice2  <<"\"," <<std::endl;
  os <<"        \"BidVolume2\": \"" <<aDepthMarketData.BidVolume2  <<"\"," <<std::endl;
  os <<"        \"AskPrice2\": \"" <<aDepthMarketData.AskPrice2  <<"\"," <<std::endl;
  os <<"        \"AskVolume2\": \"" <<aDepthMarketData.AskVolume2  <<"\"," <<std::endl;
  os <<"        \"BidPrice3\": \"" <<aDepthMarketData.BidPrice3  <<"\"," <<std::endl;
  os <<"        \"BidVolume3\": \"" <<aDepthMarketData.BidVolume3  <<"\"," <<std::endl;
  os <<"        \"AskPrice3\": \"" <<aDepthMarketData.AskPrice3  <<"\"," <<std::endl;
  os <<"        \"AskVolume3\": \"" <<aDepthMarketData.AskVolume3  <<"\"," <<std::endl;
  os <<"        \"BidPrice4\": \"" <<aDepthMarketData.BidPrice4  <<"\"," <<std::endl;
  os <<"        \"BidVolume4\": \"" <<aDepthMarketData.BidVolume4  <<"\"," <<std::endl;
  os <<"        \"AskPrice4\": \"" <<aDepthMarketData.AskPrice4  <<"\"," <<std::endl;
  os <<"        \"AskVolume4\": \"" <<aDepthMarketData.AskVolume4  <<"\"," <<std::endl;
  os <<"        \"BidPrice5\": \"" <<aDepthMarketData.BidPrice5  <<"\"," <<std::endl;
  os <<"        \"BidVolume5\": \"" <<aDepthMarketData.BidVolume5  <<"\"," <<std::endl;
  os <<"        \"AskPrice5\": \"" <<aDepthMarketData.AskPrice5  <<"\"," <<std::endl;
  os <<"        \"AskVolume5\": \"" <<aDepthMarketData.AskVolume5  <<"\"," <<std::endl;
  os <<"        \"AveragePrice\": \"" <<aDepthMarketData.AveragePrice  <<"\"," <<std::endl;
  os <<"        \"time_stamp\": \"" <<aDepthMarketData.time_stamp  <<"\"" <<std::endl;
  os <<"    }" <<std::endl;
  os <<"}" <<std::endl;

}

};

#endif
