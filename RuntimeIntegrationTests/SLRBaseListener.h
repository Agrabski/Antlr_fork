
// Generated from SimpleLeftRecursion/SLR.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "SLRListener.h"


/**
 * This class provides an empty implementation of SLRListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  SLRBaseListener : public SLRListener {
public:

	void enter(not_null<SLRParser::XContext*> ) override { }
	void exit(not_null<SLRParser::XContext*>) override { }

	void enter(not_null<SLRParser::ExpressionContext*> ) override { }
	void exit(not_null<SLRParser::ExpressionContext*>) override { }


	void enterEveryRule(not_null<antlr4::ParserRuleContext *> ) override { }
	void exitEveryRule(not_null<antlr4::ParserRuleContext *> ) override { }
	void visitTerminal(not_null<antlr4::tree::TerminalNode *> ) override { }
	void visitErrorNode(not_null<antlr4::tree::ErrorNode *> ) override { }

};

