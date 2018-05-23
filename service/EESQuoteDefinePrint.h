#ifndef EES_QUOTE_DEFINE_PRINT_HH
#define EES_QUOTE_DEFINE_PRINT_HH

#include <ostream>
#include "EESQuoteDefine.h"

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, EqsMulticastInfo const& aMulticastInfo)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"EqsMulticastInfo\": {" <<std::endl;
    os <<"        \"m_mcIp\": \"" <<aMulticastInfo.m_mcIp <<"\"," <<std::endl;
    os <<"        \"m_mcPort\": \"" <<aMulticastInfo.m_mcPort <<"\"," <<std::endl;
    os <<"        \"m_mcLoacalIp\": \"" <<aMulticastInfo.m_mcLoacalIp <<"\"," <<std::endl;
    os <<"        \"m_exchangeId\": \"" <<aMulticastInfo.m_exchangeId <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, EqsTcpInfo const& aTcpInfo)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"EqsTcpInfo\": {" <<std::endl;
    os <<"        \"m_eqsId\": \"" <<aTcpInfo.m_eqsId  <<"\"," <<std::endl;
    os <<"        \"m_eqsIp\": \"" <<aTcpInfo.m_eqsIp  <<"\"," <<std::endl;
    os <<"        \"m_eqsPort\": \"" <<aTcpInfo.m_eqsPort  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, EqsLoginParam const& aLoginParam)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"EqsLoginParam\": {" <<std::endl;
    os <<"        \"m_loginId\": \"" <<aLoginParam.m_loginId  <<"\"," <<std::endl;
    os <<"        \"m_password\": \"" <<aLoginParam.m_password  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, EESMarketDepthQuoteData const& aDepthMarketDataField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"EESMarketDepthQuoteData\": {" <<std::endl;
    os <<"        \"TradingDay\": \"" <<aDepthMarketDataField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aDepthMarketDataField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aDepthMarketDataField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"ExchangeInstID\": \"" <<aDepthMarketDataField.ExchangeInstID  <<"\"," <<std::endl;
    os <<"        \"LastPrice\": \"" <<aDepthMarketDataField.LastPrice  <<"\"," <<std::endl;
    os <<"        \"PreSettlementPrice\": \"" <<aDepthMarketDataField.PreSettlementPrice  <<"\"," <<std::endl;
    os <<"        \"PreClosePrice\": \"" <<aDepthMarketDataField.PreClosePrice  <<"\"," <<std::endl;
    os <<"        \"PreOpenInterest\": \"" <<aDepthMarketDataField.PreOpenInterest  <<"\"," <<std::endl;
    os <<"        \"OpenPrice\": \"" <<aDepthMarketDataField.OpenPrice  <<"\"," <<std::endl;
    os <<"        \"HighestPrice\": \"" <<aDepthMarketDataField.HighestPrice  <<"\"," <<std::endl;
    os <<"        \"LowestPrice\": \"" <<aDepthMarketDataField.LowestPrice  <<"\"," <<std::endl;
    os <<"        \"Volume\": \"" <<aDepthMarketDataField.Volume  <<"\"," <<std::endl;
    os <<"        \"Turnover\": \"" <<aDepthMarketDataField.Turnover  <<"\"," <<std::endl;
    os <<"        \"OpenInterest\": \"" <<aDepthMarketDataField.OpenInterest  <<"\"," <<std::endl;
    os <<"        \"ClosePrice\": \"" <<aDepthMarketDataField.ClosePrice  <<"\"," <<std::endl;
    os <<"        \"SettlementPrice\": \"" <<aDepthMarketDataField.SettlementPrice  <<"\"," <<std::endl;
    os <<"        \"UpperLimitPrice\": \"" <<aDepthMarketDataField.UpperLimitPrice  <<"\"," <<std::endl;
    os <<"        \"LowerLimitPrice\": \"" <<aDepthMarketDataField.LowerLimitPrice  <<"\"," <<std::endl;
    os <<"        \"PreDelta\": \"" <<aDepthMarketDataField.PreDelta  <<"\"," <<std::endl;
    os <<"        \"CurrDelta\": \"" <<aDepthMarketDataField.CurrDelta  <<"\"," <<std::endl;
    os <<"        \"UpdateTime\": \"" <<aDepthMarketDataField.UpdateTime  <<"\"," <<std::endl;
    os <<"        \"UpdateMillisec\": \"" <<aDepthMarketDataField.UpdateMillisec  <<"\"," <<std::endl;
    os <<"        \"BidPrice1\": \"" <<aDepthMarketDataField.BidPrice1  <<"\"," <<std::endl;
    os <<"        \"BidVolume1\": \"" <<aDepthMarketDataField.BidVolume1  <<"\"," <<std::endl;
    os <<"        \"AskPrice1\": \"" <<aDepthMarketDataField.AskPrice1  <<"\"," <<std::endl;
    os <<"        \"AskVolume1\": \"" <<aDepthMarketDataField.AskVolume1  <<"\"," <<std::endl;
    os <<"        \"BidPrice2\": \"" <<aDepthMarketDataField.BidPrice2  <<"\"," <<std::endl;
    os <<"        \"BidVolume2\": \"" <<aDepthMarketDataField.BidVolume2  <<"\"," <<std::endl;
    os <<"        \"AskPrice2\": \"" <<aDepthMarketDataField.AskPrice2  <<"\"," <<std::endl;
    os <<"        \"AskVolume2\": \"" <<aDepthMarketDataField.AskVolume2  <<"\"," <<std::endl;
    os <<"        \"BidPrice3\": \"" <<aDepthMarketDataField.BidPrice3  <<"\"," <<std::endl;
    os <<"        \"BidVolume3\": \"" <<aDepthMarketDataField.BidVolume3  <<"\"," <<std::endl;
    os <<"        \"AskPrice3\": \"" <<aDepthMarketDataField.AskPrice3  <<"\"," <<std::endl;
    os <<"        \"AskVolume3\": \"" <<aDepthMarketDataField.AskVolume3  <<"\"," <<std::endl;
    os <<"        \"BidPrice4\": \"" <<aDepthMarketDataField.BidPrice4  <<"\"," <<std::endl;
    os <<"        \"BidVolume4\": \"" <<aDepthMarketDataField.BidVolume4  <<"\"," <<std::endl;
    os <<"        \"AskPrice4\": \"" <<aDepthMarketDataField.AskPrice4  <<"\"," <<std::endl;
    os <<"        \"AskVolume4\": \"" <<aDepthMarketDataField.AskVolume4  <<"\"," <<std::endl;
    os <<"        \"BidPrice5\": \"" <<aDepthMarketDataField.BidPrice5  <<"\"," <<std::endl;
    os <<"        \"BidVolume5\": \"" <<aDepthMarketDataField.BidVolume5  <<"\"," <<std::endl;
    os <<"        \"AskPrice5\": \"" <<aDepthMarketDataField.AskPrice5  <<"\"," <<std::endl;
    os <<"        \"AskVolume5\": \"" <<aDepthMarketDataField.AskVolume5  <<"\"," <<std::endl;
    os <<"        \"AveragePrice\": \"" <<aDepthMarketDataField.AveragePrice  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

#endif
