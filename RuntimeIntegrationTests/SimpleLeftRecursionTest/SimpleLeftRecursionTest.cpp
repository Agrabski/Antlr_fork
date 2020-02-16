#include <iostream>
#include <functional>
#include <array>
#include "../SimpleLeftRecursion/SLRParser.h"
#include "../SimpleLeftRecursion/SLRLexer.h"
#include "../TestUtilities/ApplyTest.hpp"
#include "../TestUtilities/All.hpp"
#include "../TestUtilities/GetDepth.hpp"
#include "../SimpleLeftRecursion/SLRBaseVisitor.h"


bool testAST(std::pair<unsigned int, std::string>&);
bool testASTAll();

bool testGreediness(std::string const& s);
bool testGreedinessAll();

int main()
{
	std::array testers =
	{
		&testGreedinessAll,
		&testASTAll
	};
	return !all(testers);
}

bool testAST(std::pair<unsigned int, std::string>& data)
{
	std::stringstream sstream(data.second);
	antlr4::ANTLRInputStream stream(sstream);
	SLRLexer lexer(&stream);
	antlr4::BufferedTokenStream tokenStream(&lexer);
	SLRParser parser(&tokenStream);
	auto x = getDepth(parser.expression());
	return x == data.first;
}

bool testASTAll()
{
	using p = std::pair<unsigned int, std::string>;
	std::array testData =
	{
		p(2, "1+1"),
		p(3, "1+1+1"),
		p(4, "1+1+1+1"),
		p(2, "2+2"),
		p(3, "32+54+23"),
		p(3, "33+43253452+322222")
	};
	if (applyTest(testData, testAST))
		return true;
	return false;

}

bool testGreedinessAll()
{
	auto testData =
	{
		"1+1",
		"1+1+1",
		"1+1+1+1",
		"2+2",
		"32+54+23",
		"33+43253452+322222"
	};
	return applyTest(testData, testGreediness);
}

bool testGreediness(std::string const& s)
{
	std::stringstream sstream(s);
	antlr4::ANTLRInputStream stream(sstream);
	SLRLexer lexer(&stream);
	antlr4::BufferedTokenStream tokenStream(&lexer);
	SLRParser parser(&tokenStream);
	return parser.expression()->getText() == s;
}
