// CloningTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include <array>
#include "../CloningTestLib/CloningTestParser.h"
#include "../CloningTestLib/CloningTestLexer.h"

using P = std::pair<std::string, std::string>;
using namespace std::literals;


std::array testData =
{
	P("1+2(1+1)"s, "1+1+1+1+1"s),
	P("5(15)"s,"15+15+15+15+15"s),
	P("2(1+1)+3(2+4)"s, "1+1+1+1+2+4+2+4+2+4"s),
	P("3(2(1+1)+4(3))"s, "1+1+1+1+3+3+3+3+1+1+1+1+3+3+3+3+1+1+1+1+3+3+3+3"s)
};
void processExpression(CloningTestParser::ExpressionContext& expression);
void processMultiplication(CloningTestParser::MultiplicationContext& multiplication);

void processExpression(CloningTestParser::ExpressionContext& expression)
{
	if (expression.multiplication())
		processMultiplication(*expression.multiplication());
	for (auto ex : expression.expression())
		processExpression(*ex);
}

void processMultiplication(CloningTestParser::MultiplicationContext& multiplication)
{
	std::stringstream sstream("1+1");
	antlr4::ANTLRInputStream stream(sstream);
	CloningTestLexer lexer(&stream);
	antlr4::BufferedTokenStream tokenStream(&lexer);
	CloningTestParser parser(&tokenStream);
	static auto plus = move(parser.parseexpression()->children[1]);
	auto count = std::stoi(multiplication.number()->getText());
	auto parent = (CloningTestParser::ExpressionContext*)multiplication.parent;
	auto expression = std::move(multiplication.children[2]);
	processExpression((CloningTestParser::ExpressionContext&)*expression);
	parent->children.pop_back();
	if (parent->children.size() != 0)
		parent->children.push_back(plus->clone(parent));
	for (int i = 0; i < count; i++)
	{
		parent->children.push_back(expression->clone(parent));
		if (count - i != 1)
			parent->children.push_back(plus->clone(parent));
	}

}

int main()
{
	for (auto& [input, output] : testData)
	{
		std::stringstream sstream(input);
		antlr4::ANTLRInputStream stream(sstream);
		CloningTestLexer lexer(&stream);
		antlr4::BufferedTokenStream tokenStream(&lexer);
		CloningTestParser parser(&tokenStream);
		auto tree = parser.parseexpression();
		processExpression(*tree);
		auto result = tree->getText();
		if (result != output)
			return 1;
	}
	return 0;
}

