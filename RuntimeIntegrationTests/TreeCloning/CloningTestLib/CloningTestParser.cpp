
// Generated from D:\Programming\antlr4\RuntimeIntegrationTests\TreeCloning\CloningTestLib\CloningTest.g4 by ANTLR 4.7.2


#include "CloningTestListener.h"
#include "CloningTestVisitor.h"

#include "CloningTestParser.h"


using namespace antlrcpp;
using namespace antlr4;

CloningTestParser::CloningTestParser(TokenStream *input) : Parser(input)
{
	setInterpreter(std::make_unique<atn::ParserATNSimulator>(this, _atn, _decisionToDFA, _sharedContextCache));
}

std::string CloningTestParser::getGrammarFileName() const
{
	return "CloningTest.g4";
}

const std::vector<std::string_view>& CloningTestParser::getRuleNames() const
{
	return _ruleNames;
}

dfa::Vocabulary& CloningTestParser::getVocabulary() const
{
	return _vocabulary;
}


//----------------- ExpressionContext ------------------------------------------------------------------

CloningTestParser::ExpressionContext::ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CloningTestParser::NumberContext* CloningTestParser::ExpressionContext::number()
{
	return getRuleContext<CloningTestParser::NumberContext>(0);//1165
}

CloningTestParser::MultiplicationContext* CloningTestParser::ExpressionContext::multiplication()
{
	return getRuleContext<CloningTestParser::MultiplicationContext>(0);//1165
}

std::vector<CloningTestParser::ExpressionContext *> CloningTestParser::ExpressionContext::expression()
{
	return getRuleContexts<CloningTestParser::ExpressionContext>();//1174
}

CloningTestParser::ExpressionContext* CloningTestParser::ExpressionContext::expression(size_t i)
{
	return getRuleContext<CloningTestParser::ExpressionContext>(i);//1183
}


size_t CloningTestParser::ExpressionContext::getRuleIndex() const
{
	return CloningTestParser::RuleExpression;//688
}

void CloningTestParser::ExpressionContext::copyFrom(ExpressionContext *ctx)
{
	antlr4::ParserRuleContext::copyFrom(ctx);
}

std::unique_ptr<antlr4::tree::ParseTree> CloningTestParser::ExpressionContext::clone(ParseTree* parent) const
{
	auto result = std::make_unique<ExpressionContext>();
	result->copyFrom(this);
	result->parent = parent;
	return result;
}
void CloningTestParser::ExpressionContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CloningTestListener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CloningTestParser::ExpressionContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CloningTestListener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CloningTestParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CloningTestVisitor*>(visitor))//1226
		return parserVisitor->visitExpression(this);
	else
		return visitor->visitChildren(this);
}


CloningTestParser::ExpressionContext* CloningTestParser::expression()
{
	 return expression(0, nullptr);//600
}

CloningTestParser::ExpressionContext* CloningTestParser::expression(int precedence, antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	antlr4::ParserRuleContext *parentContext = parent;
	size_t parentState = getState();
	auto _localctx = std::make_unique<ExpressionContext>(parentContext, parentState);//610
	auto ctx = _localctx.get();//609
	size_t startState = 0;
	enterRecursionRule(ctx, 0, CloningTestParser::RuleExpression, precedence);

		

	auto onExit = finally([=,&_localctx]
{
		unrollRecursionContexts(parentContext, std::move(_localctx));
	});
	try
{
		size_t alt;
		enterOuterAlt(ctx, 1);
		setState(9);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, ctx))
		{
		case 1:
		{
			setState(7); //951
			number(ctx);
			break;
		}

		case 2:
		{
			setState(8); //951
			multiplication(ctx);
			break;
		}

		}
		ctx->stop = _input->LT(-1);
		setState(20);//865
		_errHandler->sync(this, ctx);
		alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, ctx);
		while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
		{
			if (alt == 1)
		{
				if (!_parseListeners.empty())
					triggerExitRuleEvent(ctx);

				auto tmpContext = std::make_unique<ExpressionContext>(parentContext, parentState);
				pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleExpression);//1240
				_localctx = std::move(tmpContext);
				ctx = _localctx.get();
				setState(11);//1002

				if (!(precpred(nullptr, 3))) throw FailedPredicateException(this, "precpred(nullptr, 3)", ctx);
				setState(14); //883
				_errHandler->sync(this, ctx);
				alt = 1;
				do
				{
					switch (alt)
				{
						case 1:
						{
									setState(12);//958
									match(CloningTestParser::T__0,ctx);
									setState(13); //951
									expression(0,ctx);
									break;
								}

					default:
						throw NoViableAltException(this, ctx);
					}
					setState(16); //900
					_errHandler->sync(this, ctx);
					alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, ctx);
				} while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER); 
			}
			setState(22);//875
			_errHandler->sync(this, ctx);
			alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, ctx);
		}
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}
	onExit();
	return ctx;
}

