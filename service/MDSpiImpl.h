// Copyright (c) 2010
// All rights reserved.

#ifndef SEA_MDSPI_IMPL_HH
#define SEA_MDSPI_IMPL_HH

#include <memory>
#include <cstring>
#include "EESQuoteApi.h"

namespace sea {

class MDServiceImpl;
class SEAUtil;

class MDSpiImpl : public EESQuoteEvent {
 public:
  explicit MDSpiImpl(MDServiceImpl* service);

  virtual ~MDSpiImpl();

  // interface from EESQuoteEvent
  virtual void OnEqsConnected();

  virtual void OnEqsDisconnected();

  virtual void OnLoginResponse(bool bSuccess, const char* pReason);

  virtual void OnQuoteUpdated(
      EesEqsIntrumentType chInstrumentType,
      EESMarketDepthQuoteData* pDepthQuoteData);

  virtual void OnSymbolRegisterResponse(
      EesEqsIntrumentType chInstrumentType,
      const char* pSymbol, bool bSuccess);

  virtual void OnSymbolUnregisterResponse(
      EesEqsIntrumentType chInstrumentType,
      const char* pSymbol, bool bSuccess);

  virtual void OnSymbolListResponse(
      EesEqsIntrumentType chInstrumentType,
      const char* pSymbol, bool bLast);

 private:
  MDServiceImpl* service_;

  std::unique_ptr<SEAUtil> util_;
};

}  // namespace sea

#endif
