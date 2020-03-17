// CPPGrammarTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include <array>
#include <algorithm>
#include <chrono>
#include <thread>
#include "../../TestUtilities/ApplyTest.hpp"
#include "../../TestUtilities/All.hpp"
#include "../../TestUtilities/GetDepth.hpp"
#include "../CPPGrammarLib/CPP14Parser.h"
#include "../CPPGrammarLib/CPP14Lexer.h"

std::string const whitespaces = "\t\n ";

bool testGreediness(std::string const& s);




bool testGreedinessAll()
{
	auto testData =
	{
		"int main() {}",
		"int main() {return 1+1+1;}",
		"int main() { if(getNumber() > 5) return getResult(); else throw std::exception();}",
		"int main(){f([](auto a){return get(a);});}",
		"void f(){string.erase(std::remove_if(string.begin(), string.end(), [](auto const a) {return a == ' '; }), string.end()); int n = 3;}",
R"(bool testGreediness(std::string const& s)
{
	std::stringstream sstream(s);
	antlr4::ANTLRInputStream stream(sstream);
	CPP14Lexer lexer(&stream);
	antlr4::BufferedTokenStream tokenStream(&lexer);
	CPP14Parser parser(&tokenStream);
	auto string = parser.expression()->getText();
	string.erase(std::remove_if(string.begin(), string.end(), [](auto const a) {return a == ' '; }), string.end());
	auto k = s;
	k.erase(std::remove_if(k.begin(), k.end(), [](auto const a) {return a == ' '; }), k.end());
	return  string == k;
})",
R"(
template<typename T>
void f(T&a)
{
	a.function<add_const<T>>(a);
}
)",
R"(
bool f(bool a, bool b, bool c)
{
	return a && b || c;
})",
R"(
bool f(bool a, bool b, bool c)
{
	return a ? b : c;
}
)",
R"(
template<typename T>
class test
{
	T _x;
public:
	bool f;
protected:
	double g;
private:
	ns::nss::T _abc;
} a;
)"
	};
	return applyTest(testData, testGreediness);
}

bool testGreediness(std::string const& s)
{
	using std::begin;
	using std::end;
	std::stringstream sstream(s);
	antlr4::ANTLRInputStream stream(sstream);
	CPP14Lexer lexer(&stream);
	antlr4::BufferedTokenStream tokenStream(&lexer);
	CPP14Parser parser(&tokenStream);
	auto isWhitespace = [](char const a) {return std::find(whitespaces.begin(), whitespaces.end(), a) != whitespaces.end(); };
	auto string = parser.translationunit()->getText();
	string.erase(std::remove_if(string.begin(), string.end(), isWhitespace), string.end());
	auto k = s;
	k.erase(std::remove_if(k.begin(), k.end(), isWhitespace), k.end());
	return  string == k;
}




int main()
{
	std::array testers =
	{
		&testGreedinessAll,
	};
	auto x = !all(testers);
	return x;
}

