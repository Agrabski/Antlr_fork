#include <iostream>
#include <functional>
#include <array>
#include "../SimpleLeftRecursion/SLRParser.h"
#include "../SimpleLeftRecursion/SLRLexer.h"
#include "../TestUtilities/ApplyTest.hpp"
#include "../TestUtilities/All.hpp"


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
	return false;
}

bool testASTAll()
{
	using p = std::pair<unsigned int, std::string>;
	std::array testData =
	{
		p(1, "1+1"),
		p(1, "1+1+1"),
		p(1, "1+1+1+1"),
		p(1, "2+2"),
		p(1, "32+54+23"),
		p(1, "33+43253452+322222")
	};
	return applyTest(testData, testAST);

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
