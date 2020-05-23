
// Generated from D:\Programming\antlr4\RuntimeIntegrationTests\TreeCloning\CloningTestLib\CloningTest.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "CloningTestVisitor.h"


/**
 * This class provides an empty implementation of CloningTestVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  CloningTestBaseVisitor : public CloningTestVisitor {
public:

	antlrcpp::Any visitExpression(CloningTestParser::ExpressionContext *ctx) override {
		return visitChildren(ctx);
	}

	antlrcpp::Any visitMultiplication(CloningTestParser::MultiplicationContext *ctx) override {
		return visitChildren(ctx);
	}

	antlrcpp::Any visitNumber(CloningTestParser::NumberContext *ctx) override {
		return visitChildren(ctx);
	}


};

