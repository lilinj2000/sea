#ifndef EES_TRADER_DEFINE_PRINT_HH
#define EES_TRADER_DEFINE_PRINT_HH

#include <ostream>
#include "EesTraderDefine.h"

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, EES_LogonResponse const& aLogonResponse)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"EES_LogonResponse\": {" <<std::endl;
    os <<"        \"m_Result\": \"" <<aLogonResponse.m_Result  <<"\"," <<std::endl;
    os <<"        \"m_UserId\": \"" <<aLogonResponse.m_UserId  <<"\"," <<std::endl;
    os <<"        \"m_TradingDate\": \"" <<aLogonResponse.m_TradingDate  <<"\"," <<std::endl;
    os <<"        \"m_MaxToken\": \"" <<aLogonResponse.m_MaxToken  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, EES_EnterOrderField const& aEnterOrderField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"EES_EnterOrderField\": {" <<std::endl;
    os <<"        \"m_Account\": \"" <<aEnterOrderField.m_Account  <<"\"," <<std::endl;
    os <<"        \"m_Side\": \"" <<aEnterOrderField.m_Side  <<"\"," <<std::endl;
    os <<"        \"m_Exchange\": \"" <<aEnterOrderField.m_Exchange  <<"\"," <<std::endl;
    os <<"        \"m_Symbol\": \"" <<aEnterOrderField.m_Symbol  <<"\"," <<std::endl;
    os <<"        \"m_SecType\": \"" <<aEnterOrderField.m_SecType  <<"\"," <<std::endl;
    os <<"        \"m_Price\": \"" <<aEnterOrderField.m_Price  <<"\"," <<std::endl;
    os <<"        \"m_Qty\": \"" <<aEnterOrderField.m_Qty  <<"\"," <<std::endl;
    os <<"        \"m_ForceCloseReason\": \"" <<aEnterOrderField.m_ForceCloseReason  <<"\"," <<std::endl;
    os <<"        \"m_ClientOrderToken\": \"" <<aEnterOrderField.m_ClientOrderToken  <<"\"," <<std::endl;
    os <<"        \"m_Tif\": \"" <<aEnterOrderField.m_Tif  <<"\"," <<std::endl;
    os <<"        \"m_MinQty\": \"" <<aEnterOrderField.m_MinQty  <<"\"," <<std::endl;
    os <<"        \"m_CustomField\": \"" <<aEnterOrderField.m_CustomField  <<"\"," <<std::endl;
    os <<"        \"m_MarketSessionId\": \"" <<aEnterOrderField.m_MarketSessionId  <<"\"," <<std::endl;
    os <<"        \"m_HedgeFlag\": \"" <<aEnterOrderField.m_HedgeFlag <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, EES_OrderAcceptField const& aOrderAcceptField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"EES_OrderAcceptField\": {" <<std::endl;
    os <<"        \"m_ClientOrderToken\": \"" <<aOrderAcceptField.m_ClientOrderToken  <<"\"," <<std::endl;
    os <<"        \"m_MarketOrderToken\": \"" <<aOrderAcceptField.m_MarketOrderToken  <<"\"," <<std::endl;
    os <<"        \"m_OrderState\": \"" <<aOrderAcceptField.m_OrderState  <<"\"," <<std::endl;
    os <<"        \"m_UserID\": \"" <<aOrderAcceptField.m_UserID  <<"\"," <<std::endl;
    os <<"        \"m_AcceptTime\": \"" <<aOrderAcceptField.m_AcceptTime  <<"\"," <<std::endl;
    os <<"        \"m_Account\": \"" <<aOrderAcceptField.m_Account  <<"\"," <<std::endl;
    os <<"        \"m_Side\": \"" <<aOrderAcceptField.m_Side  <<"\"," <<std::endl;
    os <<"        \"m_Exchange\": \"" <<aOrderAcceptField.m_Exchange  <<"\"," <<std::endl;
    os <<"        \"m_Symbol\": \"" <<aOrderAcceptField.m_Symbol  <<"\"," <<std::endl;
    os <<"        \"m_SecType\": \"" <<aOrderAcceptField.m_SecType  <<"\"," <<std::endl;
    os <<"        \"m_Price\": \"" <<aOrderAcceptField.m_Price  <<"\"," <<std::endl;
    os <<"        \"m_Qty\": \"" <<aOrderAcceptField.m_Qty  <<"\"," <<std::endl;
    os <<"        \"m_ForceCloseReason\": \"" <<aOrderAcceptField.m_ForceCloseReason  <<"\"," <<std::endl;
    os <<"        \"m_Tif\": \"" <<aOrderAcceptField.m_Tif  <<"\"," <<std::endl;
    os <<"        \"m_MinQty\": \"" <<aOrderAcceptField.m_MinQty  <<"\"," <<std::endl;
    os <<"        \"m_CustomField\": \"" <<aOrderAcceptField.m_CustomField  <<"\"," <<std::endl;
    os <<"        \"m_MarketSessionId\": \"" <<aOrderAcceptField.m_MarketSessionId  <<"\"," <<std::endl;
    os <<"        \"m_HedgeFlag\": \"" <<aOrderAcceptField.m_HedgeFlag  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, EES_OrderMarketAcceptField const& aOrderMarketAcceptField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"EES_OrderMarketAcceptField\": {" <<std::endl;
    os <<"        \"m_Account\": \"" <<aOrderMarketAcceptField.m_Account  <<"\"," <<std::endl;
    os <<"        \"m_MarketOrderToken\": \"" <<aOrderMarketAcceptField.m_MarketOrderToken  <<"\"," <<std::endl;
    os <<"        \"m_MarketOrderId\": \"" <<aOrderMarketAcceptField.m_MarketOrderId  <<"\"," <<std::endl;
    os <<"        \"m_MarketTime\": \"" <<aOrderMarketAcceptField.m_MarketTime  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, EES_OrderRejectField const& aOrderRejectField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"EES_OrderRejectField\": {" <<std::endl;
    os <<"        \"m_Userid\": \"" <<aOrderRejectField.m_Userid  <<"\"," <<std::endl;
    os <<"        \"m_Timestamp\": \"" <<aOrderRejectField.m_Timestamp  <<"\"," <<std::endl;
    os <<"        \"m_ClientOrderToken\": \"" <<aOrderRejectField.m_ClientOrderToken  <<"\"," <<std::endl;
    os <<"        \"m_RejectedMan\": \"" <<aOrderRejectField.m_RejectedMan  <<"\"," <<std::endl;
    os <<"        \"m_ReasonCode\": \"" <<aOrderRejectField.m_ReasonCode  <<"\"," <<std::endl;
    os <<"        \"m_GrammerResult\": \"" <<aOrderRejectField.m_GrammerResult  <<"\"," <<std::endl;
    os <<"        \"m_RiskResult\": \"" <<aOrderRejectField.m_RiskResult  <<"\"," <<std::endl;
    os <<"        \"m_GrammerText\": \"" <<aOrderRejectField.m_GrammerText  <<"\"," <<std::endl;
    os <<"        \"m_RiskText\": \"" <<aOrderRejectField.m_RiskText  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, EES_OrderMarketRejectField const& aOrderMarketRejectField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"EES_OrderMarketRejectField\": {" <<std::endl;
    os <<"        \"m_Account\": \"" <<aOrderMarketRejectField.m_Account  <<"\"," <<std::endl;
    os <<"        \"m_MarketOrderToken\": \"" <<aOrderMarketRejectField.m_MarketOrderToken  <<"\"," <<std::endl;
    os <<"        \"m_MarketTimestamp\": \"" <<aOrderMarketRejectField.m_MarketTimestamp  <<"\"," <<std::endl;
    os <<"        \"m_ReasonText\": \"" <<aOrderMarketRejectField.m_ReasonText  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, EES_OrderExecutionField const& aOrderExecutionField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"EES_OrderExecutionField\": {" <<std::endl;
    os <<"        \"m_Userid\": \"" <<aOrderExecutionField.m_Userid  <<"\"," <<std::endl;
    os <<"        \"m_Timestamp\": \"" <<aOrderExecutionField.m_Timestamp  <<"\"," <<std::endl;
    os <<"        \"m_ClientOrderToken\": \"" <<aOrderExecutionField.m_ClientOrderToken  <<"\"," <<std::endl;
    os <<"        \"m_MarketOrderToken\": \"" <<aOrderExecutionField.m_MarketOrderToken  <<"\"," <<std::endl;
    os <<"        \"m_Quantity\": \"" <<aOrderExecutionField.m_Quantity  <<"\"," <<std::endl;
    os <<"        \"m_Price\": \"" <<aOrderExecutionField.m_Price  <<"\"," <<std::endl;
    os <<"        \"m_ExecutionID\": \"" <<aOrderExecutionField.m_ExecutionID  <<"\"," <<std::endl;
    os <<"        \"m_MarketExecID\": \"" <<aOrderExecutionField.m_MarketExecID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, EES_CancelOrder const& aCancelOrder)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"EES_CancelOrder\": {" <<std::endl;
    os <<"        \"m_MarketOrderToken\": \"" <<aCancelOrder.m_MarketOrderToken  <<"\"," <<std::endl;
    os <<"        \"m_Quantity\": \"" <<aCancelOrder.m_Quantity  <<"\"," <<std::endl;
    os <<"        \"m_Account\": \"" <<aCancelOrder.m_Account  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, EES_OrderCxled const& aOrderCxled)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"EES_OrderCxled\": {" <<std::endl;
    os <<"        \"m_Userid\": \"" <<aOrderCxled.m_Userid  <<"\"," <<std::endl;
    os <<"        \"m_Timestamp\": \"" <<aOrderCxled.m_Timestamp  <<"\"," <<std::endl;
    os <<"        \"m_ClientOrderToken\": \"" <<aOrderCxled.m_ClientOrderToken  <<"\"," <<std::endl;
    os <<"        \"m_MarketOrderToken\": \"" <<aOrderCxled.m_MarketOrderToken  <<"\"," <<std::endl;
    os <<"        \"m_Decrement\": \"" <<aOrderCxled.m_Decrement  <<"\"," <<std::endl;
    os <<"        \"m_Reason\": \"" <<aOrderCxled.m_Reason  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, EES_QueryAccountOrder const& aQueryAccountOrder)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"EES_QueryAccountOrder\": {" <<std::endl;
    os <<"        \"m_Userid\": \"" <<aQueryAccountOrder.m_Userid  <<"\"," <<std::endl;
    os <<"        \"m_Timestamp\": \"" <<aQueryAccountOrder.m_Timestamp  <<"\"," <<std::endl;
    os <<"        \"m_ClientOrderToken\": \"" <<aQueryAccountOrder.m_ClientOrderToken  <<"\"," <<std::endl;
    os <<"        \"m_SideType\": \"" <<aQueryAccountOrder.m_SideType  <<"\"," <<std::endl;
    os <<"        \"m_Quantity\": \"" <<aQueryAccountOrder.m_Quantity  <<"\"," <<std::endl;
    os <<"        \"m_InstrumentType\": \"" <<aQueryAccountOrder.m_InstrumentType  <<"\"," <<std::endl;
    os <<"        \"m_symbol\": \"" <<aQueryAccountOrder.m_symbol  <<"\"," <<std::endl;
    os <<"        \"m_Price\": \"" <<aQueryAccountOrder.m_Price  <<"\"," <<std::endl;
    os <<"        \"m_account\": \"" <<aQueryAccountOrder.m_account  <<"\"," <<std::endl;
    os <<"        \"m_ExchengeID\": \"" <<aQueryAccountOrder.m_ExchengeID  <<"\"," <<std::endl;
    os <<"        \"m_ForceCloseReason\": \"" <<aQueryAccountOrder.m_ForceCloseReason  <<"\"," <<std::endl;
    os <<"        \"m_MarketOrderToken\": \"" <<aQueryAccountOrder.m_MarketOrderToken  <<"\"," <<std::endl;
    os <<"        \"m_OrderStatus\": \"" <<aQueryAccountOrder.m_OrderStatus  <<"\"," <<std::endl;
    os <<"        \"m_CloseTime\": \"" <<aQueryAccountOrder.m_CloseTime  <<"\"," <<std::endl;
    os <<"        \"m_FilledQty\": \"" <<aQueryAccountOrder.m_FilledQty  <<"\"," <<std::endl;
    os <<"        \"m_Tif\": \"" <<aQueryAccountOrder.m_Tif  <<"\"," <<std::endl;
    os <<"        \"m_MinQty\": \"" <<aQueryAccountOrder.m_MinQty  <<"\"," <<std::endl;
    os <<"        \"m_CustomField\": \"" <<aQueryAccountOrder.m_CustomField  <<"\"," <<std::endl;
    os <<"        \"m_MarketOrderId\": \"" <<aQueryAccountOrder.m_MarketOrderId  <<"\"," <<std::endl;
    os <<"        \"m_HedgeFlag\": \"" <<aQueryAccountOrder.m_HedgeFlag  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, EES_QueryOrderExecution const& aQueryOrderExecution)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"EES_QueryOrderExecution\": {" <<std::endl;
    os <<"        \"m_Userid\": \"" <<aQueryOrderExecution.m_Userid  <<"\"," <<std::endl;
    os <<"        \"m_Timestamp\": \"" <<aQueryOrderExecution.m_Timestamp  <<"\"," <<std::endl;
    os <<"        \"m_ClientOrderToken\": \"" <<aQueryOrderExecution.m_ClientOrderToken  <<"\"," <<std::endl;
    os <<"        \"m_MarketOrderToken\": \"" <<aQueryOrderExecution.m_MarketOrderToken  <<"\"," <<std::endl;
    os <<"        \"m_ExecutedQuantity\": \"" <<aQueryOrderExecution.m_ExecutedQuantity  <<"\"," <<std::endl;
    os <<"        \"m_ExecutionPrice\": \"" <<aQueryOrderExecution.m_ExecutionPrice  <<"\"," <<std::endl;
    os <<"        \"m_ExecutionID\": \"" <<aQueryOrderExecution.m_ExecutionID  <<"\"," <<std::endl;
    os <<"        \"m_MarketExecID\": \"" <<aQueryOrderExecution.m_MarketExecID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, EES_QueryAccountTradeFinish const& aQueryAccountTradeFinish)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"EES_QueryAccountTradeFinish\": {" <<std::endl;
    os <<"        \"m_account\": \"" <<aQueryAccountTradeFinish.m_account  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, EES_AccountInfo const& aAccountInfo)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"EES_AccountInfo\": {" <<std::endl;
    os <<"        \"m_Account\": \"" <<aAccountInfo.m_Account  <<"\"," <<std::endl;
    os <<"        \"m_Previlege\": \"" <<aAccountInfo.m_Previlege  <<"\"," <<std::endl;
    os <<"        \"m_InitialBp\": \"" <<aAccountInfo.m_InitialBp  <<"\"," <<std::endl;
    os <<"        \"m_AvailableBp\": \"" <<aAccountInfo.m_AvailableBp  <<"\"," <<std::endl;
    os <<"        \"m_Margin\": \"" <<aAccountInfo.m_Margin  <<"\"," <<std::endl;
    os <<"        \"m_FrozenMargin\": \"" <<aAccountInfo.m_FrozenMargin  <<"\"," <<std::endl;
    os <<"        \"m_CommissionFee\": \"" <<aAccountInfo.m_CommissionFee  <<"\"," <<std::endl;
    os <<"        \"m_FrozenCommission\": \"" <<aAccountInfo.m_FrozenCommission  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, EES_AccountPosition const& aAccountPosition)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"EES_AccountPosition\": {" <<std::endl;
    os <<"        \"m_actId\": \"" <<aAccountPosition.m_actId  <<"\"," <<std::endl;
    os <<"        \"m_Symbol\": \"" <<aAccountPosition.m_Symbol  <<"\"," <<std::endl;
    os <<"        \"m_PosiDirection\": \"" <<aAccountPosition.m_PosiDirection  <<"\"," <<std::endl;
    os <<"        \"m_InitOvnQty\": \"" <<aAccountPosition.m_InitOvnQty  <<"\"," <<std::endl;
    os <<"        \"m_OvnQty\": \"" <<aAccountPosition.m_OvnQty  <<"\"," <<std::endl;
    os <<"        \"m_FrozenOvnQty\": \"" <<aAccountPosition.m_FrozenOvnQty  <<"\"," <<std::endl;
    os <<"        \"m_TodayQty\": \"" <<aAccountPosition.m_TodayQty  <<"\"," <<std::endl;
    os <<"        \"m_FrozenTodayQty\": \"" <<aAccountPosition.m_FrozenTodayQty  <<"\"," <<std::endl;
    os <<"        \"m_OvnMargin\": \"" <<aAccountPosition.m_OvnMargin  <<"\"," <<std::endl;
    os <<"        \"m_TodayMargin\": \"" <<aAccountPosition.m_TodayMargin  <<"\"," <<std::endl;
    os <<"        \"m_HedgeFlag\": \"" <<aAccountPosition.m_HedgeFlag  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, EES_AccountBP const& aAccountBP)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"EES_AccountBP\": {" <<std::endl;
    os <<"        \"m_account\": \"" <<aAccountBP.m_account  <<"\"," <<std::endl;
    os <<"        \"m_InitialBp\": \"" <<aAccountBP.m_InitialBp  <<"\"," <<std::endl;
    os <<"        \"m_AvailableBp\": \"" <<aAccountBP.m_AvailableBp  <<"\"," <<std::endl;
    os <<"        \"m_Margin\": \"" <<aAccountBP.m_Margin  <<"\"," <<std::endl;
    os <<"        \"m_FrozenMargin\": \"" <<aAccountBP.m_FrozenMargin  <<"\"," <<std::endl;
    os <<"        \"m_CommissionFee\": \"" <<aAccountBP.m_CommissionFee  <<"\"," <<std::endl;
    os <<"        \"m_FrozenCommission\": \"" <<aAccountBP.m_FrozenCommission  <<"\"," <<std::endl;
    os <<"        \"m_OvnInitMargin\": \"" <<aAccountBP.m_OvnInitMargin  <<"\"," <<std::endl;
    os <<"        \"m_TotalLiquidPL\": \"" <<aAccountBP.m_TotalLiquidPL  <<"\"," <<std::endl;
    os <<"        \"m_TotalMarketPL\": \"" <<aAccountBP.m_TotalMarketPL  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, EES_SymbolField const& aSymbolField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"EES_SymbolField\": {" <<std::endl;
    os <<"        \"m_SecType\": \"" <<aSymbolField.m_SecType  <<"\"," <<std::endl;
    os <<"        \"m_symbol\": \"" <<aSymbolField.m_symbol  <<"\"," <<std::endl;
    os <<"        \"m_symbolName\": \"" <<aSymbolField.m_symbolName  <<"\"," <<std::endl;
    os <<"        \"m_ExchangeID\": \"" <<aSymbolField.m_ExchangeID  <<"\"," <<std::endl;
    os <<"        \"m_ProdID\": \"" <<aSymbolField.m_ProdID  <<"\"," <<std::endl;
    os <<"        \"m_DeliveryYear\": \"" <<aSymbolField.m_DeliveryYear  <<"\"," <<std::endl;
    os <<"        \"m_DeliveryMonth\": \"" <<aSymbolField.m_DeliveryMonth  <<"\"," <<std::endl;
    os <<"        \"m_MaxMarketOrderVolume\": \"" <<aSymbolField.m_MaxMarketOrderVolume  <<"\"," <<std::endl;
    os <<"        \"m_MinMarketOrderVolume\": \"" <<aSymbolField.m_MinMarketOrderVolume  <<"\"," <<std::endl;
    os <<"        \"m_MaxLimitOrderVolume\": \"" <<aSymbolField.m_MaxLimitOrderVolume  <<"\"," <<std::endl;
    os <<"        \"m_MinLimitOrderVolume\": \"" <<aSymbolField.m_MinLimitOrderVolume  <<"\"," <<std::endl;
    os <<"        \"m_VolumeMultiple\": \"" <<aSymbolField.m_VolumeMultiple  <<"\"," <<std::endl;
    os <<"        \"m_PriceTick\": \"" <<aSymbolField.m_PriceTick  <<"\"," <<std::endl;
    os <<"        \"m_CreateDate\": \"" <<aSymbolField.m_CreateDate  <<"\"," <<std::endl;
    os <<"        \"m_OpenDate\": \"" <<aSymbolField.m_OpenDate  <<"\"," <<std::endl;
    os <<"        \"m_ExpireDate\": \"" <<aSymbolField.m_ExpireDate  <<"\"," <<std::endl;
    os <<"        \"m_StartDelivDate\": \"" <<aSymbolField.m_StartDelivDate  <<"\"," <<std::endl;
    os <<"        \"m_EndDelivDate\": \"" <<aSymbolField.m_EndDelivDate  <<"\"," <<std::endl;
    os <<"        \"m_InstLifePhase\": \"" <<aSymbolField.m_InstLifePhase  <<"\"," <<std::endl;
    os <<"        \"m_IsTrading\": \"" <<aSymbolField.m_IsTrading  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, EES_AccountMargin const& aAccountMargin)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"EES_AccountMargin\": {" <<std::endl;
    os <<"        \"m_SecType\": \"" <<aAccountMargin.m_SecType  <<"\"," <<std::endl;
    os <<"        \"m_symbol\": \"" <<aAccountMargin.m_symbol  <<"\"," <<std::endl;
    os <<"        \"m_ExchangeID\": \"" <<aAccountMargin.m_ExchangeID  <<"\"," <<std::endl;
    os <<"        \"m_ProdID\": \"" <<aAccountMargin.m_ProdID  <<"\"," <<std::endl;
    os <<"        \"m_LongMarginRatio\": \"" <<aAccountMargin.m_LongMarginRatio  <<"\"," <<std::endl;
    os <<"        \"m_ShortMarginRatio\": \"" <<aAccountMargin.m_ShortMarginRatio  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, EES_AccountFee const& aAccountFee)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"EES_AccountFee\": {" <<std::endl;
    os <<"        \"m_SecType\": \"" <<aAccountFee.m_SecType  <<"\"," <<std::endl;
    os <<"        \"m_symbol\": \"" <<aAccountFee.m_symbol  <<"\"," <<std::endl;
    os <<"        \"m_ExchangeID\": \"" <<aAccountFee.m_ExchangeID  <<"\"," <<std::endl;
    os <<"        \"m_ProdID\": \"" <<aAccountFee.m_ProdID  <<"\"," <<std::endl;
    os <<"        \"m_OpenRatioByMoney\": \"" <<aAccountFee.m_OpenRatioByMoney  <<"\"," <<std::endl;
    os <<"        \"m_OpenRatioByVolume\": \"" <<aAccountFee.m_OpenRatioByVolume  <<"\"," <<std::endl;
    os <<"        \"m_CloseYesterdayRatioByMoney\": \"" <<aAccountFee.m_CloseYesterdayRatioByMoney  <<"\"," <<std::endl;
    os <<"        \"m_CloseYesterdayRatioByVolume\": \"" <<aAccountFee.m_CloseYesterdayRatioByVolume  <<"\"," <<std::endl;
    os <<"        \"m_CloseTodayRatioByMoney\": \"" <<aAccountFee.m_CloseTodayRatioByMoney  <<"\"," <<std::endl;
    os <<"        \"m_CloseTodayRatioByVolume\": \"" <<aAccountFee.m_CloseTodayRatioByVolume  <<"\"," <<std::endl;
    os <<"        \"m_PositionDir\": \"" <<aAccountFee.m_PositionDir  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, EES_CxlOrderRej const& aCxlOrderRej)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"EES_CxlOrderRej\": {" <<std::endl;
    os <<"        \"m_account\": \"" <<aCxlOrderRej.m_account  <<"\"," <<std::endl;
    os <<"        \"m_MarketOrderToken\": \"" <<aCxlOrderRej.m_MarketOrderToken  <<"\"," <<std::endl;
    os <<"        \"m_ReasonCode\": \"" <<aCxlOrderRej.m_ReasonCode  <<"\"," <<std::endl;
    os <<"        \"m_ReasonText\": \"" <<aCxlOrderRej.m_ReasonText  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, EES_PostOrder const& aPostOrder)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"EES_PostOrder\": {" <<std::endl;
    os <<"        \"m_Userid\": \"" <<aPostOrder.m_Userid  <<"\"," <<std::endl;
    os <<"        \"m_Timestamp\": \"" <<aPostOrder.m_Timestamp  <<"\"," <<std::endl;
    os <<"        \"m_MarketOrderToken\": \"" <<aPostOrder.m_MarketOrderToken  <<"\"," <<std::endl;
    os <<"        \"m_ClientOrderToken\": \"" <<aPostOrder.m_ClientOrderToken  <<"\"," <<std::endl;
    os <<"        \"m_SideType\": \"" <<aPostOrder.m_SideType  <<"\"," <<std::endl;
    os <<"        \"m_Quantity\": \"" <<aPostOrder.m_Quantity  <<"\"," <<std::endl;
    os <<"        \"m_SecType\": \"" <<aPostOrder.m_SecType  <<"\"," <<std::endl;
    os <<"        \"m_Symbol\": \"" <<aPostOrder.m_Symbol  <<"\"," <<std::endl;
    os <<"        \"m_price\": \"" <<aPostOrder.m_price  <<"\"," <<std::endl;
    os <<"        \"m_account\": \"" <<aPostOrder.m_account  <<"\"," <<std::endl;
    os <<"        \"m_ExchangeID\": \"" <<aPostOrder.m_ExchangeID  <<"\"," <<std::endl;
    os <<"        \"m_ForceCloseReason\": \"" <<aPostOrder.m_ForceCloseReason  <<"\"," <<std::endl;
    os <<"        \"m_OrderState\": \"" <<aPostOrder.m_OrderState  <<"\"," <<std::endl;
    os <<"        \"m_ExchangeOrderID\": \"" <<aPostOrder.m_ExchangeOrderID  <<"\"," <<std::endl;
    os <<"        \"m_HedgeFlag\": \"" <<aPostOrder.m_HedgeFlag  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, EES_PostOrderExecution const& aPostOrderExecution)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"EES_PostOrderExecution\": {" <<std::endl;
    os <<"        \"m_Userid\": \"" <<aPostOrderExecution.m_Userid  <<"\"," <<std::endl;
    os <<"        \"m_Timestamp\": \"" <<aPostOrderExecution.m_Timestamp  <<"\"," <<std::endl;
    os <<"        \"m_MarketOrderToken\": \"" <<aPostOrderExecution.m_MarketOrderToken  <<"\"," <<std::endl;
    os <<"        \"m_ExecutedQuantity\": \"" <<aPostOrderExecution.m_ExecutedQuantity  <<"\"," <<std::endl;
    os <<"        \"m_ExecutionPrice\": \"" <<aPostOrderExecution.m_ExecutionPrice  <<"\"," <<std::endl;
    os <<"        \"m_ExecutionNumber\": \"" <<aPostOrderExecution.m_ExecutionNumber  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, EES_ExchangeMarketSession const& aExchangeMarketSession)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"EES_ExchangeMarketSession\": {" <<std::endl;
    os <<"        \"m_ExchangeID\": \"" <<aExchangeMarketSession.m_ExchangeID  <<"\"," <<std::endl;
    os <<"        \"m_SessionCount\": \"" <<aExchangeMarketSession.m_SessionCount  <<"\"," <<std::endl;
    os <<"        \"m_SessionId[255]\": \"" <<aExchangeMarketSession.m_SessionId[255]  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, EES_SymbolStatus const& aSymbolStatus)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"EES_SymbolStatus\": {" <<std::endl;
    os <<"        \"m_ExchangeID\": \"" <<aSymbolStatus.m_ExchangeID  <<"\"," <<std::endl;
    os <<"        \"m_Symbol\": \"" <<aSymbolStatus.m_Symbol  <<"\"," <<std::endl;
    os <<"        \"m_InstrumentStatus\": \"" <<aSymbolStatus.m_InstrumentStatus  <<"\"," <<std::endl;
    os <<"        \"m_TradingSegmentSN\": \"" <<aSymbolStatus.m_TradingSegmentSN  <<"\"," <<std::endl;
    os <<"        \"m_EnterTime[9]\": \"" <<aSymbolStatus.m_EnterTime[9]  <<"\"," <<std::endl;
    os <<"        \"m_EnterReason\": \"" <<aSymbolStatus.m_EnterReason  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

#endif
