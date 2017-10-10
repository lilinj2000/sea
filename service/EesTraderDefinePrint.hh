// Copyright (c) 2010
// All rights reserved.

#ifndef EES_TRADER_DEFINE_PRINT_HH
#define EES_TRADER_DEFINE_PRINT_HH

#include <ostream>
#include "EesTraderDefine.h"
#include "soil/json.hh"

using rapidjson::StringBuffer;
using rapidjson::PrettyWriter;
using soil::json::write_value;

inline std::ostream& operator<<(
    std::ostream& os,
    EES_LogonResponse const& aLogonResponse) {  // NOLINT
    StringBuffer sb;
    PrettyWriter<StringBuffer> writer(sb);

    writer.StartObject();
    writer.Key("EES_LogonResponse");
        writer.StartObject();
        writer.Key("m_Result");
        write_value(
            &writer,
            aLogonResponse.m_Result);
        writer.Key("m_UserId");
        write_value(
            &writer,
            aLogonResponse.m_UserId);
        writer.Key("m_TradingDate");
        write_value(
            &writer,
            aLogonResponse.m_TradingDate);
        writer.Key("m_MaxToken");
        write_value(
            &writer,
            aLogonResponse.m_MaxToken);
        writer.EndObject();
    writer.EndObject();

    os <<sb.GetString();

    return os;
}

inline std::ostream& operator<<(
    std::ostream& os,
    EES_EnterOrderField const& aEnterOrderField) {  // NOLINT
    StringBuffer sb;
    PrettyWriter<StringBuffer> writer(sb);

    writer.StartObject();
    writer.Key("EES_EnterOrderField");
        writer.StartObject();
        writer.Key("m_Account");
        write_value(
            &writer,
            aEnterOrderField.m_Account);
        writer.Key("m_Side");
        write_value(
            &writer,
            aEnterOrderField.m_Side);
        writer.Key("m_Exchange");
        write_value(
            &writer,
            aEnterOrderField.m_Exchange);
        writer.Key("m_Symbol");
        write_value(
            &writer,
            aEnterOrderField.m_Symbol);
        writer.Key("m_SecType");
        write_value(
            &writer,
            aEnterOrderField.m_SecType);
        writer.Key("m_Price");
        write_value(
            &writer,
            aEnterOrderField.m_Price);
        writer.Key("m_Qty");
        write_value(
            &writer,
            aEnterOrderField.m_Qty);
        writer.Key("m_OptExecFlag");
        write_value(
            &writer,
            aEnterOrderField.m_OptExecFlag);
        writer.Key("m_ClientOrderToken");
        write_value(
            &writer,
            aEnterOrderField.m_ClientOrderToken);
        writer.Key("m_Tif");
        write_value(
            &writer,
            aEnterOrderField.m_Tif);
        writer.Key("m_MinQty");
        write_value(
            &writer,
            aEnterOrderField.m_MinQty);
        writer.Key("m_CustomField");
        write_value(
            &writer,
            aEnterOrderField.m_CustomField);
        writer.Key("m_MarketSessionId");
        write_value(
            &writer,
            aEnterOrderField.m_MarketSessionId);
        writer.Key("m_HedgeFlag");
        write_value(
            &writer,
            aEnterOrderField.m_HedgeFlag);
        writer.EndObject();
    writer.EndObject();

    os <<sb.GetString();

    return os;
}

inline std::ostream& operator<<(
    std::ostream& os,
    EES_OrderAcceptField const& aOrderAcceptField) {  // NOLINT
    StringBuffer sb;
    PrettyWriter<StringBuffer> writer(sb);

    writer.StartObject();
    writer.Key("EES_OrderAcceptField");
        writer.StartObject();
        writer.Key("m_ClientOrderToken");
        write_value(
            &writer,
            aOrderAcceptField.m_ClientOrderToken);
        writer.Key("m_MarketOrderToken");
        write_value(
            &writer,
            aOrderAcceptField.m_MarketOrderToken);
        writer.Key("m_OrderState");
        write_value(
            &writer,
            aOrderAcceptField.m_OrderState);
        writer.Key("m_UserID");
        write_value(
            &writer,
            aOrderAcceptField.m_UserID);
        writer.Key("m_AcceptTime");
        write_value(
            &writer,
            aOrderAcceptField.m_AcceptTime);
        writer.Key("m_Account");
        write_value(
            &writer,
            aOrderAcceptField.m_Account);
        writer.Key("m_Side");
        write_value(
            &writer,
            aOrderAcceptField.m_Side);
        writer.Key("m_Exchange");
        write_value(
            &writer,
            aOrderAcceptField.m_Exchange);
        writer.Key("m_Symbol");
        write_value(
            &writer,
            aOrderAcceptField.m_Symbol);
        writer.Key("m_SecType");
        write_value(
            &writer,
            aOrderAcceptField.m_SecType);
        writer.Key("m_Price");
        write_value(
            &writer,
            aOrderAcceptField.m_Price);
        writer.Key("m_Qty");
        write_value(
            &writer,
            aOrderAcceptField.m_Qty);
        writer.Key("m_OptExecFlag");
        write_value(
            &writer,
            aOrderAcceptField.m_OptExecFlag);
        writer.Key("m_Tif");
        write_value(
            &writer,
            aOrderAcceptField.m_Tif);
        writer.Key("m_MinQty");
        write_value(
            &writer,
            aOrderAcceptField.m_MinQty);
        writer.Key("m_CustomField");
        write_value(
            &writer,
            aOrderAcceptField.m_CustomField);
        writer.Key("m_MarketSessionId");
        write_value(
            &writer,
            aOrderAcceptField.m_MarketSessionId);
        writer.Key("m_HedgeFlag");
        write_value(
            &writer,
            aOrderAcceptField.m_HedgeFlag);
        writer.EndObject();
    writer.EndObject();

    os <<sb.GetString();

    return os;
}

