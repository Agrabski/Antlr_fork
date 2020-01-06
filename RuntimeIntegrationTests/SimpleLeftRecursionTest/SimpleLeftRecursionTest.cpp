#include <iostream>
#include "../SimpleLeftRecursion/SLRParser.h"
#include "../SimpleLeftRecursion/SLRLexer.h"

#define PARSER_DEBUG
int main()
{
	antlr4::ANTLRInputStream stream(std::cin);
	SLRLexer lexer(&stream);
	antlr4::BufferedTokenStream tokenStream(&lexer);
	SLRParser parser(&tokenStream);
	std::cout<<parser.x()->getText();
}
