
// Generated from D:\Programming\antlr4\RuntimeIntegrationTests\TreeCloning\CloningTestLib\CloningTest.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "CloningTestParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by CloningTestParser.
 */
class  CloningTestListener : public antlr4::tree::ParseTreeListener {
public:

	virtual void enter(not_null<CloningTestParser::ExpressionContext *>) = 0;
	virtual void exit(not_null<CloningTestParser::ExpressionContext *>) = 0;

	virtual void enter(not_null<CloningTestParser::MultiplicationContext *>) = 0;
	virtual void exit(not_null<CloningTestParser::MultiplicationContext *>) = 0;

	virtual void enter(not_null<CloningTestParser::NumberContext *>) = 0;
	virtual void exit(not_null<CloningTestParser::NumberContext *>) = 0;


};

