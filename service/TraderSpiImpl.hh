// Copyright (c) 2010
// All rights reserved.

#ifndef SEA_TRADER_SPI_IMPL_HH
#define SEA_TRADER_SPI_IMPL_HH


#include "EesTraderApi.h"

namespace sea {

class TraderServiceImpl;
class TraderSpiImpl : public EESTraderEvent {
 public:
  explicit TraderSpiImpl(TraderServiceImpl* service);
  virtual ~TraderSpiImpl();

  // interface from EESTraderEvent
  virtual void OnConnection(ERR_NO errNo, const char* pErrStr);

  virtual void OnDisConnection(ERR_NO errNo, const char* pErrStr);

  virtual void OnUserLogon(EES_LogonResponse* pLogon);

  virtual void OnQueryAccountBP(
      const char* pAccount,
      EES_AccountBP* pAccountPosition,
      int nReqId);

  virtual void OnOrderAccept(EES_OrderAcceptField* pAccept);

  virtual void OnOrderMarketAccept(EES_OrderMarketAcceptField* pAccept);

  virtual void OnOrderReject(EES_OrderRejectField* pReject);

  virtual void OnOrderMarketReject(EES_OrderMarketRejectField* pReject);

  virtual void OnOrderExecution(EES_OrderExecutionField* pExec);

  virtual void OnOrderCxled(EES_OrderCxled* pCxled);

  virtual void OnCxlOrderReject(EES_CxlOrderRej* pReject);

  virtual void OnPostOrder(EES_PostOrder* pPostOrder);

  virtual void OnPostOrderExecution(
      EES_PostOrderExecution* pPostOrderExecution);

  virtual void OnMarketSessionStatReport(
      EES_MarketSessionId MarketSessionId,
      bool ConnectionGood);

  virtual void OnSymbolStatusReport(EES_SymbolStatus* pSymbolStatus);

  virtual void OnQuerySymbolStatus(
      EES_SymbolStatus* pSymbolStatus,
      bool bFinish);

 private:
  TraderServiceImpl* service_;
};

}  // namespace sea

#endif
