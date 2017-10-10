virtual void onRspChangePassword(
	int nResult) {
	SOIL_FUNC_TRACE;

	SOIL_DEBUG_PRINT(nResult);
}

virtual void onQueryUserAccount(
	const std::string& theAccoutnInfo,
	bool bFinish) {
	SOIL_FUNC_TRACE;

	SOIL_DEBUG_PRINT(theAccoutnInfo);
	SOIL_DEBUG_PRINT(bFinish);
}

virtual void onQueryAccountPosition(
	const std::string& theAccount,
	const std::string& theAccoutnPosition,
	int nReqId,
	bool bFinish) {
	SOIL_FUNC_TRACE;

	SOIL_DEBUG_PRINT(theAccount);
	SOIL_DEBUG_PRINT(theAccoutnPosition);
	SOIL_DEBUG_PRINT(nReqId);
	SOIL_DEBUG_PRINT(bFinish);
}

virtual void onQueryAccountOptionPosition(
	const std::string& theAccount,
	const std::string& theAccoutnOptionPosition,
	int nReqId,
	bool bFinish) {
	SOIL_FUNC_TRACE;

	SOIL_DEBUG_PRINT(theAccount);
	SOIL_DEBUG_PRINT(theAccoutnOptionPosition);
	SOIL_DEBUG_PRINT(nReqId);
	SOIL_DEBUG_PRINT(bFinish);
}

virtual void onQueryAccountBP(
	const std::string& theAccount,
	const std::string& theAccoutnPosition,
	int nReqId) {
	SOIL_FUNC_TRACE;

	SOIL_DEBUG_PRINT(theAccount);
	SOIL_DEBUG_PRINT(theAccoutnPosition);
	SOIL_DEBUG_PRINT(nReqId);
}

virtual void onQuerySymbol(
	const std::string& theSymbol,
	bool bFinish) {
	SOIL_FUNC_TRACE;

	SOIL_DEBUG_PRINT(theSymbol);
	SOIL_DEBUG_PRINT(bFinish);
}

virtual void onQueryAccountTradeMargin(
	const std::string& theAccount,
	const std::string& theSymbolMargin,
	bool bFinish) {
	SOIL_FUNC_TRACE;

	SOIL_DEBUG_PRINT(theAccount);
	SOIL_DEBUG_PRINT(theSymbolMargin);
	SOIL_DEBUG_PRINT(bFinish);
}

virtual void onQueryAccountTradeFee(
	const std::string& theAccount,
	const std::string& theSymbolFee,
	bool bFinish) {
	SOIL_FUNC_TRACE;

	SOIL_DEBUG_PRINT(theAccount);
	SOIL_DEBUG_PRINT(theSymbolFee);
	SOIL_DEBUG_PRINT(bFinish);
}

virtual void onOrderAccept(
	const std::string& theAccept) {
	SOIL_FUNC_TRACE;

	SOIL_DEBUG_PRINT(theAccept);
}

virtual void onOrderMarketAccept(
	const std::string& theAccept) {
	SOIL_FUNC_TRACE;

	SOIL_DEBUG_PRINT(theAccept);
}

virtual void onOrderReject(
	const std::string& theReject) {
	SOIL_FUNC_TRACE;

	SOIL_DEBUG_PRINT(theReject);
}

virtual void onOrderMarketReject(
	const std::string& theReject) {
	SOIL_FUNC_TRACE;

	SOIL_DEBUG_PRINT(theReject);
}

virtual void onOrderExecution(
	const std::string& theExec) {
	SOIL_FUNC_TRACE;

	SOIL_DEBUG_PRINT(theExec);
}

virtual void onOrderCxled(
	const std::string& theCxled) {
	SOIL_FUNC_TRACE;

	SOIL_DEBUG_PRINT(theCxled);
}

virtual void onCxlOrderReject(
	const std::string& theReject) {
	SOIL_FUNC_TRACE;

	SOIL_DEBUG_PRINT(theReject);
}

virtual void onQueryTradeOrder(
	const std::string& theAccount,
	const std::string& theQueryOrder,
	bool bFinish) {
	SOIL_FUNC_TRACE;

	SOIL_DEBUG_PRINT(theAccount);
	SOIL_DEBUG_PRINT(theQueryOrder);
	SOIL_DEBUG_PRINT(bFinish);
}

virtual void onQueryTradeOrderExec(
	const std::string& theAccount,
	const std::string& theQueryOrderExec,
	bool bFinish) {
	SOIL_FUNC_TRACE;

	SOIL_DEBUG_PRINT(theAccount);
	SOIL_DEBUG_PRINT(theQueryOrderExec);
	SOIL_DEBUG_PRINT(bFinish);
}

virtual void onPostOrder(
	const std::string& thePostOrder) {
	SOIL_FUNC_TRACE;

	SOIL_DEBUG_PRINT(thePostOrder);
}

virtual void onPostOrderExecution(
	const std::string& thePostOrderExecution) {
	SOIL_FUNC_TRACE;

	SOIL_DEBUG_PRINT(thePostOrderExecution);
}

virtual void onQueryMarketSession(
	const std::string& theMarketSession,
	bool bFinish) {
	SOIL_FUNC_TRACE;

	SOIL_DEBUG_PRINT(theMarketSession);
	SOIL_DEBUG_PRINT(bFinish);
}

virtual void onMarketSessionStatReport(
	unsigned char MarketSessionId,
	bool ConnectionGood) {
	SOIL_FUNC_TRACE;

	SOIL_DEBUG_PRINT(MarketSessionId);
	SOIL_DEBUG_PRINT(ConnectionGood);
}

virtual void onSymbolStatusReport(
	const std::string& theSymbolStatus) {
	SOIL_FUNC_TRACE;

	SOIL_DEBUG_PRINT(theSymbolStatus);
}

virtual void onQuerySymbolStatus(
	const std::string& theSymbolStatus,
	bool bFinish) {
	SOIL_FUNC_TRACE;

	SOIL_DEBUG_PRINT(theSymbolStatus);
	SOIL_DEBUG_PRINT(bFinish);
}

virtual void onQueryMarketMBLData(
	const std::string& theMarketMBLData,
	bool bFinish) {
	SOIL_FUNC_TRACE;

	SOIL_DEBUG_PRINT(theMarketMBLData);
	SOIL_DEBUG_PRINT(bFinish);
}

