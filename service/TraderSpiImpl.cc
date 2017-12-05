// Copyright (c) 2010
// All rights reserved.

#include "TraderSpiImpl.hh"
#include "TraderServiceImpl.hh"
#include "TraderOptions.hh"
#include "soil/Log.hh"

#include "EesTraderDefinePrint.hh"

namespace sea {

TraderSpiImpl::TraderSpiImpl(
    TraderServiceImpl* service) :
    service_(service) {
  SOIL_FUNC_TRACE;
}

TraderSpiImpl::~TraderSpiImpl() {
  SOIL_FUNC_TRACE;
}

/////////////////////////////////////////
// impl from EESTraderEvent
/////////////////////////////////////////
void TraderSpiImpl::OnConnection(
    ERR_NO errNo,
    const char* pErrStr) {
  SOIL_FUNC_TRACE;

  SOIL_DEBUG_PRINT(errNo);
  SOIL_DEBUG_IF_PRINT(pErrStr);

  if (errNo == NO_ERROR) {
    service_->login();
  }
}

void TraderSpiImpl::OnDisConnection(
    ERR_NO errNo,
    const char* pErrStr) {
  SOIL_FUNC_TRACE;

  SOIL_DEBUG_PRINT(errNo);
  SOIL_DEBUG_IF_PRINT(pErrStr);
}

void TraderSpiImpl::OnUserLogon(
    EES_LogonResponse* pLogon) {
  SOIL_FUNC_TRACE;

  SOIL_DEBUG_IF_PRINT(pLogon);

  if (pLogon->m_Result != 0) {
    SOIL_ERROR("login failed. result is {}",
               pLogon->m_Result);
  } else {
    service_->initSession(pLogon);
    service_->notify();
  }
}

void TraderSpiImpl::OnRspChangePassword(
    EES_ChangePasswordResult nResult) {
  SOIL_FUNC_TRACE;

  if (callback()) {
    callback()->onRspChangePassword(
        nResult);
  }
}

void TraderSpiImpl::OnQueryUserAccount(
    EES_AccountInfo* pAccoutnInfo,
    bool bFinish) {
  SOIL_FUNC_TRACE;

  if (callback()) {
    callback()->onQueryUserAccount(
        pAccoutnInfo ? fmt::format("{}", *pAccoutnInfo) : "",
        bFinish);
  }
}

void TraderSpiImpl::OnQueryAccountPosition(
    const char* pAccount,
    EES_AccountPosition* pAccoutnPosition,
    int nReqId,
    bool bFinish) {
  SOIL_FUNC_TRACE;

  if (callback()) {
    callback()->onQueryAccountPosition(
        pAccount ? fmt::format("{}", *pAccount) : "",
        pAccoutnPosition ? fmt::format("{}", *pAccoutnPosition) : "",
        nReqId,
        bFinish);
  }
}

void TraderSpiImpl::OnQueryAccountOptionPosition(
    const char* pAccount,
    EES_AccountOptionPosition* pAccoutnOptionPosition,
    int nReqId,
    bool bFinish) {
  SOIL_FUNC_TRACE;

  if (callback()) {
    callback()->onQueryAccountOptionPosition(
        pAccount ? fmt::format("{}", *pAccount) : "",
        pAccoutnOptionPosition ? fmt::format("{}", *pAccoutnOptionPosition) : "",
        nReqId,
        bFinish);
  }
}

void TraderSpiImpl::OnQueryAccountBP(
    const char* pAccount,
    EES_AccountBP* pAccoutnPosition,
    int nReqId) {
  SOIL_FUNC_TRACE;

  if (callback()) {
    callback()->onQueryAccountBP(
        pAccount ? fmt::format("{}", *pAccount) : "",
        pAccoutnPosition ? fmt::format("{}", *pAccoutnPosition) : "",
        nReqId);
  }
}

void TraderSpiImpl::OnQuerySymbol(
    EES_SymbolField* pSymbol,
    bool bFinish) {
  SOIL_FUNC_TRACE;

  if (callback()) {
    callback()->onQuerySymbol(
        pSymbol ? fmt::format("{}", *pSymbol) : "",
        bFinish);
  }
}

void TraderSpiImpl::OnQueryAccountTradeMargin(
    const char* pAccount,
    EES_AccountMargin* pSymbolMargin,
    bool bFinish) {
  SOIL_FUNC_TRACE;

  if (callback()) {
    callback()->onQueryAccountTradeMargin(
        pAccount ? fmt::format("{}", *pAccount) : "",
        pSymbolMargin ? fmt::format("{}", *pSymbolMargin) : "",
        bFinish);
  }
}

void TraderSpiImpl::OnQueryAccountTradeFee(
    const char* pAccount,
    EES_AccountFee* pSymbolFee,
    bool bFinish) {
  SOIL_FUNC_TRACE;

  if (callback()) {
    callback()->onQueryAccountTradeFee(
        pAccount ? fmt::format("{}", *pAccount) : "",
        pSymbolFee ? fmt::format("{}", *pSymbolFee) : "",
        bFinish);
  }
}

void TraderSpiImpl::OnOrderAccept(
    EES_OrderAcceptField* pAccept) {
  SOIL_FUNC_TRACE;

  if (callback()) {
    callback()->onOrderAccept(
        pAccept ? fmt::format("{}", *pAccept) : "");
  }
}

void TraderSpiImpl::OnOrderMarketAccept(
    EES_OrderMarketAcceptField* pAccept) {
  SOIL_FUNC_TRACE;

  if (callback()) {
    callback()->onOrderMarketAccept(
        pAccept ? fmt::format("{}", *pAccept) : "");
  }
}

void TraderSpiImpl::OnOrderReject(
    EES_OrderRejectField* pReject) {
  SOIL_FUNC_TRACE;

  if (callback()) {
    callback()->onOrderReject(
        pReject ? fmt::format("{}", *pReject) : "");
  }
}

void TraderSpiImpl::OnOrderMarketReject(
    EES_OrderMarketRejectField* pReject) {
  SOIL_FUNC_TRACE;

  if (callback()) {
    callback()->onOrderMarketReject(
        pReject ? fmt::format("{}", *pReject) : "");
  }
}

void TraderSpiImpl::OnOrderExecution(
    EES_OrderExecutionField* pExec) {
  SOIL_FUNC_TRACE;

  if (callback()) {
    callback()->onOrderExecution(
        pExec ? fmt::format("{}", *pExec) : "");
  }
}

void TraderSpiImpl::OnOrderCxled(
    EES_OrderCxled* pCxled) {
  SOIL_FUNC_TRACE;

  if (callback()) {
    callback()->onOrderCxled(
        pCxled ? fmt::format("{}", *pCxled) : "");
  }
}

void TraderSpiImpl::OnCxlOrderReject(
    EES_CxlOrderRej* pReject) {
  SOIL_FUNC_TRACE;

  if (callback()) {
    callback()->onCxlOrderReject(
        pReject ? fmt::format("{}", *pReject) : "");
  }
}

void TraderSpiImpl::OnQueryTradeOrder(
    const char* pAccount,
    EES_QueryAccountOrder* pQueryOrder,
    bool bFinish) {
  SOIL_FUNC_TRACE;

  if (callback()) {
    callback()->onQueryTradeOrder(
        pAccount ? fmt::format("{}", *pAccount) : "",
        pQueryOrder ? fmt::format("{}", *pQueryOrder) : "",
        bFinish);
  }
}

void TraderSpiImpl::OnQueryTradeOrderExec(
    const char* pAccount,
    EES_QueryOrderExecution* pQueryOrderExec,
    bool bFinish) {
  SOIL_FUNC_TRACE;

  if (callback()) {
    callback()->onQueryTradeOrderExec(
        pAccount ? fmt::format("{}", *pAccount) : "",
        pQueryOrderExec ? fmt::format("{}", *pQueryOrderExec) : "",
        bFinish);
  }
}

void TraderSpiImpl::OnPostOrder(
    EES_PostOrder* pPostOrder) {
  SOIL_FUNC_TRACE;

  if (callback()) {
    callback()->onPostOrder(
        pPostOrder ? fmt::format("{}", *pPostOrder) : "");
  }
}

void TraderSpiImpl::OnPostOrderExecution(
    EES_PostOrderExecution* pPostOrderExecution) {
  SOIL_FUNC_TRACE;

  if (callback()) {
    callback()->onPostOrderExecution(
        pPostOrderExecution ? fmt::format("{}", *pPostOrderExecution) : "");
  }
}

void TraderSpiImpl::OnQueryMarketSession(
    EES_ExchangeMarketSession* pMarketSession,
    bool bFinish) {
  SOIL_FUNC_TRACE;

  if (callback()) {
    callback()->onQueryMarketSession(
        pMarketSession ? fmt::format("{}", *pMarketSession) : "",
        bFinish);
  }
}

void TraderSpiImpl::OnMarketSessionStatReport(
    EES_MarketSessionId MarketSessionId,
    bool ConnectionGood) {
  SOIL_FUNC_TRACE;

  if (callback()) {
    callback()->onMarketSessionStatReport(
        MarketSessionId,
        ConnectionGood);
  }
}

void TraderSpiImpl::OnSymbolStatusReport(
    EES_SymbolStatus* pSymbolStatus) {
  SOIL_FUNC_TRACE;

  if (callback()) {
    callback()->onSymbolStatusReport(
        pSymbolStatus ? fmt::format("{}", *pSymbolStatus) : "");
  }
}

void TraderSpiImpl::OnQuerySymbolStatus(
    EES_SymbolStatus* pSymbolStatus,
    bool bFinish) {
  SOIL_FUNC_TRACE;

  if (callback()) {
    callback()->onQuerySymbolStatus(
        pSymbolStatus ? fmt::format("{}", *pSymbolStatus) : "",
        bFinish);
  }
}

void TraderSpiImpl::OnQueryMarketMBLData(
    EES_MarketMBLData* pMarketMBLData,
    bool bFinish) {
  SOIL_FUNC_TRACE;

  if (callback()) {
    callback()->onQueryMarketMBLData(
        pMarketMBLData ? fmt::format("{}", *pMarketMBLData) : "",
        bFinish);
  }
}

}  // namespace sea
