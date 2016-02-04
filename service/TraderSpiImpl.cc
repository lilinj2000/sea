#include "TraderSpiImpl.hh"
#include "TraderServiceImpl.hh"
#include "TraderOptions.hh"
#include "SeaLog.hh"

#include "EesTraderDefinePrint.hh"

namespace sea
{

TraderSpiImpl::TraderSpiImpl(TraderServiceImpl* service) :
    service_(service)
{
  SEA_TRACE <<"TraderSpiImpl::TraderSpiImpl()" ;
}

TraderSpiImpl::~TraderSpiImpl()
{
  SEA_TRACE <<"TraderSpiImpl::~TraderSpiImpl()" ;
}

/////////////////////////////////////////
// impl from EESTraderEvent
/////////////////////////////////////////
void TraderSpiImpl::OnConnection(ERR_NO errNo, const char* pErrStr)
{
  SEA_TRACE <<"TraderSpiImpl::OnConnection()" ;


  if( errNo!=NO_ERROR )
  {
    SEA_INFO <<"errNo: " <<errNo <<" ErrStr: " <<pErrStr;
  }
  else
  {
    service_->login();
  }
}

void TraderSpiImpl::OnDisConnection(ERR_NO errNo, const char* pErrStr)
{
  SEA_TRACE <<"TraderSpiImpl::OnDisconnection()" ;

  if( errNo!=NO_ERROR )
  {
    SEA_INFO <<"errNo: " <<errNo <<" ErrStr: " <<pErrStr;
  }
    
}

void TraderSpiImpl::OnUserLogon(EES_LogonResponse* pLogon)
{
  SEA_TRACE <<"TraderSpiImpl::OnUserLogon()" ;

  try
  {
    SEA_PDU <<*pLogon;

    service_->initSession( pLogon );
    
    service_->notify();
  }
  catch( ... )
  {
  }
  
}

void TraderSpiImpl::OnQueryAccountBP(const char* pAccount, EES_AccountBP* pAccountPosition, int nReqId)
{
  SEA_TRACE <<"TraderSpiImpl::OnQueryAccountBP()" ;

  SEA_INFO <<"pAccount: " <<pAccount
           <<"  nReqId: " <<nReqId;

  SEA_INFO <<*pAccountPosition;
}

void TraderSpiImpl::OnOrderAccept(EES_OrderAcceptField* pAccept)
{
  SEA_TRACE <<"TraderSpiImpl::OnOrderAccept()" ;

  SEA_INFO <<*pAccept;
}

void TraderSpiImpl::OnOrderMarketAccept(EES_OrderMarketAcceptField* pAccept)
{
  SEA_TRACE <<"TraderSpiImpl::OnOrderMarketAccept()" ;

  SEA_INFO <<*pAccept;
}

void TraderSpiImpl::OnOrderReject(EES_OrderRejectField* pReject)
{
  SEA_TRACE <<"TraderSpiImpl::OnOrderReject()" ;

  SEA_INFO <<*pReject;
}

void TraderSpiImpl::OnOrderMarketReject(EES_OrderMarketRejectField* pReject)
{
  SEA_TRACE <<"TraderSpiImpl::OnOrderMarketReject()" ;

  SEA_INFO <<*pReject;
}

void TraderSpiImpl::OnOrderExecution(EES_OrderExecutionField* pExec)
{
  SEA_TRACE <<"TraderSpiImpl::OnOrderExecution()" ;

  SEA_INFO <<*pExec;
}

void TraderSpiImpl::OnOrderCxled(EES_OrderCxled* pCxled)
{
  SEA_TRACE <<"TraderSpiImpl::OnOrderCxled()" ;

  SEA_INFO <<*pCxled;
}

void TraderSpiImpl::OnCxlOrderReject(EES_CxlOrderRej* pReject)
{
  SEA_TRACE <<"TraderSpiImpl::OnCxlOrderReject()" ;

  SEA_INFO <<*pReject;
}

void TraderSpiImpl::OnPostOrder(EES_PostOrder* pPostOrder)
{
  SEA_TRACE <<"TraderSpiImpl::OnPostOrder()" ;

  SEA_INFO <<*pPostOrder;
}

void TraderSpiImpl::OnPostOrderExecution(EES_PostOrderExecution* pPostOrderExecution)
{
  SEA_TRACE <<"TraderSpiImpl::OnPostOrderExecution()" ;

  SEA_INFO <<*pPostOrderExecution;
}

void TraderSpiImpl::OnMarketSessionStatReport(EES_MarketSessionId MarketSessionId, bool ConnectionGood)
{
  SEA_TRACE <<"TraderSpiImpl::OnMarketSessionStatReport()" ;

  SEA_INFO <<"market_sessionid: " <<MarketSessionId
           <<"connection_good: " <<std::boolalpha <<ConnectionGood;
}

void TraderSpiImpl::OnSymbolStatusReport(EES_SymbolStatus* pSymbolStatus)
{
  SEA_TRACE <<"TraderSpiImpl::OnSymbolStatusReport()" ;

  SEA_INFO <<*pSymbolStatus;
}

void TraderSpiImpl::OnQuerySymbolStatus(EES_SymbolStatus* pSymbolStatus, bool bFinish)
{
  SEA_TRACE <<"TraderSpiImpl::OnQuerySymbolStatus()";

  if( !bFinish )
    SEA_INFO <<*pSymbolStatus;
}


} // namespace sea
