// CPPGrammarTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include <array>
#include <algorithm>
#include <chrono>
#include <thread>
#include <filesystem>
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
R"(
#include <header>
#ifndef DEBUG
#define X
#endif

bool testGreediness(std::string const& s)
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

bool isCppFile(std::string const extension)
{
	return
		extension == ".cpp" ||
		extension == ".hpp" ||
		extension == ".h" ||
		extension == ".c";
}

bool testGreediness(std::string const& s)
{
	if (s.empty())
		return true;
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


bool testGreedinessFromFile()
{
	if (!std::filesystem::exists("test_data"))
	{
		std::filesystem::create_directory("test_data");
		system("git clone https://github.com/grpc/grpc.git test_data\\grpc");
		system("git clone https://github.com/msgpack/msgpack-c.git test_data\\msgpack");
		system("git clone https://github.com/nlohmann/json.git test_data\\json");
		system("git clone https://github.com/danmar/cppcheck.git test_data\\cppcheck");
		system("git clone https://github.com/gabime/spdlog.git test_data\\spdlog");
	}
	for (auto file : std::filesystem::recursive_directory_iterator("test_data"))
	{
		if (!file.is_directory() && isCppFile(file.path().extension().string()))
		{
			auto filePath = file.path().parent_path() / std::filesystem::path("x.cpp");
			auto command = (std::string("g++ -dD -P -E ") + file.path().string() + " -o " + filePath.string());
			system(command.c_str());
			std::ifstream t(filePath);
			std::string str((std::istreambuf_iterator<char>(t)),
				std::istreambuf_iterator<char>());
			if (str.find("__attribute__") == std::string::npos)
			{
				std::cout << "tested:\t\t";
				if (!testGreediness(str))
					return false;
			}
			else
			{
				std::cout << "rejected:\t\t";
			}
			std::cout << file.path() <<"\r\n";
		}
	}
	return true;
}



int main()
{
	std::array testers =
	{
		&testGreedinessAll,
		&testGreedinessFromFile
	};
	auto x = !all(testers);
	return x;
}

