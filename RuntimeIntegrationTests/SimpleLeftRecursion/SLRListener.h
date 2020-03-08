
// Generated from D:\Programming\antlr4\RuntimeIntegrationTests\SimpleLeftRecursion\SLR.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "SLRParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by SLRParser.
 */
class  SLRListener : public antlr4::tree::ParseTreeListener {
public:

	virtual void enter(not_null<SLRParser::ExpressionContext *>) = 0;
	virtual void exit(not_null<SLRParser::ExpressionContext *>) = 0;


};