inline std::ostream& operator<<(
    std::ostream& os,
    EES_OrderMarketAcceptField const& aOrderMarketAcceptField) {  // NOLINT
    StringBuffer sb;
    PrettyWriter<StringBuffer> writer(sb);

    writer.StartObject();
    writer.Key("EES_OrderMarketAcceptField");
        writer.StartObject();
        writer.Key("m_Account");
        write_value(
            &writer,
            aOrderMarketAcceptField.m_Account);
        writer.Key("m_MarketOrderToken");
        write_value(
            &writer,
            aOrderMarketAcceptField.m_MarketOrderToken);
        writer.Key("m_MarketOrderId");
        write_value(
            &writer,
            aOrderMarketAcceptField.m_MarketOrderId);
        writer.Key("m_MarketTime");
        write_value(
            &writer,
            aOrderMarketAcceptField.m_MarketTime);
        writer.EndObject();
    writer.EndObject();

    os <<sb.GetString();

    return os;
}

inline std::ostream& operator<<(
    std::ostream& os,
    EES_OrderRejectField const& aOrderRejectField) {  // NOLINT
    StringBuffer sb;
    PrettyWriter<StringBuffer> writer(sb);

    writer.StartObject();
    writer.Key("EES_OrderRejectField");
        writer.StartObject();
        writer.Key("m_Userid");
        write_value(
            &writer,
            aOrderRejectField.m_Userid);
        writer.Key("m_Timestamp");
        write_value(
            &writer,
            aOrderRejectField.m_Timestamp);
        writer.Key("m_ClientOrderToken");
        write_value(
            &writer,
            aOrderRejectField.m_ClientOrderToken);
        writer.Key("m_RejectedMan");
        write_value(
            &writer,
            aOrderRejectField.m_RejectedMan);
        writer.Key("m_ReasonCode");
        write_value(
            &writer,
            aOrderRejectField.m_ReasonCode);
        writer.Key("m_GrammerResult");
        write_value(
            &writer,
            aOrderRejectField.m_GrammerResult);
        writer.Key("m_RiskResult");
        write_value(
            &writer,
            aOrderRejectField.m_RiskResult);
        writer.Key("m_GrammerText");
        write_value(
            &writer,
            aOrderRejectField.m_GrammerText);
        writer.Key("m_RiskText");
        write_value(
            &writer,
            aOrderRejectField.m_RiskText);
        writer.EndObject();
    writer.EndObject();

    os <<sb.GetString();

    return os;
}

inline std::ostream& operator<<(
    std::ostream& os,
    EES_OrderMarketRejectField const& aOrderMarketRejectField) {  // NOLINT
    StringBuffer sb;
    PrettyWriter<StringBuffer> writer(sb);

    writer.StartObject();
    writer.Key("EES_OrderMarketRejectField");
        writer.StartObject();
        writer.Key("m_Account");
        write_value(
            &writer,
            aOrderMarketRejectField.m_Account);
        writer.Key("m_MarketOrderToken");
        write_value(
            &writer,
            aOrderMarketRejectField.m_MarketOrderToken);
        writer.Key("m_MarketTimestamp");
        write_value(
            &writer,
            aOrderMarketRejectField.m_MarketTimestamp);
        writer.Key("m_ReasonText");
        write_value(
            &writer,
            aOrderMarketRejectField.m_ReasonText);
        writer.EndObject();
    writer.EndObject();

    os <<sb.GetString();

    return os;
}

