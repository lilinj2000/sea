#ifndef SEA_UTIL_HH
#define SEA_UTIL_HH

#include "sea/SeaDef.hh"
#include "EESQuoteDefine.h"

namespace sea
{

class SEAUtil
{
 public:
  SEAUtil();

  ~SEAUtil();

  DepthMarketData* toDepthMarketData(EESMarketDepthQuoteData *pData);
  
};

};

#endif
