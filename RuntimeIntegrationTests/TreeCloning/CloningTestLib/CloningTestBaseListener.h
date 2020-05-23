
// Generated from D:\Programming\antlr4\RuntimeIntegrationTests\TreeCloning\CloningTestLib\CloningTest.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "CloningTestListener.h"


/**
 * This class provides an empty implementation of CloningTestListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  CloningTestBaseListener : public CloningTestListener {
public:

	void enter(not_null<CloningTestParser::ExpressionContext*> ) override { }
	void exit(not_null<CloningTestParser::ExpressionContext*>) override { }

	void enter(not_null<CloningTestParser::MultiplicationContext*> ) override { }
	void exit(not_null<CloningTestParser::MultiplicationContext*>) override { }

	void enter(not_null<CloningTestParser::NumberContext*> ) override { }
	void exit(not_null<CloningTestParser::NumberContext*>) override { }


	void enterEveryRule(not_null<antlr4::ParserRuleContext *> ) override { }
	void exitEveryRule(not_null<antlr4::ParserRuleContext *> ) override { }
	void visitTerminal(not_null<antlr4::tree::TerminalNode *> ) override { }
	void visitErrorNode(not_null<antlr4::tree::ErrorNode *> ) override { }

};

