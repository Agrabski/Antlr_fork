// Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include "AergiaCpp14Parser.h"
#include "AergiaCpp14Lexer.h"

class AntlrHelper
{
	antlr4::ANTLRInputStream _stream;
	AergiaCpp14Lexer _lexer;
	antlr4::CommonTokenStream tokens;
	AergiaCpp14Parser parser;
public:
	AntlrHelper(std::istream& stream) : _stream(stream), _lexer(&_stream), tokens(&_lexer), parser(&tokens)
	{
	}

	AergiaCpp14Parser* getParser() { return &parser; }
};

int main()
{
	std::string s = "int main() {return 0;}";
	std::stringstream stream(s);
	AntlrHelper helper(stream);
	std::cout << helper.getParser()->translationunit()->getText();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
