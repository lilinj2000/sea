// Copyright 2017 The Sea Authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// -----------------------------------------------------------------------------
// File: [file_name]
// -----------------------------------------------------------------------------
//
// [file_descrition]
//
// Example:
//
//   ... ...
//
//


#ifndef SERVICE_TRADER_SPI_IMPL_H_
#define SERVICE_TRADER_SPI_IMPL_H_

#include "EesTraderApi.h"
#include "service/TraderServiceImpl.h"

namespace sea {

class TraderSpiImpl :
      public EESTraderEvent {
 public:
  explicit TraderSpiImpl(
      TraderServiceImpl* service);

  virtual ~TraderSpiImpl();

  // interface from EESTraderEvent
  virtual void OnConnection(
      ERR_NO errNo,
      const char* pErrStr);

  virtual void OnDisConnection(
      ERR_NO errNo,
      const char* pErrStr);

  virtual void OnUserLogon(
      EES_LogonResponse* pLogon);

  virtual void OnRspChangePassword(
      EES_ChangePasswordResult nResult);

  virtual void OnQueryUserAccount(
      EES_AccountInfo* pAccoutnInfo,
      bool bFinish);

  virtual void OnQueryAccountPosition(
      const char* pAccount,
      EES_AccountPosition* pAccoutnPosition,
      int nReqId,
      bool bFinish);

  virtual void OnQueryAccountOptionPosition(
      const char* pAccount,
      EES_AccountOptionPosition* pAccoutnOptionPosition,
      int nReqId,
      bool bFinish);

  virtual void OnQueryAccountBP(
      const char* pAccount,
      EES_AccountBP* pAccoutnPosition,
      int nReqId);

  virtual void OnQuerySymbol(
      EES_SymbolField* pSymbol,
      bool bFinish);

  virtual void OnQueryAccountTradeMargin(
      const char* pAccount,
      EES_AccountMargin* pSymbolMargin,
      bool bFinish);

  virtual void OnQueryAccountTradeFee(
      const char* pAccount,
      EES_AccountFee* pSymbolFee,
      bool bFinish);

  virtual void OnOrderAccept(
      EES_OrderAcceptField* pAccept);

  virtual void OnOrderMarketAccept(
      EES_OrderMarketAcceptField* pAccept);

  virtual void OnOrderReject(
      EES_OrderRejectField* pReject);

  virtual void OnOrderMarketReject(
      EES_OrderMarketRejectField* pReject);

  virtual void OnOrderExecution(
      EES_OrderExecutionField* pExec);

  virtual void OnOrderCxled(
      EES_OrderCxled* pCxled);

  virtual void OnCxlOrderReject(
      EES_CxlOrderRej* pReject);

  virtual void OnQueryTradeOrder(
      const char* pAccount,
      EES_QueryAccountOrder* pQueryOrder,
      bool bFinish);

  virtual void OnQueryTradeOrderExec(
      const char* pAccount,
      EES_QueryOrderExecution* pQueryOrderExec,
      bool bFinish);

  virtual void OnPostOrder(
      EES_PostOrder* pPostOrder);

  virtual void OnPostOrderExecution(
      EES_PostOrderExecution* pPostOrderExecution);

  virtual void OnQueryMarketSession(
      EES_ExchangeMarketSession* pMarketSession,
      bool bFinish);

  virtual void OnMarketSessionStatReport(
      EES_MarketSessionId MarketSessionId,
      bool ConnectionGood);

  virtual void OnSymbolStatusReport(
      EES_SymbolStatus* pSymbolStatus);

  virtual void OnQuerySymbolStatus(
      EES_SymbolStatus* pSymbolStatus,
      bool bFinish);

  virtual void OnQueryMarketMBLData(
      EES_MarketMBLData* pMarketMBLData,
      bool bFinish);

  TraderCallback* callback() {
    return service_->callback();
  }

 private:
  TraderServiceImpl* service_;
};

}  // namespace sea

#endif
