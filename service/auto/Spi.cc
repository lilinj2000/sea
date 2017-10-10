void MDSpiImpl::OnConnection(
	ERR_NO errNo,
	const char* pErrStr) {
	SOIL_FUNC_TRACE;

	SOIL_DEBUG_PRINT(errNo);
	SOIL_DEBUG_IF_PRINT(pErrStr);
}

void MDSpiImpl::OnDisConnection(
	ERR_NO errNo,
	const char* pErrStr) {
	SOIL_FUNC_TRACE;

	SOIL_DEBUG_PRINT(errNo);
	SOIL_DEBUG_IF_PRINT(pErrStr);
}

void MDSpiImpl::OnUserLogon(
	EES_LogonResponse* pLogon) {
	SOIL_FUNC_TRACE;

	SOIL_DEBUG_IF_PRINT(pLogon);
}

void MDSpiImpl::OnRspChangePassword(
	EES_ChangePasswordResult nResult) {
	SOIL_FUNC_TRACE;

	if (callback()) {
		callback()->onRspChangePassword(
			nResult);
	}
}

void MDSpiImpl::OnQueryUserAccount(
	EES_AccountInfo* pAccoutnInfo,
	bool bFinish) {
	SOIL_FUNC_TRACE;

	if (callback()) {
		callback()->onQueryUserAccount(
			pAccoutnInfo ? fmt::format("{}", *pAccoutnInfo) : "",
			bFinish);
	}
}

void MDSpiImpl::OnQueryAccountPosition(
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

void MDSpiImpl::OnQueryAccountOptionPosition(
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

void MDSpiImpl::OnQueryAccountBP(
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

void MDSpiImpl::OnQuerySymbol(
	EES_SymbolField* pSymbol,
	bool bFinish) {
	SOIL_FUNC_TRACE;

	if (callback()) {
		callback()->onQuerySymbol(
			pSymbol ? fmt::format("{}", *pSymbol) : "",
			bFinish);
	}
}

void MDSpiImpl::OnQueryAccountTradeMargin(
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

void MDSpiImpl::OnQueryAccountTradeFee(
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

void MDSpiImpl::OnOrderAccept(
	EES_OrderAcceptField* pAccept) {
	SOIL_FUNC_TRACE;

	if (callback()) {
		callback()->onOrderAccept(
			pAccept ? fmt::format("{}", *pAccept) : "");
	}
}

void MDSpiImpl::OnOrderMarketAccept(
	EES_OrderMarketAcceptField* pAccept) {
	SOIL_FUNC_TRACE;

	if (callback()) {
		callback()->onOrderMarketAccept(
			pAccept ? fmt::format("{}", *pAccept) : "");
	}
}

void MDSpiImpl::OnOrderReject(
	EES_OrderRejectField* pReject) {
	SOIL_FUNC_TRACE;

	if (callback()) {
		callback()->onOrderReject(
			pReject ? fmt::format("{}", *pReject) : "");
	}
}

void MDSpiImpl::OnOrderMarketReject(
	EES_OrderMarketRejectField* pReject) {
	SOIL_FUNC_TRACE;

	if (callback()) {
		callback()->onOrderMarketReject(
			pReject ? fmt::format("{}", *pReject) : "");
	}
}

void MDSpiImpl::OnOrderExecution(
	EES_OrderExecutionField* pExec) {
	SOIL_FUNC_TRACE;

	if (callback()) {
		callback()->onOrderExecution(
			pExec ? fmt::format("{}", *pExec) : "");
	}
}

void MDSpiImpl::OnOrderCxled(
	EES_OrderCxled* pCxled) {
	SOIL_FUNC_TRACE;

	if (callback()) {
		callback()->onOrderCxled(
			pCxled ? fmt::format("{}", *pCxled) : "");
	}
}

void MDSpiImpl::OnCxlOrderReject(
	EES_CxlOrderRej* pReject) {
	SOIL_FUNC_TRACE;

	if (callback()) {
		callback()->onCxlOrderReject(
			pReject ? fmt::format("{}", *pReject) : "");
	}
}

void MDSpiImpl::OnQueryTradeOrder(
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

void MDSpiImpl::OnQueryTradeOrderExec(
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

void MDSpiImpl::OnPostOrder(
	EES_PostOrder* pPostOrder) {
	SOIL_FUNC_TRACE;

	if (callback()) {
		callback()->onPostOrder(
			pPostOrder ? fmt::format("{}", *pPostOrder) : "");
	}
}

void MDSpiImpl::OnPostOrderExecution(
	EES_PostOrderExecution* pPostOrderExecution) {
	SOIL_FUNC_TRACE;

	if (callback()) {
		callback()->onPostOrderExecution(
			pPostOrderExecution ? fmt::format("{}", *pPostOrderExecution) : "");
	}
}

void MDSpiImpl::OnQueryMarketSession(
	EES_ExchangeMarketSession* pMarketSession,
	bool bFinish) {
	SOIL_FUNC_TRACE;

	if (callback()) {
		callback()->onQueryMarketSession(
			pMarketSession ? fmt::format("{}", *pMarketSession) : "",
			bFinish);
	}
}

void MDSpiImpl::OnMarketSessionStatReport(
	EES_MarketSessionId MarketSessionId,
	bool ConnectionGood) {
	SOIL_FUNC_TRACE;

	if (callback()) {
		callback()->onMarketSessionStatReport(
			MarketSessionId,
			ConnectionGood);
	}
}

void MDSpiImpl::OnSymbolStatusReport(
	EES_SymbolStatus* pSymbolStatus) {
	SOIL_FUNC_TRACE;

	if (callback()) {
		callback()->onSymbolStatusReport(
			pSymbolStatus ? fmt::format("{}", *pSymbolStatus) : "");
	}
}

void MDSpiImpl::OnQuerySymbolStatus(
	EES_SymbolStatus* pSymbolStatus,
	bool bFinish) {
	SOIL_FUNC_TRACE;

	if (callback()) {
		callback()->onQuerySymbolStatus(
			pSymbolStatus ? fmt::format("{}", *pSymbolStatus) : "",
			bFinish);
	}
}

void MDSpiImpl::OnQueryMarketMBLData(
	EES_MarketMBLData* pMarketMBLData,
	bool bFinish) {
	SOIL_FUNC_TRACE;

	if (callback()) {
		callback()->onQueryMarketMBLData(
			pMarketMBLData ? fmt::format("{}", *pMarketMBLData) : "",
			bFinish);
	}
}

