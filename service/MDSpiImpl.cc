#include "MDSpiImpl.hh"
#include "SeaUtil.hh"
#include "SeaLog.hh"
#include "MDServiceImpl.hh"

#include "EESQuoteDefinePrint.hh"

namespace sea
{

MDSpiImpl::MDSpiImpl(MDServiceImpl* service) :
    service_(service)
{
  SEA_TRACE <<"MDSpiImpl::MDSpiImpl()" ;

  util_.reset( new SEAUtil() );
}

MDSpiImpl::~MDSpiImpl()
{
  SEA_TRACE <<"MDSpiImpl::~MDSpiImpl()" ;
}

void MDSpiImpl::OnEqsConnected()
{
  SEA_TRACE <<"MDSpiImpl::OnEqsConnected()" ;

  service_->login();
}

void MDSpiImpl::OnEqsDisconnected()
{
  SEA_TRACE <<"MDSpiImpl::OnEqsDisconnected()" ;
}

void MDSpiImpl::OnLoginResponse(bool bSuccess, const char* pReason)
{
  SEA_TRACE <<"MDSpiImpl::OnLoginResponse()" ;

  if( bSuccess )
    service_->notify();
  else
    SEA_ERROR <<"login failed, reason: " <<pReason;
}

void MDSpiImpl::OnQuoteUpdated(EesEqsIntrumentType chInstrumentType, EESMarketDepthQuoteData* pDepthQuoteData)
{
  SEA_TRACE <<"MDSpiImpl::OnQuoteUpdated()" ;

  SEA_INFO <<"symbol type: " <<chInstrumentType;
  
  SEA_PDU <<*pDepthQuoteData;

  DepthMarketData* data = util_->toDepthMarketData( pDepthQuoteData );

  service_->pushData( data );
}

void MDSpiImpl::OnSymbolRegisterResponse(EesEqsIntrumentType chInstrumentType, const char* pSymbol, bool bSuccess)
{
  SEA_TRACE <<"MDSpiImpl::OnSymbolRegisterResponse()" ;

  SEA_INFO <<"type: " <<chInstrumentType
           <<" symbol: " <<pSymbol
           <<" success: " <<std::boolalpha <<bSuccess ;
}

void MDSpiImpl::OnSymbolUnregisterResponse(EesEqsIntrumentType chInstrumentType, const char* pSymbol, bool bSuccess)
{
  SEA_TRACE <<"MDSpiImpl::OnSymbolUnregisterResponse()" ;

  SEA_INFO <<"type: " <<chInstrumentType
           <<" symbol: " <<pSymbol
           <<" success: " <<std::boolalpha <<bSuccess ;
}

void MDSpiImpl::OnSymbolListResponse(EesEqsIntrumentType chInstrumentType, const char* pSymbol, bool bLast)
{
  SEA_TRACE <<"MDSpiImpl::OnSymbolListResponse()" ;

  if( !bLast )
  {
    SEA_INFO <<"type: " <<chInstrumentType
             <<" symbol: " <<pSymbol;
  }
}

} // namespace sea