inline std::ostream& operator<<(
    std::ostream& os,
    EES_OrderExecutionField const& aOrderExecutionField) {  // NOLINT
    StringBuffer sb;
    PrettyWriter<StringBuffer> writer(sb);

    writer.StartObject();
    writer.Key("EES_OrderExecutionField");
        writer.StartObject();
        writer.Key("m_Userid");
        write_value(
            &writer,
            aOrderExecutionField.m_Userid);
        writer.Key("m_Timestamp");
        write_value(
            &writer,
            aOrderExecutionField.m_Timestamp);
        writer.Key("m_ClientOrderToken");
        write_value(
            &writer,
            aOrderExecutionField.m_ClientOrderToken);
        writer.Key("m_MarketOrderToken");
        write_value(
            &writer,
            aOrderExecutionField.m_MarketOrderToken);
        writer.Key("m_Quantity");
        write_value(
            &writer,
            aOrderExecutionField.m_Quantity);
        writer.Key("m_Price");
        write_value(
            &writer,
            aOrderExecutionField.m_Price);
        writer.Key("m_ExecutionID");
        write_value(
            &writer,
            aOrderExecutionField.m_ExecutionID);
        writer.Key("m_MarketExecID");
        write_value(
            &writer,
            aOrderExecutionField.m_MarketExecID);
        writer.EndObject();
    writer.EndObject();

    os <<sb.GetString();

    return os;
}

inline std::ostream& operator<<(
    std::ostream& os,
    EES_CancelOrder const& aCancelOrder) {  // NOLINT
    StringBuffer sb;
    PrettyWriter<StringBuffer> writer(sb);

    writer.StartObject();
    writer.Key("EES_CancelOrder");
        writer.StartObject();
        writer.Key("m_MarketOrderToken");
        write_value(
            &writer,
            aCancelOrder.m_MarketOrderToken);
        writer.Key("m_Quantity");
        write_value(
            &writer,
            aCancelOrder.m_Quantity);
        writer.Key("m_Account");
        write_value(
            &writer,
            aCancelOrder.m_Account);
        writer.EndObject();
    writer.EndObject();

    os <<sb.GetString();

    return os;
}

inline std::ostream& operator<<(
    std::ostream& os,
    EES_OrderCxled const& aOrderCxled) {  // NOLINT
    StringBuffer sb;
    PrettyWriter<StringBuffer> writer(sb);

    writer.StartObject();
    writer.Key("EES_OrderCxled");
        writer.StartObject();
        writer.Key("m_Userid");
        write_value(
            &writer,
            aOrderCxled.m_Userid);
        writer.Key("m_Timestamp");
        write_value(
            &writer,
            aOrderCxled.m_Timestamp);
        writer.Key("m_ClientOrderToken");
        write_value(
            &writer,
            aOrderCxled.m_ClientOrderToken);
        writer.Key("m_MarketOrderToken");
        write_value(
            &writer,
            aOrderCxled.m_MarketOrderToken);
        writer.Key("m_Decrement");
        write_value(
            &writer,
            aOrderCxled.m_Decrement);
        writer.Key("m_Reason");
        write_value(
            &writer,
            aOrderCxled.m_Reason);
        writer.EndObject();
    writer.EndObject();

    os <<sb.GetString();

    return os;
}

inline std::ostream& operator<<(
    std::ostream& os,
    EES_QueryAccountOrder const& aQueryAccountOrder) {  // NOLINT
    StringBuffer sb;
    PrettyWriter<StringBuffer> writer(sb);

    writer.StartObject();
    writer.Key("EES_QueryAccountOrder");
        writer.StartObject();
        writer.Key("m_Userid");
        write_value(
            &writer,
            aQueryAccountOrder.m_Userid);
        writer.Key("m_Timestamp");
        write_value(
            &writer,
            aQueryAccountOrder.m_Timestamp);
        writer.Key("m_ClientOrderToken");
        write_value(
            &writer,
            aQueryAccountOrder.m_ClientOrderToken);
        writer.Key("m_SideType");
        write_value(
            &writer,
            aQueryAccountOrder.m_SideType);
        writer.Key("m_Quantity");
        write_value(
            &writer,
            aQueryAccountOrder.m_Quantity);
        writer.Key("m_InstrumentType");
        write_value(
            &writer,
            aQueryAccountOrder.m_InstrumentType);
        writer.Key("m_symbol");
        write_value(
            &writer,
            aQueryAccountOrder.m_symbol);
        writer.Key("m_Price");
        write_value(
            &writer,
            aQueryAccountOrder.m_Price);
        writer.Key("m_account");
        write_value(
            &writer,
            aQueryAccountOrder.m_account);
        writer.Key("m_ExchengeID");
        write_value(
            &writer,
            aQueryAccountOrder.m_ExchengeID);
        writer.Key("m_OptExecFlag");
        write_value(
            &writer,
            aQueryAccountOrder.m_OptExecFlag);
        writer.Key("m_MarketOrderToken");
        write_value(
            &writer,
            aQueryAccountOrder.m_MarketOrderToken);
        writer.Key("m_OrderStatus");
        write_value(
            &writer,
            aQueryAccountOrder.m_OrderStatus);
        writer.Key("m_CloseTime");
        write_value(
            &writer,
            aQueryAccountOrder.m_CloseTime);
        writer.Key("m_FilledQty");
        write_value(
            &writer,
            aQueryAccountOrder.m_FilledQty);
        writer.Key("m_Tif");
        write_value(
            &writer,
            aQueryAccountOrder.m_Tif);
        writer.Key("m_MinQty");
        write_value(
            &writer,
            aQueryAccountOrder.m_MinQty);
        writer.Key("m_CustomField");
        write_value(
            &writer,
            aQueryAccountOrder.m_CustomField);
        writer.Key("m_MarketOrderId");
        write_value(
            &writer,
            aQueryAccountOrder.m_MarketOrderId);
        writer.Key("m_HedgeFlag");
        write_value(
            &writer,
            aQueryAccountOrder.m_HedgeFlag);
        writer.EndObject();
    writer.EndObject();

    os <<sb.GetString();

    return os;
}

