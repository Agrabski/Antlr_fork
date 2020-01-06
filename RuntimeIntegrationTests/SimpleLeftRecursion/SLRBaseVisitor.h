
// Generated from D:\Programming\antlr4\RuntimeIntegrationTests\SimpleLeftRecursion\SLR.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "SLRVisitor.h"


/**
 * This class provides an empty implementation of SLRVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  SLRBaseVisitor : public SLRVisitor {
public:

	antlrcpp::Any visitX(SLRParser::XContext *ctx) override {
		return visitChildren(ctx);
	}

	antlrcpp::Any visitExpression(SLRParser::ExpressionContext *ctx) override {
		return visitChildren(ctx);
	}


};

