
// Generated from SimpleLeftRecursion/SLR.g4 by ANTLR 4.7.2

#pragma once
#include <iostream>


#include "antlr4-runtime.h"




class  SLRLexer : public antlr4::Lexer
{
public:
	enum
{
		T__0 = 1, DIGIT = 2
	};

	SLRLexer(antlr4::CharStream *input);

	std::string getGrammarFileName() const final;
	const std::vector<std::string_view>& getRuleNames() const final;

	const std::vector<std::string_view>& getChannelNames() const final;
	const std::vector<std::string_view>& getModeNames() const final;
	const std::vector<std::string_view>& getTokenNames() const final; // deprecated, use vocabulary instead
	antlr4::dfa::Vocabulary& getVocabulary() const final;

	const std::vector<uint16_t> getSerializedATN() const final;
	const antlr4::atn::ATN& getATN() const noexcept final;

private:
	static std::vector<antlr4::dfa::DFA> _decisionToDFA;
	static antlr4::atn::PredictionContextCache _sharedContextCache;
	static std::vector<std::string_view> _ruleNames;
	static std::vector<std::string_view> _tokenNames;
	static std::vector<std::string_view> _channelNames;
	static std::vector<std::string_view> _modeNames;

	static std::vector<std::string_view> _literalNames;
	static std::vector<std::string_view> _symbolicNames;
	static antlr4::dfa::Vocabulary _vocabulary;
	static antlr4::atn::ATN _atn;
	static std::vector<uint16_t> _serializedATN;


	// Individual action functions triggered by action() above.

	// Individual semantic predicate functions triggered by sempred() above.

	struct Initializer
{
		Initializer();
	};
	static Initializer _init;
};

