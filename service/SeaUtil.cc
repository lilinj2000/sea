#include <memory>
#include <cstring>

#include "SeaUtil.hh"

namespace sea
{

SEAUtil::SEAUtil()
{
}

SEAUtil::~SEAUtil()
{
}

DepthMarketData* SEAUtil::toDepthMarketData(EESMarketDepthQuoteData *pData)
{
  std::unique_ptr<DepthMarketData> theData( new DepthMarketData() );

  theData->TradingDay = pData->TradingDay;
  theData->InstrumentID = pData->InstrumentID;
  theData->ExchangeID = pData->ExchangeID;
  theData->ExchangeInstID = pData->ExchangeInstID;
  theData->LastPrice = pData->LastPrice;
  theData->PreSettlementPrice = pData->PreSettlementPrice;
  theData->PreClosePrice = pData->PreClosePrice;
  theData->PreOpenInterest = pData->PreOpenInterest;
  theData->OpenPrice = pData->OpenPrice;
  theData->HighestPrice = pData->HighestPrice;
  theData->LowestPrice = pData->LowestPrice;  
  theData->Volume = pData->LastPrice;
  theData->Turnover = pData->Turnover;
  theData->OpenInterest = pData->OpenInterest;
  theData->ClosePrice = pData->ClosePrice;
  theData->SettlementPrice = pData->SettlementPrice;
  theData->UpperLimitPrice = pData->UpperLimitPrice;
  theData->LowerLimitPrice = pData->LowerLimitPrice;
  theData->PreDelta = pData->PreDelta;
  theData->CurrDelta = pData->CurrDelta;
  theData->UpdateTime = pData->UpdateTime;
  theData->UpdateMillisec = pData->UpdateMillisec;
  
  theData->BidPrice1 = pData->BidPrice1;
  theData->BidVolume1 = pData->BidVolume1;
  theData->AskPrice1 = pData->AskPrice1;
  theData->AskVolume1 = pData->AskVolume1;
  
  
  theData->BidPrice2 = pData->BidPrice2;
  theData->BidVolume2 = pData->BidVolume2;
  theData->AskPrice2 = pData->AskPrice2;
  theData->AskVolume2 = pData->AskVolume2;

  theData->BidPrice3 = pData->BidPrice3;
  theData->BidVolume3 = pData->BidVolume3;
  theData->AskPrice3 = pData->AskPrice3;
  theData->AskVolume3 = pData->AskVolume3;

  theData->BidPrice4 = pData->BidPrice4;
  theData->BidVolume4 = pData->BidVolume4;
  theData->AskPrice4 = pData->AskPrice4;
  theData->AskVolume4 = pData->AskVolume4;

  theData->BidPrice5 = pData->BidPrice5;
  theData->BidVolume5 = pData->BidVolume5;
  theData->AskPrice5 = pData->AskPrice5;
  theData->AskVolume5 = pData->AskVolume5;

  theData->AveragePrice = pData->AveragePrice;
  
  return theData.release();

}

};