inline std::ostream& operator<<(
    std::ostream& os,
    EES_QueryOrderExecution const& aQueryOrderExecution) {  // NOLINT
    StringBuffer sb;
    PrettyWriter<StringBuffer> writer(sb);

    writer.StartObject();
    writer.Key("EES_QueryOrderExecution");
        writer.StartObject();
        writer.Key("m_Userid");
        write_value(
            &writer,
            aQueryOrderExecution.m_Userid);
        writer.Key("m_Timestamp");
        write_value(
            &writer,
            aQueryOrderExecution.m_Timestamp);
        writer.Key("m_ClientOrderToken");
        write_value(
            &writer,
            aQueryOrderExecution.m_ClientOrderToken);
        writer.Key("m_MarketOrderToken");
        write_value(
            &writer,
            aQueryOrderExecution.m_MarketOrderToken);
        writer.Key("m_ExecutedQuantity");
        write_value(
            &writer,
            aQueryOrderExecution.m_ExecutedQuantity);
        writer.Key("m_ExecutionPrice");
        write_value(
            &writer,
            aQueryOrderExecution.m_ExecutionPrice);
        writer.Key("m_ExecutionID");
        write_value(
            &writer,
            aQueryOrderExecution.m_ExecutionID);
        writer.Key("m_MarketExecID");
        write_value(
            &writer,
            aQueryOrderExecution.m_MarketExecID);
        writer.EndObject();
    writer.EndObject();

    os <<sb.GetString();

    return os;
}

inline std::ostream& operator<<(
    std::ostream& os,
    EES_QueryAccountTradeFinish const& aQueryAccountTradeFinish) {  // NOLINT
    StringBuffer sb;
    PrettyWriter<StringBuffer> writer(sb);

    writer.StartObject();
    writer.Key("EES_QueryAccountTradeFinish");
        writer.StartObject();
        writer.Key("m_account");
        write_value(
            &writer,
            aQueryAccountTradeFinish.m_account);
        writer.EndObject();
    writer.EndObject();

    os <<sb.GetString();

    return os;
}

inline std::ostream& operator<<(
    std::ostream& os,
    EES_AccountInfo const& aAccountInfo) {  // NOLINT
    StringBuffer sb;
    PrettyWriter<StringBuffer> writer(sb);

    writer.StartObject();
    writer.Key("EES_AccountInfo");
        writer.StartObject();
        writer.Key("m_Account");
        write_value(
            &writer,
            aAccountInfo.m_Account);
        writer.Key("m_Previlege");
        write_value(
            &writer,
            aAccountInfo.m_Previlege);
        writer.Key("m_InitialBp");
        write_value(
            &writer,
            aAccountInfo.m_InitialBp);
        writer.Key("m_AvailableBp");
        write_value(
            &writer,
            aAccountInfo.m_AvailableBp);
        writer.Key("m_Margin");
        write_value(
            &writer,
            aAccountInfo.m_Margin);
        writer.Key("m_FrozenMargin");
        write_value(
            &writer,
            aAccountInfo.m_FrozenMargin);
        writer.Key("m_CommissionFee");
        write_value(
            &writer,
            aAccountInfo.m_CommissionFee);
        writer.Key("m_FrozenCommission");
        write_value(
            &writer,
            aAccountInfo.m_FrozenCommission);
        writer.EndObject();
    writer.EndObject();

    os <<sb.GetString();

    return os;
}

