
// Generated from D:\Programming\antlr4\RuntimeIntegrationTests\TreeCloning\CloningTestLib\CloningTest.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "CloningTestParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by CloningTestParser.
 */
class  CloningTestVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

	/**
	 * Visit parse trees produced by CloningTestParser.
	 */
		virtual antlrcpp::Any visitExpression(CloningTestParser::ExpressionContext *context) = 0;

		virtual antlrcpp::Any visitMultiplication(CloningTestParser::MultiplicationContext *context) = 0;

		virtual antlrcpp::Any visitNumber(CloningTestParser::NumberContext *context) = 0;


};

