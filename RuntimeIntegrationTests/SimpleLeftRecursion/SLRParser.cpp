
// Generated from SLR.g4 by ANTLR 4.7.2


#include "SLRListener.h"

#include "SLRParser.h"


using namespace antlrcpp;
using namespace antlr4;

SLRParser::SLRParser(TokenStream* input) : Parser(input)
{
	setInterpreter(std::make_unique<atn::ParserATNSimulator>(this, _atn, _decisionToDFA, _sharedContextCache));
}

std::string SLRParser::getGrammarFileName() const
{
	return "SLR.g4";
}

const std::vector<std::string_view>& SLRParser::getRuleNames() const
{
	return _ruleNames;
}

dfa::Vocabulary& SLRParser::getVocabulary() const
{
	return _vocabulary;
}


//----------------- ExpressionContext ------------------------------------------------------------------

SLRParser::ExpressionContext::ExpressionContext(antlr4::ParserRuleContext* parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

std::vector<tree::TerminalNode*> SLRParser::ExpressionContext::DIGIT()
{
	return getTokens(SLRParser::DIGIT);
}

tree::TerminalNode* SLRParser::ExpressionContext::DIGIT(size_t i)
{
	return getToken(SLRParser::DIGIT, i);
}

std::vector<SLRParser::ExpressionContext*> SLRParser::ExpressionContext::expression()
{
	return getRuleContexts<SLRParser::ExpressionContext>();//1174
}

SLRParser::ExpressionContext* SLRParser::ExpressionContext::expression(size_t i)
{
	return getRuleContext<SLRParser::ExpressionContext>(i);//1183
}


size_t SLRParser::ExpressionContext::getRuleIndex() const
{
	return SLRParser::RuleExpression;//688
}

void SLRParser::ExpressionContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<SLRListener*>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void SLRParser::ExpressionContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<SLRListener*>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


SLRParser::ExpressionContext* SLRParser::expression()
{
	return expression(0, nullptr);//600
}

SLRParser::ExpressionContext* SLRParser::expression(int precedence, antlr4::ParserRuleContext* parent)
{
#ifdef PARSER_DEBUG
	if (parent != nullptr)
		std::cout << parent->getText() << std::endl;
#endif
	antlr4::ParserRuleContext* parentContext = parent;
	size_t parentState = getState();
	auto _localctx = std::make_unique<ExpressionContext>(parentContext, parentState);//610
	auto ctx = _localctx.get();//609
	size_t startState = 0;
	enterRecursionRule(ctx, 0, SLRParser::RuleExpression, precedence);



	auto onExit = finally([=, &_localctx]
	{
		unrollRecursionContexts(parentContext, std::move(_localctx));
	});
	try
	{
		size_t alt;
		enterOuterAlt(ctx, 1);
		setState(6);//865
		_errHandler->sync(this, ctx);
		alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, ctx);
		while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
		{
			if (alt == 1)
			{
				setState(3);//958
				match(SLRParser::DIGIT, ctx);
			}
			setState(8);//875
			_errHandler->sync(this, ctx);
			alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, ctx);
		}
		ctx->stop = _input->LT(-1);
		setState(14);//865
		_errHandler->sync(this, ctx);
		alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, ctx);
		while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
		{
			if (alt == 1)
			{
				if (!_parseListeners.empty())
					triggerExitRuleEvent(ctx);
				auto k = std::make_unique<ExpressionContext>(parentContext, parentState);
				pushNewRecursionContext(std::move(_localctx), k.get(), startState, RuleExpression);
				_localctx = std::move(k);
				ctx = _localctx.get();
				setState(9);//1002

				if (!(precpred(nullptr, 2))) throw FailedPredicateException(this, "precpred(nullptr, 2)", ctx);
				setState(10);//958
				match(SLRParser::T__0, ctx);
				setState(11); //951
				expression(3, ctx);
			}
			setState(16);//875
			_errHandler->sync(this, ctx);
			alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, ctx);
		}
	}
	catch (RecognitionException & e)
	{
		_errHandler->reportError(this, e, ctx);
		if (_localctx != nullptr)
			_localctx->exception = std::current_exception();
		else
			ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}
	onExit();
	return ctx;
}

bool SLRParser::sempred(RuleContext* context, size_t ruleIndex, size_t predicateIndex)
{
	switch (ruleIndex)
	{
	case 0: return expressionSempred(dynamic_cast<ExpressionContext*>(context), predicateIndex);//430

	default:
		break;
	}
	return true;
}

bool SLRParser::expressionSempred(ExpressionContext* _localctx, size_t predicateIndex)
{
	switch (predicateIndex)
	{
	case 0: return precpred(nullptr, 2);

	default:
		break;
	}
	return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> SLRParser::_decisionToDFA;
atn::PredictionContextCache SLRParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN SLRParser::_atn;
std::vector<uint16_t> SLRParser::_serializedATN;

std::vector<std::string_view> SLRParser::_ruleNames =
{
	"expression"
};

std::vector<std::string_view> SLRParser::_literalNames =
{
	"", "'+'"
};

std::vector<std::string_view> SLRParser::_symbolicNames =
{
	"", "", "DIGIT"
};

dfa::Vocabulary SLRParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string_view> SLRParser::_tokenNames;

SLRParser::Initializer::Initializer()
{
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
		}
		else
		{
			_tokenNames.push_back(name);
		}
	}

	_serializedATN =
	{
		0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 0x3,
		0x4, 0x14, 0x4, 0x2, 0x9, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x7, 0xa,
		0x2, 0xc, 0x2, 0xe, 0x2, 0xa, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2,
		0x7, 0x2, 0xf, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x12, 0xb, 0x2, 0x3, 0x2,
		0x2, 0x3, 0x2, 0x3, 0x2, 0x2, 0x2, 0x2, 0x14, 0x2, 0x4, 0x3, 0x2, 0x2,
		0x2, 0x4, 0x8, 0x8, 0x2, 0x1, 0x2, 0x5, 0x7, 0x7, 0x4, 0x2, 0x2, 0x6,
		0x5, 0x3, 0x2, 0x2, 0x2, 0x7, 0xa, 0x3, 0x2, 0x2, 0x2, 0x8, 0x6, 0x3,
		0x2, 0x2, 0x2, 0x8, 0x9, 0x3, 0x2, 0x2, 0x2, 0x9, 0x10, 0x3, 0x2, 0x2,
		0x2, 0xa, 0x8, 0x3, 0x2, 0x2, 0x2, 0xb, 0xc, 0xc, 0x4, 0x2, 0x2, 0xc,
		0xd, 0x7, 0x3, 0x2, 0x2, 0xd, 0xf, 0x5, 0x2, 0x2, 0x5, 0xe, 0xb, 0x3,
		0x2, 0x2, 0x2, 0xf, 0x12, 0x3, 0x2, 0x2, 0x2, 0x10, 0xe, 0x3, 0x2, 0x2,
		0x2, 0x10, 0x11, 0x3, 0x2, 0x2, 0x2, 0x11, 0x3, 0x3, 0x2, 0x2, 0x2, 0x12,
		0x10, 0x3, 0x2, 0x2, 0x2, 0x4, 0x8, 0x10,
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

SLRParser::Initializer SLRParser::_init;