std::unique_ptr< CloningTestParser::ExpressionContext> CloningTestParser::parseexpression()
{
	expression();
	auto result = std::unique_ptr<ExpressionContext>(dynamic_cast<ExpressionContext*>(_root.release()));
	assert(result != nullptr);
	return result;
}

//----------------- MultiplicationContext ------------------------------------------------------------------

CloningTestParser::MultiplicationContext::MultiplicationContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CloningTestParser::NumberContext* CloningTestParser::MultiplicationContext::number()
{
	return getRuleContext<CloningTestParser::NumberContext>(0);//1165
}

CloningTestParser::ExpressionContext* CloningTestParser::MultiplicationContext::expression()
{
	return getRuleContext<CloningTestParser::ExpressionContext>(0);//1165
}


size_t CloningTestParser::MultiplicationContext::getRuleIndex() const
{
	return CloningTestParser::RuleMultiplication;//688
}

void CloningTestParser::MultiplicationContext::copyFrom(MultiplicationContext *ctx)
{
	antlr4::ParserRuleContext::copyFrom(ctx);
}

std::unique_ptr<antlr4::tree::ParseTree> CloningTestParser::MultiplicationContext::clone(ParseTree* parent) const
{
	auto result = std::make_unique<MultiplicationContext>();
	result->copyFrom(this);
	result->parent = parent;
	return result;
}
void CloningTestParser::MultiplicationContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CloningTestListener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CloningTestParser::MultiplicationContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CloningTestListener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CloningTestParser::MultiplicationContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CloningTestVisitor*>(visitor))//1226
		return parserVisitor->visitMultiplication(this);
	else
		return visitor->visitChildren(this);
}

CloningTestParser::MultiplicationContext* CloningTestParser::multiplication( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<MultiplicationContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 2, CloningTestParser::RuleMultiplication);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(23); //951
		number(ctx);
		setState(24);//958
		match(CloningTestParser::T__1,ctx);
		setState(25); //951
		expression(0,ctx);
		setState(26);//958
		match(CloningTestParser::T__2,ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

std::unique_ptr< CloningTestParser::MultiplicationContext> CloningTestParser::parsemultiplication()
{
	multiplication();
	auto result = std::unique_ptr<MultiplicationContext>(dynamic_cast<MultiplicationContext*>(_root.release()));
	assert(result != nullptr);
	return result;
}


//----------------- NumberContext ------------------------------------------------------------------

CloningTestParser::NumberContext::NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

std::vector<tree::TerminalNode *> CloningTestParser::NumberContext::DIGIT()
{
	return getTokens(CloningTestParser::DIGIT);
}

tree::TerminalNode* CloningTestParser::NumberContext::DIGIT(size_t i)
{
	return getToken(CloningTestParser::DIGIT, i);
}


size_t CloningTestParser::NumberContext::getRuleIndex() const
{
	return CloningTestParser::RuleNumber;//688
}

void CloningTestParser::NumberContext::copyFrom(NumberContext *ctx)
{
	antlr4::ParserRuleContext::copyFrom(ctx);
}

std::unique_ptr<antlr4::tree::ParseTree> CloningTestParser::NumberContext::clone(ParseTree* parent) const
{
	auto result = std::make_unique<NumberContext>();
	result->copyFrom(this);
	result->parent = parent;
	return result;
}
void CloningTestParser::NumberContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CloningTestListener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CloningTestParser::NumberContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CloningTestListener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CloningTestParser::NumberContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CloningTestVisitor*>(visitor))//1226
		return parserVisitor->visitNumber(this);
	else
		return visitor->visitChildren(this);
}

CloningTestParser::NumberContext* CloningTestParser::number( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<NumberContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 4, CloningTestParser::RuleNumber);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		size_t alt;
		enterOuterAlt(ctx, 1);
		setState(31);//865
		_errHandler->sync(this, ctx);
		alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, ctx);
		while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
		{
			if (alt == 1)
		{
				setState(28);//958
				match(CloningTestParser::DIGIT,ctx); 
			}
			setState(33);//875
			_errHandler->sync(this, ctx);
			alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, ctx);
		}
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

std::unique_ptr< CloningTestParser::NumberContext> CloningTestParser::parsenumber()
{
	number();
	auto result = std::unique_ptr<NumberContext>(dynamic_cast<NumberContext*>(_root.release()));
	assert(result != nullptr);
	return result;
}