inline std::ostream& operator<<(
    std::ostream& os,
    EES_AccountPosition const& aAccountPosition) {  // NOLINT
    StringBuffer sb;
    PrettyWriter<StringBuffer> writer(sb);

    writer.StartObject();
    writer.Key("EES_AccountPosition");
        writer.StartObject();
        writer.Key("m_actId");
        write_value(
            &writer,
            aAccountPosition.m_actId);
        writer.Key("m_Symbol");
        write_value(
            &writer,
            aAccountPosition.m_Symbol);
        writer.Key("m_PosiDirection");
        write_value(
            &writer,
            aAccountPosition.m_PosiDirection);
        writer.Key("m_InitOvnQty");
        write_value(
            &writer,
            aAccountPosition.m_InitOvnQty);
        writer.Key("m_OvnQty");
        write_value(
            &writer,
            aAccountPosition.m_OvnQty);
        writer.Key("m_FrozenOvnQty");
        write_value(
            &writer,
            aAccountPosition.m_FrozenOvnQty);
        writer.Key("m_TodayQty");
        write_value(
            &writer,
            aAccountPosition.m_TodayQty);
        writer.Key("m_FrozenTodayQty");
        write_value(
            &writer,
            aAccountPosition.m_FrozenTodayQty);
        writer.Key("m_OvnMargin");
        write_value(
            &writer,
            aAccountPosition.m_OvnMargin);
        writer.Key("m_TodayMargin");
        write_value(
            &writer,
            aAccountPosition.m_TodayMargin);
        writer.Key("m_PositionCost");
        write_value(
            &writer,
            aAccountPosition.m_PositionCost);
        writer.Key("m_HedgeFlag");
        write_value(
            &writer,
            aAccountPosition.m_HedgeFlag);
        writer.EndObject();
    writer.EndObject();

    os <<sb.GetString();

    return os;
}

inline std::ostream& operator<<(
    std::ostream& os,
    EES_AccountOptionPosition const& aAccountOptionPosition) {  // NOLINT
    StringBuffer sb;
    PrettyWriter<StringBuffer> writer(sb);

    writer.StartObject();
    writer.Key("EES_AccountOptionPosition");
        writer.StartObject();
        writer.Key("m_actId");
        write_value(
            &writer,
            aAccountOptionPosition.m_actId);
        writer.Key("m_Symbol");
        write_value(
            &writer,
            aAccountOptionPosition.m_Symbol);
        writer.Key("m_PosiDirection");
        write_value(
            &writer,
            aAccountOptionPosition.m_PosiDirection);
        writer.Key("m_UnderlyingSymbol");
        write_value(
            &writer,
            aAccountOptionPosition.m_UnderlyingSymbol);
        writer.Key("m_CallPut");
        write_value(
            &writer,
            aAccountOptionPosition.m_CallPut);
        writer.Key("m_StrikePrice");
        write_value(
            &writer,
            aAccountOptionPosition.m_StrikePrice);
        writer.Key("m_ExpireDate");
        write_value(
            &writer,
            aAccountOptionPosition.m_ExpireDate);
        writer.Key("m_InitOvnQty");
        write_value(
            &writer,
            aAccountOptionPosition.m_InitOvnQty);
        writer.Key("m_CurTotalQty");
        write_value(
            &writer,
            aAccountOptionPosition.m_CurTotalQty);
        writer.Key("m_CoverLockedQty");
        write_value(
            &writer,
            aAccountOptionPosition.m_CoverLockedQty);
        writer.Key("m_ExecPendingQty");
        write_value(
            &writer,
            aAccountOptionPosition.m_ExecPendingQty);
        writer.Key("m_ExecAppliedQty");
        write_value(
            &writer,
            aAccountOptionPosition.m_ExecAppliedQty);
        writer.Key("m_CxlExecPendingQty");
        write_value(
            &writer,
            aAccountOptionPosition.m_CxlExecPendingQty);
        writer.Key("m_LiquidPl");
        write_value(
            &writer,
            aAccountOptionPosition.m_LiquidPl);
        writer.Key("m_AvgPrice");
        write_value(
            &writer,
            aAccountOptionPosition.m_AvgPrice);
        writer.Key("m_TotalCommissionFee");
        write_value(
            &writer,
            aAccountOptionPosition.m_TotalCommissionFee);
        writer.Key("m_HedgeFlag");
        write_value(
            &writer,
            aAccountOptionPosition.m_HedgeFlag);
        writer.EndObject();
    writer.EndObject();

    os <<sb.GetString();

    return os;
}

