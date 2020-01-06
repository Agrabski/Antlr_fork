
// Generated from D:\Programming\antlr4\RuntimeIntegrationTests\SimpleLeftRecursion\SLR.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "SLRParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by SLRParser.
 */
class  SLRVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

	/**
	 * Visit parse trees produced by SLRParser.
	 */
		virtual antlrcpp::Any visitX(SLRParser::XContext *context) = 0;

		virtual antlrcpp::Any visitExpression(SLRParser::ExpressionContext *context) = 0;


};

