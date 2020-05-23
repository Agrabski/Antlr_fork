
// Generated from D:\Programming\antlr4\RuntimeIntegrationTests\TreeCloning\CloningTestLib\CloningTest.g4 by ANTLR 4.7.2


#include "CloningTestLexer.h"


using namespace antlr4;


CloningTestLexer::CloningTestLexer(CharStream *input) : Lexer(input)
{
	setInterpreter(std::make_unique<atn::LexerATNSimulator>(this, _atn, _decisionToDFA, _sharedContextCache));
}

std::string CloningTestLexer::getGrammarFileName() const
{
	return "CloningTest.g4";
}

const std::vector<std::string_view>& CloningTestLexer::getRuleNames() const
{
	return _ruleNames;
}

const std::vector<std::string_view>& CloningTestLexer::getChannelNames() const
{
	return _channelNames;
}

const std::vector<std::string_view>& CloningTestLexer::getModeNames() const
{
	return _modeNames;
}

const std::vector<std::string_view>& CloningTestLexer::getTokenNames() const
{
	return _tokenNames;
}

dfa::Vocabulary& CloningTestLexer::getVocabulary() const
{
	return _vocabulary;
}

const std::vector<uint16_t> CloningTestLexer::getSerializedATN() const
{
	return _serializedATN;
}

const atn::ATN& CloningTestLexer::getATN() const noexcept
{
	return _atn;
}




// Static vars and initialization.
std::vector<dfa::DFA> CloningTestLexer::_decisionToDFA;
atn::PredictionContextCache CloningTestLexer::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN CloningTestLexer::_atn;
std::vector<uint16_t> CloningTestLexer::_serializedATN;

std::vector<std::string_view> CloningTestLexer::_ruleNames =
{
	"T__0", "T__1", "T__2", "DIGIT"
};

std::vector<std::string_view> CloningTestLexer::_channelNames =
{
	"DEFAULT_TOKEN_CHANNEL", "HIDDEN"};

std::vector<std::string_view> CloningTestLexer::_modeNames =
{
	"DEFAULT_MODE"
};

std::vector<std::string_view> CloningTestLexer::_literalNames =
{
	"", "'+'", "'('", "')'"
};

std::vector<std::string_view> CloningTestLexer::_symbolicNames =
{
	"", "", "", "", "DIGIT"
};

dfa::Vocabulary CloningTestLexer::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string_view> CloningTestLexer::_tokenNames;

CloningTestLexer::Initializer::Initializer()
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
		0x6, 0x13, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
		0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 
		0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x2, 0x2, 0x6, 0x3, 0x3, 0x5, 
		0x4, 0x7, 0x5, 0x9, 0x6, 0x3, 0x2, 0x3, 0x3, 0x2, 0x32, 0x3b, 0x2, 0x12, 
		0x2, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2, 0x5, 0x3, 0x2, 0x2, 0x2, 0x2, 0x7, 
		0x3, 0x2, 0x2, 0x2, 0x2, 0x9, 0x3, 0x2, 0x2, 0x2, 0x3, 0xb, 0x3, 0x2, 
		0x2, 0x2, 0x5, 0xd, 0x3, 0x2, 0x2, 0x2, 0x7, 0xf, 0x3, 0x2, 0x2, 0x2, 
		0x9, 0x11, 0x3, 0x2, 0x2, 0x2, 0xb, 0xc, 0x7, 0x2d, 0x2, 0x2, 0xc, 0x4, 
		0x3, 0x2, 0x2, 0x2, 0xd, 0xe, 0x7, 0x2a, 0x2, 0x2, 0xe, 0x6, 0x3, 0x2, 
		0x2, 0x2, 0xf, 0x10, 0x7, 0x2b, 0x2, 0x2, 0x10, 0x8, 0x3, 0x2, 0x2, 0x2, 
		0x11, 0x12, 0x9, 0x2, 0x2, 0x2, 0x12, 0xa, 0x3, 0x2, 0x2, 0x2, 0x3, 0x2, 
		0x2, 
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

CloningTestLexer::Initializer CloningTestLexer::_init;