inline std::ostream& operator<<(
    std::ostream& os,
    EES_AccountBP const& aAccountBP) {  // NOLINT
    StringBuffer sb;
    PrettyWriter<StringBuffer> writer(sb);

    writer.StartObject();
    writer.Key("EES_AccountBP");
        writer.StartObject();
        writer.Key("m_account");
        write_value(
            &writer,
            aAccountBP.m_account);
        writer.Key("m_InitialBp");
        write_value(
            &writer,
            aAccountBP.m_InitialBp);
        writer.Key("m_AvailableBp");
        write_value(
            &writer,
            aAccountBP.m_AvailableBp);
        writer.Key("m_Margin");
        write_value(
            &writer,
            aAccountBP.m_Margin);
        writer.Key("m_FrozenMargin");
        write_value(
            &writer,
            aAccountBP.m_FrozenMargin);
        writer.Key("m_CommissionFee");
        write_value(
            &writer,
            aAccountBP.m_CommissionFee);
        writer.Key("m_FrozenCommission");
        write_value(
            &writer,
            aAccountBP.m_FrozenCommission);
        writer.Key("m_OvnInitMargin");
        write_value(
            &writer,
            aAccountBP.m_OvnInitMargin);
        writer.Key("m_TotalLiquidPL");
        write_value(
            &writer,
            aAccountBP.m_TotalLiquidPL);
        writer.Key("m_TotalMarketPL");
        write_value(
            &writer,
            aAccountBP.m_TotalMarketPL);
        writer.EndObject();
    writer.EndObject();

    os <<sb.GetString();

    return os;
}

inline std::ostream& operator<<(
    std::ostream& os,
    EES_SymbolField const& aSymbolField) {  // NOLINT
    StringBuffer sb;
    PrettyWriter<StringBuffer> writer(sb);

    writer.StartObject();
    writer.Key("EES_SymbolField");
        writer.StartObject();
        writer.Key("m_SecType");
        write_value(
            &writer,
            aSymbolField.m_SecType);
        writer.Key("m_symbol");
        write_value(
            &writer,
            aSymbolField.m_symbol);
        writer.Key("m_symbolName");
        write_value(
            &writer,
            aSymbolField.m_symbolName);
        writer.Key("m_ExchangeID");
        write_value(
            &writer,
            aSymbolField.m_ExchangeID);
        writer.Key("m_ProdID");
        write_value(
            &writer,
            aSymbolField.m_ProdID);
        writer.Key("m_DeliveryYear");
        write_value(
            &writer,
            aSymbolField.m_DeliveryYear);
        writer.Key("m_DeliveryMonth");
        write_value(
            &writer,
            aSymbolField.m_DeliveryMonth);
        writer.Key("m_MaxMarketOrderVolume");
        write_value(
            &writer,
            aSymbolField.m_MaxMarketOrderVolume);
        writer.Key("m_MinMarketOrderVolume");
        write_value(
            &writer,
            aSymbolField.m_MinMarketOrderVolume);
        writer.Key("m_MaxLimitOrderVolume");
        write_value(
            &writer,
            aSymbolField.m_MaxLimitOrderVolume);
        writer.Key("m_MinLimitOrderVolume");
        write_value(
            &writer,
            aSymbolField.m_MinLimitOrderVolume);
        writer.Key("m_VolumeMultiple");
        write_value(
            &writer,
            aSymbolField.m_VolumeMultiple);
        writer.Key("m_PriceTick");
        write_value(
            &writer,
            aSymbolField.m_PriceTick);
        writer.Key("m_CreateDate");
        write_value(
            &writer,
            aSymbolField.m_CreateDate);
        writer.Key("m_OpenDate");
        write_value(
            &writer,
            aSymbolField.m_OpenDate);
        writer.Key("m_ExpireDate");
        write_value(
            &writer,
            aSymbolField.m_ExpireDate);
        writer.Key("m_StartDelivDate");
        write_value(
            &writer,
            aSymbolField.m_StartDelivDate);
        writer.Key("m_EndDelivDate");
        write_value(
            &writer,
            aSymbolField.m_EndDelivDate);
        writer.Key("m_InstLifePhase");
        write_value(
            &writer,
            aSymbolField.m_InstLifePhase);
        writer.Key("m_IsTrading");
        write_value(
            &writer,
            aSymbolField.m_IsTrading);
        writer.Key("m_StrikePrice");
        write_value(
            &writer,
            aSymbolField.m_StrikePrice);
        writer.Key("m_CallPut");
        write_value(
            &writer,
            aSymbolField.m_CallPut);
        writer.Key("m_UnderlyingSymbol");
        write_value(
            &writer,
            aSymbolField.m_UnderlyingSymbol);
        writer.EndObject();
    writer.EndObject();

    os <<sb.GetString();

    return os;
}

