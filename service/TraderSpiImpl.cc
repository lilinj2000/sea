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


    // service_->initSession( pRspUserLogin );
    service_->notify();
  }
  catch( ... )
  {
  }
  
}

  



} // namespace sea
