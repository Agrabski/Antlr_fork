
// Generated from D:\Programming\antlr4\RuntimeIntegrationTests\SimpleLeftRecursion\SLR.g4 by ANTLR 4.7.2


#include "SLRLexer.h"


using namespace antlr4;


SLRLexer::SLRLexer(CharStream *input) : Lexer(input)
{
	setInterpreter(std::make_unique<atn::LexerATNSimulator>(this, _atn, _decisionToDFA, _sharedContextCache));
}

std::string SLRLexer::getGrammarFileName() const
{
	return "SLR.g4";
}

const std::vector<std::string_view>& SLRLexer::getRuleNames() const
{
	return _ruleNames;
}

const std::vector<std::string_view>& SLRLexer::getChannelNames() const
{
	return _channelNames;
}

const std::vector<std::string_view>& SLRLexer::getModeNames() const
{
	return _modeNames;
}

const std::vector<std::string_view>& SLRLexer::getTokenNames() const
{
	return _tokenNames;
}

dfa::Vocabulary& SLRLexer::getVocabulary() const
{
	return _vocabulary;
}

const std::vector<uint16_t> SLRLexer::getSerializedATN() const
{
	return _serializedATN;
}

const atn::ATN& SLRLexer::getATN() const noexcept
{
	return _atn;
}




// Static vars and initialization.
std::vector<dfa::DFA> SLRLexer::_decisionToDFA;
atn::PredictionContextCache SLRLexer::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN SLRLexer::_atn;
std::vector<uint16_t> SLRLexer::_serializedATN;

std::vector<std::string_view> SLRLexer::_ruleNames =
{
	"T__0", "DIGIT"
};

std::vector<std::string_view> SLRLexer::_channelNames =
{
	"DEFAULT_TOKEN_CHANNEL", "HIDDEN"};

std::vector<std::string_view> SLRLexer::_modeNames =
{
	"DEFAULT_MODE"
};

std::vector<std::string_view> SLRLexer::_literalNames =
{
	"", "'+'"
};

std::vector<std::string_view> SLRLexer::_symbolicNames =
{
	"", "", "DIGIT"
};

dfa::Vocabulary SLRLexer::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string_view> SLRLexer::_tokenNames;

SLRLexer::Initializer::Initializer()
{
	// This code could be in a static initializer lambda, but VS doesn't allow access to private class members from there.
	for (size_t i = 0; i < _symbolicNames.size(); ++i)
{
		auto name = _vocabulary.getLiteralName(i);
		if (name.empty())
{
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty())
{
			_tokenNames.push_back("<INVALID>");
		} else
{
			_tokenNames.push_back(name);
		}
	}

	_serializedATN =
	{
		0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 0x2, 
		0x4, 0xb, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x3, 0x2, 
		0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x2, 0x2, 0x4, 0x3, 0x3, 0x5, 0x4, 0x3, 
		0x2, 0x3, 0x3, 0x2, 0x32, 0x3b, 0x2, 0xa, 0x2, 0x3, 0x3, 0x2, 0x2, 0x2, 
		0x2, 0x5, 0x3, 0x2, 0x2, 0x2, 0x3, 0x7, 0x3, 0x2, 0x2, 0x2, 0x5, 0x9, 
		0x3, 0x2, 0x2, 0x2, 0x7, 0x8, 0x7, 0x2d, 0x2, 0x2, 0x8, 0x4, 0x3, 0x2, 
		0x2, 0x2, 0x9, 0xa, 0x9, 0x2, 0x2, 0x2, 0xa, 0x6, 0x3, 0x2, 0x2, 0x2, 
		0x3, 0x2, 0x2, 
	};

	atn::ATNDeserializer deserializer;
	_atn = deserializer.deserialize(_serializedATN);

	size_t count = _atn.getNumberOfDecisions();
	_decisionToDFA.reserve(count);
	for (size_t i = 0; i < count; i++)
	{ 
		_decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
	}
}

SLRLexer::Initializer SLRLexer::_init;
