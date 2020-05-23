// SimpleCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "../SimpleCalculatorParser/cloningParser.h"
#include "../SimpleCalculatorParser/cloningLexer.h"


void preProcessExpression(cloningParser::ExpressionContext& expression);
void preProcessMultiplication(cloningParser::MultiplicationContext& multiplication);

void preProcessExpression(cloningParser::ExpressionContext& expression)
{
	if (expression.multiplication())
		preProcessMultiplication(*expression.multiplication());
	for (auto ex : expression.expression())
		preProcessExpression(*ex);
}


auto getPlus()
{
	std::stringstream sstream("1+1");
	antlr4::ANTLRInputStream stream(sstream);
	cloningLexer lexer(&stream);
	antlr4::BufferedTokenStream tokenStream(&lexer);
	cloningParser parser(&tokenStream);
	return move(parser.parseexpression()->children[1]);
}

void preProcessMultiplication(cloningParser::MultiplicationContext& multiplication)
{
	static auto plus = getPlus();
	auto count = std::stoi(multiplication.number()->getText());
	auto parent = (cloningParser::ExpressionContext*)multiplication.parent;
	auto expression = std::move(multiplication.children[3]);
	preProcessExpression((cloningParser::ExpressionContext&) * expression);
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

int sum(cloningParser::ExpressionContext& expression)
{
	int result = 0;
	for (auto child : expression.expression())
		result += sum(*child);
	if (expression.number() != nullptr)
		result += std::stoi(expression.number()->getText());
	return result;
}

int main()
{
	std::string buffer;
	std::cout << "enter expression:" << std::endl;
	std::getline(std::cin, buffer, '\n');
	std::stringstream sstream(buffer);
	antlr4::ANTLRInputStream stream(sstream);
	cloningLexer lexer(&stream);
	antlr4::BufferedTokenStream tokenStream(&lexer);
	cloningParser parser(&tokenStream);
	auto tree = parser.parseexpression();
	preProcessExpression(*tree);
	std::cout << "expression after preprocessing:" << std::endl;
	std::cout << tree->getText() << std::endl;
	std::cout << "result:" << std::endl;
	std::cout << sum(*tree);
}