bool CloningTestParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex)
{
	switch (ruleIndex)
{
		case 0: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);//430

	default:
		break;
	}
	return true;
}

bool CloningTestParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex)
{
	switch (predicateIndex)
{
		case 0: return precpred(nullptr, 3);

	default:
		break;
	}
	return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> CloningTestParser::_decisionToDFA;
atn::PredictionContextCache CloningTestParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN CloningTestParser::_atn;
std::vector<uint16_t> CloningTestParser::_serializedATN;

std::vector<std::string_view> CloningTestParser::_ruleNames =
{
	"expression", "multiplication", "number"
};

std::vector<std::string_view> CloningTestParser::_literalNames =
{
	"", "'+'", "'('", "')'"
};

std::vector<std::string_view> CloningTestParser::_symbolicNames =
{
	"", "", "", "", "DIGIT"
};

dfa::Vocabulary CloningTestParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string_view> CloningTestParser::_tokenNames;

CloningTestParser::Initializer::Initializer()
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
		} else
{
			_tokenNames.push_back(name);
		}
	}

	_serializedATN =
	{
		0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 0x3, 
		0x6, 0x25, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 0x4, 
		0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0xc, 0xa, 0x2, 0x3, 0x2, 0x3, 
		0x2, 0x3, 0x2, 0x6, 0x2, 0x11, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x12, 0x7, 
		0x2, 0x15, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x18, 0xb, 0x2, 0x3, 0x3, 0x3, 
		0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x7, 0x4, 0x20, 0xa, 0x4, 
		0xc, 0x4, 0xe, 0x4, 0x23, 0xb, 0x4, 0x3, 0x4, 0x2, 0x3, 0x2, 0x5, 0x2, 
		0x4, 0x6, 0x2, 0x2, 0x2, 0x25, 0x2, 0xb, 0x3, 0x2, 0x2, 0x2, 0x4, 0x19, 
		0x3, 0x2, 0x2, 0x2, 0x6, 0x21, 0x3, 0x2, 0x2, 0x2, 0x8, 0x9, 0x8, 0x2, 
		0x1, 0x2, 0x9, 0xc, 0x5, 0x6, 0x4, 0x2, 0xa, 0xc, 0x5, 0x4, 0x3, 0x2, 
		0xb, 0x8, 0x3, 0x2, 0x2, 0x2, 0xb, 0xa, 0x3, 0x2, 0x2, 0x2, 0xc, 0x16, 
		0x3, 0x2, 0x2, 0x2, 0xd, 0x10, 0xc, 0x5, 0x2, 0x2, 0xe, 0xf, 0x7, 0x3, 
		0x2, 0x2, 0xf, 0x11, 0x5, 0x2, 0x2, 0x2, 0x10, 0xe, 0x3, 0x2, 0x2, 0x2, 
		0x11, 0x12, 0x3, 0x2, 0x2, 0x2, 0x12, 0x10, 0x3, 0x2, 0x2, 0x2, 0x12, 
		0x13, 0x3, 0x2, 0x2, 0x2, 0x13, 0x15, 0x3, 0x2, 0x2, 0x2, 0x14, 0xd, 0x3, 
		0x2, 0x2, 0x2, 0x15, 0x18, 0x3, 0x2, 0x2, 0x2, 0x16, 0x14, 0x3, 0x2, 0x2, 
		0x2, 0x16, 0x17, 0x3, 0x2, 0x2, 0x2, 0x17, 0x3, 0x3, 0x2, 0x2, 0x2, 0x18, 
		0x16, 0x3, 0x2, 0x2, 0x2, 0x19, 0x1a, 0x5, 0x6, 0x4, 0x2, 0x1a, 0x1b, 
		0x7, 0x4, 0x2, 0x2, 0x1b, 0x1c, 0x5, 0x2, 0x2, 0x2, 0x1c, 0x1d, 0x7, 0x5, 
		0x2, 0x2, 0x1d, 0x5, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x20, 0x7, 0x6, 0x2, 0x2, 
		0x1f, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x20, 0x23, 0x3, 0x2, 0x2, 0x2, 0x21, 
		0x1f, 0x3, 0x2, 0x2, 0x2, 0x21, 0x22, 0x3, 0x2, 0x2, 0x2, 0x22, 0x7, 0x3, 
		0x2, 0x2, 0x2, 0x23, 0x21, 0x3, 0x2, 0x2, 0x2, 0x6, 0xb, 0x12, 0x16, 0x21, 
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

CloningTestParser::Initializer CloningTestParser::_init;