inline std::ostream& operator<<(
    std::ostream& os,
    EES_AccountMargin const& aAccountMargin) {  // NOLINT
    StringBuffer sb;
    PrettyWriter<StringBuffer> writer(sb);

    writer.StartObject();
    writer.Key("EES_AccountMargin");
        writer.StartObject();
        writer.Key("m_SecType");
        write_value(
            &writer,
            aAccountMargin.m_SecType);
        writer.Key("m_symbol");
        write_value(
            &writer,
            aAccountMargin.m_symbol);
        writer.Key("m_ExchangeID");
        write_value(
            &writer,
            aAccountMargin.m_ExchangeID);
        writer.Key("m_ProdID");
        write_value(
            &writer,
            aAccountMargin.m_ProdID);
        writer.Key("m_LongMarginRatio");
        write_value(
            &writer,
            aAccountMargin.m_LongMarginRatio);
        writer.Key("m_ShortMarginRatio");
        write_value(
            &writer,
            aAccountMargin.m_ShortMarginRatio);
        writer.EndObject();
    writer.EndObject();

    os <<sb.GetString();

    return os;
}

inline std::ostream& operator<<(
    std::ostream& os,
    EES_AccountFee const& aAccountFee) {  // NOLINT
    StringBuffer sb;
    PrettyWriter<StringBuffer> writer(sb);

    writer.StartObject();
    writer.Key("EES_AccountFee");
        writer.StartObject();
        writer.Key("m_SecType");
        write_value(
            &writer,
            aAccountFee.m_SecType);
        writer.Key("m_symbol");
        write_value(
            &writer,
            aAccountFee.m_symbol);
        writer.Key("m_ExchangeID");
        write_value(
            &writer,
            aAccountFee.m_ExchangeID);
        writer.Key("m_ProdID");
        write_value(
            &writer,
            aAccountFee.m_ProdID);
        writer.Key("m_OpenRatioByMoney");
        write_value(
            &writer,
            aAccountFee.m_OpenRatioByMoney);
        writer.Key("m_OpenRatioByVolume");
        write_value(
            &writer,
            aAccountFee.m_OpenRatioByVolume);
        writer.Key("m_CloseYesterdayRatioByMoney");
        write_value(
            &writer,
            aAccountFee.m_CloseYesterdayRatioByMoney);
        writer.Key("m_CloseYesterdayRatioByVolume");
        write_value(
            &writer,
            aAccountFee.m_CloseYesterdayRatioByVolume);
        writer.Key("m_CloseTodayRatioByMoney");
        write_value(
            &writer,
            aAccountFee.m_CloseTodayRatioByMoney);
        writer.Key("m_CloseTodayRatioByVolume");
        write_value(
            &writer,
            aAccountFee.m_CloseTodayRatioByVolume);
        writer.Key("m_PositionDir");
        write_value(
            &writer,
            aAccountFee.m_PositionDir);
        writer.EndObject();
    writer.EndObject();

    os <<sb.GetString();

    return os;
}

inline std::ostream& operator<<(
    std::ostream& os,
    EES_CxlOrderRej const& aCxlOrderRej) {  // NOLINT
    StringBuffer sb;
    PrettyWriter<StringBuffer> writer(sb);

    writer.StartObject();
    writer.Key("EES_CxlOrderRej");
        writer.StartObject();
        writer.Key("m_account");
        write_value(
            &writer,
            aCxlOrderRej.m_account);
        writer.Key("m_MarketOrderToken");
        write_value(
            &writer,
            aCxlOrderRej.m_MarketOrderToken);
        writer.Key("m_ReasonCode");
        write_value(
            &writer,
            aCxlOrderRej.m_ReasonCode);
        writer.Key("m_ReasonText");
        write_value(
            &writer,
            aCxlOrderRej.m_ReasonText);
        writer.EndObject();
    writer.EndObject();

    os <<sb.GetString();

    return os;
}

inline std::ostream& operator<<(
    std::ostream& os,
    EES_PostOrder const& aPostOrder) {  // NOLINT
    StringBuffer sb;
    PrettyWriter<StringBuffer> writer(sb);

    writer.StartObject();
    writer.Key("EES_PostOrder");
        writer.StartObject();
        writer.Key("m_Userid");
        write_value(
            &writer,
            aPostOrder.m_Userid);
        writer.Key("m_Timestamp");
        write_value(
            &writer,
            aPostOrder.m_Timestamp);
        writer.Key("m_MarketOrderToken");
        write_value(
            &writer,
            aPostOrder.m_MarketOrderToken);
        writer.Key("m_ClientOrderToken");
        write_value(
            &writer,
            aPostOrder.m_ClientOrderToken);
        writer.Key("m_SideType");
        write_value(
            &writer,
            aPostOrder.m_SideType);
        writer.Key("m_Quantity");
        write_value(
            &writer,
            aPostOrder.m_Quantity);
        writer.Key("m_SecType");
        write_value(
            &writer,
            aPostOrder.m_SecType);
        writer.Key("m_Symbol");
        write_value(
            &writer,
            aPostOrder.m_Symbol);
        writer.Key("m_price");
        write_value(
            &writer,
            aPostOrder.m_price);
        writer.Key("m_account");
        write_value(
            &writer,
            aPostOrder.m_account);
        writer.Key("m_ExchangeID");
        write_value(
            &writer,
            aPostOrder.m_ExchangeID);
        writer.Key("m_OptExecFlag");
        write_value(
            &writer,
            aPostOrder.m_OptExecFlag);
        writer.Key("m_OrderState");
        write_value(
            &writer,
            aPostOrder.m_OrderState);
        writer.Key("m_ExchangeOrderID");
        write_value(
            &writer,
            aPostOrder.m_ExchangeOrderID);
        writer.Key("m_HedgeFlag");
        write_value(
            &writer,
            aPostOrder.m_HedgeFlag);
        writer.EndObject();
    writer.EndObject();

    os <<sb.GetString();

    return os;
}

inline std::ostream& operator<<(
    std::ostream& os,
    EES_PostOrderExecution const& aPostOrderExecution) {  // NOLINT
    StringBuffer sb;
    PrettyWriter<StringBuffer> writer(sb);

    writer.StartObject();
    writer.Key("EES_PostOrderExecution");
        writer.StartObject();
        writer.Key("m_Userid");
        write_value(
            &writer,
            aPostOrderExecution.m_Userid);
        writer.Key("m_Timestamp");
        write_value(
            &writer,
            aPostOrderExecution.m_Timestamp);
        writer.Key("m_MarketOrderToken");
        write_value(
            &writer,
            aPostOrderExecution.m_MarketOrderToken);
        writer.Key("m_ExecutedQuantity");
        write_value(
            &writer,
            aPostOrderExecution.m_ExecutedQuantity);
        writer.Key("m_ExecutionPrice");
        write_value(
            &writer,
            aPostOrderExecution.m_ExecutionPrice);
        writer.Key("m_ExecutionNumber");
        write_value(
            &writer,
            aPostOrderExecution.m_ExecutionNumber);
        writer.EndObject();
    writer.EndObject();

    os <<sb.GetString();

    return os;
}

inline std::ostream& operator<<(
    std::ostream& os,
    EES_ExchangeMarketSession const& aExchangeMarketSession) {  // NOLINT
    StringBuffer sb;
    PrettyWriter<StringBuffer> writer(sb);

    writer.StartObject();
    writer.Key("EES_ExchangeMarketSession");
        writer.StartObject();
        writer.Key("m_ExchangeID");
        write_value(
            &writer,
            aExchangeMarketSession.m_ExchangeID);
        writer.Key("m_SessionCount");
        write_value(
            &writer,
            aExchangeMarketSession.m_SessionCount);
        writer.EndObject();
    writer.EndObject();

    os <<sb.GetString();

    return os;
}

inline std::ostream& operator<<(
    std::ostream& os,
    EES_SymbolStatus const& aSymbolStatus) {  // NOLINT
    StringBuffer sb;
    PrettyWriter<StringBuffer> writer(sb);

    writer.StartObject();
    writer.Key("EES_SymbolStatus");
        writer.StartObject();
        writer.Key("m_ExchangeID");
        write_value(
            &writer,
            aSymbolStatus.m_ExchangeID);
        writer.Key("m_Symbol");
        write_value(
            &writer,
            aSymbolStatus.m_Symbol);
        writer.Key("m_InstrumentStatus");
        write_value(
            &writer,
            aSymbolStatus.m_InstrumentStatus);
        writer.Key("m_TradingSegmentSN");
        write_value(
            &writer,
            aSymbolStatus.m_TradingSegmentSN);
        writer.Key("m_EnterReason");
        write_value(
            &writer,
            aSymbolStatus.m_EnterReason);
        writer.EndObject();
    writer.EndObject();

    os <<sb.GetString();

    return os;
}

inline std::ostream& operator<<(
    std::ostream& os,
    EES_MarketMBLData const& aMarketMBLData) {  // NOLINT
    StringBuffer sb;
    PrettyWriter<StringBuffer> writer(sb);

    writer.StartObject();
    writer.Key("EES_MarketMBLData");
        writer.StartObject();
        writer.Key("m_RequestId");
        write_value(
            &writer,
            aMarketMBLData.m_RequestId);
        writer.Key("m_Result");
        write_value(
            &writer,
            aMarketMBLData.m_Result);
        writer.Key("m_symbol");
        write_value(
            &writer,
            aMarketMBLData.m_symbol);
        writer.Key("m_ExchangeID");
        write_value(
            &writer,
            aMarketMBLData.m_ExchangeID);
        writer.Key("m_Price");
        write_value(
            &writer,
            aMarketMBLData.m_Price);
        writer.Key("m_Volume");
        write_value(
            &writer,
            aMarketMBLData.m_Volume);
        writer.Key("m_IsBid");
        write_value(
            &writer,
            aMarketMBLData.m_IsBid);
        writer.EndObject();
    writer.EndObject();

    os <<sb.GetString();

    return os;
}

#endif
