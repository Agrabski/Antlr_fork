
// Generated from D:\Programming\antlr4\RuntimeIntegrationTests\CPPGrammar\CPPGrammarLib\CPP14.g4 by ANTLR 4.7.2


#include "CPP14Listener.h"
#include "CPP14Visitor.h"

#include "CPP14Parser.h"


using namespace antlrcpp;
using namespace antlr4;

CPP14Parser::CPP14Parser(TokenStream *input) : Parser(input)
{
	setInterpreter(std::make_unique<atn::ParserATNSimulator>(this, _atn, _decisionToDFA, _sharedContextCache));
}

std::string CPP14Parser::getGrammarFileName() const
{
	return "CPP14.g4";
}

const std::vector<std::string_view>& CPP14Parser::getRuleNames() const
{
	return _ruleNames;
}

dfa::Vocabulary& CPP14Parser::getVocabulary() const
{
	return _vocabulary;
}


//----------------- TranslationunitContext ------------------------------------------------------------------

CPP14Parser::TranslationunitContext::TranslationunitContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::TranslationunitContext::EOF()
{
	return getToken(CPP14Parser::EOF, 0);
}

CPP14Parser::DeclarationseqContext* CPP14Parser::TranslationunitContext::declarationseq()
{
	return getRuleContext<CPP14Parser::DeclarationseqContext>(0);//1165
}


size_t CPP14Parser::TranslationunitContext::getRuleIndex() const
{
	return CPP14Parser::RuleTranslationunit;//688
}

void CPP14Parser::TranslationunitContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::TranslationunitContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::TranslationunitContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitTranslationunit(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::TranslationunitContext* CPP14Parser::translationunit( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<TranslationunitContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 0, CPP14Parser::RuleTranslationunit);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(401);//788
		_errHandler->sync(this, ctx);

		_la = _input->LA(1);
		if ((((_la & ~ 0x3fULL) == 0) &&
			((1ULL << _la) & ((1ULL << CPP14Parser::T__2)
			| (1ULL << CPP14Parser::Alignas)
			| (1ULL << CPP14Parser::Asm)
			| (1ULL << CPP14Parser::Auto)
			| (1ULL << CPP14Parser::Bool)
			| (1ULL << CPP14Parser::Char)
			| (1ULL << CPP14Parser::Char16)
			| (1ULL << CPP14Parser::Char32)
			| (1ULL << CPP14Parser::Class)
			| (1ULL << CPP14Parser::Const)
			| (1ULL << CPP14Parser::Constexpr)
			| (1ULL << CPP14Parser::Decltype)
			| (1ULL << CPP14Parser::Double)
			| (1ULL << CPP14Parser::Enum)
			| (1ULL << CPP14Parser::Explicit)
			| (1ULL << CPP14Parser::Extern)
			| (1ULL << CPP14Parser::Float)
			| (1ULL << CPP14Parser::Friend)
			| (1ULL << CPP14Parser::Inline)
			| (1ULL << CPP14Parser::Int)
			| (1ULL << CPP14Parser::Long)
			| (1ULL << CPP14Parser::Mutable)
			| (1ULL << CPP14Parser::Namespace)
			| (1ULL << CPP14Parser::Operator)
			| (1ULL << CPP14Parser::Register)
			| (1ULL << CPP14Parser::Short)
			| (1ULL << CPP14Parser::Signed)
			| (1ULL << CPP14Parser::Static)
			| (1ULL << CPP14Parser::Static_assert))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
			((1ULL << (_la - 65)) & ((1ULL << (CPP14Parser::Struct - 65))
			| (1ULL << (CPP14Parser::Template - 65))
			| (1ULL << (CPP14Parser::Thread_local - 65))
			| (1ULL << (CPP14Parser::Typedef - 65))
			| (1ULL << (CPP14Parser::Typename_ - 65))
			| (1ULL << (CPP14Parser::Union - 65))
			| (1ULL << (CPP14Parser::Unsigned - 65))
			| (1ULL << (CPP14Parser::Using - 65))
			| (1ULL << (CPP14Parser::Virtual - 65))
			| (1ULL << (CPP14Parser::Void - 65))
			| (1ULL << (CPP14Parser::Volatile - 65))
			| (1ULL << (CPP14Parser::Wchar - 65))
			| (1ULL << (CPP14Parser::LeftParen - 65))
			| (1ULL << (CPP14Parser::LeftBracket - 65))
			| (1ULL << (CPP14Parser::Star - 65))
			| (1ULL << (CPP14Parser::And - 65))
			| (1ULL << (CPP14Parser::Tilde - 65))
			| (1ULL << (CPP14Parser::Doublecolon - 65)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
			((1ULL << (_la - 129)) & ((1ULL << (CPP14Parser::Semi - 129))
			| (1ULL << (CPP14Parser::Ellipsis - 129))
			| (1ULL << (CPP14Parser::Identifier - 129)))) != 0))
		{
			setState(400); //951
			declarationseq(0,ctx);
		}
		setState(403);//958
		match(CPP14Parser::EOF,ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- PrimaryexpressionContext ------------------------------------------------------------------

CPP14Parser::PrimaryexpressionContext::PrimaryexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::LiteralContext* CPP14Parser::PrimaryexpressionContext::literal()
{
	return getRuleContext<CPP14Parser::LiteralContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::PrimaryexpressionContext::This()
{
	return getToken(CPP14Parser::This, 0);
}

tree::TerminalNode* CPP14Parser::PrimaryexpressionContext::LeftParen()
{
	return getToken(CPP14Parser::LeftParen, 0);
}

CPP14Parser::ExpressionContext* CPP14Parser::PrimaryexpressionContext::expression()
{
	return getRuleContext<CPP14Parser::ExpressionContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::PrimaryexpressionContext::RightParen()
{
	return getToken(CPP14Parser::RightParen, 0);
}

CPP14Parser::IdexpressionContext* CPP14Parser::PrimaryexpressionContext::idexpression()
{
	return getRuleContext<CPP14Parser::IdexpressionContext>(0);//1165
}

CPP14Parser::LambdaexpressionContext* CPP14Parser::PrimaryexpressionContext::lambdaexpression()
{
	return getRuleContext<CPP14Parser::LambdaexpressionContext>(0);//1165
}


size_t CPP14Parser::PrimaryexpressionContext::getRuleIndex() const
{
	return CPP14Parser::RulePrimaryexpression;//688
}

void CPP14Parser::PrimaryexpressionContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::PrimaryexpressionContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::PrimaryexpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitPrimaryexpression(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::PrimaryexpressionContext* CPP14Parser::primaryexpression( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<PrimaryexpressionContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 2, CPP14Parser::RulePrimaryexpression);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(413);//750
		_errHandler->sync(this, ctx);
		switch (_input->LA(1))
		{
			case CPP14Parser::False:
			case CPP14Parser::Nullptr:
			case CPP14Parser::True:
			case CPP14Parser::Integerliteral:
			case CPP14Parser::Characterliteral:
			case CPP14Parser::Floatingliteral:
			case CPP14Parser::Stringliteral:
			case CPP14Parser::Userdefinedintegerliteral:
			case CPP14Parser::Userdefinedfloatingliteral:
			case CPP14Parser::Userdefinedstringliteral:
			case CPP14Parser::Userdefinedcharacterliteral:
			{
				enterOuterAlt(ctx, 1);
				setState(405); //951
				literal(ctx);
				break;
			}

			case CPP14Parser::This:
			{
				enterOuterAlt(ctx, 2);
				setState(406);//958
				match(CPP14Parser::This,ctx);
				break;
			}

			case CPP14Parser::LeftParen:
			{
				enterOuterAlt(ctx, 3);
				setState(407);//958
				match(CPP14Parser::LeftParen,ctx);
				setState(408); //951
				expression(0,ctx);
				setState(409);//958
				match(CPP14Parser::RightParen,ctx);
				break;
			}

			case CPP14Parser::Decltype:
			case CPP14Parser::Operator:
			case CPP14Parser::Tilde:
			case CPP14Parser::Doublecolon:
			case CPP14Parser::Identifier:
			{
				enterOuterAlt(ctx, 4);
				setState(411); //951
				idexpression(ctx);
				break;
			}

			case CPP14Parser::LeftBracket:
			{
				enterOuterAlt(ctx, 5);
				setState(412); //951
				lambdaexpression(ctx);
				break;
			}

		default:
			throw NoViableAltException(this, ctx);
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

//----------------- IdexpressionContext ------------------------------------------------------------------

CPP14Parser::IdexpressionContext::IdexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::UnqualifiedidContext* CPP14Parser::IdexpressionContext::unqualifiedid()
{
	return getRuleContext<CPP14Parser::UnqualifiedidContext>(0);//1165
}

CPP14Parser::QualifiedidContext* CPP14Parser::IdexpressionContext::qualifiedid()
{
	return getRuleContext<CPP14Parser::QualifiedidContext>(0);//1165
}


size_t CPP14Parser::IdexpressionContext::getRuleIndex() const
{
	return CPP14Parser::RuleIdexpression;//688
}

void CPP14Parser::IdexpressionContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::IdexpressionContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::IdexpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitIdexpression(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::IdexpressionContext* CPP14Parser::idexpression( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<IdexpressionContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 4, CPP14Parser::RuleIdexpression);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(417);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(415); //951
			unqualifiedid(ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(416); //951
			qualifiedid(ctx);
			break;
		}

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

//----------------- UnqualifiedidContext ------------------------------------------------------------------

CPP14Parser::UnqualifiedidContext::UnqualifiedidContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::UnqualifiedidContext::Identifier()
{
	return getToken(CPP14Parser::Identifier, 0);
}

CPP14Parser::OperatorfunctionidContext* CPP14Parser::UnqualifiedidContext::operatorfunctionid()
{
	return getRuleContext<CPP14Parser::OperatorfunctionidContext>(0);//1165
}

CPP14Parser::ConversionfunctionidContext* CPP14Parser::UnqualifiedidContext::conversionfunctionid()
{
	return getRuleContext<CPP14Parser::ConversionfunctionidContext>(0);//1165
}

CPP14Parser::LiteraloperatoridContext* CPP14Parser::UnqualifiedidContext::literaloperatorid()
{
	return getRuleContext<CPP14Parser::LiteraloperatoridContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::UnqualifiedidContext::Tilde()
{
	return getToken(CPP14Parser::Tilde, 0);
}

CPP14Parser::ClassnameContext* CPP14Parser::UnqualifiedidContext::classname()
{
	return getRuleContext<CPP14Parser::ClassnameContext>(0);//1165
}

CPP14Parser::DecltypespecifierContext* CPP14Parser::UnqualifiedidContext::decltypespecifier()
{
	return getRuleContext<CPP14Parser::DecltypespecifierContext>(0);//1165
}

CPP14Parser::TemplateidContext* CPP14Parser::UnqualifiedidContext::templateid()
{
	return getRuleContext<CPP14Parser::TemplateidContext>(0);//1165
}


size_t CPP14Parser::UnqualifiedidContext::getRuleIndex() const
{
	return CPP14Parser::RuleUnqualifiedid;//688
}

void CPP14Parser::UnqualifiedidContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::UnqualifiedidContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::UnqualifiedidContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitUnqualifiedid(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::UnqualifiedidContext* CPP14Parser::unqualifiedid( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<UnqualifiedidContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 6, CPP14Parser::RuleUnqualifiedid);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(428);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(419);//958
			match(CPP14Parser::Identifier,ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(420); //951
			operatorfunctionid(ctx);
			break;
		}

		case 3:
		{
			enterOuterAlt(ctx, 3);
			setState(421); //951
			conversionfunctionid(ctx);
			break;
		}

		case 4:
		{
			enterOuterAlt(ctx, 4);
			setState(422); //951
			literaloperatorid(ctx);
			break;
		}

		case 5:
		{
			enterOuterAlt(ctx, 5);
			setState(423);//958
			match(CPP14Parser::Tilde,ctx);
			setState(424); //951
			classname(ctx);
			break;
		}

		case 6:
		{
			enterOuterAlt(ctx, 6);
			setState(425);//958
			match(CPP14Parser::Tilde,ctx);
			setState(426); //951
			decltypespecifier(ctx);
			break;
		}

		case 7:
		{
			enterOuterAlt(ctx, 7);
			setState(427); //951
			templateid(ctx);
			break;
		}

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

//----------------- QualifiedidContext ------------------------------------------------------------------

CPP14Parser::QualifiedidContext::QualifiedidContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::NestednamespecifierContext* CPP14Parser::QualifiedidContext::nestednamespecifier()
{
	return getRuleContext<CPP14Parser::NestednamespecifierContext>(0);//1165
}

CPP14Parser::UnqualifiedidContext* CPP14Parser::QualifiedidContext::unqualifiedid()
{
	return getRuleContext<CPP14Parser::UnqualifiedidContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::QualifiedidContext::Template()
{
	return getToken(CPP14Parser::Template, 0);
}


size_t CPP14Parser::QualifiedidContext::getRuleIndex() const
{
	return CPP14Parser::RuleQualifiedid;//688
}

void CPP14Parser::QualifiedidContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::QualifiedidContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::QualifiedidContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitQualifiedid(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::QualifiedidContext* CPP14Parser::qualifiedid( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<QualifiedidContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 8, CPP14Parser::RuleQualifiedid);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(430); //951
		nestednamespecifier(0,ctx);
		setState(432);//788
		_errHandler->sync(this, ctx);

		_la = _input->LA(1);
		if (_la == CPP14Parser::Template)
		{
			setState(431);//958
			match(CPP14Parser::Template,ctx);
		}
		setState(434); //951
		unqualifiedid(ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- NestednamespecifierContext ------------------------------------------------------------------

CPP14Parser::NestednamespecifierContext::NestednamespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::NestednamespecifierContext::Doublecolon()
{
	return getToken(CPP14Parser::Doublecolon, 0);
}

CPP14Parser::ThetypenameContext* CPP14Parser::NestednamespecifierContext::thetypename()
{
	return getRuleContext<CPP14Parser::ThetypenameContext>(0);//1165
}

CPP14Parser::NamespacenameContext* CPP14Parser::NestednamespecifierContext::namespacename()
{
	return getRuleContext<CPP14Parser::NamespacenameContext>(0);//1165
}

CPP14Parser::DecltypespecifierContext* CPP14Parser::NestednamespecifierContext::decltypespecifier()
{
	return getRuleContext<CPP14Parser::DecltypespecifierContext>(0);//1165
}

CPP14Parser::NestednamespecifierContext* CPP14Parser::NestednamespecifierContext::nestednamespecifier()
{
	return getRuleContext<CPP14Parser::NestednamespecifierContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::NestednamespecifierContext::Identifier()
{
	return getToken(CPP14Parser::Identifier, 0);
}

CPP14Parser::SimpletemplateidContext* CPP14Parser::NestednamespecifierContext::simpletemplateid()
{
	return getRuleContext<CPP14Parser::SimpletemplateidContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::NestednamespecifierContext::Template()
{
	return getToken(CPP14Parser::Template, 0);
}


size_t CPP14Parser::NestednamespecifierContext::getRuleIndex() const
{
	return CPP14Parser::RuleNestednamespecifier;//688
}

void CPP14Parser::NestednamespecifierContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::NestednamespecifierContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::NestednamespecifierContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitNestednamespecifier(this);
	else
		return visitor->visitChildren(this);
}


CPP14Parser::NestednamespecifierContext* CPP14Parser::nestednamespecifier()
{
	 return nestednamespecifier(0, nullptr);//600
}

CPP14Parser::NestednamespecifierContext* CPP14Parser::nestednamespecifier(int precedence, antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	antlr4::ParserRuleContext *parentContext = parent;
	size_t parentState = getState();
	auto _localctx = std::make_unique<NestednamespecifierContext>(parentContext, parentState);//610
	auto ctx = _localctx.get();//609
	size_t startState = 10;
	enterRecursionRule(ctx, 10, CPP14Parser::RuleNestednamespecifier, precedence);

		size_t _la = 0;

	auto onExit = finally([=,&_localctx]
{
		unrollRecursionContexts(parentContext, std::move(_localctx));
	});
	try
{
		size_t alt;
		enterOuterAlt(ctx, 1);
		setState(447);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, ctx))
		{
		case 1:
		{
			setState(437);//958
			match(CPP14Parser::Doublecolon,ctx);
			break;
		}

		case 2:
		{
			setState(438); //951
			thetypename(ctx);
			setState(439);//958
			match(CPP14Parser::Doublecolon,ctx);
			break;
		}

		case 3:
		{
			setState(441); //951
			namespacename(ctx);
			setState(442);//958
			match(CPP14Parser::Doublecolon,ctx);
			break;
		}

		case 4:
		{
			setState(444); //951
			decltypespecifier(ctx);
			setState(445);//958
			match(CPP14Parser::Doublecolon,ctx);
			break;
		}

		}
		ctx->stop = _input->LT(-1);
		setState(461);//865
		_errHandler->sync(this, ctx);
		alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, ctx);
		while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
		{
			if (alt == 1)
		{
				if (!_parseListeners.empty())
					triggerExitRuleEvent(ctx);

				setState(459);//830
				_errHandler->sync(this, ctx);
				switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, ctx))
				{
				case 1:
				{
					auto tmpContext = std::make_unique<NestednamespecifierContext>(parentContext, parentState);
					pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleNestednamespecifier);//1240
					_localctx = std::move(tmpContext);
					ctx = _localctx.get();
					setState(449);//1002

					if (!(precpred(nullptr, 2))) throw FailedPredicateException(this, "precpred(nullptr, 2)", ctx);
					setState(450);//958
					match(CPP14Parser::Identifier,ctx);
					setState(451);//958
					match(CPP14Parser::Doublecolon,ctx);
					break;
				}

				case 2:
				{
					auto tmpContext = std::make_unique<NestednamespecifierContext>(parentContext, parentState);
					pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleNestednamespecifier);//1240
					_localctx = std::move(tmpContext);
					ctx = _localctx.get();
					setState(452);//1002

					if (!(precpred(nullptr, 1))) throw FailedPredicateException(this, "precpred(nullptr, 1)", ctx);
					setState(454);//788
					_errHandler->sync(this, ctx);

					_la = _input->LA(1);
					if (_la == CPP14Parser::Template)
					{
						setState(453);//958
						match(CPP14Parser::Template,ctx);
					}
					setState(456); //951
					simpletemplateid(ctx);
					setState(457);//958
					match(CPP14Parser::Doublecolon,ctx);
					break;
				}

				} 
			}
			setState(463);//875
			_errHandler->sync(this, ctx);
			alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, ctx);
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

//----------------- LambdaexpressionContext ------------------------------------------------------------------

CPP14Parser::LambdaexpressionContext::LambdaexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::LambdaintroducerContext* CPP14Parser::LambdaexpressionContext::lambdaintroducer()
{
	return getRuleContext<CPP14Parser::LambdaintroducerContext>(0);//1165
}

CPP14Parser::CompoundstatementContext* CPP14Parser::LambdaexpressionContext::compoundstatement()
{
	return getRuleContext<CPP14Parser::CompoundstatementContext>(0);//1165
}

CPP14Parser::LambdadeclaratorContext* CPP14Parser::LambdaexpressionContext::lambdadeclarator()
{
	return getRuleContext<CPP14Parser::LambdadeclaratorContext>(0);//1165
}


size_t CPP14Parser::LambdaexpressionContext::getRuleIndex() const
{
	return CPP14Parser::RuleLambdaexpression;//688
}

void CPP14Parser::LambdaexpressionContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::LambdaexpressionContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::LambdaexpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitLambdaexpression(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::LambdaexpressionContext* CPP14Parser::lambdaexpression( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<LambdaexpressionContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 12, CPP14Parser::RuleLambdaexpression);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(464); //951
		lambdaintroducer(ctx);
		setState(466);//788
		_errHandler->sync(this, ctx);

		_la = _input->LA(1);
		if (_la == CPP14Parser::LeftParen)
		{
			setState(465); //951
			lambdadeclarator(ctx);
		}
		setState(468); //951
		compoundstatement(ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- LambdaintroducerContext ------------------------------------------------------------------

CPP14Parser::LambdaintroducerContext::LambdaintroducerContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::LambdaintroducerContext::LeftBracket()
{
	return getToken(CPP14Parser::LeftBracket, 0);
}

tree::TerminalNode* CPP14Parser::LambdaintroducerContext::RightBracket()
{
	return getToken(CPP14Parser::RightBracket, 0);
}

CPP14Parser::LambdacaptureContext* CPP14Parser::LambdaintroducerContext::lambdacapture()
{
	return getRuleContext<CPP14Parser::LambdacaptureContext>(0);//1165
}


size_t CPP14Parser::LambdaintroducerContext::getRuleIndex() const
{
	return CPP14Parser::RuleLambdaintroducer;//688
}

void CPP14Parser::LambdaintroducerContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::LambdaintroducerContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::LambdaintroducerContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitLambdaintroducer(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::LambdaintroducerContext* CPP14Parser::lambdaintroducer( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<LambdaintroducerContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 14, CPP14Parser::RuleLambdaintroducer);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(470);//958
		match(CPP14Parser::LeftBracket,ctx);
		setState(472);//788
		_errHandler->sync(this, ctx);

		_la = _input->LA(1);
		if (((((_la - 68) & ~ 0x3fULL) == 0) &&
			((1ULL << (_la - 68)) & ((1ULL << (CPP14Parser::This - 68))
			| (1ULL << (CPP14Parser::And - 68))
			| (1ULL << (CPP14Parser::Assign - 68)))) != 0) || _la == CPP14Parser::Identifier)
		{
			setState(471); //951
			lambdacapture(ctx);
		}
		setState(474);//958
		match(CPP14Parser::RightBracket,ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- LambdacaptureContext ------------------------------------------------------------------

CPP14Parser::LambdacaptureContext::LambdacaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::CapturedefaultContext* CPP14Parser::LambdacaptureContext::capturedefault()
{
	return getRuleContext<CPP14Parser::CapturedefaultContext>(0);//1165
}

CPP14Parser::CapturelistContext* CPP14Parser::LambdacaptureContext::capturelist()
{
	return getRuleContext<CPP14Parser::CapturelistContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::LambdacaptureContext::Comma()
{
	return getToken(CPP14Parser::Comma, 0);
}


size_t CPP14Parser::LambdacaptureContext::getRuleIndex() const
{
	return CPP14Parser::RuleLambdacapture;//688
}

void CPP14Parser::LambdacaptureContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::LambdacaptureContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::LambdacaptureContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitLambdacapture(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::LambdacaptureContext* CPP14Parser::lambdacapture( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<LambdacaptureContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 16, CPP14Parser::RuleLambdacapture);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(482);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(476); //951
			capturedefault(ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(477); //951
			capturelist(0,ctx);
			break;
		}

		case 3:
		{
			enterOuterAlt(ctx, 3);
			setState(478); //951
			capturedefault(ctx);
			setState(479);//958
			match(CPP14Parser::Comma,ctx);
			setState(480); //951
			capturelist(0,ctx);
			break;
		}

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

//----------------- CapturedefaultContext ------------------------------------------------------------------

CPP14Parser::CapturedefaultContext::CapturedefaultContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::CapturedefaultContext::And()
{
	return getToken(CPP14Parser::And, 0);
}

tree::TerminalNode* CPP14Parser::CapturedefaultContext::Assign()
{
	return getToken(CPP14Parser::Assign, 0);
}


size_t CPP14Parser::CapturedefaultContext::getRuleIndex() const
{
	return CPP14Parser::RuleCapturedefault;//688
}

void CPP14Parser::CapturedefaultContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::CapturedefaultContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::CapturedefaultContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitCapturedefault(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::CapturedefaultContext* CPP14Parser::capturedefault( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<CapturedefaultContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 18, CPP14Parser::RuleCapturedefault);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(484);//970
		_la = _input->LA(1);
		if (!(_la == CPP14Parser::And

		|| _la == CPP14Parser::Assign))
		{
		_errHandler->recoverInline(this, ctx);
		}
		else
		{
			_errHandler->reportMatch(this);
			consume(ctx);
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

//----------------- CapturelistContext ------------------------------------------------------------------

CPP14Parser::CapturelistContext::CapturelistContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::CaptureContext* CPP14Parser::CapturelistContext::capture()
{
	return getRuleContext<CPP14Parser::CaptureContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::CapturelistContext::Ellipsis()
{
	return getToken(CPP14Parser::Ellipsis, 0);
}

CPP14Parser::CapturelistContext* CPP14Parser::CapturelistContext::capturelist()
{
	return getRuleContext<CPP14Parser::CapturelistContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::CapturelistContext::Comma()
{
	return getToken(CPP14Parser::Comma, 0);
}


size_t CPP14Parser::CapturelistContext::getRuleIndex() const
{
	return CPP14Parser::RuleCapturelist;//688
}

void CPP14Parser::CapturelistContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::CapturelistContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::CapturelistContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitCapturelist(this);
	else
		return visitor->visitChildren(this);
}


CPP14Parser::CapturelistContext* CPP14Parser::capturelist()
{
	 return capturelist(0, nullptr);//600
}

CPP14Parser::CapturelistContext* CPP14Parser::capturelist(int precedence, antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	antlr4::ParserRuleContext *parentContext = parent;
	size_t parentState = getState();
	auto _localctx = std::make_unique<CapturelistContext>(parentContext, parentState);//610
	auto ctx = _localctx.get();//609
	size_t startState = 20;
	enterRecursionRule(ctx, 20, CPP14Parser::RuleCapturelist, precedence);

		

	auto onExit = finally([=,&_localctx]
{
		unrollRecursionContexts(parentContext, std::move(_localctx));
	});
	try
{
		size_t alt;
		enterOuterAlt(ctx, 1);
		setState(487); //951
		capture(ctx);
		setState(489);//848
		_errHandler->sync(this, ctx);

		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, ctx))
		{
		case 1:
		{
			setState(488);//958
			match(CPP14Parser::Ellipsis,ctx);
			break;
		}

		}
		ctx->stop = _input->LT(-1);
		setState(499);//865
		_errHandler->sync(this, ctx);
		alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, ctx);
		while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
		{
			if (alt == 1)
		{
				if (!_parseListeners.empty())
					triggerExitRuleEvent(ctx);

				auto tmpContext = std::make_unique<CapturelistContext>(parentContext, parentState);
				pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleCapturelist);//1240
				_localctx = std::move(tmpContext);
				ctx = _localctx.get();
				setState(491);//1002

				if (!(precpred(nullptr, 1))) throw FailedPredicateException(this, "precpred(nullptr, 1)", ctx);
				setState(492);//958
				match(CPP14Parser::Comma,ctx);
				setState(493); //951
				capture(ctx);
				setState(495);//848
				_errHandler->sync(this, ctx);

				switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, ctx))
				{
				case 1:
				{
					setState(494);//958
					match(CPP14Parser::Ellipsis,ctx);
					break;
				}

				} 
			}
			setState(501);//875
			_errHandler->sync(this, ctx);
			alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, ctx);
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

//----------------- CaptureContext ------------------------------------------------------------------

CPP14Parser::CaptureContext::CaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::SimplecaptureContext* CPP14Parser::CaptureContext::simplecapture()
{
	return getRuleContext<CPP14Parser::SimplecaptureContext>(0);//1165
}

CPP14Parser::InitcaptureContext* CPP14Parser::CaptureContext::initcapture()
{
	return getRuleContext<CPP14Parser::InitcaptureContext>(0);//1165
}


size_t CPP14Parser::CaptureContext::getRuleIndex() const
{
	return CPP14Parser::RuleCapture;//688
}

void CPP14Parser::CaptureContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::CaptureContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::CaptureContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitCapture(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::CaptureContext* CPP14Parser::capture( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<CaptureContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 22, CPP14Parser::RuleCapture);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(504);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(502); //951
			simplecapture(ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(503); //951
			initcapture(ctx);
			break;
		}

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

//----------------- SimplecaptureContext ------------------------------------------------------------------

CPP14Parser::SimplecaptureContext::SimplecaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::SimplecaptureContext::Identifier()
{
	return getToken(CPP14Parser::Identifier, 0);
}

tree::TerminalNode* CPP14Parser::SimplecaptureContext::And()
{
	return getToken(CPP14Parser::And, 0);
}

tree::TerminalNode* CPP14Parser::SimplecaptureContext::This()
{
	return getToken(CPP14Parser::This, 0);
}


size_t CPP14Parser::SimplecaptureContext::getRuleIndex() const
{
	return CPP14Parser::RuleSimplecapture;//688
}

void CPP14Parser::SimplecaptureContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::SimplecaptureContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::SimplecaptureContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitSimplecapture(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::SimplecaptureContext* CPP14Parser::simplecapture( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<SimplecaptureContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 24, CPP14Parser::RuleSimplecapture);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(510);//750
		_errHandler->sync(this, ctx);
		switch (_input->LA(1))
		{
			case CPP14Parser::Identifier:
			{
				enterOuterAlt(ctx, 1);
				setState(506);//958
				match(CPP14Parser::Identifier,ctx);
				break;
			}

			case CPP14Parser::And:
			{
				enterOuterAlt(ctx, 2);
				setState(507);//958
				match(CPP14Parser::And,ctx);
				setState(508);//958
				match(CPP14Parser::Identifier,ctx);
				break;
			}

			case CPP14Parser::This:
			{
				enterOuterAlt(ctx, 3);
				setState(509);//958
				match(CPP14Parser::This,ctx);
				break;
			}

		default:
			throw NoViableAltException(this, ctx);
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

//----------------- InitcaptureContext ------------------------------------------------------------------

CPP14Parser::InitcaptureContext::InitcaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::InitcaptureContext::Identifier()
{
	return getToken(CPP14Parser::Identifier, 0);
}

CPP14Parser::InitializerContext* CPP14Parser::InitcaptureContext::initializer()
{
	return getRuleContext<CPP14Parser::InitializerContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::InitcaptureContext::And()
{
	return getToken(CPP14Parser::And, 0);
}


size_t CPP14Parser::InitcaptureContext::getRuleIndex() const
{
	return CPP14Parser::RuleInitcapture;//688
}

void CPP14Parser::InitcaptureContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::InitcaptureContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::InitcaptureContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitInitcapture(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::InitcaptureContext* CPP14Parser::initcapture( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<InitcaptureContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 26, CPP14Parser::RuleInitcapture);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(517);//750
		_errHandler->sync(this, ctx);
		switch (_input->LA(1))
		{
			case CPP14Parser::Identifier:
			{
				enterOuterAlt(ctx, 1);
				setState(512);//958
				match(CPP14Parser::Identifier,ctx);
				setState(513); //951
				initializer(ctx);
				break;
			}

			case CPP14Parser::And:
			{
				enterOuterAlt(ctx, 2);
				setState(514);//958
				match(CPP14Parser::And,ctx);
				setState(515);//958
				match(CPP14Parser::Identifier,ctx);
				setState(516); //951
				initializer(ctx);
				break;
			}

		default:
			throw NoViableAltException(this, ctx);
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

//----------------- LambdadeclaratorContext ------------------------------------------------------------------

CPP14Parser::LambdadeclaratorContext::LambdadeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::LambdadeclaratorContext::LeftParen()
{
	return getToken(CPP14Parser::LeftParen, 0);
}

CPP14Parser::ParameterdeclarationclauseContext* CPP14Parser::LambdadeclaratorContext::parameterdeclarationclause()
{
	return getRuleContext<CPP14Parser::ParameterdeclarationclauseContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::LambdadeclaratorContext::RightParen()
{
	return getToken(CPP14Parser::RightParen, 0);
}

tree::TerminalNode* CPP14Parser::LambdadeclaratorContext::Mutable()
{
	return getToken(CPP14Parser::Mutable, 0);
}

CPP14Parser::ExceptionspecificationContext* CPP14Parser::LambdadeclaratorContext::exceptionspecification()
{
	return getRuleContext<CPP14Parser::ExceptionspecificationContext>(0);//1165
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::LambdadeclaratorContext::attributespecifierseq()
{
	return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);//1165
}

CPP14Parser::TrailingreturntypeContext* CPP14Parser::LambdadeclaratorContext::trailingreturntype()
{
	return getRuleContext<CPP14Parser::TrailingreturntypeContext>(0);//1165
}


size_t CPP14Parser::LambdadeclaratorContext::getRuleIndex() const
{
	return CPP14Parser::RuleLambdadeclarator;//688
}

void CPP14Parser::LambdadeclaratorContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::LambdadeclaratorContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::LambdadeclaratorContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitLambdadeclarator(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::LambdadeclaratorContext* CPP14Parser::lambdadeclarator( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<LambdadeclaratorContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 28, CPP14Parser::RuleLambdadeclarator);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(519);//958
		match(CPP14Parser::LeftParen,ctx);
		setState(520); //951
		parameterdeclarationclause(ctx);
		setState(521);//958
		match(CPP14Parser::RightParen,ctx);
		setState(523);//788
		_errHandler->sync(this, ctx);

		_la = _input->LA(1);
		if (_la == CPP14Parser::Mutable)
		{
			setState(522);//958
			match(CPP14Parser::Mutable,ctx);
		}
		setState(526);//788
		_errHandler->sync(this, ctx);

		_la = _input->LA(1);
		if (_la == CPP14Parser::Noexcept

		|| _la == CPP14Parser::Throw)
		{
			setState(525); //951
			exceptionspecification(ctx);
		}
		setState(529);//788
		_errHandler->sync(this, ctx);

		_la = _input->LA(1);
		if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket)
		{
			setState(528); //951
			attributespecifierseq(0,ctx);
		}
		setState(532);//788
		_errHandler->sync(this, ctx);

		_la = _input->LA(1);
		if (_la == CPP14Parser::Arrow)
		{
			setState(531); //951
			trailingreturntype(ctx);
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

//----------------- PostfixexpressionContext ------------------------------------------------------------------

CPP14Parser::PostfixexpressionContext::PostfixexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::PrimaryexpressionContext* CPP14Parser::PostfixexpressionContext::primaryexpression()
{
	return getRuleContext<CPP14Parser::PrimaryexpressionContext>(0);//1165
}

CPP14Parser::SimpletypespecifierContext* CPP14Parser::PostfixexpressionContext::simpletypespecifier()
{
	return getRuleContext<CPP14Parser::SimpletypespecifierContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::PostfixexpressionContext::LeftParen()
{
	return getToken(CPP14Parser::LeftParen, 0);
}

tree::TerminalNode* CPP14Parser::PostfixexpressionContext::RightParen()
{
	return getToken(CPP14Parser::RightParen, 0);
}

CPP14Parser::ExpressionlistContext* CPP14Parser::PostfixexpressionContext::expressionlist()
{
	return getRuleContext<CPP14Parser::ExpressionlistContext>(0);//1165
}

CPP14Parser::TypenamespecifierContext* CPP14Parser::PostfixexpressionContext::typenamespecifier()
{
	return getRuleContext<CPP14Parser::TypenamespecifierContext>(0);//1165
}

CPP14Parser::BracedinitlistContext* CPP14Parser::PostfixexpressionContext::bracedinitlist()
{
	return getRuleContext<CPP14Parser::BracedinitlistContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::PostfixexpressionContext::Dynamic_cast()
{
	return getToken(CPP14Parser::Dynamic_cast, 0);
}

tree::TerminalNode* CPP14Parser::PostfixexpressionContext::Less()
{
	return getToken(CPP14Parser::Less, 0);
}

CPP14Parser::ThetypeidContext* CPP14Parser::PostfixexpressionContext::thetypeid()
{
	return getRuleContext<CPP14Parser::ThetypeidContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::PostfixexpressionContext::Greater()
{
	return getToken(CPP14Parser::Greater, 0);
}

CPP14Parser::ExpressionContext* CPP14Parser::PostfixexpressionContext::expression()
{
	return getRuleContext<CPP14Parser::ExpressionContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::PostfixexpressionContext::Static_cast()
{
	return getToken(CPP14Parser::Static_cast, 0);
}

tree::TerminalNode* CPP14Parser::PostfixexpressionContext::Reinterpret_cast()
{
	return getToken(CPP14Parser::Reinterpret_cast, 0);
}

tree::TerminalNode* CPP14Parser::PostfixexpressionContext::Const_cast()
{
	return getToken(CPP14Parser::Const_cast, 0);
}

CPP14Parser::TypeidofthetypeidContext* CPP14Parser::PostfixexpressionContext::typeidofthetypeid()
{
	return getRuleContext<CPP14Parser::TypeidofthetypeidContext>(0);//1165
}

CPP14Parser::PostfixexpressionContext* CPP14Parser::PostfixexpressionContext::postfixexpression()
{
	return getRuleContext<CPP14Parser::PostfixexpressionContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::PostfixexpressionContext::LeftBracket()
{
	return getToken(CPP14Parser::LeftBracket, 0);
}

tree::TerminalNode* CPP14Parser::PostfixexpressionContext::RightBracket()
{
	return getToken(CPP14Parser::RightBracket, 0);
}

tree::TerminalNode* CPP14Parser::PostfixexpressionContext::Dot()
{
	return getToken(CPP14Parser::Dot, 0);
}

CPP14Parser::IdexpressionContext* CPP14Parser::PostfixexpressionContext::idexpression()
{
	return getRuleContext<CPP14Parser::IdexpressionContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::PostfixexpressionContext::Template()
{
	return getToken(CPP14Parser::Template, 0);
}

tree::TerminalNode* CPP14Parser::PostfixexpressionContext::Arrow()
{
	return getToken(CPP14Parser::Arrow, 0);
}

CPP14Parser::PseudodestructornameContext* CPP14Parser::PostfixexpressionContext::pseudodestructorname()
{
	return getRuleContext<CPP14Parser::PseudodestructornameContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::PostfixexpressionContext::PlusPlus()
{
	return getToken(CPP14Parser::PlusPlus, 0);
}

tree::TerminalNode* CPP14Parser::PostfixexpressionContext::MinusMinus()
{
	return getToken(CPP14Parser::MinusMinus, 0);
}


size_t CPP14Parser::PostfixexpressionContext::getRuleIndex() const
{
	return CPP14Parser::RulePostfixexpression;//688
}

void CPP14Parser::PostfixexpressionContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::PostfixexpressionContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::PostfixexpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitPostfixexpression(this);
	else
		return visitor->visitChildren(this);
}


CPP14Parser::PostfixexpressionContext* CPP14Parser::postfixexpression()
{
	 return postfixexpression(0, nullptr);//600
}

CPP14Parser::PostfixexpressionContext* CPP14Parser::postfixexpression(int precedence, antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	antlr4::ParserRuleContext *parentContext = parent;
	size_t parentState = getState();
	auto _localctx = std::make_unique<PostfixexpressionContext>(parentContext, parentState);//610
	auto ctx = _localctx.get();//609
	size_t startState = 30;
	enterRecursionRule(ctx, 30, CPP14Parser::RulePostfixexpression, precedence);

		size_t _la = 0;

	auto onExit = finally([=,&_localctx]
{
		unrollRecursionContexts(parentContext, std::move(_localctx));
	});
	try
{
		size_t alt;
		enterOuterAlt(ctx, 1);
		setState(598);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, ctx))
		{
		case 1:
		{
			setState(535); //951
			primaryexpression(ctx);
			break;
		}

		case 2:
		{
			setState(536); //951
			simpletypespecifier(ctx);
			setState(537);//958
			match(CPP14Parser::LeftParen,ctx);
			setState(539);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if ((((_la & ~ 0x3fULL) == 0) &&
				((1ULL << _la) & ((1ULL << CPP14Parser::T__0)
				| (1ULL << CPP14Parser::T__1)
				| (1ULL << CPP14Parser::Alignof)
				| (1ULL << CPP14Parser::Auto)
				| (1ULL << CPP14Parser::Bool)
				| (1ULL << CPP14Parser::Char)
				| (1ULL << CPP14Parser::Char16)
				| (1ULL << CPP14Parser::Char32)
				| (1ULL << CPP14Parser::Const_cast)
				| (1ULL << CPP14Parser::Decltype)
				| (1ULL << CPP14Parser::Delete)
				| (1ULL << CPP14Parser::Double)
				| (1ULL << CPP14Parser::Dynamic_cast)
				| (1ULL << CPP14Parser::False)
				| (1ULL << CPP14Parser::Float)
				| (1ULL << CPP14Parser::Int)
				| (1ULL << CPP14Parser::Long)
				| (1ULL << CPP14Parser::New)
				| (1ULL << CPP14Parser::Noexcept)
				| (1ULL << CPP14Parser::Nullptr)
				| (1ULL << CPP14Parser::Operator)
				| (1ULL << CPP14Parser::Reinterpret_cast)
				| (1ULL << CPP14Parser::Short)
				| (1ULL << CPP14Parser::Signed)
				| (1ULL << CPP14Parser::Sizeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
				((1ULL << (_la - 64)) & ((1ULL << (CPP14Parser::Static_cast - 64))
				| (1ULL << (CPP14Parser::This - 64))
				| (1ULL << (CPP14Parser::Throw - 64))
				| (1ULL << (CPP14Parser::True - 64))
				| (1ULL << (CPP14Parser::Typeid_ - 64))
				| (1ULL << (CPP14Parser::Typename_ - 64))
				| (1ULL << (CPP14Parser::Unsigned - 64))
				| (1ULL << (CPP14Parser::Void - 64))
				| (1ULL << (CPP14Parser::Wchar - 64))
				| (1ULL << (CPP14Parser::LeftParen - 64))
				| (1ULL << (CPP14Parser::LeftBracket - 64))
				| (1ULL << (CPP14Parser::LeftBrace - 64))
				| (1ULL << (CPP14Parser::Plus - 64))
				| (1ULL << (CPP14Parser::Minus - 64))
				| (1ULL << (CPP14Parser::Star - 64))
				| (1ULL << (CPP14Parser::And - 64))
				| (1ULL << (CPP14Parser::Or - 64))
				| (1ULL << (CPP14Parser::Tilde - 64))
				| (1ULL << (CPP14Parser::PlusPlus - 64))
				| (1ULL << (CPP14Parser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
				((1ULL << (_la - 128)) & ((1ULL << (CPP14Parser::Doublecolon - 128))
				| (1ULL << (CPP14Parser::Identifier - 128))
				| (1ULL << (CPP14Parser::Integerliteral - 128))
				| (1ULL << (CPP14Parser::Characterliteral - 128))
				| (1ULL << (CPP14Parser::Floatingliteral - 128))
				| (1ULL << (CPP14Parser::Stringliteral - 128))
				| (1ULL << (CPP14Parser::Userdefinedintegerliteral - 128))
				| (1ULL << (CPP14Parser::Userdefinedfloatingliteral - 128))
				| (1ULL << (CPP14Parser::Userdefinedstringliteral - 128))
				| (1ULL << (CPP14Parser::Userdefinedcharacterliteral - 128)))) != 0))
			{
				setState(538); //951
				expressionlist(ctx);
			}
			setState(541);//958
			match(CPP14Parser::RightParen,ctx);
			break;
		}

		case 3:
		{
			setState(543); //951
			typenamespecifier(ctx);
			setState(544);//958
			match(CPP14Parser::LeftParen,ctx);
			setState(546);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if ((((_la & ~ 0x3fULL) == 0) &&
				((1ULL << _la) & ((1ULL << CPP14Parser::T__0)
				| (1ULL << CPP14Parser::T__1)
				| (1ULL << CPP14Parser::Alignof)
				| (1ULL << CPP14Parser::Auto)
				| (1ULL << CPP14Parser::Bool)
				| (1ULL << CPP14Parser::Char)
				| (1ULL << CPP14Parser::Char16)
				| (1ULL << CPP14Parser::Char32)
				| (1ULL << CPP14Parser::Const_cast)
				| (1ULL << CPP14Parser::Decltype)
				| (1ULL << CPP14Parser::Delete)
				| (1ULL << CPP14Parser::Double)
				| (1ULL << CPP14Parser::Dynamic_cast)
				| (1ULL << CPP14Parser::False)
				| (1ULL << CPP14Parser::Float)
				| (1ULL << CPP14Parser::Int)
				| (1ULL << CPP14Parser::Long)
				| (1ULL << CPP14Parser::New)
				| (1ULL << CPP14Parser::Noexcept)
				| (1ULL << CPP14Parser::Nullptr)
				| (1ULL << CPP14Parser::Operator)
				| (1ULL << CPP14Parser::Reinterpret_cast)
				| (1ULL << CPP14Parser::Short)
				| (1ULL << CPP14Parser::Signed)
				| (1ULL << CPP14Parser::Sizeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
				((1ULL << (_la - 64)) & ((1ULL << (CPP14Parser::Static_cast - 64))
				| (1ULL << (CPP14Parser::This - 64))
				| (1ULL << (CPP14Parser::Throw - 64))
				| (1ULL << (CPP14Parser::True - 64))
				| (1ULL << (CPP14Parser::Typeid_ - 64))
				| (1ULL << (CPP14Parser::Typename_ - 64))
				| (1ULL << (CPP14Parser::Unsigned - 64))
				| (1ULL << (CPP14Parser::Void - 64))
				| (1ULL << (CPP14Parser::Wchar - 64))
				| (1ULL << (CPP14Parser::LeftParen - 64))
				| (1ULL << (CPP14Parser::LeftBracket - 64))
				| (1ULL << (CPP14Parser::LeftBrace - 64))
				| (1ULL << (CPP14Parser::Plus - 64))
				| (1ULL << (CPP14Parser::Minus - 64))
				| (1ULL << (CPP14Parser::Star - 64))
				| (1ULL << (CPP14Parser::And - 64))
				| (1ULL << (CPP14Parser::Or - 64))
				| (1ULL << (CPP14Parser::Tilde - 64))
				| (1ULL << (CPP14Parser::PlusPlus - 64))
				| (1ULL << (CPP14Parser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
				((1ULL << (_la - 128)) & ((1ULL << (CPP14Parser::Doublecolon - 128))
				| (1ULL << (CPP14Parser::Identifier - 128))
				| (1ULL << (CPP14Parser::Integerliteral - 128))
				| (1ULL << (CPP14Parser::Characterliteral - 128))
				| (1ULL << (CPP14Parser::Floatingliteral - 128))
				| (1ULL << (CPP14Parser::Stringliteral - 128))
				| (1ULL << (CPP14Parser::Userdefinedintegerliteral - 128))
				| (1ULL << (CPP14Parser::Userdefinedfloatingliteral - 128))
				| (1ULL << (CPP14Parser::Userdefinedstringliteral - 128))
				| (1ULL << (CPP14Parser::Userdefinedcharacterliteral - 128)))) != 0))
			{
				setState(545); //951
				expressionlist(ctx);
			}
			setState(548);//958
			match(CPP14Parser::RightParen,ctx);
			break;
		}

		case 4:
		{
			setState(550); //951
			simpletypespecifier(ctx);
			setState(551); //951
			bracedinitlist(ctx);
			break;
		}

		case 5:
		{
			setState(553); //951
			typenamespecifier(ctx);
			setState(554); //951
			bracedinitlist(ctx);
			break;
		}

		case 6:
		{
			setState(556);//958
			match(CPP14Parser::Dynamic_cast,ctx);
			setState(557);//958
			match(CPP14Parser::Less,ctx);
			setState(558); //951
			thetypeid(ctx);
			setState(559);//958
			match(CPP14Parser::Greater,ctx);
			setState(560);//958
			match(CPP14Parser::LeftParen,ctx);
			setState(561); //951
			expression(0,ctx);
			setState(562);//958
			match(CPP14Parser::RightParen,ctx);
			break;
		}

		case 7:
		{
			setState(564);//958
			match(CPP14Parser::Static_cast,ctx);
			setState(565);//958
			match(CPP14Parser::Less,ctx);
			setState(566); //951
			thetypeid(ctx);
			setState(567);//958
			match(CPP14Parser::Greater,ctx);
			setState(568);//958
			match(CPP14Parser::LeftParen,ctx);
			setState(569); //951
			expression(0,ctx);
			setState(570);//958
			match(CPP14Parser::RightParen,ctx);
			break;
		}

		case 8:
		{
			setState(572);//958
			match(CPP14Parser::Reinterpret_cast,ctx);
			setState(573);//958
			match(CPP14Parser::Less,ctx);
			setState(574); //951
			thetypeid(ctx);
			setState(575);//958
			match(CPP14Parser::Greater,ctx);
			setState(576);//958
			match(CPP14Parser::LeftParen,ctx);
			setState(577); //951
			expression(0,ctx);
			setState(578);//958
			match(CPP14Parser::RightParen,ctx);
			break;
		}

		case 9:
		{
			setState(580);//958
			match(CPP14Parser::Const_cast,ctx);
			setState(581);//958
			match(CPP14Parser::Less,ctx);
			setState(582); //951
			thetypeid(ctx);
			setState(583);//958
			match(CPP14Parser::Greater,ctx);
			setState(584);//958
			match(CPP14Parser::LeftParen,ctx);
			setState(585); //951
			expression(0,ctx);
			setState(586);//958
			match(CPP14Parser::RightParen,ctx);
			break;
		}

		case 10:
		{
			setState(588); //951
			typeidofthetypeid(ctx);
			setState(589);//958
			match(CPP14Parser::LeftParen,ctx);
			setState(590); //951
			expression(0,ctx);
			setState(591);//958
			match(CPP14Parser::RightParen,ctx);
			break;
		}

		case 11:
		{
			setState(593); //951
			typeidofthetypeid(ctx);
			setState(594);//958
			match(CPP14Parser::LeftParen,ctx);
			setState(595); //951
			thetypeid(ctx);
			setState(596);//958
			match(CPP14Parser::RightParen,ctx);
			break;
		}

		}
		ctx->stop = _input->LT(-1);
		setState(640);//865
		_errHandler->sync(this, ctx);
		alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, ctx);
		while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
		{
			if (alt == 1)
		{
				if (!_parseListeners.empty())
					triggerExitRuleEvent(ctx);

				setState(638);//830
				_errHandler->sync(this, ctx);
				switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, ctx))
				{
				case 1:
				{
					auto tmpContext = std::make_unique<PostfixexpressionContext>(parentContext, parentState);
					pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RulePostfixexpression);//1240
					_localctx = std::move(tmpContext);
					ctx = _localctx.get();
					setState(600);//1002

					if (!(precpred(nullptr, 19))) throw FailedPredicateException(this, "precpred(nullptr, 19)", ctx);
					setState(601);//958
					match(CPP14Parser::LeftBracket,ctx);
					setState(602); //951
					expression(0,ctx);
					setState(603);//958
					match(CPP14Parser::RightBracket,ctx);
					break;
				}

				case 2:
				{
					auto tmpContext = std::make_unique<PostfixexpressionContext>(parentContext, parentState);
					pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RulePostfixexpression);//1240
					_localctx = std::move(tmpContext);
					ctx = _localctx.get();
					setState(605);//1002

					if (!(precpred(nullptr, 18))) throw FailedPredicateException(this, "precpred(nullptr, 18)", ctx);
					setState(606);//958
					match(CPP14Parser::LeftBracket,ctx);
					setState(607); //951
					bracedinitlist(ctx);
					setState(608);//958
					match(CPP14Parser::RightBracket,ctx);
					break;
				}

				case 3:
				{
					auto tmpContext = std::make_unique<PostfixexpressionContext>(parentContext, parentState);
					pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RulePostfixexpression);//1240
					_localctx = std::move(tmpContext);
					ctx = _localctx.get();
					setState(610);//1002

					if (!(precpred(nullptr, 17))) throw FailedPredicateException(this, "precpred(nullptr, 17)", ctx);
					setState(611);//958
					match(CPP14Parser::LeftParen,ctx);
					setState(613);//788
					_errHandler->sync(this, ctx);

					_la = _input->LA(1);
					if ((((_la & ~ 0x3fULL) == 0) &&
						((1ULL << _la) & ((1ULL << CPP14Parser::T__0)
						| (1ULL << CPP14Parser::T__1)
						| (1ULL << CPP14Parser::Alignof)
						| (1ULL << CPP14Parser::Auto)
						| (1ULL << CPP14Parser::Bool)
						| (1ULL << CPP14Parser::Char)
						| (1ULL << CPP14Parser::Char16)
						| (1ULL << CPP14Parser::Char32)
						| (1ULL << CPP14Parser::Const_cast)
						| (1ULL << CPP14Parser::Decltype)
						| (1ULL << CPP14Parser::Delete)
						| (1ULL << CPP14Parser::Double)
						| (1ULL << CPP14Parser::Dynamic_cast)
						| (1ULL << CPP14Parser::False)
						| (1ULL << CPP14Parser::Float)
						| (1ULL << CPP14Parser::Int)
						| (1ULL << CPP14Parser::Long)
						| (1ULL << CPP14Parser::New)
						| (1ULL << CPP14Parser::Noexcept)
						| (1ULL << CPP14Parser::Nullptr)
						| (1ULL << CPP14Parser::Operator)
						| (1ULL << CPP14Parser::Reinterpret_cast)
						| (1ULL << CPP14Parser::Short)
						| (1ULL << CPP14Parser::Signed)
						| (1ULL << CPP14Parser::Sizeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
						((1ULL << (_la - 64)) & ((1ULL << (CPP14Parser::Static_cast - 64))
						| (1ULL << (CPP14Parser::This - 64))
						| (1ULL << (CPP14Parser::Throw - 64))
						| (1ULL << (CPP14Parser::True - 64))
						| (1ULL << (CPP14Parser::Typeid_ - 64))
						| (1ULL << (CPP14Parser::Typename_ - 64))
						| (1ULL << (CPP14Parser::Unsigned - 64))
						| (1ULL << (CPP14Parser::Void - 64))
						| (1ULL << (CPP14Parser::Wchar - 64))
						| (1ULL << (CPP14Parser::LeftParen - 64))
						| (1ULL << (CPP14Parser::LeftBracket - 64))
						| (1ULL << (CPP14Parser::LeftBrace - 64))
						| (1ULL << (CPP14Parser::Plus - 64))
						| (1ULL << (CPP14Parser::Minus - 64))
						| (1ULL << (CPP14Parser::Star - 64))
						| (1ULL << (CPP14Parser::And - 64))
						| (1ULL << (CPP14Parser::Or - 64))
						| (1ULL << (CPP14Parser::Tilde - 64))
						| (1ULL << (CPP14Parser::PlusPlus - 64))
						| (1ULL << (CPP14Parser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
						((1ULL << (_la - 128)) & ((1ULL << (CPP14Parser::Doublecolon - 128))
						| (1ULL << (CPP14Parser::Identifier - 128))
						| (1ULL << (CPP14Parser::Integerliteral - 128))
						| (1ULL << (CPP14Parser::Characterliteral - 128))
						| (1ULL << (CPP14Parser::Floatingliteral - 128))
						| (1ULL << (CPP14Parser::Stringliteral - 128))
						| (1ULL << (CPP14Parser::Userdefinedintegerliteral - 128))
						| (1ULL << (CPP14Parser::Userdefinedfloatingliteral - 128))
						| (1ULL << (CPP14Parser::Userdefinedstringliteral - 128))
						| (1ULL << (CPP14Parser::Userdefinedcharacterliteral - 128)))) != 0))
					{
						setState(612); //951
						expressionlist(ctx);
					}
					setState(615);//958
					match(CPP14Parser::RightParen,ctx);
					break;
				}

				case 4:
				{
					auto tmpContext = std::make_unique<PostfixexpressionContext>(parentContext, parentState);
					pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RulePostfixexpression);//1240
					_localctx = std::move(tmpContext);
					ctx = _localctx.get();
					setState(616);//1002

					if (!(precpred(nullptr, 12))) throw FailedPredicateException(this, "precpred(nullptr, 12)", ctx);
					setState(617);//958
					match(CPP14Parser::Dot,ctx);
					setState(619);//788
					_errHandler->sync(this, ctx);

					_la = _input->LA(1);
					if (_la == CPP14Parser::Template)
					{
						setState(618);//958
						match(CPP14Parser::Template,ctx);
					}
					setState(621); //951
					idexpression(ctx);
					break;
				}

				case 5:
				{
					auto tmpContext = std::make_unique<PostfixexpressionContext>(parentContext, parentState);
					pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RulePostfixexpression);//1240
					_localctx = std::move(tmpContext);
					ctx = _localctx.get();
					setState(622);//1002

					if (!(precpred(nullptr, 11))) throw FailedPredicateException(this, "precpred(nullptr, 11)", ctx);
					setState(623);//958
					match(CPP14Parser::Arrow,ctx);
					setState(625);//788
					_errHandler->sync(this, ctx);

					_la = _input->LA(1);
					if (_la == CPP14Parser::Template)
					{
						setState(624);//958
						match(CPP14Parser::Template,ctx);
					}
					setState(627); //951
					idexpression(ctx);
					break;
				}

				case 6:
				{
					auto tmpContext = std::make_unique<PostfixexpressionContext>(parentContext, parentState);
					pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RulePostfixexpression);//1240
					_localctx = std::move(tmpContext);
					ctx = _localctx.get();
					setState(628);//1002

					if (!(precpred(nullptr, 10))) throw FailedPredicateException(this, "precpred(nullptr, 10)", ctx);
					setState(629);//958
					match(CPP14Parser::Dot,ctx);
					setState(630); //951
					pseudodestructorname(ctx);
					break;
				}

				case 7:
				{
					auto tmpContext = std::make_unique<PostfixexpressionContext>(parentContext, parentState);
					pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RulePostfixexpression);//1240
					_localctx = std::move(tmpContext);
					ctx = _localctx.get();
					setState(631);//1002

					if (!(precpred(nullptr, 9))) throw FailedPredicateException(this, "precpred(nullptr, 9)", ctx);
					setState(632);//958
					match(CPP14Parser::Arrow,ctx);
					setState(633); //951
					pseudodestructorname(ctx);
					break;
				}

				case 8:
				{
					auto tmpContext = std::make_unique<PostfixexpressionContext>(parentContext, parentState);
					pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RulePostfixexpression);//1240
					_localctx = std::move(tmpContext);
					ctx = _localctx.get();
					setState(634);//1002

					if (!(precpred(nullptr, 8))) throw FailedPredicateException(this, "precpred(nullptr, 8)", ctx);
					setState(635);//958
					match(CPP14Parser::PlusPlus,ctx);
					break;
				}

				case 9:
				{
					auto tmpContext = std::make_unique<PostfixexpressionContext>(parentContext, parentState);
					pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RulePostfixexpression);//1240
					_localctx = std::move(tmpContext);
					ctx = _localctx.get();
					setState(636);//1002

					if (!(precpred(nullptr, 7))) throw FailedPredicateException(this, "precpred(nullptr, 7)", ctx);
					setState(637);//958
					match(CPP14Parser::MinusMinus,ctx);
					break;
				}

				} 
			}
			setState(642);//875
			_errHandler->sync(this, ctx);
			alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, ctx);
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

//----------------- TypeidofexprContext ------------------------------------------------------------------

CPP14Parser::TypeidofexprContext::TypeidofexprContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::TypeidofexprContext::Typeid_()
{
	return getToken(CPP14Parser::Typeid_, 0);
}


size_t CPP14Parser::TypeidofexprContext::getRuleIndex() const
{
	return CPP14Parser::RuleTypeidofexpr;//688
}

void CPP14Parser::TypeidofexprContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::TypeidofexprContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::TypeidofexprContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitTypeidofexpr(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::TypeidofexprContext* CPP14Parser::typeidofexpr( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<TypeidofexprContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 32, CPP14Parser::RuleTypeidofexpr);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(643);//958
		match(CPP14Parser::Typeid_,ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- TypeidofthetypeidContext ------------------------------------------------------------------

CPP14Parser::TypeidofthetypeidContext::TypeidofthetypeidContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::TypeidofthetypeidContext::Typeid_()
{
	return getToken(CPP14Parser::Typeid_, 0);
}


size_t CPP14Parser::TypeidofthetypeidContext::getRuleIndex() const
{
	return CPP14Parser::RuleTypeidofthetypeid;//688
}

void CPP14Parser::TypeidofthetypeidContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::TypeidofthetypeidContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::TypeidofthetypeidContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitTypeidofthetypeid(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::TypeidofthetypeidContext* CPP14Parser::typeidofthetypeid( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<TypeidofthetypeidContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 34, CPP14Parser::RuleTypeidofthetypeid);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(645);//958
		match(CPP14Parser::Typeid_,ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- ExpressionlistContext ------------------------------------------------------------------

CPP14Parser::ExpressionlistContext::ExpressionlistContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::InitializerlistContext* CPP14Parser::ExpressionlistContext::initializerlist()
{
	return getRuleContext<CPP14Parser::InitializerlistContext>(0);//1165
}


size_t CPP14Parser::ExpressionlistContext::getRuleIndex() const
{
	return CPP14Parser::RuleExpressionlist;//688
}

void CPP14Parser::ExpressionlistContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::ExpressionlistContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::ExpressionlistContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitExpressionlist(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::ExpressionlistContext* CPP14Parser::expressionlist( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<ExpressionlistContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 36, CPP14Parser::RuleExpressionlist);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(647); //951
		initializerlist(0,ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- PseudodestructornameContext ------------------------------------------------------------------

CPP14Parser::PseudodestructornameContext::PseudodestructornameContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

std::vector<CPP14Parser::ThetypenameContext *> CPP14Parser::PseudodestructornameContext::thetypename()
{
	return getRuleContexts<CPP14Parser::ThetypenameContext>();//1174
}

CPP14Parser::ThetypenameContext* CPP14Parser::PseudodestructornameContext::thetypename(size_t i)
{
	return getRuleContext<CPP14Parser::ThetypenameContext>(i);//1183
}

tree::TerminalNode* CPP14Parser::PseudodestructornameContext::Doublecolon()
{
	return getToken(CPP14Parser::Doublecolon, 0);
}

tree::TerminalNode* CPP14Parser::PseudodestructornameContext::Tilde()
{
	return getToken(CPP14Parser::Tilde, 0);
}

CPP14Parser::NestednamespecifierContext* CPP14Parser::PseudodestructornameContext::nestednamespecifier()
{
	return getRuleContext<CPP14Parser::NestednamespecifierContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::PseudodestructornameContext::Template()
{
	return getToken(CPP14Parser::Template, 0);
}

CPP14Parser::SimpletemplateidContext* CPP14Parser::PseudodestructornameContext::simpletemplateid()
{
	return getRuleContext<CPP14Parser::SimpletemplateidContext>(0);//1165
}

CPP14Parser::DecltypespecifierContext* CPP14Parser::PseudodestructornameContext::decltypespecifier()
{
	return getRuleContext<CPP14Parser::DecltypespecifierContext>(0);//1165
}


size_t CPP14Parser::PseudodestructornameContext::getRuleIndex() const
{
	return CPP14Parser::RulePseudodestructorname;//688
}

void CPP14Parser::PseudodestructornameContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::PseudodestructornameContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::PseudodestructornameContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitPseudodestructorname(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::PseudodestructornameContext* CPP14Parser::pseudodestructorname( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<PseudodestructornameContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 38, CPP14Parser::RulePseudodestructorname);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(671);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(650);//848
			_errHandler->sync(this, ctx);

			switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, ctx))
			{
			case 1:
			{
				setState(649); //951
				nestednamespecifier(0,ctx);
				break;
			}

			}
			setState(652); //951
			thetypename(ctx);
			setState(653);//958
			match(CPP14Parser::Doublecolon,ctx);
			setState(654);//958
			match(CPP14Parser::Tilde,ctx);
			setState(655); //951
			thetypename(ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(657); //951
			nestednamespecifier(0,ctx);
			setState(658);//958
			match(CPP14Parser::Template,ctx);
			setState(659); //951
			simpletemplateid(ctx);
			setState(660);//958
			match(CPP14Parser::Doublecolon,ctx);
			setState(661);//958
			match(CPP14Parser::Tilde,ctx);
			setState(662); //951
			thetypename(ctx);
			break;
		}

		case 3:
		{
			enterOuterAlt(ctx, 3);
			setState(665);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Decltype || _la == CPP14Parser::Doublecolon

			|| _la == CPP14Parser::Identifier)
			{
				setState(664); //951
				nestednamespecifier(0,ctx);
			}
			setState(667);//958
			match(CPP14Parser::Tilde,ctx);
			setState(668); //951
			thetypename(ctx);
			break;
		}

		case 4:
		{
			enterOuterAlt(ctx, 4);
			setState(669);//958
			match(CPP14Parser::Tilde,ctx);
			setState(670); //951
			decltypespecifier(ctx);
			break;
		}

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

//----------------- UnaryexpressionContext ------------------------------------------------------------------

CPP14Parser::UnaryexpressionContext::UnaryexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::PostfixexpressionContext* CPP14Parser::UnaryexpressionContext::postfixexpression()
{
	return getRuleContext<CPP14Parser::PostfixexpressionContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::UnaryexpressionContext::PlusPlus()
{
	return getToken(CPP14Parser::PlusPlus, 0);
}

CPP14Parser::CastexpressionContext* CPP14Parser::UnaryexpressionContext::castexpression()
{
	return getRuleContext<CPP14Parser::CastexpressionContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::UnaryexpressionContext::MinusMinus()
{
	return getToken(CPP14Parser::MinusMinus, 0);
}

CPP14Parser::UnaryoperatorContext* CPP14Parser::UnaryexpressionContext::unaryoperator()
{
	return getRuleContext<CPP14Parser::UnaryoperatorContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::UnaryexpressionContext::Sizeof()
{
	return getToken(CPP14Parser::Sizeof, 0);
}

CPP14Parser::UnaryexpressionContext* CPP14Parser::UnaryexpressionContext::unaryexpression()
{
	return getRuleContext<CPP14Parser::UnaryexpressionContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::UnaryexpressionContext::LeftParen()
{
	return getToken(CPP14Parser::LeftParen, 0);
}

CPP14Parser::ThetypeidContext* CPP14Parser::UnaryexpressionContext::thetypeid()
{
	return getRuleContext<CPP14Parser::ThetypeidContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::UnaryexpressionContext::RightParen()
{
	return getToken(CPP14Parser::RightParen, 0);
}

tree::TerminalNode* CPP14Parser::UnaryexpressionContext::Ellipsis()
{
	return getToken(CPP14Parser::Ellipsis, 0);
}

tree::TerminalNode* CPP14Parser::UnaryexpressionContext::Identifier()
{
	return getToken(CPP14Parser::Identifier, 0);
}

tree::TerminalNode* CPP14Parser::UnaryexpressionContext::Alignof()
{
	return getToken(CPP14Parser::Alignof, 0);
}

CPP14Parser::NoexceptexpressionContext* CPP14Parser::UnaryexpressionContext::noexceptexpression()
{
	return getRuleContext<CPP14Parser::NoexceptexpressionContext>(0);//1165
}

CPP14Parser::NewexpressionContext* CPP14Parser::UnaryexpressionContext::newexpression()
{
	return getRuleContext<CPP14Parser::NewexpressionContext>(0);//1165
}

CPP14Parser::DeleteexpressionContext* CPP14Parser::UnaryexpressionContext::deleteexpression()
{
	return getRuleContext<CPP14Parser::DeleteexpressionContext>(0);//1165
}


size_t CPP14Parser::UnaryexpressionContext::getRuleIndex() const
{
	return CPP14Parser::RuleUnaryexpression;//688
}

void CPP14Parser::UnaryexpressionContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::UnaryexpressionContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::UnaryexpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitUnaryexpression(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::UnaryexpressionContext* CPP14Parser::unaryexpression( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<UnaryexpressionContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 40, CPP14Parser::RuleUnaryexpression);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(701);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(673); //951
			postfixexpression(0,ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(674);//958
			match(CPP14Parser::PlusPlus,ctx);
			setState(675); //951
			castexpression(ctx);
			break;
		}

		case 3:
		{
			enterOuterAlt(ctx, 3);
			setState(676);//958
			match(CPP14Parser::MinusMinus,ctx);
			setState(677); //951
			castexpression(ctx);
			break;
		}

		case 4:
		{
			enterOuterAlt(ctx, 4);
			setState(678); //951
			unaryoperator(ctx);
			setState(679); //951
			castexpression(ctx);
			break;
		}

		case 5:
		{
			enterOuterAlt(ctx, 5);
			setState(681);//958
			match(CPP14Parser::Sizeof,ctx);
			setState(682); //951
			unaryexpression(ctx);
			break;
		}

		case 6:
		{
			enterOuterAlt(ctx, 6);
			setState(683);//958
			match(CPP14Parser::Sizeof,ctx);
			setState(684);//958
			match(CPP14Parser::LeftParen,ctx);
			setState(685); //951
			thetypeid(ctx);
			setState(686);//958
			match(CPP14Parser::RightParen,ctx);
			break;
		}

		case 7:
		{
			enterOuterAlt(ctx, 7);
			setState(688);//958
			match(CPP14Parser::Sizeof,ctx);
			setState(689);//958
			match(CPP14Parser::Ellipsis,ctx);
			setState(690);//958
			match(CPP14Parser::LeftParen,ctx);
			setState(691);//958
			match(CPP14Parser::Identifier,ctx);
			setState(692);//958
			match(CPP14Parser::RightParen,ctx);
			break;
		}

		case 8:
		{
			enterOuterAlt(ctx, 8);
			setState(693);//958
			match(CPP14Parser::Alignof,ctx);
			setState(694);//958
			match(CPP14Parser::LeftParen,ctx);
			setState(695); //951
			thetypeid(ctx);
			setState(696);//958
			match(CPP14Parser::RightParen,ctx);
			break;
		}

		case 9:
		{
			enterOuterAlt(ctx, 9);
			setState(698); //951
			noexceptexpression(ctx);
			break;
		}

		case 10:
		{
			enterOuterAlt(ctx, 10);
			setState(699); //951
			newexpression(ctx);
			break;
		}

		case 11:
		{
			enterOuterAlt(ctx, 11);
			setState(700); //951
			deleteexpression(ctx);
			break;
		}

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

//----------------- UnaryoperatorContext ------------------------------------------------------------------

CPP14Parser::UnaryoperatorContext::UnaryoperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::UnaryoperatorContext::Or()
{
	return getToken(CPP14Parser::Or, 0);
}

tree::TerminalNode* CPP14Parser::UnaryoperatorContext::Star()
{
	return getToken(CPP14Parser::Star, 0);
}

tree::TerminalNode* CPP14Parser::UnaryoperatorContext::And()
{
	return getToken(CPP14Parser::And, 0);
}

tree::TerminalNode* CPP14Parser::UnaryoperatorContext::Plus()
{
	return getToken(CPP14Parser::Plus, 0);
}

tree::TerminalNode* CPP14Parser::UnaryoperatorContext::Tilde()
{
	return getToken(CPP14Parser::Tilde, 0);
}

tree::TerminalNode* CPP14Parser::UnaryoperatorContext::Minus()
{
	return getToken(CPP14Parser::Minus, 0);
}


size_t CPP14Parser::UnaryoperatorContext::getRuleIndex() const
{
	return CPP14Parser::RuleUnaryoperator;//688
}

void CPP14Parser::UnaryoperatorContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::UnaryoperatorContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::UnaryoperatorContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitUnaryoperator(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::UnaryoperatorContext* CPP14Parser::unaryoperator( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<UnaryoperatorContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 42, CPP14Parser::RuleUnaryoperator);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(703);//970
		_la = _input->LA(1);
		if (!(_la == CPP14Parser::T__0

		|| _la == CPP14Parser::T__1 || ((((_la - 90) & ~ 0x3fULL) == 0) &&
			((1ULL << (_la - 90)) & ((1ULL << (CPP14Parser::Plus - 90))
			| (1ULL << (CPP14Parser::Minus - 90))
			| (1ULL << (CPP14Parser::Star - 90))
			| (1ULL << (CPP14Parser::And - 90))
			| (1ULL << (CPP14Parser::Or - 90))
			| (1ULL << (CPP14Parser::Tilde - 90)))) != 0)))
		{
		_errHandler->recoverInline(this, ctx);
		}
		else
		{
			_errHandler->reportMatch(this);
			consume(ctx);
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

//----------------- NewexpressionContext ------------------------------------------------------------------

CPP14Parser::NewexpressionContext::NewexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::NewexpressionContext::New()
{
	return getToken(CPP14Parser::New, 0);
}

CPP14Parser::NewtypeidContext* CPP14Parser::NewexpressionContext::newtypeid()
{
	return getRuleContext<CPP14Parser::NewtypeidContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::NewexpressionContext::Doublecolon()
{
	return getToken(CPP14Parser::Doublecolon, 0);
}

CPP14Parser::NewplacementContext* CPP14Parser::NewexpressionContext::newplacement()
{
	return getRuleContext<CPP14Parser::NewplacementContext>(0);//1165
}

CPP14Parser::NewinitializerContext* CPP14Parser::NewexpressionContext::newinitializer()
{
	return getRuleContext<CPP14Parser::NewinitializerContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::NewexpressionContext::LeftParen()
{
	return getToken(CPP14Parser::LeftParen, 0);
}

CPP14Parser::ThetypeidContext* CPP14Parser::NewexpressionContext::thetypeid()
{
	return getRuleContext<CPP14Parser::ThetypeidContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::NewexpressionContext::RightParen()
{
	return getToken(CPP14Parser::RightParen, 0);
}


size_t CPP14Parser::NewexpressionContext::getRuleIndex() const
{
	return CPP14Parser::RuleNewexpression;//688
}

void CPP14Parser::NewexpressionContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::NewexpressionContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::NewexpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitNewexpression(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::NewexpressionContext* CPP14Parser::newexpression( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<NewexpressionContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 44, CPP14Parser::RuleNewexpression);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(729);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(706);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Doublecolon)
			{
				setState(705);//958
				match(CPP14Parser::Doublecolon,ctx);
			}
			setState(708);//958
			match(CPP14Parser::New,ctx);
			setState(710);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::LeftParen)
			{
				setState(709); //951
				newplacement(ctx);
			}
			setState(712); //951
			newtypeid(ctx);
			setState(714);//848
			_errHandler->sync(this, ctx);

			switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, ctx))
			{
			case 1:
			{
				setState(713); //951
				newinitializer(ctx);
				break;
			}

			}
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(717);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Doublecolon)
			{
				setState(716);//958
				match(CPP14Parser::Doublecolon,ctx);
			}
			setState(719);//958
			match(CPP14Parser::New,ctx);
			setState(721);//848
			_errHandler->sync(this, ctx);

			switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, ctx))
			{
			case 1:
			{
				setState(720); //951
				newplacement(ctx);
				break;
			}

			}
			setState(723);//958
			match(CPP14Parser::LeftParen,ctx);
			setState(724); //951
			thetypeid(ctx);
			setState(725);//958
			match(CPP14Parser::RightParen,ctx);
			setState(727);//848
			_errHandler->sync(this, ctx);

			switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, ctx))
			{
			case 1:
			{
				setState(726); //951
				newinitializer(ctx);
				break;
			}

			}
			break;
		}

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

//----------------- NewplacementContext ------------------------------------------------------------------

CPP14Parser::NewplacementContext::NewplacementContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::NewplacementContext::LeftParen()
{
	return getToken(CPP14Parser::LeftParen, 0);
}

CPP14Parser::ExpressionlistContext* CPP14Parser::NewplacementContext::expressionlist()
{
	return getRuleContext<CPP14Parser::ExpressionlistContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::NewplacementContext::RightParen()
{
	return getToken(CPP14Parser::RightParen, 0);
}


size_t CPP14Parser::NewplacementContext::getRuleIndex() const
{
	return CPP14Parser::RuleNewplacement;//688
}

void CPP14Parser::NewplacementContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::NewplacementContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::NewplacementContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitNewplacement(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::NewplacementContext* CPP14Parser::newplacement( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<NewplacementContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 46, CPP14Parser::RuleNewplacement);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(731);//958
		match(CPP14Parser::LeftParen,ctx);
		setState(732); //951
		expressionlist(ctx);
		setState(733);//958
		match(CPP14Parser::RightParen,ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- NewtypeidContext ------------------------------------------------------------------

CPP14Parser::NewtypeidContext::NewtypeidContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::TypespecifierseqContext* CPP14Parser::NewtypeidContext::typespecifierseq()
{
	return getRuleContext<CPP14Parser::TypespecifierseqContext>(0);//1165
}

CPP14Parser::NewdeclaratorContext* CPP14Parser::NewtypeidContext::newdeclarator()
{
	return getRuleContext<CPP14Parser::NewdeclaratorContext>(0);//1165
}


size_t CPP14Parser::NewtypeidContext::getRuleIndex() const
{
	return CPP14Parser::RuleNewtypeid;//688
}

void CPP14Parser::NewtypeidContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::NewtypeidContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::NewtypeidContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitNewtypeid(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::NewtypeidContext* CPP14Parser::newtypeid( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<NewtypeidContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 48, CPP14Parser::RuleNewtypeid);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(735); //951
		typespecifierseq(ctx);
		setState(737);//848
		_errHandler->sync(this, ctx);

		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, ctx))
		{
		case 1:
		{
			setState(736); //951
			newdeclarator(ctx);
			break;
		}

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

//----------------- NewdeclaratorContext ------------------------------------------------------------------

CPP14Parser::NewdeclaratorContext::NewdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::PtroperatorContext* CPP14Parser::NewdeclaratorContext::ptroperator()
{
	return getRuleContext<CPP14Parser::PtroperatorContext>(0);//1165
}

CPP14Parser::NewdeclaratorContext* CPP14Parser::NewdeclaratorContext::newdeclarator()
{
	return getRuleContext<CPP14Parser::NewdeclaratorContext>(0);//1165
}

CPP14Parser::NoptrnewdeclaratorContext* CPP14Parser::NewdeclaratorContext::noptrnewdeclarator()
{
	return getRuleContext<CPP14Parser::NoptrnewdeclaratorContext>(0);//1165
}


size_t CPP14Parser::NewdeclaratorContext::getRuleIndex() const
{
	return CPP14Parser::RuleNewdeclarator;//688
}

void CPP14Parser::NewdeclaratorContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::NewdeclaratorContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::NewdeclaratorContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitNewdeclarator(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::NewdeclaratorContext* CPP14Parser::newdeclarator( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<NewdeclaratorContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 50, CPP14Parser::RuleNewdeclarator);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(744);//750
		_errHandler->sync(this, ctx);
		switch (_input->LA(1))
		{
			case CPP14Parser::T__2:
			case CPP14Parser::Decltype:
			case CPP14Parser::Star:
			case CPP14Parser::And:
			case CPP14Parser::Doublecolon:
			case CPP14Parser::Identifier:
			{
				enterOuterAlt(ctx, 1);
				setState(739); //951
				ptroperator(ctx);
				setState(741);//848
				_errHandler->sync(this, ctx);

				switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, ctx))
				{
				case 1:
				{
					setState(740); //951
					newdeclarator(ctx);
					break;
				}

				}
				break;
			}

			case CPP14Parser::LeftBracket:
			{
				enterOuterAlt(ctx, 2);
				setState(743); //951
				noptrnewdeclarator(0,ctx);
				break;
			}

		default:
			throw NoViableAltException(this, ctx);
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

//----------------- NoptrnewdeclaratorContext ------------------------------------------------------------------

CPP14Parser::NoptrnewdeclaratorContext::NoptrnewdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::NoptrnewdeclaratorContext::LeftBracket()
{
	return getToken(CPP14Parser::LeftBracket, 0);
}

CPP14Parser::ExpressionContext* CPP14Parser::NoptrnewdeclaratorContext::expression()
{
	return getRuleContext<CPP14Parser::ExpressionContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::NoptrnewdeclaratorContext::RightBracket()
{
	return getToken(CPP14Parser::RightBracket, 0);
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::NoptrnewdeclaratorContext::attributespecifierseq()
{
	return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);//1165
}

CPP14Parser::NoptrnewdeclaratorContext* CPP14Parser::NoptrnewdeclaratorContext::noptrnewdeclarator()
{
	return getRuleContext<CPP14Parser::NoptrnewdeclaratorContext>(0);//1165
}

CPP14Parser::ConstantexpressionContext* CPP14Parser::NoptrnewdeclaratorContext::constantexpression()
{
	return getRuleContext<CPP14Parser::ConstantexpressionContext>(0);//1165
}


size_t CPP14Parser::NoptrnewdeclaratorContext::getRuleIndex() const
{
	return CPP14Parser::RuleNoptrnewdeclarator;//688
}

void CPP14Parser::NoptrnewdeclaratorContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::NoptrnewdeclaratorContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::NoptrnewdeclaratorContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitNoptrnewdeclarator(this);
	else
		return visitor->visitChildren(this);
}


CPP14Parser::NoptrnewdeclaratorContext* CPP14Parser::noptrnewdeclarator()
{
	 return noptrnewdeclarator(0, nullptr);//600
}

CPP14Parser::NoptrnewdeclaratorContext* CPP14Parser::noptrnewdeclarator(int precedence, antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	antlr4::ParserRuleContext *parentContext = parent;
	size_t parentState = getState();
	auto _localctx = std::make_unique<NoptrnewdeclaratorContext>(parentContext, parentState);//610
	auto ctx = _localctx.get();//609
	size_t startState = 52;
	enterRecursionRule(ctx, 52, CPP14Parser::RuleNoptrnewdeclarator, precedence);

		

	auto onExit = finally([=,&_localctx]
{
		unrollRecursionContexts(parentContext, std::move(_localctx));
	});
	try
{
		size_t alt;
		enterOuterAlt(ctx, 1);
		setState(747);//958
		match(CPP14Parser::LeftBracket,ctx);
		setState(748); //951
		expression(0,ctx);
		setState(749);//958
		match(CPP14Parser::RightBracket,ctx);
		setState(751);//848
		_errHandler->sync(this, ctx);

		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, ctx))
		{
		case 1:
		{
			setState(750); //951
			attributespecifierseq(0,ctx);
			break;
		}

		}
		ctx->stop = _input->LT(-1);
		setState(762);//865
		_errHandler->sync(this, ctx);
		alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, ctx);
		while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
		{
			if (alt == 1)
		{
				if (!_parseListeners.empty())
					triggerExitRuleEvent(ctx);

				auto tmpContext = std::make_unique<NoptrnewdeclaratorContext>(parentContext, parentState);
				pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleNoptrnewdeclarator);//1240
				_localctx = std::move(tmpContext);
				ctx = _localctx.get();
				setState(753);//1002

				if (!(precpred(nullptr, 1))) throw FailedPredicateException(this, "precpred(nullptr, 1)", ctx);
				setState(754);//958
				match(CPP14Parser::LeftBracket,ctx);
				setState(755); //951
				constantexpression(ctx);
				setState(756);//958
				match(CPP14Parser::RightBracket,ctx);
				setState(758);//848
				_errHandler->sync(this, ctx);

				switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, ctx))
				{
				case 1:
				{
					setState(757); //951
					attributespecifierseq(0,ctx);
					break;
				}

				} 
			}
			setState(764);//875
			_errHandler->sync(this, ctx);
			alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, ctx);
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

//----------------- NewinitializerContext ------------------------------------------------------------------

CPP14Parser::NewinitializerContext::NewinitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::NewinitializerContext::LeftParen()
{
	return getToken(CPP14Parser::LeftParen, 0);
}

tree::TerminalNode* CPP14Parser::NewinitializerContext::RightParen()
{
	return getToken(CPP14Parser::RightParen, 0);
}

CPP14Parser::ExpressionlistContext* CPP14Parser::NewinitializerContext::expressionlist()
{
	return getRuleContext<CPP14Parser::ExpressionlistContext>(0);//1165
}

CPP14Parser::BracedinitlistContext* CPP14Parser::NewinitializerContext::bracedinitlist()
{
	return getRuleContext<CPP14Parser::BracedinitlistContext>(0);//1165
}


size_t CPP14Parser::NewinitializerContext::getRuleIndex() const
{
	return CPP14Parser::RuleNewinitializer;//688
}

void CPP14Parser::NewinitializerContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::NewinitializerContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::NewinitializerContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitNewinitializer(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::NewinitializerContext* CPP14Parser::newinitializer( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<NewinitializerContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 54, CPP14Parser::RuleNewinitializer);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(771);//750
		_errHandler->sync(this, ctx);
		switch (_input->LA(1))
		{
			case CPP14Parser::LeftParen:
			{
				enterOuterAlt(ctx, 1);
				setState(765);//958
				match(CPP14Parser::LeftParen,ctx);
				setState(767);//788
				_errHandler->sync(this, ctx);

				_la = _input->LA(1);
				if ((((_la & ~ 0x3fULL) == 0) &&
					((1ULL << _la) & ((1ULL << CPP14Parser::T__0)
					| (1ULL << CPP14Parser::T__1)
					| (1ULL << CPP14Parser::Alignof)
					| (1ULL << CPP14Parser::Auto)
					| (1ULL << CPP14Parser::Bool)
					| (1ULL << CPP14Parser::Char)
					| (1ULL << CPP14Parser::Char16)
					| (1ULL << CPP14Parser::Char32)
					| (1ULL << CPP14Parser::Const_cast)
					| (1ULL << CPP14Parser::Decltype)
					| (1ULL << CPP14Parser::Delete)
					| (1ULL << CPP14Parser::Double)
					| (1ULL << CPP14Parser::Dynamic_cast)
					| (1ULL << CPP14Parser::False)
					| (1ULL << CPP14Parser::Float)
					| (1ULL << CPP14Parser::Int)
					| (1ULL << CPP14Parser::Long)
					| (1ULL << CPP14Parser::New)
					| (1ULL << CPP14Parser::Noexcept)
					| (1ULL << CPP14Parser::Nullptr)
					| (1ULL << CPP14Parser::Operator)
					| (1ULL << CPP14Parser::Reinterpret_cast)
					| (1ULL << CPP14Parser::Short)
					| (1ULL << CPP14Parser::Signed)
					| (1ULL << CPP14Parser::Sizeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
					((1ULL << (_la - 64)) & ((1ULL << (CPP14Parser::Static_cast - 64))
					| (1ULL << (CPP14Parser::This - 64))
					| (1ULL << (CPP14Parser::Throw - 64))
					| (1ULL << (CPP14Parser::True - 64))
					| (1ULL << (CPP14Parser::Typeid_ - 64))
					| (1ULL << (CPP14Parser::Typename_ - 64))
					| (1ULL << (CPP14Parser::Unsigned - 64))
					| (1ULL << (CPP14Parser::Void - 64))
					| (1ULL << (CPP14Parser::Wchar - 64))
					| (1ULL << (CPP14Parser::LeftParen - 64))
					| (1ULL << (CPP14Parser::LeftBracket - 64))
					| (1ULL << (CPP14Parser::LeftBrace - 64))
					| (1ULL << (CPP14Parser::Plus - 64))
					| (1ULL << (CPP14Parser::Minus - 64))
					| (1ULL << (CPP14Parser::Star - 64))
					| (1ULL << (CPP14Parser::And - 64))
					| (1ULL << (CPP14Parser::Or - 64))
					| (1ULL << (CPP14Parser::Tilde - 64))
					| (1ULL << (CPP14Parser::PlusPlus - 64))
					| (1ULL << (CPP14Parser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
					((1ULL << (_la - 128)) & ((1ULL << (CPP14Parser::Doublecolon - 128))
					| (1ULL << (CPP14Parser::Identifier - 128))
					| (1ULL << (CPP14Parser::Integerliteral - 128))
					| (1ULL << (CPP14Parser::Characterliteral - 128))
					| (1ULL << (CPP14Parser::Floatingliteral - 128))
					| (1ULL << (CPP14Parser::Stringliteral - 128))
					| (1ULL << (CPP14Parser::Userdefinedintegerliteral - 128))
					| (1ULL << (CPP14Parser::Userdefinedfloatingliteral - 128))
					| (1ULL << (CPP14Parser::Userdefinedstringliteral - 128))
					| (1ULL << (CPP14Parser::Userdefinedcharacterliteral - 128)))) != 0))
				{
					setState(766); //951
					expressionlist(ctx);
				}
				setState(769);//958
				match(CPP14Parser::RightParen,ctx);
				break;
			}

			case CPP14Parser::LeftBrace:
			{
				enterOuterAlt(ctx, 2);
				setState(770); //951
				bracedinitlist(ctx);
				break;
			}

		default:
			throw NoViableAltException(this, ctx);
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

//----------------- DeleteexpressionContext ------------------------------------------------------------------

CPP14Parser::DeleteexpressionContext::DeleteexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::DeleteexpressionContext::Delete()
{
	return getToken(CPP14Parser::Delete, 0);
}

CPP14Parser::CastexpressionContext* CPP14Parser::DeleteexpressionContext::castexpression()
{
	return getRuleContext<CPP14Parser::CastexpressionContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::DeleteexpressionContext::Doublecolon()
{
	return getToken(CPP14Parser::Doublecolon, 0);
}

tree::TerminalNode* CPP14Parser::DeleteexpressionContext::LeftBracket()
{
	return getToken(CPP14Parser::LeftBracket, 0);
}

tree::TerminalNode* CPP14Parser::DeleteexpressionContext::RightBracket()
{
	return getToken(CPP14Parser::RightBracket, 0);
}


size_t CPP14Parser::DeleteexpressionContext::getRuleIndex() const
{
	return CPP14Parser::RuleDeleteexpression;//688
}

void CPP14Parser::DeleteexpressionContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::DeleteexpressionContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::DeleteexpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitDeleteexpression(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::DeleteexpressionContext* CPP14Parser::deleteexpression( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<DeleteexpressionContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 56, CPP14Parser::RuleDeleteexpression);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(785);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(774);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Doublecolon)
			{
				setState(773);//958
				match(CPP14Parser::Doublecolon,ctx);
			}
			setState(776);//958
			match(CPP14Parser::Delete,ctx);
			setState(777); //951
			castexpression(ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(779);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Doublecolon)
			{
				setState(778);//958
				match(CPP14Parser::Doublecolon,ctx);
			}
			setState(781);//958
			match(CPP14Parser::Delete,ctx);
			setState(782);//958
			match(CPP14Parser::LeftBracket,ctx);
			setState(783);//958
			match(CPP14Parser::RightBracket,ctx);
			setState(784); //951
			castexpression(ctx);
			break;
		}

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

//----------------- NoexceptexpressionContext ------------------------------------------------------------------

CPP14Parser::NoexceptexpressionContext::NoexceptexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::NoexceptexpressionContext::Noexcept()
{
	return getToken(CPP14Parser::Noexcept, 0);
}

tree::TerminalNode* CPP14Parser::NoexceptexpressionContext::LeftParen()
{
	return getToken(CPP14Parser::LeftParen, 0);
}

CPP14Parser::ExpressionContext* CPP14Parser::NoexceptexpressionContext::expression()
{
	return getRuleContext<CPP14Parser::ExpressionContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::NoexceptexpressionContext::RightParen()
{
	return getToken(CPP14Parser::RightParen, 0);
}


size_t CPP14Parser::NoexceptexpressionContext::getRuleIndex() const
{
	return CPP14Parser::RuleNoexceptexpression;//688
}

void CPP14Parser::NoexceptexpressionContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::NoexceptexpressionContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::NoexceptexpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitNoexceptexpression(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::NoexceptexpressionContext* CPP14Parser::noexceptexpression( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<NoexceptexpressionContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 58, CPP14Parser::RuleNoexceptexpression);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(787);//958
		match(CPP14Parser::Noexcept,ctx);
		setState(788);//958
		match(CPP14Parser::LeftParen,ctx);
		setState(789); //951
		expression(0,ctx);
		setState(790);//958
		match(CPP14Parser::RightParen,ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- CastexpressionContext ------------------------------------------------------------------

CPP14Parser::CastexpressionContext::CastexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::UnaryexpressionContext* CPP14Parser::CastexpressionContext::unaryexpression()
{
	return getRuleContext<CPP14Parser::UnaryexpressionContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::CastexpressionContext::LeftParen()
{
	return getToken(CPP14Parser::LeftParen, 0);
}

CPP14Parser::ThetypeidContext* CPP14Parser::CastexpressionContext::thetypeid()
{
	return getRuleContext<CPP14Parser::ThetypeidContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::CastexpressionContext::RightParen()
{
	return getToken(CPP14Parser::RightParen, 0);
}

CPP14Parser::CastexpressionContext* CPP14Parser::CastexpressionContext::castexpression()
{
	return getRuleContext<CPP14Parser::CastexpressionContext>(0);//1165
}


size_t CPP14Parser::CastexpressionContext::getRuleIndex() const
{
	return CPP14Parser::RuleCastexpression;//688
}

void CPP14Parser::CastexpressionContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::CastexpressionContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::CastexpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitCastexpression(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::CastexpressionContext* CPP14Parser::castexpression( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<CastexpressionContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 60, CPP14Parser::RuleCastexpression);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(798);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(792); //951
			unaryexpression(ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(793);//958
			match(CPP14Parser::LeftParen,ctx);
			setState(794); //951
			thetypeid(ctx);
			setState(795);//958
			match(CPP14Parser::RightParen,ctx);
			setState(796); //951
			castexpression(ctx);
			break;
		}

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

//----------------- PmexpressionContext ------------------------------------------------------------------

CPP14Parser::PmexpressionContext::PmexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::CastexpressionContext* CPP14Parser::PmexpressionContext::castexpression()
{
	return getRuleContext<CPP14Parser::CastexpressionContext>(0);//1165
}

CPP14Parser::PmexpressionContext* CPP14Parser::PmexpressionContext::pmexpression()
{
	return getRuleContext<CPP14Parser::PmexpressionContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::PmexpressionContext::DotStar()
{
	return getToken(CPP14Parser::DotStar, 0);
}

tree::TerminalNode* CPP14Parser::PmexpressionContext::ArrowStar()
{
	return getToken(CPP14Parser::ArrowStar, 0);
}


size_t CPP14Parser::PmexpressionContext::getRuleIndex() const
{
	return CPP14Parser::RulePmexpression;//688
}

void CPP14Parser::PmexpressionContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::PmexpressionContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::PmexpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitPmexpression(this);
	else
		return visitor->visitChildren(this);
}


CPP14Parser::PmexpressionContext* CPP14Parser::pmexpression()
{
	 return pmexpression(0, nullptr);//600
}

CPP14Parser::PmexpressionContext* CPP14Parser::pmexpression(int precedence, antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	antlr4::ParserRuleContext *parentContext = parent;
	size_t parentState = getState();
	auto _localctx = std::make_unique<PmexpressionContext>(parentContext, parentState);//610
	auto ctx = _localctx.get();//609
	size_t startState = 62;
	enterRecursionRule(ctx, 62, CPP14Parser::RulePmexpression, precedence);

		

	auto onExit = finally([=,&_localctx]
{
		unrollRecursionContexts(parentContext, std::move(_localctx));
	});
	try
{
		size_t alt;
		enterOuterAlt(ctx, 1);
		setState(801); //951
		castexpression(ctx);
		ctx->stop = _input->LT(-1);
		setState(811);//865
		_errHandler->sync(this, ctx);
		alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, ctx);
		while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
		{
			if (alt == 1)
		{
				if (!_parseListeners.empty())
					triggerExitRuleEvent(ctx);

				setState(809);//830
				_errHandler->sync(this, ctx);
				switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, ctx))
				{
				case 1:
				{
					auto tmpContext = std::make_unique<PmexpressionContext>(parentContext, parentState);
					pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RulePmexpression);//1240
					_localctx = std::move(tmpContext);
					ctx = _localctx.get();
					setState(803);//1002

					if (!(precpred(nullptr, 2))) throw FailedPredicateException(this, "precpred(nullptr, 2)", ctx);
					setState(804);//958
					match(CPP14Parser::DotStar,ctx);
					setState(805); //951
					castexpression(ctx);
					break;
				}

				case 2:
				{
					auto tmpContext = std::make_unique<PmexpressionContext>(parentContext, parentState);
					pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RulePmexpression);//1240
					_localctx = std::move(tmpContext);
					ctx = _localctx.get();
					setState(806);//1002

					if (!(precpred(nullptr, 1))) throw FailedPredicateException(this, "precpred(nullptr, 1)", ctx);
					setState(807);//958
					match(CPP14Parser::ArrowStar,ctx);
					setState(808); //951
					castexpression(ctx);
					break;
				}

				} 
			}
			setState(813);//875
			_errHandler->sync(this, ctx);
			alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, ctx);
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

//----------------- MultiplicativeexpressionContext ------------------------------------------------------------------

CPP14Parser::MultiplicativeexpressionContext::MultiplicativeexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::PmexpressionContext* CPP14Parser::MultiplicativeexpressionContext::pmexpression()
{
	return getRuleContext<CPP14Parser::PmexpressionContext>(0);//1165
}

CPP14Parser::MultiplicativeexpressionContext* CPP14Parser::MultiplicativeexpressionContext::multiplicativeexpression()
{
	return getRuleContext<CPP14Parser::MultiplicativeexpressionContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::MultiplicativeexpressionContext::Star()
{
	return getToken(CPP14Parser::Star, 0);
}

tree::TerminalNode* CPP14Parser::MultiplicativeexpressionContext::Div()
{
	return getToken(CPP14Parser::Div, 0);
}

tree::TerminalNode* CPP14Parser::MultiplicativeexpressionContext::Mod()
{
	return getToken(CPP14Parser::Mod, 0);
}


size_t CPP14Parser::MultiplicativeexpressionContext::getRuleIndex() const
{
	return CPP14Parser::RuleMultiplicativeexpression;//688
}

void CPP14Parser::MultiplicativeexpressionContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::MultiplicativeexpressionContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::MultiplicativeexpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitMultiplicativeexpression(this);
	else
		return visitor->visitChildren(this);
}


CPP14Parser::MultiplicativeexpressionContext* CPP14Parser::multiplicativeexpression()
{
	 return multiplicativeexpression(0, nullptr);//600
}

CPP14Parser::MultiplicativeexpressionContext* CPP14Parser::multiplicativeexpression(int precedence, antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	antlr4::ParserRuleContext *parentContext = parent;
	size_t parentState = getState();
	auto _localctx = std::make_unique<MultiplicativeexpressionContext>(parentContext, parentState);//610
	auto ctx = _localctx.get();//609
	size_t startState = 64;
	enterRecursionRule(ctx, 64, CPP14Parser::RuleMultiplicativeexpression, precedence);

		

	auto onExit = finally([=,&_localctx]
{
		unrollRecursionContexts(parentContext, std::move(_localctx));
	});
	try
{
		size_t alt;
		enterOuterAlt(ctx, 1);
		setState(815); //951
		pmexpression(0,ctx);
		ctx->stop = _input->LT(-1);
		setState(828);//865
		_errHandler->sync(this, ctx);
		alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, ctx);
		while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
		{
			if (alt == 1)
		{
				if (!_parseListeners.empty())
					triggerExitRuleEvent(ctx);

				setState(826);//830
				_errHandler->sync(this, ctx);
				switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, ctx))
				{
				case 1:
				{
					auto tmpContext = std::make_unique<MultiplicativeexpressionContext>(parentContext, parentState);
					pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleMultiplicativeexpression);//1240
					_localctx = std::move(tmpContext);
					ctx = _localctx.get();
					setState(817);//1002

					if (!(precpred(nullptr, 3))) throw FailedPredicateException(this, "precpred(nullptr, 3)", ctx);
					setState(818);//958
					match(CPP14Parser::Star,ctx);
					setState(819); //951
					pmexpression(0,ctx);
					break;
				}

				case 2:
				{
					auto tmpContext = std::make_unique<MultiplicativeexpressionContext>(parentContext, parentState);
					pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleMultiplicativeexpression);//1240
					_localctx = std::move(tmpContext);
					ctx = _localctx.get();
					setState(820);//1002

					if (!(precpred(nullptr, 2))) throw FailedPredicateException(this, "precpred(nullptr, 2)", ctx);
					setState(821);//958
					match(CPP14Parser::Div,ctx);
					setState(822); //951
					pmexpression(0,ctx);
					break;
				}

				case 3:
				{
					auto tmpContext = std::make_unique<MultiplicativeexpressionContext>(parentContext, parentState);
					pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleMultiplicativeexpression);//1240
					_localctx = std::move(tmpContext);
					ctx = _localctx.get();
					setState(823);//1002

					if (!(precpred(nullptr, 1))) throw FailedPredicateException(this, "precpred(nullptr, 1)", ctx);
					setState(824);//958
					match(CPP14Parser::Mod,ctx);
					setState(825); //951
					pmexpression(0,ctx);
					break;
				}

				} 
			}
			setState(830);//875
			_errHandler->sync(this, ctx);
			alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, ctx);
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

//----------------- AdditiveexpressionContext ------------------------------------------------------------------

CPP14Parser::AdditiveexpressionContext::AdditiveexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::MultiplicativeexpressionContext* CPP14Parser::AdditiveexpressionContext::multiplicativeexpression()
{
	return getRuleContext<CPP14Parser::MultiplicativeexpressionContext>(0);//1165
}

CPP14Parser::AdditiveexpressionContext* CPP14Parser::AdditiveexpressionContext::additiveexpression()
{
	return getRuleContext<CPP14Parser::AdditiveexpressionContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::AdditiveexpressionContext::Plus()
{
	return getToken(CPP14Parser::Plus, 0);
}

tree::TerminalNode* CPP14Parser::AdditiveexpressionContext::Minus()
{
	return getToken(CPP14Parser::Minus, 0);
}


size_t CPP14Parser::AdditiveexpressionContext::getRuleIndex() const
{
	return CPP14Parser::RuleAdditiveexpression;//688
}

void CPP14Parser::AdditiveexpressionContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::AdditiveexpressionContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::AdditiveexpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitAdditiveexpression(this);
	else
		return visitor->visitChildren(this);
}


CPP14Parser::AdditiveexpressionContext* CPP14Parser::additiveexpression()
{
	 return additiveexpression(0, nullptr);//600
}

CPP14Parser::AdditiveexpressionContext* CPP14Parser::additiveexpression(int precedence, antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	antlr4::ParserRuleContext *parentContext = parent;
	size_t parentState = getState();
	auto _localctx = std::make_unique<AdditiveexpressionContext>(parentContext, parentState);//610
	auto ctx = _localctx.get();//609
	size_t startState = 66;
	enterRecursionRule(ctx, 66, CPP14Parser::RuleAdditiveexpression, precedence);

		

	auto onExit = finally([=,&_localctx]
{
		unrollRecursionContexts(parentContext, std::move(_localctx));
	});
	try
{
		size_t alt;
		enterOuterAlt(ctx, 1);
		setState(832); //951
		multiplicativeexpression(0,ctx);
		ctx->stop = _input->LT(-1);
		setState(842);//865
		_errHandler->sync(this, ctx);
		alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, ctx);
		while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
		{
			if (alt == 1)
		{
				if (!_parseListeners.empty())
					triggerExitRuleEvent(ctx);

				setState(840);//830
				_errHandler->sync(this, ctx);
				switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, ctx))
				{
				case 1:
				{
					auto tmpContext = std::make_unique<AdditiveexpressionContext>(parentContext, parentState);
					pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleAdditiveexpression);//1240
					_localctx = std::move(tmpContext);
					ctx = _localctx.get();
					setState(834);//1002

					if (!(precpred(nullptr, 2))) throw FailedPredicateException(this, "precpred(nullptr, 2)", ctx);
					setState(835);//958
					match(CPP14Parser::Plus,ctx);
					setState(836); //951
					multiplicativeexpression(0,ctx);
					break;
				}

				case 2:
				{
					auto tmpContext = std::make_unique<AdditiveexpressionContext>(parentContext, parentState);
					pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleAdditiveexpression);//1240
					_localctx = std::move(tmpContext);
					ctx = _localctx.get();
					setState(837);//1002

					if (!(precpred(nullptr, 1))) throw FailedPredicateException(this, "precpred(nullptr, 1)", ctx);
					setState(838);//958
					match(CPP14Parser::Minus,ctx);
					setState(839); //951
					multiplicativeexpression(0,ctx);
					break;
				}

				} 
			}
			setState(844);//875
			_errHandler->sync(this, ctx);
			alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, ctx);
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

//----------------- ShiftexpressionContext ------------------------------------------------------------------

CPP14Parser::ShiftexpressionContext::ShiftexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::AdditiveexpressionContext* CPP14Parser::ShiftexpressionContext::additiveexpression()
{
	return getRuleContext<CPP14Parser::AdditiveexpressionContext>(0);//1165
}

CPP14Parser::ShiftexpressionContext* CPP14Parser::ShiftexpressionContext::shiftexpression()
{
	return getRuleContext<CPP14Parser::ShiftexpressionContext>(0);//1165
}

CPP14Parser::ShiftoperatorContext* CPP14Parser::ShiftexpressionContext::shiftoperator()
{
	return getRuleContext<CPP14Parser::ShiftoperatorContext>(0);//1165
}


size_t CPP14Parser::ShiftexpressionContext::getRuleIndex() const
{
	return CPP14Parser::RuleShiftexpression;//688
}

void CPP14Parser::ShiftexpressionContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::ShiftexpressionContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::ShiftexpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitShiftexpression(this);
	else
		return visitor->visitChildren(this);
}


CPP14Parser::ShiftexpressionContext* CPP14Parser::shiftexpression()
{
	 return shiftexpression(0, nullptr);//600
}

CPP14Parser::ShiftexpressionContext* CPP14Parser::shiftexpression(int precedence, antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	antlr4::ParserRuleContext *parentContext = parent;
	size_t parentState = getState();
	auto _localctx = std::make_unique<ShiftexpressionContext>(parentContext, parentState);//610
	auto ctx = _localctx.get();//609
	size_t startState = 68;
	enterRecursionRule(ctx, 68, CPP14Parser::RuleShiftexpression, precedence);

		

	auto onExit = finally([=,&_localctx]
{
		unrollRecursionContexts(parentContext, std::move(_localctx));
	});
	try
{
		size_t alt;
		enterOuterAlt(ctx, 1);
		setState(846); //951
		additiveexpression(0,ctx);
		ctx->stop = _input->LT(-1);
		setState(854);//865
		_errHandler->sync(this, ctx);
		alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, ctx);
		while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
		{
			if (alt == 1)
		{
				if (!_parseListeners.empty())
					triggerExitRuleEvent(ctx);

				auto tmpContext = std::make_unique<ShiftexpressionContext>(parentContext, parentState);
				pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleShiftexpression);//1240
				_localctx = std::move(tmpContext);
				ctx = _localctx.get();
				setState(848);//1002

				if (!(precpred(nullptr, 1))) throw FailedPredicateException(this, "precpred(nullptr, 1)", ctx);
				setState(849); //951
				shiftoperator(ctx);
				setState(850); //951
				additiveexpression(0,ctx); 
			}
			setState(856);//875
			_errHandler->sync(this, ctx);
			alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, ctx);
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

//----------------- ShiftoperatorContext ------------------------------------------------------------------

CPP14Parser::ShiftoperatorContext::ShiftoperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::ShiftoperatorContext::RightShift()
{
	return getToken(CPP14Parser::RightShift, 0);
}

tree::TerminalNode* CPP14Parser::ShiftoperatorContext::LeftShift()
{
	return getToken(CPP14Parser::LeftShift, 0);
}


size_t CPP14Parser::ShiftoperatorContext::getRuleIndex() const
{
	return CPP14Parser::RuleShiftoperator;//688
}

void CPP14Parser::ShiftoperatorContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::ShiftoperatorContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::ShiftoperatorContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitShiftoperator(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::ShiftoperatorContext* CPP14Parser::shiftoperator( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<ShiftoperatorContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 70, CPP14Parser::RuleShiftoperator);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(857);//970
		_la = _input->LA(1);
		if (!(_la == CPP14Parser::LeftShift

		|| _la == CPP14Parser::RightShift))
		{
		_errHandler->recoverInline(this, ctx);
		}
		else
		{
			_errHandler->reportMatch(this);
			consume(ctx);
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

//----------------- RelationalexpressionContext ------------------------------------------------------------------

CPP14Parser::RelationalexpressionContext::RelationalexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::ShiftexpressionContext* CPP14Parser::RelationalexpressionContext::shiftexpression()
{
	return getRuleContext<CPP14Parser::ShiftexpressionContext>(0);//1165
}

CPP14Parser::RelationalexpressionContext* CPP14Parser::RelationalexpressionContext::relationalexpression()
{
	return getRuleContext<CPP14Parser::RelationalexpressionContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::RelationalexpressionContext::Less()
{
	return getToken(CPP14Parser::Less, 0);
}

tree::TerminalNode* CPP14Parser::RelationalexpressionContext::Greater()
{
	return getToken(CPP14Parser::Greater, 0);
}

tree::TerminalNode* CPP14Parser::RelationalexpressionContext::LessEqual()
{
	return getToken(CPP14Parser::LessEqual, 0);
}

tree::TerminalNode* CPP14Parser::RelationalexpressionContext::GreaterEqual()
{
	return getToken(CPP14Parser::GreaterEqual, 0);
}


size_t CPP14Parser::RelationalexpressionContext::getRuleIndex() const
{
	return CPP14Parser::RuleRelationalexpression;//688
}

void CPP14Parser::RelationalexpressionContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::RelationalexpressionContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::RelationalexpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitRelationalexpression(this);
	else
		return visitor->visitChildren(this);
}


CPP14Parser::RelationalexpressionContext* CPP14Parser::relationalexpression()
{
	 return relationalexpression(0, nullptr);//600
}

CPP14Parser::RelationalexpressionContext* CPP14Parser::relationalexpression(int precedence, antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	antlr4::ParserRuleContext *parentContext = parent;
	size_t parentState = getState();
	auto _localctx = std::make_unique<RelationalexpressionContext>(parentContext, parentState);//610
	auto ctx = _localctx.get();//609
	size_t startState = 72;
	enterRecursionRule(ctx, 72, CPP14Parser::RuleRelationalexpression, precedence);

		

	auto onExit = finally([=,&_localctx]
{
		unrollRecursionContexts(parentContext, std::move(_localctx));
	});
	try
{
		size_t alt;
		enterOuterAlt(ctx, 1);
		setState(860); //951
		shiftexpression(0,ctx);
		ctx->stop = _input->LT(-1);
		setState(876);//865
		_errHandler->sync(this, ctx);
		alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, ctx);
		while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
		{
			if (alt == 1)
		{
				if (!_parseListeners.empty())
					triggerExitRuleEvent(ctx);

				setState(874);//830
				_errHandler->sync(this, ctx);
				switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, ctx))
				{
				case 1:
				{
					auto tmpContext = std::make_unique<RelationalexpressionContext>(parentContext, parentState);
					pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleRelationalexpression);//1240
					_localctx = std::move(tmpContext);
					ctx = _localctx.get();
					setState(862);//1002

					if (!(precpred(nullptr, 4))) throw FailedPredicateException(this, "precpred(nullptr, 4)", ctx);
					setState(863);//958
					match(CPP14Parser::Less,ctx);
					setState(864); //951
					shiftexpression(0,ctx);
					break;
				}

				case 2:
				{
					auto tmpContext = std::make_unique<RelationalexpressionContext>(parentContext, parentState);
					pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleRelationalexpression);//1240
					_localctx = std::move(tmpContext);
					ctx = _localctx.get();
					setState(865);//1002

					if (!(precpred(nullptr, 3))) throw FailedPredicateException(this, "precpred(nullptr, 3)", ctx);
					setState(866);//958
					match(CPP14Parser::Greater,ctx);
					setState(867); //951
					shiftexpression(0,ctx);
					break;
				}

				case 3:
				{
					auto tmpContext = std::make_unique<RelationalexpressionContext>(parentContext, parentState);
					pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleRelationalexpression);//1240
					_localctx = std::move(tmpContext);
					ctx = _localctx.get();
					setState(868);//1002

					if (!(precpred(nullptr, 2))) throw FailedPredicateException(this, "precpred(nullptr, 2)", ctx);
					setState(869);//958
					match(CPP14Parser::LessEqual,ctx);
					setState(870); //951
					shiftexpression(0,ctx);
					break;
				}

				case 4:
				{
					auto tmpContext = std::make_unique<RelationalexpressionContext>(parentContext, parentState);
					pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleRelationalexpression);//1240
					_localctx = std::move(tmpContext);
					ctx = _localctx.get();
					setState(871);//1002

					if (!(precpred(nullptr, 1))) throw FailedPredicateException(this, "precpred(nullptr, 1)", ctx);
					setState(872);//958
					match(CPP14Parser::GreaterEqual,ctx);
					setState(873); //951
					shiftexpression(0,ctx);
					break;
				}

				} 
			}
			setState(878);//875
			_errHandler->sync(this, ctx);
			alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, ctx);
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

//----------------- EqualityexpressionContext ------------------------------------------------------------------

CPP14Parser::EqualityexpressionContext::EqualityexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::RelationalexpressionContext* CPP14Parser::EqualityexpressionContext::relationalexpression()
{
	return getRuleContext<CPP14Parser::RelationalexpressionContext>(0);//1165
}

CPP14Parser::EqualityexpressionContext* CPP14Parser::EqualityexpressionContext::equalityexpression()
{
	return getRuleContext<CPP14Parser::EqualityexpressionContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::EqualityexpressionContext::Equal()
{
	return getToken(CPP14Parser::Equal, 0);
}

tree::TerminalNode* CPP14Parser::EqualityexpressionContext::NotEqual()
{
	return getToken(CPP14Parser::NotEqual, 0);
}


size_t CPP14Parser::EqualityexpressionContext::getRuleIndex() const
{
	return CPP14Parser::RuleEqualityexpression;//688
}

void CPP14Parser::EqualityexpressionContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::EqualityexpressionContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::EqualityexpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitEqualityexpression(this);
	else
		return visitor->visitChildren(this);
}


CPP14Parser::EqualityexpressionContext* CPP14Parser::equalityexpression()
{
	 return equalityexpression(0, nullptr);//600
}

CPP14Parser::EqualityexpressionContext* CPP14Parser::equalityexpression(int precedence, antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	antlr4::ParserRuleContext *parentContext = parent;
	size_t parentState = getState();
	auto _localctx = std::make_unique<EqualityexpressionContext>(parentContext, parentState);//610
	auto ctx = _localctx.get();//609
	size_t startState = 74;
	enterRecursionRule(ctx, 74, CPP14Parser::RuleEqualityexpression, precedence);

		

	auto onExit = finally([=,&_localctx]
{
		unrollRecursionContexts(parentContext, std::move(_localctx));
	});
	try
{
		size_t alt;
		enterOuterAlt(ctx, 1);
		setState(880); //951
		relationalexpression(0,ctx);
		ctx->stop = _input->LT(-1);
		setState(890);//865
		_errHandler->sync(this, ctx);
		alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, ctx);
		while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
		{
			if (alt == 1)
		{
				if (!_parseListeners.empty())
					triggerExitRuleEvent(ctx);

				setState(888);//830
				_errHandler->sync(this, ctx);
				switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, ctx))
				{
				case 1:
				{
					auto tmpContext = std::make_unique<EqualityexpressionContext>(parentContext, parentState);
					pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleEqualityexpression);//1240
					_localctx = std::move(tmpContext);
					ctx = _localctx.get();
					setState(882);//1002

					if (!(precpred(nullptr, 2))) throw FailedPredicateException(this, "precpred(nullptr, 2)", ctx);
					setState(883);//958
					match(CPP14Parser::Equal,ctx);
					setState(884); //951
					relationalexpression(0,ctx);
					break;
				}

				case 2:
				{
					auto tmpContext = std::make_unique<EqualityexpressionContext>(parentContext, parentState);
					pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleEqualityexpression);//1240
					_localctx = std::move(tmpContext);
					ctx = _localctx.get();
					setState(885);//1002

					if (!(precpred(nullptr, 1))) throw FailedPredicateException(this, "precpred(nullptr, 1)", ctx);
					setState(886);//958
					match(CPP14Parser::NotEqual,ctx);
					setState(887); //951
					relationalexpression(0,ctx);
					break;
				}

				} 
			}
			setState(892);//875
			_errHandler->sync(this, ctx);
			alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, ctx);
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

//----------------- AndexpressionContext ------------------------------------------------------------------

CPP14Parser::AndexpressionContext::AndexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::EqualityexpressionContext* CPP14Parser::AndexpressionContext::equalityexpression()
{
	return getRuleContext<CPP14Parser::EqualityexpressionContext>(0);//1165
}

CPP14Parser::AndexpressionContext* CPP14Parser::AndexpressionContext::andexpression()
{
	return getRuleContext<CPP14Parser::AndexpressionContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::AndexpressionContext::And()
{
	return getToken(CPP14Parser::And, 0);
}


size_t CPP14Parser::AndexpressionContext::getRuleIndex() const
{
	return CPP14Parser::RuleAndexpression;//688
}

void CPP14Parser::AndexpressionContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::AndexpressionContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::AndexpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitAndexpression(this);
	else
		return visitor->visitChildren(this);
}


CPP14Parser::AndexpressionContext* CPP14Parser::andexpression()
{
	 return andexpression(0, nullptr);//600
}

CPP14Parser::AndexpressionContext* CPP14Parser::andexpression(int precedence, antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	antlr4::ParserRuleContext *parentContext = parent;
	size_t parentState = getState();
	auto _localctx = std::make_unique<AndexpressionContext>(parentContext, parentState);//610
	auto ctx = _localctx.get();//609
	size_t startState = 76;
	enterRecursionRule(ctx, 76, CPP14Parser::RuleAndexpression, precedence);

		

	auto onExit = finally([=,&_localctx]
{
		unrollRecursionContexts(parentContext, std::move(_localctx));
	});
	try
{
		size_t alt;
		enterOuterAlt(ctx, 1);
		setState(894); //951
		equalityexpression(0,ctx);
		ctx->stop = _input->LT(-1);
		setState(901);//865
		_errHandler->sync(this, ctx);
		alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, ctx);
		while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
		{
			if (alt == 1)
		{
				if (!_parseListeners.empty())
					triggerExitRuleEvent(ctx);

				auto tmpContext = std::make_unique<AndexpressionContext>(parentContext, parentState);
				pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleAndexpression);//1240
				_localctx = std::move(tmpContext);
				ctx = _localctx.get();
				setState(896);//1002

				if (!(precpred(nullptr, 1))) throw FailedPredicateException(this, "precpred(nullptr, 1)", ctx);
				setState(897);//958
				match(CPP14Parser::And,ctx);
				setState(898); //951
				equalityexpression(0,ctx); 
			}
			setState(903);//875
			_errHandler->sync(this, ctx);
			alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, ctx);
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

//----------------- ExclusiveorexpressionContext ------------------------------------------------------------------

CPP14Parser::ExclusiveorexpressionContext::ExclusiveorexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::AndexpressionContext* CPP14Parser::ExclusiveorexpressionContext::andexpression()
{
	return getRuleContext<CPP14Parser::AndexpressionContext>(0);//1165
}

CPP14Parser::ExclusiveorexpressionContext* CPP14Parser::ExclusiveorexpressionContext::exclusiveorexpression()
{
	return getRuleContext<CPP14Parser::ExclusiveorexpressionContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::ExclusiveorexpressionContext::Caret()
{
	return getToken(CPP14Parser::Caret, 0);
}


size_t CPP14Parser::ExclusiveorexpressionContext::getRuleIndex() const
{
	return CPP14Parser::RuleExclusiveorexpression;//688
}

void CPP14Parser::ExclusiveorexpressionContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::ExclusiveorexpressionContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::ExclusiveorexpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitExclusiveorexpression(this);
	else
		return visitor->visitChildren(this);
}


CPP14Parser::ExclusiveorexpressionContext* CPP14Parser::exclusiveorexpression()
{
	 return exclusiveorexpression(0, nullptr);//600
}

CPP14Parser::ExclusiveorexpressionContext* CPP14Parser::exclusiveorexpression(int precedence, antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	antlr4::ParserRuleContext *parentContext = parent;
	size_t parentState = getState();
	auto _localctx = std::make_unique<ExclusiveorexpressionContext>(parentContext, parentState);//610
	auto ctx = _localctx.get();//609
	size_t startState = 78;
	enterRecursionRule(ctx, 78, CPP14Parser::RuleExclusiveorexpression, precedence);

		

	auto onExit = finally([=,&_localctx]
{
		unrollRecursionContexts(parentContext, std::move(_localctx));
	});
	try
{
		size_t alt;
		enterOuterAlt(ctx, 1);
		setState(905); //951
		andexpression(0,ctx);
		ctx->stop = _input->LT(-1);
		setState(912);//865
		_errHandler->sync(this, ctx);
		alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, ctx);
		while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
		{
			if (alt == 1)
		{
				if (!_parseListeners.empty())
					triggerExitRuleEvent(ctx);

				auto tmpContext = std::make_unique<ExclusiveorexpressionContext>(parentContext, parentState);
				pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleExclusiveorexpression);//1240
				_localctx = std::move(tmpContext);
				ctx = _localctx.get();
				setState(907);//1002

				if (!(precpred(nullptr, 1))) throw FailedPredicateException(this, "precpred(nullptr, 1)", ctx);
				setState(908);//958
				match(CPP14Parser::Caret,ctx);
				setState(909); //951
				andexpression(0,ctx); 
			}
			setState(914);//875
			_errHandler->sync(this, ctx);
			alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, ctx);
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

//----------------- InclusiveorexpressionContext ------------------------------------------------------------------

CPP14Parser::InclusiveorexpressionContext::InclusiveorexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::ExclusiveorexpressionContext* CPP14Parser::InclusiveorexpressionContext::exclusiveorexpression()
{
	return getRuleContext<CPP14Parser::ExclusiveorexpressionContext>(0);//1165
}

CPP14Parser::InclusiveorexpressionContext* CPP14Parser::InclusiveorexpressionContext::inclusiveorexpression()
{
	return getRuleContext<CPP14Parser::InclusiveorexpressionContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::InclusiveorexpressionContext::Or()
{
	return getToken(CPP14Parser::Or, 0);
}


size_t CPP14Parser::InclusiveorexpressionContext::getRuleIndex() const
{
	return CPP14Parser::RuleInclusiveorexpression;//688
}

void CPP14Parser::InclusiveorexpressionContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::InclusiveorexpressionContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::InclusiveorexpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitInclusiveorexpression(this);
	else
		return visitor->visitChildren(this);
}


CPP14Parser::InclusiveorexpressionContext* CPP14Parser::inclusiveorexpression()
{
	 return inclusiveorexpression(0, nullptr);//600
}

CPP14Parser::InclusiveorexpressionContext* CPP14Parser::inclusiveorexpression(int precedence, antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	antlr4::ParserRuleContext *parentContext = parent;
	size_t parentState = getState();
	auto _localctx = std::make_unique<InclusiveorexpressionContext>(parentContext, parentState);//610
	auto ctx = _localctx.get();//609
	size_t startState = 80;
	enterRecursionRule(ctx, 80, CPP14Parser::RuleInclusiveorexpression, precedence);

		

	auto onExit = finally([=,&_localctx]
{
		unrollRecursionContexts(parentContext, std::move(_localctx));
	});
	try
{
		size_t alt;
		enterOuterAlt(ctx, 1);
		setState(916); //951
		exclusiveorexpression(0,ctx);
		ctx->stop = _input->LT(-1);
		setState(923);//865
		_errHandler->sync(this, ctx);
		alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, ctx);
		while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
		{
			if (alt == 1)
		{
				if (!_parseListeners.empty())
					triggerExitRuleEvent(ctx);

				auto tmpContext = std::make_unique<InclusiveorexpressionContext>(parentContext, parentState);
				pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleInclusiveorexpression);//1240
				_localctx = std::move(tmpContext);
				ctx = _localctx.get();
				setState(918);//1002

				if (!(precpred(nullptr, 1))) throw FailedPredicateException(this, "precpred(nullptr, 1)", ctx);
				setState(919);//958
				match(CPP14Parser::Or,ctx);
				setState(920); //951
				exclusiveorexpression(0,ctx); 
			}
			setState(925);//875
			_errHandler->sync(this, ctx);
			alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, ctx);
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

//----------------- LogicalandexpressionContext ------------------------------------------------------------------

CPP14Parser::LogicalandexpressionContext::LogicalandexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::InclusiveorexpressionContext* CPP14Parser::LogicalandexpressionContext::inclusiveorexpression()
{
	return getRuleContext<CPP14Parser::InclusiveorexpressionContext>(0);//1165
}

CPP14Parser::LogicalandexpressionContext* CPP14Parser::LogicalandexpressionContext::logicalandexpression()
{
	return getRuleContext<CPP14Parser::LogicalandexpressionContext>(0);//1165
}


size_t CPP14Parser::LogicalandexpressionContext::getRuleIndex() const
{
	return CPP14Parser::RuleLogicalandexpression;//688
}

void CPP14Parser::LogicalandexpressionContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::LogicalandexpressionContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::LogicalandexpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitLogicalandexpression(this);
	else
		return visitor->visitChildren(this);
}


CPP14Parser::LogicalandexpressionContext* CPP14Parser::logicalandexpression()
{
	 return logicalandexpression(0, nullptr);//600
}

CPP14Parser::LogicalandexpressionContext* CPP14Parser::logicalandexpression(int precedence, antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	antlr4::ParserRuleContext *parentContext = parent;
	size_t parentState = getState();
	auto _localctx = std::make_unique<LogicalandexpressionContext>(parentContext, parentState);//610
	auto ctx = _localctx.get();//609
	size_t startState = 82;
	enterRecursionRule(ctx, 82, CPP14Parser::RuleLogicalandexpression, precedence);

		

	auto onExit = finally([=,&_localctx]
{
		unrollRecursionContexts(parentContext, std::move(_localctx));
	});
	try
{
		size_t alt;
		enterOuterAlt(ctx, 1);
		setState(927); //951
		inclusiveorexpression(0,ctx);
		ctx->stop = _input->LT(-1);
		setState(937);//865
		_errHandler->sync(this, ctx);
		alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, ctx);
		while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
		{
			if (alt == 1)
		{
				if (!_parseListeners.empty())
					triggerExitRuleEvent(ctx);

				setState(935);//830
				_errHandler->sync(this, ctx);
				switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, ctx))
				{
				case 1:
				{
					auto tmpContext = std::make_unique<LogicalandexpressionContext>(parentContext, parentState);
					pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleLogicalandexpression);//1240
					_localctx = std::move(tmpContext);
					ctx = _localctx.get();
					setState(929);//1002

					if (!(precpred(nullptr, 2))) throw FailedPredicateException(this, "precpred(nullptr, 2)", ctx);
					setState(930);//958
					match(CPP14Parser::T__2,ctx);
					setState(931); //951
					inclusiveorexpression(0,ctx);
					break;
				}

				case 2:
				{
					auto tmpContext = std::make_unique<LogicalandexpressionContext>(parentContext, parentState);
					pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleLogicalandexpression);//1240
					_localctx = std::move(tmpContext);
					ctx = _localctx.get();
					setState(932);//1002

					if (!(precpred(nullptr, 1))) throw FailedPredicateException(this, "precpred(nullptr, 1)", ctx);
					setState(933);//958
					match(CPP14Parser::T__3,ctx);
					setState(934); //951
					inclusiveorexpression(0,ctx);
					break;
				}

				} 
			}
			setState(939);//875
			_errHandler->sync(this, ctx);
			alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, ctx);
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

//----------------- LogicalorexpressionContext ------------------------------------------------------------------

CPP14Parser::LogicalorexpressionContext::LogicalorexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::LogicalandexpressionContext* CPP14Parser::LogicalorexpressionContext::logicalandexpression()
{
	return getRuleContext<CPP14Parser::LogicalandexpressionContext>(0);//1165
}

CPP14Parser::LogicalorexpressionContext* CPP14Parser::LogicalorexpressionContext::logicalorexpression()
{
	return getRuleContext<CPP14Parser::LogicalorexpressionContext>(0);//1165
}


size_t CPP14Parser::LogicalorexpressionContext::getRuleIndex() const
{
	return CPP14Parser::RuleLogicalorexpression;//688
}

void CPP14Parser::LogicalorexpressionContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::LogicalorexpressionContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::LogicalorexpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitLogicalorexpression(this);
	else
		return visitor->visitChildren(this);
}


CPP14Parser::LogicalorexpressionContext* CPP14Parser::logicalorexpression()
{
	 return logicalorexpression(0, nullptr);//600
}

CPP14Parser::LogicalorexpressionContext* CPP14Parser::logicalorexpression(int precedence, antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	antlr4::ParserRuleContext *parentContext = parent;
	size_t parentState = getState();
	auto _localctx = std::make_unique<LogicalorexpressionContext>(parentContext, parentState);//610
	auto ctx = _localctx.get();//609
	size_t startState = 84;
	enterRecursionRule(ctx, 84, CPP14Parser::RuleLogicalorexpression, precedence);

		

	auto onExit = finally([=,&_localctx]
{
		unrollRecursionContexts(parentContext, std::move(_localctx));
	});
	try
{
		size_t alt;
		enterOuterAlt(ctx, 1);
		setState(941); //951
		logicalandexpression(0,ctx);
		ctx->stop = _input->LT(-1);
		setState(951);//865
		_errHandler->sync(this, ctx);
		alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, ctx);
		while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
		{
			if (alt == 1)
		{
				if (!_parseListeners.empty())
					triggerExitRuleEvent(ctx);

				setState(949);//830
				_errHandler->sync(this, ctx);
				switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, ctx))
				{
				case 1:
				{
					auto tmpContext = std::make_unique<LogicalorexpressionContext>(parentContext, parentState);
					pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleLogicalorexpression);//1240
					_localctx = std::move(tmpContext);
					ctx = _localctx.get();
					setState(943);//1002

					if (!(precpred(nullptr, 2))) throw FailedPredicateException(this, "precpred(nullptr, 2)", ctx);
					setState(944);//958
					match(CPP14Parser::T__4,ctx);
					setState(945); //951
					logicalandexpression(0,ctx);
					break;
				}

				case 2:
				{
					auto tmpContext = std::make_unique<LogicalorexpressionContext>(parentContext, parentState);
					pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleLogicalorexpression);//1240
					_localctx = std::move(tmpContext);
					ctx = _localctx.get();
					setState(946);//1002

					if (!(precpred(nullptr, 1))) throw FailedPredicateException(this, "precpred(nullptr, 1)", ctx);
					setState(947);//958
					match(CPP14Parser::T__5,ctx);
					setState(948); //951
					logicalandexpression(0,ctx);
					break;
				}

				} 
			}
			setState(953);//875
			_errHandler->sync(this, ctx);
			alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, ctx);
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

//----------------- ConditionalexpressionContext ------------------------------------------------------------------

CPP14Parser::ConditionalexpressionContext::ConditionalexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::LogicalorexpressionContext* CPP14Parser::ConditionalexpressionContext::logicalorexpression()
{
	return getRuleContext<CPP14Parser::LogicalorexpressionContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::ConditionalexpressionContext::Question()
{
	return getToken(CPP14Parser::Question, 0);
}

CPP14Parser::ExpressionContext* CPP14Parser::ConditionalexpressionContext::expression()
{
	return getRuleContext<CPP14Parser::ExpressionContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::ConditionalexpressionContext::Colon()
{
	return getToken(CPP14Parser::Colon, 0);
}

CPP14Parser::AssignmentexpressionContext* CPP14Parser::ConditionalexpressionContext::assignmentexpression()
{
	return getRuleContext<CPP14Parser::AssignmentexpressionContext>(0);//1165
}


size_t CPP14Parser::ConditionalexpressionContext::getRuleIndex() const
{
	return CPP14Parser::RuleConditionalexpression;//688
}

void CPP14Parser::ConditionalexpressionContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::ConditionalexpressionContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::ConditionalexpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitConditionalexpression(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::ConditionalexpressionContext* CPP14Parser::conditionalexpression( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<ConditionalexpressionContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 86, CPP14Parser::RuleConditionalexpression);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(961);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(954); //951
			logicalorexpression(0,ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(955); //951
			logicalorexpression(0,ctx);
			setState(956);//958
			match(CPP14Parser::Question,ctx);
			setState(957); //951
			expression(0,ctx);
			setState(958);//958
			match(CPP14Parser::Colon,ctx);
			setState(959); //951
			assignmentexpression(ctx);
			break;
		}

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

//----------------- AssignmentexpressionContext ------------------------------------------------------------------

CPP14Parser::AssignmentexpressionContext::AssignmentexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::ConditionalexpressionContext* CPP14Parser::AssignmentexpressionContext::conditionalexpression()
{
	return getRuleContext<CPP14Parser::ConditionalexpressionContext>(0);//1165
}

CPP14Parser::LogicalorexpressionContext* CPP14Parser::AssignmentexpressionContext::logicalorexpression()
{
	return getRuleContext<CPP14Parser::LogicalorexpressionContext>(0);//1165
}

CPP14Parser::AssignmentoperatorContext* CPP14Parser::AssignmentexpressionContext::assignmentoperator()
{
	return getRuleContext<CPP14Parser::AssignmentoperatorContext>(0);//1165
}

CPP14Parser::InitializerclauseContext* CPP14Parser::AssignmentexpressionContext::initializerclause()
{
	return getRuleContext<CPP14Parser::InitializerclauseContext>(0);//1165
}

CPP14Parser::ThrowexpressionContext* CPP14Parser::AssignmentexpressionContext::throwexpression()
{
	return getRuleContext<CPP14Parser::ThrowexpressionContext>(0);//1165
}


size_t CPP14Parser::AssignmentexpressionContext::getRuleIndex() const
{
	return CPP14Parser::RuleAssignmentexpression;//688
}

void CPP14Parser::AssignmentexpressionContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::AssignmentexpressionContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::AssignmentexpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitAssignmentexpression(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::AssignmentexpressionContext* CPP14Parser::assignmentexpression( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<AssignmentexpressionContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 88, CPP14Parser::RuleAssignmentexpression);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(969);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 72, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(963); //951
			conditionalexpression(ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(964); //951
			logicalorexpression(0,ctx);
			setState(965); //951
			assignmentoperator(ctx);
			setState(966); //951
			initializerclause(ctx);
			break;
		}

		case 3:
		{
			enterOuterAlt(ctx, 3);
			setState(968); //951
			throwexpression(ctx);
			break;
		}

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

//----------------- AssignmentoperatorContext ------------------------------------------------------------------

CPP14Parser::AssignmentoperatorContext::AssignmentoperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::AssignmentoperatorContext::Assign()
{
	return getToken(CPP14Parser::Assign, 0);
}

tree::TerminalNode* CPP14Parser::AssignmentoperatorContext::StarAssign()
{
	return getToken(CPP14Parser::StarAssign, 0);
}

tree::TerminalNode* CPP14Parser::AssignmentoperatorContext::DivAssign()
{
	return getToken(CPP14Parser::DivAssign, 0);
}

tree::TerminalNode* CPP14Parser::AssignmentoperatorContext::ModAssign()
{
	return getToken(CPP14Parser::ModAssign, 0);
}

tree::TerminalNode* CPP14Parser::AssignmentoperatorContext::PlusAssign()
{
	return getToken(CPP14Parser::PlusAssign, 0);
}

tree::TerminalNode* CPP14Parser::AssignmentoperatorContext::MinusAssign()
{
	return getToken(CPP14Parser::MinusAssign, 0);
}

tree::TerminalNode* CPP14Parser::AssignmentoperatorContext::RightShiftAssign()
{
	return getToken(CPP14Parser::RightShiftAssign, 0);
}

tree::TerminalNode* CPP14Parser::AssignmentoperatorContext::LeftShiftAssign()
{
	return getToken(CPP14Parser::LeftShiftAssign, 0);
}

tree::TerminalNode* CPP14Parser::AssignmentoperatorContext::AndAssign()
{
	return getToken(CPP14Parser::AndAssign, 0);
}

tree::TerminalNode* CPP14Parser::AssignmentoperatorContext::XorAssign()
{
	return getToken(CPP14Parser::XorAssign, 0);
}

tree::TerminalNode* CPP14Parser::AssignmentoperatorContext::OrAssign()
{
	return getToken(CPP14Parser::OrAssign, 0);
}


size_t CPP14Parser::AssignmentoperatorContext::getRuleIndex() const
{
	return CPP14Parser::RuleAssignmentoperator;//688
}

void CPP14Parser::AssignmentoperatorContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::AssignmentoperatorContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::AssignmentoperatorContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitAssignmentoperator(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::AssignmentoperatorContext* CPP14Parser::assignmentoperator( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<AssignmentoperatorContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 90, CPP14Parser::RuleAssignmentoperator);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(971);//970
		_la = _input->LA(1);
		if (!(((((_la - 100) & ~ 0x3fULL) == 0) &&
			((1ULL << (_la - 100)) & ((1ULL << (CPP14Parser::Assign - 100))
			| (1ULL << (CPP14Parser::PlusAssign - 100))
			| (1ULL << (CPP14Parser::MinusAssign - 100))
			| (1ULL << (CPP14Parser::StarAssign - 100))
			| (1ULL << (CPP14Parser::DivAssign - 100))
			| (1ULL << (CPP14Parser::ModAssign - 100))
			| (1ULL << (CPP14Parser::XorAssign - 100))
			| (1ULL << (CPP14Parser::AndAssign - 100))
			| (1ULL << (CPP14Parser::OrAssign - 100))
			| (1ULL << (CPP14Parser::LeftShiftAssign - 100))
			| (1ULL << (CPP14Parser::RightShiftAssign - 100)))) != 0)))
		{
		_errHandler->recoverInline(this, ctx);
		}
		else
		{
			_errHandler->reportMatch(this);
			consume(ctx);
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

//----------------- ExpressionContext ------------------------------------------------------------------

CPP14Parser::ExpressionContext::ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::AssignmentexpressionContext* CPP14Parser::ExpressionContext::assignmentexpression()
{
	return getRuleContext<CPP14Parser::AssignmentexpressionContext>(0);//1165
}

CPP14Parser::ExpressionContext* CPP14Parser::ExpressionContext::expression()
{
	return getRuleContext<CPP14Parser::ExpressionContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::ExpressionContext::Comma()
{
	return getToken(CPP14Parser::Comma, 0);
}


size_t CPP14Parser::ExpressionContext::getRuleIndex() const
{
	return CPP14Parser::RuleExpression;//688
}

void CPP14Parser::ExpressionContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::ExpressionContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitExpression(this);
	else
		return visitor->visitChildren(this);
}


CPP14Parser::ExpressionContext* CPP14Parser::expression()
{
	 return expression(0, nullptr);//600
}

CPP14Parser::ExpressionContext* CPP14Parser::expression(int precedence, antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	antlr4::ParserRuleContext *parentContext = parent;
	size_t parentState = getState();
	auto _localctx = std::make_unique<ExpressionContext>(parentContext, parentState);//610
	auto ctx = _localctx.get();//609
	size_t startState = 92;
	enterRecursionRule(ctx, 92, CPP14Parser::RuleExpression, precedence);

		

	auto onExit = finally([=,&_localctx]
{
		unrollRecursionContexts(parentContext, std::move(_localctx));
	});
	try
{
		size_t alt;
		enterOuterAlt(ctx, 1);
		setState(974); //951
		assignmentexpression(ctx);
		ctx->stop = _input->LT(-1);
		setState(981);//865
		_errHandler->sync(this, ctx);
		alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, ctx);
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
				setState(976);//1002

				if (!(precpred(nullptr, 1))) throw FailedPredicateException(this, "precpred(nullptr, 1)", ctx);
				setState(977);//958
				match(CPP14Parser::Comma,ctx);
				setState(978); //951
				assignmentexpression(ctx); 
			}
			setState(983);//875
			_errHandler->sync(this, ctx);
			alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, ctx);
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

//----------------- ConstantexpressionContext ------------------------------------------------------------------

CPP14Parser::ConstantexpressionContext::ConstantexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::ConditionalexpressionContext* CPP14Parser::ConstantexpressionContext::conditionalexpression()
{
	return getRuleContext<CPP14Parser::ConditionalexpressionContext>(0);//1165
}


size_t CPP14Parser::ConstantexpressionContext::getRuleIndex() const
{
	return CPP14Parser::RuleConstantexpression;//688
}

void CPP14Parser::ConstantexpressionContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::ConstantexpressionContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::ConstantexpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitConstantexpression(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::ConstantexpressionContext* CPP14Parser::constantexpression( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<ConstantexpressionContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 94, CPP14Parser::RuleConstantexpression);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(984); //951
		conditionalexpression(ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- StatementContext ------------------------------------------------------------------

CPP14Parser::StatementContext::StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::LabeledstatementContext* CPP14Parser::StatementContext::labeledstatement()
{
	return getRuleContext<CPP14Parser::LabeledstatementContext>(0);//1165
}

CPP14Parser::ExpressionstatementContext* CPP14Parser::StatementContext::expressionstatement()
{
	return getRuleContext<CPP14Parser::ExpressionstatementContext>(0);//1165
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::StatementContext::attributespecifierseq()
{
	return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);//1165
}

CPP14Parser::CompoundstatementContext* CPP14Parser::StatementContext::compoundstatement()
{
	return getRuleContext<CPP14Parser::CompoundstatementContext>(0);//1165
}

CPP14Parser::SelectionstatementContext* CPP14Parser::StatementContext::selectionstatement()
{
	return getRuleContext<CPP14Parser::SelectionstatementContext>(0);//1165
}

CPP14Parser::IterationstatementContext* CPP14Parser::StatementContext::iterationstatement()
{
	return getRuleContext<CPP14Parser::IterationstatementContext>(0);//1165
}

CPP14Parser::JumpstatementContext* CPP14Parser::StatementContext::jumpstatement()
{
	return getRuleContext<CPP14Parser::JumpstatementContext>(0);//1165
}

CPP14Parser::DeclarationstatementContext* CPP14Parser::StatementContext::declarationstatement()
{
	return getRuleContext<CPP14Parser::DeclarationstatementContext>(0);//1165
}

CPP14Parser::TryblockContext* CPP14Parser::StatementContext::tryblock()
{
	return getRuleContext<CPP14Parser::TryblockContext>(0);//1165
}


size_t CPP14Parser::StatementContext::getRuleIndex() const
{
	return CPP14Parser::RuleStatement;//688
}

void CPP14Parser::StatementContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::StatementContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::StatementContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitStatement(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::StatementContext* CPP14Parser::statement( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<StatementContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 96, CPP14Parser::RuleStatement);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1012);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 80, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(986); //951
			labeledstatement(ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(988);//848
			_errHandler->sync(this, ctx);

			switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, ctx))
			{
			case 1:
			{
				setState(987); //951
				attributespecifierseq(0,ctx);
				break;
			}

			}
			setState(990); //951
			expressionstatement(ctx);
			break;
		}

		case 3:
		{
			enterOuterAlt(ctx, 3);
			setState(992);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket)
			{
				setState(991); //951
				attributespecifierseq(0,ctx);
			}
			setState(994); //951
			compoundstatement(ctx);
			break;
		}

		case 4:
		{
			enterOuterAlt(ctx, 4);
			setState(996);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket)
			{
				setState(995); //951
				attributespecifierseq(0,ctx);
			}
			setState(998); //951
			selectionstatement(ctx);
			break;
		}

		case 5:
		{
			enterOuterAlt(ctx, 5);
			setState(1000);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket)
			{
				setState(999); //951
				attributespecifierseq(0,ctx);
			}
			setState(1002); //951
			iterationstatement(ctx);
			break;
		}

		case 6:
		{
			enterOuterAlt(ctx, 6);
			setState(1004);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket)
			{
				setState(1003); //951
				attributespecifierseq(0,ctx);
			}
			setState(1006); //951
			jumpstatement(ctx);
			break;
		}

		case 7:
		{
			enterOuterAlt(ctx, 7);
			setState(1007); //951
			declarationstatement(ctx);
			break;
		}

		case 8:
		{
			enterOuterAlt(ctx, 8);
			setState(1009);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket)
			{
				setState(1008); //951
				attributespecifierseq(0,ctx);
			}
			setState(1011); //951
			tryblock(ctx);
			break;
		}

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

//----------------- LabeledstatementContext ------------------------------------------------------------------

CPP14Parser::LabeledstatementContext::LabeledstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::LabeledstatementContext::Identifier()
{
	return getToken(CPP14Parser::Identifier, 0);
}

tree::TerminalNode* CPP14Parser::LabeledstatementContext::Colon()
{
	return getToken(CPP14Parser::Colon, 0);
}

CPP14Parser::StatementContext* CPP14Parser::LabeledstatementContext::statement()
{
	return getRuleContext<CPP14Parser::StatementContext>(0);//1165
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::LabeledstatementContext::attributespecifierseq()
{
	return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::LabeledstatementContext::Case()
{
	return getToken(CPP14Parser::Case, 0);
}

CPP14Parser::ConstantexpressionContext* CPP14Parser::LabeledstatementContext::constantexpression()
{
	return getRuleContext<CPP14Parser::ConstantexpressionContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::LabeledstatementContext::Default()
{
	return getToken(CPP14Parser::Default, 0);
}


size_t CPP14Parser::LabeledstatementContext::getRuleIndex() const
{
	return CPP14Parser::RuleLabeledstatement;//688
}

void CPP14Parser::LabeledstatementContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::LabeledstatementContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::LabeledstatementContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitLabeledstatement(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::LabeledstatementContext* CPP14Parser::labeledstatement( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<LabeledstatementContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 98, CPP14Parser::RuleLabeledstatement);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1034);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 84, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(1015);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket)
			{
				setState(1014); //951
				attributespecifierseq(0,ctx);
			}
			setState(1017);//958
			match(CPP14Parser::Identifier,ctx);
			setState(1018);//958
			match(CPP14Parser::Colon,ctx);
			setState(1019); //951
			statement(ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(1021);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket)
			{
				setState(1020); //951
				attributespecifierseq(0,ctx);
			}
			setState(1023);//958
			match(CPP14Parser::Case,ctx);
			setState(1024); //951
			constantexpression(ctx);
			setState(1025);//958
			match(CPP14Parser::Colon,ctx);
			setState(1026); //951
			statement(ctx);
			break;
		}

		case 3:
		{
			enterOuterAlt(ctx, 3);
			setState(1029);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket)
			{
				setState(1028); //951
				attributespecifierseq(0,ctx);
			}
			setState(1031);//958
			match(CPP14Parser::Default,ctx);
			setState(1032);//958
			match(CPP14Parser::Colon,ctx);
			setState(1033); //951
			statement(ctx);
			break;
		}

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

//----------------- ExpressionstatementContext ------------------------------------------------------------------

CPP14Parser::ExpressionstatementContext::ExpressionstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::ExpressionstatementContext::Semi()
{
	return getToken(CPP14Parser::Semi, 0);
}

CPP14Parser::ExpressionContext* CPP14Parser::ExpressionstatementContext::expression()
{
	return getRuleContext<CPP14Parser::ExpressionContext>(0);//1165
}


size_t CPP14Parser::ExpressionstatementContext::getRuleIndex() const
{
	return CPP14Parser::RuleExpressionstatement;//688
}

void CPP14Parser::ExpressionstatementContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::ExpressionstatementContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::ExpressionstatementContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitExpressionstatement(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::ExpressionstatementContext* CPP14Parser::expressionstatement( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<ExpressionstatementContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 100, CPP14Parser::RuleExpressionstatement);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(1037);//788
		_errHandler->sync(this, ctx);

		_la = _input->LA(1);
		if ((((_la & ~ 0x3fULL) == 0) &&
			((1ULL << _la) & ((1ULL << CPP14Parser::T__0)
			| (1ULL << CPP14Parser::T__1)
			| (1ULL << CPP14Parser::Alignof)
			| (1ULL << CPP14Parser::Auto)
			| (1ULL << CPP14Parser::Bool)
			| (1ULL << CPP14Parser::Char)
			| (1ULL << CPP14Parser::Char16)
			| (1ULL << CPP14Parser::Char32)
			| (1ULL << CPP14Parser::Const_cast)
			| (1ULL << CPP14Parser::Decltype)
			| (1ULL << CPP14Parser::Delete)
			| (1ULL << CPP14Parser::Double)
			| (1ULL << CPP14Parser::Dynamic_cast)
			| (1ULL << CPP14Parser::False)
			| (1ULL << CPP14Parser::Float)
			| (1ULL << CPP14Parser::Int)
			| (1ULL << CPP14Parser::Long)
			| (1ULL << CPP14Parser::New)
			| (1ULL << CPP14Parser::Noexcept)
			| (1ULL << CPP14Parser::Nullptr)
			| (1ULL << CPP14Parser::Operator)
			| (1ULL << CPP14Parser::Reinterpret_cast)
			| (1ULL << CPP14Parser::Short)
			| (1ULL << CPP14Parser::Signed)
			| (1ULL << CPP14Parser::Sizeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
			((1ULL << (_la - 64)) & ((1ULL << (CPP14Parser::Static_cast - 64))
			| (1ULL << (CPP14Parser::This - 64))
			| (1ULL << (CPP14Parser::Throw - 64))
			| (1ULL << (CPP14Parser::True - 64))
			| (1ULL << (CPP14Parser::Typeid_ - 64))
			| (1ULL << (CPP14Parser::Typename_ - 64))
			| (1ULL << (CPP14Parser::Unsigned - 64))
			| (1ULL << (CPP14Parser::Void - 64))
			| (1ULL << (CPP14Parser::Wchar - 64))
			| (1ULL << (CPP14Parser::LeftParen - 64))
			| (1ULL << (CPP14Parser::LeftBracket - 64))
			| (1ULL << (CPP14Parser::Plus - 64))
			| (1ULL << (CPP14Parser::Minus - 64))
			| (1ULL << (CPP14Parser::Star - 64))
			| (1ULL << (CPP14Parser::And - 64))
			| (1ULL << (CPP14Parser::Or - 64))
			| (1ULL << (CPP14Parser::Tilde - 64))
			| (1ULL << (CPP14Parser::PlusPlus - 64))
			| (1ULL << (CPP14Parser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
			((1ULL << (_la - 128)) & ((1ULL << (CPP14Parser::Doublecolon - 128))
			| (1ULL << (CPP14Parser::Identifier - 128))
			| (1ULL << (CPP14Parser::Integerliteral - 128))
			| (1ULL << (CPP14Parser::Characterliteral - 128))
			| (1ULL << (CPP14Parser::Floatingliteral - 128))
			| (1ULL << (CPP14Parser::Stringliteral - 128))
			| (1ULL << (CPP14Parser::Userdefinedintegerliteral - 128))
			| (1ULL << (CPP14Parser::Userdefinedfloatingliteral - 128))
			| (1ULL << (CPP14Parser::Userdefinedstringliteral - 128))
			| (1ULL << (CPP14Parser::Userdefinedcharacterliteral - 128)))) != 0))
		{
			setState(1036); //951
			expression(0,ctx);
		}
		setState(1039);//958
		match(CPP14Parser::Semi,ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- CompoundstatementContext ------------------------------------------------------------------

CPP14Parser::CompoundstatementContext::CompoundstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::CompoundstatementContext::LeftBrace()
{
	return getToken(CPP14Parser::LeftBrace, 0);
}

tree::TerminalNode* CPP14Parser::CompoundstatementContext::RightBrace()
{
	return getToken(CPP14Parser::RightBrace, 0);
}

CPP14Parser::StatementseqContext* CPP14Parser::CompoundstatementContext::statementseq()
{
	return getRuleContext<CPP14Parser::StatementseqContext>(0);//1165
}


size_t CPP14Parser::CompoundstatementContext::getRuleIndex() const
{
	return CPP14Parser::RuleCompoundstatement;//688
}

void CPP14Parser::CompoundstatementContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::CompoundstatementContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::CompoundstatementContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitCompoundstatement(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::CompoundstatementContext* CPP14Parser::compoundstatement( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<CompoundstatementContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 102, CPP14Parser::RuleCompoundstatement);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(1041);//958
		match(CPP14Parser::LeftBrace,ctx);
		setState(1043);//788
		_errHandler->sync(this, ctx);

		_la = _input->LA(1);
		if ((((_la & ~ 0x3fULL) == 0) &&
			((1ULL << _la) & ((1ULL << CPP14Parser::T__0)
			| (1ULL << CPP14Parser::T__1)
			| (1ULL << CPP14Parser::T__2)
			| (1ULL << CPP14Parser::Alignas)
			| (1ULL << CPP14Parser::Alignof)
			| (1ULL << CPP14Parser::Asm)
			| (1ULL << CPP14Parser::Auto)
			| (1ULL << CPP14Parser::Bool)
			| (1ULL << CPP14Parser::Break)
			| (1ULL << CPP14Parser::Case)
			| (1ULL << CPP14Parser::Char)
			| (1ULL << CPP14Parser::Char16)
			| (1ULL << CPP14Parser::Char32)
			| (1ULL << CPP14Parser::Class)
			| (1ULL << CPP14Parser::Const)
			| (1ULL << CPP14Parser::Constexpr)
			| (1ULL << CPP14Parser::Const_cast)
			| (1ULL << CPP14Parser::Continue)
			| (1ULL << CPP14Parser::Decltype)
			| (1ULL << CPP14Parser::Default)
			| (1ULL << CPP14Parser::Delete)
			| (1ULL << CPP14Parser::Do)
			| (1ULL << CPP14Parser::Double)
			| (1ULL << CPP14Parser::Dynamic_cast)
			| (1ULL << CPP14Parser::Enum)
			| (1ULL << CPP14Parser::Explicit)
			| (1ULL << CPP14Parser::Extern)
			| (1ULL << CPP14Parser::False)
			| (1ULL << CPP14Parser::Float)
			| (1ULL << CPP14Parser::For)
			| (1ULL << CPP14Parser::Friend)
			| (1ULL << CPP14Parser::Goto)
			| (1ULL << CPP14Parser::If)
			| (1ULL << CPP14Parser::Inline)
			| (1ULL << CPP14Parser::Int)
			| (1ULL << CPP14Parser::Long)
			| (1ULL << CPP14Parser::Mutable)
			| (1ULL << CPP14Parser::Namespace)
			| (1ULL << CPP14Parser::New)
			| (1ULL << CPP14Parser::Noexcept)
			| (1ULL << CPP14Parser::Nullptr)
			| (1ULL << CPP14Parser::Operator)
			| (1ULL << CPP14Parser::Register)
			| (1ULL << CPP14Parser::Reinterpret_cast)
			| (1ULL << CPP14Parser::Return)
			| (1ULL << CPP14Parser::Short)
			| (1ULL << CPP14Parser::Signed)
			| (1ULL << CPP14Parser::Sizeof)
			| (1ULL << CPP14Parser::Static)
			| (1ULL << CPP14Parser::Static_assert))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
			((1ULL << (_la - 64)) & ((1ULL << (CPP14Parser::Static_cast - 64))
			| (1ULL << (CPP14Parser::Struct - 64))
			| (1ULL << (CPP14Parser::Switch - 64))
			| (1ULL << (CPP14Parser::This - 64))
			| (1ULL << (CPP14Parser::Thread_local - 64))
			| (1ULL << (CPP14Parser::Throw - 64))
			| (1ULL << (CPP14Parser::True - 64))
			| (1ULL << (CPP14Parser::Try - 64))
			| (1ULL << (CPP14Parser::Typedef - 64))
			| (1ULL << (CPP14Parser::Typeid_ - 64))
			| (1ULL << (CPP14Parser::Typename_ - 64))
			| (1ULL << (CPP14Parser::Union - 64))
			| (1ULL << (CPP14Parser::Unsigned - 64))
			| (1ULL << (CPP14Parser::Using - 64))
			| (1ULL << (CPP14Parser::Virtual - 64))
			| (1ULL << (CPP14Parser::Void - 64))
			| (1ULL << (CPP14Parser::Volatile - 64))
			| (1ULL << (CPP14Parser::Wchar - 64))
			| (1ULL << (CPP14Parser::While - 64))
			| (1ULL << (CPP14Parser::LeftParen - 64))
			| (1ULL << (CPP14Parser::LeftBracket - 64))
			| (1ULL << (CPP14Parser::LeftBrace - 64))
			| (1ULL << (CPP14Parser::Plus - 64))
			| (1ULL << (CPP14Parser::Minus - 64))
			| (1ULL << (CPP14Parser::Star - 64))
			| (1ULL << (CPP14Parser::And - 64))
			| (1ULL << (CPP14Parser::Or - 64))
			| (1ULL << (CPP14Parser::Tilde - 64))
			| (1ULL << (CPP14Parser::PlusPlus - 64))
			| (1ULL << (CPP14Parser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
			((1ULL << (_la - 128)) & ((1ULL << (CPP14Parser::Doublecolon - 128))
			| (1ULL << (CPP14Parser::Semi - 128))
			| (1ULL << (CPP14Parser::Ellipsis - 128))
			| (1ULL << (CPP14Parser::Identifier - 128))
			| (1ULL << (CPP14Parser::Integerliteral - 128))
			| (1ULL << (CPP14Parser::Characterliteral - 128))
			| (1ULL << (CPP14Parser::Floatingliteral - 128))
			| (1ULL << (CPP14Parser::Stringliteral - 128))
			| (1ULL << (CPP14Parser::Userdefinedintegerliteral - 128))
			| (1ULL << (CPP14Parser::Userdefinedfloatingliteral - 128))
			| (1ULL << (CPP14Parser::Userdefinedstringliteral - 128))
			| (1ULL << (CPP14Parser::Userdefinedcharacterliteral - 128)))) != 0))
		{
			setState(1042); //951
			statementseq(0,ctx);
		}
		setState(1045);//958
		match(CPP14Parser::RightBrace,ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- StatementseqContext ------------------------------------------------------------------

CPP14Parser::StatementseqContext::StatementseqContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::StatementContext* CPP14Parser::StatementseqContext::statement()
{
	return getRuleContext<CPP14Parser::StatementContext>(0);//1165
}

CPP14Parser::StatementseqContext* CPP14Parser::StatementseqContext::statementseq()
{
	return getRuleContext<CPP14Parser::StatementseqContext>(0);//1165
}


size_t CPP14Parser::StatementseqContext::getRuleIndex() const
{
	return CPP14Parser::RuleStatementseq;//688
}

void CPP14Parser::StatementseqContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::StatementseqContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::StatementseqContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitStatementseq(this);
	else
		return visitor->visitChildren(this);
}


CPP14Parser::StatementseqContext* CPP14Parser::statementseq()
{
	 return statementseq(0, nullptr);//600
}

CPP14Parser::StatementseqContext* CPP14Parser::statementseq(int precedence, antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	antlr4::ParserRuleContext *parentContext = parent;
	size_t parentState = getState();
	auto _localctx = std::make_unique<StatementseqContext>(parentContext, parentState);//610
	auto ctx = _localctx.get();//609
	size_t startState = 104;
	enterRecursionRule(ctx, 104, CPP14Parser::RuleStatementseq, precedence);

		

	auto onExit = finally([=,&_localctx]
{
		unrollRecursionContexts(parentContext, std::move(_localctx));
	});
	try
{
		size_t alt;
		enterOuterAlt(ctx, 1);
		setState(1048); //951
		statement(ctx);
		ctx->stop = _input->LT(-1);
		setState(1054);//865
		_errHandler->sync(this, ctx);
		alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 87, ctx);
		while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
		{
			if (alt == 1)
		{
				if (!_parseListeners.empty())
					triggerExitRuleEvent(ctx);

				auto tmpContext = std::make_unique<StatementseqContext>(parentContext, parentState);
				pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleStatementseq);//1240
				_localctx = std::move(tmpContext);
				ctx = _localctx.get();
				setState(1050);//1002

				if (!(precpred(nullptr, 1))) throw FailedPredicateException(this, "precpred(nullptr, 1)", ctx);
				setState(1051); //951
				statement(ctx); 
			}
			setState(1056);//875
			_errHandler->sync(this, ctx);
			alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 87, ctx);
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

//----------------- SelectionstatementContext ------------------------------------------------------------------

CPP14Parser::SelectionstatementContext::SelectionstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::SelectionstatementContext::If()
{
	return getToken(CPP14Parser::If, 0);
}

tree::TerminalNode* CPP14Parser::SelectionstatementContext::LeftParen()
{
	return getToken(CPP14Parser::LeftParen, 0);
}

CPP14Parser::ConditionContext* CPP14Parser::SelectionstatementContext::condition()
{
	return getRuleContext<CPP14Parser::ConditionContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::SelectionstatementContext::RightParen()
{
	return getToken(CPP14Parser::RightParen, 0);
}

std::vector<CPP14Parser::StatementContext *> CPP14Parser::SelectionstatementContext::statement()
{
	return getRuleContexts<CPP14Parser::StatementContext>();//1174
}

CPP14Parser::StatementContext* CPP14Parser::SelectionstatementContext::statement(size_t i)
{
	return getRuleContext<CPP14Parser::StatementContext>(i);//1183
}

tree::TerminalNode* CPP14Parser::SelectionstatementContext::Else()
{
	return getToken(CPP14Parser::Else, 0);
}

tree::TerminalNode* CPP14Parser::SelectionstatementContext::Switch()
{
	return getToken(CPP14Parser::Switch, 0);
}


size_t CPP14Parser::SelectionstatementContext::getRuleIndex() const
{
	return CPP14Parser::RuleSelectionstatement;//688
}

void CPP14Parser::SelectionstatementContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::SelectionstatementContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::SelectionstatementContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitSelectionstatement(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::SelectionstatementContext* CPP14Parser::selectionstatement( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<SelectionstatementContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 106, CPP14Parser::RuleSelectionstatement);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1077);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 88, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(1057);//958
			match(CPP14Parser::If,ctx);
			setState(1058);//958
			match(CPP14Parser::LeftParen,ctx);
			setState(1059); //951
			condition(ctx);
			setState(1060);//958
			match(CPP14Parser::RightParen,ctx);
			setState(1061); //951
			statement(ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(1063);//958
			match(CPP14Parser::If,ctx);
			setState(1064);//958
			match(CPP14Parser::LeftParen,ctx);
			setState(1065); //951
			condition(ctx);
			setState(1066);//958
			match(CPP14Parser::RightParen,ctx);
			setState(1067); //951
			statement(ctx);
			setState(1068);//958
			match(CPP14Parser::Else,ctx);
			setState(1069); //951
			statement(ctx);
			break;
		}

		case 3:
		{
			enterOuterAlt(ctx, 3);
			setState(1071);//958
			match(CPP14Parser::Switch,ctx);
			setState(1072);//958
			match(CPP14Parser::LeftParen,ctx);
			setState(1073); //951
			condition(ctx);
			setState(1074);//958
			match(CPP14Parser::RightParen,ctx);
			setState(1075); //951
			statement(ctx);
			break;
		}

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

//----------------- ConditionContext ------------------------------------------------------------------

CPP14Parser::ConditionContext::ConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::ExpressionContext* CPP14Parser::ConditionContext::expression()
{
	return getRuleContext<CPP14Parser::ExpressionContext>(0);//1165
}

CPP14Parser::DeclspecifierseqContext* CPP14Parser::ConditionContext::declspecifierseq()
{
	return getRuleContext<CPP14Parser::DeclspecifierseqContext>(0);//1165
}

CPP14Parser::DeclaratorContext* CPP14Parser::ConditionContext::declarator()
{
	return getRuleContext<CPP14Parser::DeclaratorContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::ConditionContext::Assign()
{
	return getToken(CPP14Parser::Assign, 0);
}

CPP14Parser::InitializerclauseContext* CPP14Parser::ConditionContext::initializerclause()
{
	return getRuleContext<CPP14Parser::InitializerclauseContext>(0);//1165
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::ConditionContext::attributespecifierseq()
{
	return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);//1165
}

CPP14Parser::BracedinitlistContext* CPP14Parser::ConditionContext::bracedinitlist()
{
	return getRuleContext<CPP14Parser::BracedinitlistContext>(0);//1165
}


size_t CPP14Parser::ConditionContext::getRuleIndex() const
{
	return CPP14Parser::RuleCondition;//688
}

void CPP14Parser::ConditionContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::ConditionContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::ConditionContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitCondition(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::ConditionContext* CPP14Parser::condition( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<ConditionContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 108, CPP14Parser::RuleCondition);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1095);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 91, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(1079); //951
			expression(0,ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(1081);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket)
			{
				setState(1080); //951
				attributespecifierseq(0,ctx);
			}
			setState(1083); //951
			declspecifierseq(ctx);
			setState(1084); //951
			declarator(ctx);
			setState(1085);//958
			match(CPP14Parser::Assign,ctx);
			setState(1086); //951
			initializerclause(ctx);
			break;
		}

		case 3:
		{
			enterOuterAlt(ctx, 3);
			setState(1089);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket)
			{
				setState(1088); //951
				attributespecifierseq(0,ctx);
			}
			setState(1091); //951
			declspecifierseq(ctx);
			setState(1092); //951
			declarator(ctx);
			setState(1093); //951
			bracedinitlist(ctx);
			break;
		}

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

//----------------- IterationstatementContext ------------------------------------------------------------------

CPP14Parser::IterationstatementContext::IterationstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::IterationstatementContext::While()
{
	return getToken(CPP14Parser::While, 0);
}

tree::TerminalNode* CPP14Parser::IterationstatementContext::LeftParen()
{
	return getToken(CPP14Parser::LeftParen, 0);
}

CPP14Parser::ConditionContext* CPP14Parser::IterationstatementContext::condition()
{
	return getRuleContext<CPP14Parser::ConditionContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::IterationstatementContext::RightParen()
{
	return getToken(CPP14Parser::RightParen, 0);
}

CPP14Parser::StatementContext* CPP14Parser::IterationstatementContext::statement()
{
	return getRuleContext<CPP14Parser::StatementContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::IterationstatementContext::Do()
{
	return getToken(CPP14Parser::Do, 0);
}

CPP14Parser::ExpressionContext* CPP14Parser::IterationstatementContext::expression()
{
	return getRuleContext<CPP14Parser::ExpressionContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::IterationstatementContext::Semi()
{
	return getToken(CPP14Parser::Semi, 0);
}

tree::TerminalNode* CPP14Parser::IterationstatementContext::For()
{
	return getToken(CPP14Parser::For, 0);
}

CPP14Parser::ForinitstatementContext* CPP14Parser::IterationstatementContext::forinitstatement()
{
	return getRuleContext<CPP14Parser::ForinitstatementContext>(0);//1165
}

CPP14Parser::ForrangedeclarationContext* CPP14Parser::IterationstatementContext::forrangedeclaration()
{
	return getRuleContext<CPP14Parser::ForrangedeclarationContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::IterationstatementContext::Colon()
{
	return getToken(CPP14Parser::Colon, 0);
}

CPP14Parser::ForrangeinitializerContext* CPP14Parser::IterationstatementContext::forrangeinitializer()
{
	return getRuleContext<CPP14Parser::ForrangeinitializerContext>(0);//1165
}


size_t CPP14Parser::IterationstatementContext::getRuleIndex() const
{
	return CPP14Parser::RuleIterationstatement;//688
}

void CPP14Parser::IterationstatementContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::IterationstatementContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::IterationstatementContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitIterationstatement(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::IterationstatementContext* CPP14Parser::iterationstatement( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<IterationstatementContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 110, CPP14Parser::RuleIterationstatement);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1132);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 94, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(1097);//958
			match(CPP14Parser::While,ctx);
			setState(1098);//958
			match(CPP14Parser::LeftParen,ctx);
			setState(1099); //951
			condition(ctx);
			setState(1100);//958
			match(CPP14Parser::RightParen,ctx);
			setState(1101); //951
			statement(ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(1103);//958
			match(CPP14Parser::Do,ctx);
			setState(1104); //951
			statement(ctx);
			setState(1105);//958
			match(CPP14Parser::While,ctx);
			setState(1106);//958
			match(CPP14Parser::LeftParen,ctx);
			setState(1107); //951
			expression(0,ctx);
			setState(1108);//958
			match(CPP14Parser::RightParen,ctx);
			setState(1109);//958
			match(CPP14Parser::Semi,ctx);
			break;
		}

		case 3:
		{
			enterOuterAlt(ctx, 3);
			setState(1111);//958
			match(CPP14Parser::For,ctx);
			setState(1112);//958
			match(CPP14Parser::LeftParen,ctx);
			setState(1113); //951
			forinitstatement(ctx);
			setState(1115);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if ((((_la & ~ 0x3fULL) == 0) &&
				((1ULL << _la) & ((1ULL << CPP14Parser::T__0)
				| (1ULL << CPP14Parser::T__1)
				| (1ULL << CPP14Parser::Alignas)
				| (1ULL << CPP14Parser::Alignof)
				| (1ULL << CPP14Parser::Auto)
				| (1ULL << CPP14Parser::Bool)
				| (1ULL << CPP14Parser::Char)
				| (1ULL << CPP14Parser::Char16)
				| (1ULL << CPP14Parser::Char32)
				| (1ULL << CPP14Parser::Class)
				| (1ULL << CPP14Parser::Const)
				| (1ULL << CPP14Parser::Constexpr)
				| (1ULL << CPP14Parser::Const_cast)
				| (1ULL << CPP14Parser::Decltype)
				| (1ULL << CPP14Parser::Delete)
				| (1ULL << CPP14Parser::Double)
				| (1ULL << CPP14Parser::Dynamic_cast)
				| (1ULL << CPP14Parser::Enum)
				| (1ULL << CPP14Parser::Explicit)
				| (1ULL << CPP14Parser::Extern)
				| (1ULL << CPP14Parser::False)
				| (1ULL << CPP14Parser::Float)
				| (1ULL << CPP14Parser::Friend)
				| (1ULL << CPP14Parser::Inline)
				| (1ULL << CPP14Parser::Int)
				| (1ULL << CPP14Parser::Long)
				| (1ULL << CPP14Parser::Mutable)
				| (1ULL << CPP14Parser::New)
				| (1ULL << CPP14Parser::Noexcept)
				| (1ULL << CPP14Parser::Nullptr)
				| (1ULL << CPP14Parser::Operator)
				| (1ULL << CPP14Parser::Register)
				| (1ULL << CPP14Parser::Reinterpret_cast)
				| (1ULL << CPP14Parser::Short)
				| (1ULL << CPP14Parser::Signed)
				| (1ULL << CPP14Parser::Sizeof)
				| (1ULL << CPP14Parser::Static))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
				((1ULL << (_la - 64)) & ((1ULL << (CPP14Parser::Static_cast - 64))
				| (1ULL << (CPP14Parser::Struct - 64))
				| (1ULL << (CPP14Parser::This - 64))
				| (1ULL << (CPP14Parser::Thread_local - 64))
				| (1ULL << (CPP14Parser::Throw - 64))
				| (1ULL << (CPP14Parser::True - 64))
				| (1ULL << (CPP14Parser::Typedef - 64))
				| (1ULL << (CPP14Parser::Typeid_ - 64))
				| (1ULL << (CPP14Parser::Typename_ - 64))
				| (1ULL << (CPP14Parser::Union - 64))
				| (1ULL << (CPP14Parser::Unsigned - 64))
				| (1ULL << (CPP14Parser::Virtual - 64))
				| (1ULL << (CPP14Parser::Void - 64))
				| (1ULL << (CPP14Parser::Volatile - 64))
				| (1ULL << (CPP14Parser::Wchar - 64))
				| (1ULL << (CPP14Parser::LeftParen - 64))
				| (1ULL << (CPP14Parser::LeftBracket - 64))
				| (1ULL << (CPP14Parser::Plus - 64))
				| (1ULL << (CPP14Parser::Minus - 64))
				| (1ULL << (CPP14Parser::Star - 64))
				| (1ULL << (CPP14Parser::And - 64))
				| (1ULL << (CPP14Parser::Or - 64))
				| (1ULL << (CPP14Parser::Tilde - 64))
				| (1ULL << (CPP14Parser::PlusPlus - 64))
				| (1ULL << (CPP14Parser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
				((1ULL << (_la - 128)) & ((1ULL << (CPP14Parser::Doublecolon - 128))
				| (1ULL << (CPP14Parser::Identifier - 128))
				| (1ULL << (CPP14Parser::Integerliteral - 128))
				| (1ULL << (CPP14Parser::Characterliteral - 128))
				| (1ULL << (CPP14Parser::Floatingliteral - 128))
				| (1ULL << (CPP14Parser::Stringliteral - 128))
				| (1ULL << (CPP14Parser::Userdefinedintegerliteral - 128))
				| (1ULL << (CPP14Parser::Userdefinedfloatingliteral - 128))
				| (1ULL << (CPP14Parser::Userdefinedstringliteral - 128))
				| (1ULL << (CPP14Parser::Userdefinedcharacterliteral - 128)))) != 0))
			{
				setState(1114); //951
				condition(ctx);
			}
			setState(1117);//958
			match(CPP14Parser::Semi,ctx);
			setState(1119);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if ((((_la & ~ 0x3fULL) == 0) &&
				((1ULL << _la) & ((1ULL << CPP14Parser::T__0)
				| (1ULL << CPP14Parser::T__1)
				| (1ULL << CPP14Parser::Alignof)
				| (1ULL << CPP14Parser::Auto)
				| (1ULL << CPP14Parser::Bool)
				| (1ULL << CPP14Parser::Char)
				| (1ULL << CPP14Parser::Char16)
				| (1ULL << CPP14Parser::Char32)
				| (1ULL << CPP14Parser::Const_cast)
				| (1ULL << CPP14Parser::Decltype)
				| (1ULL << CPP14Parser::Delete)
				| (1ULL << CPP14Parser::Double)
				| (1ULL << CPP14Parser::Dynamic_cast)
				| (1ULL << CPP14Parser::False)
				| (1ULL << CPP14Parser::Float)
				| (1ULL << CPP14Parser::Int)
				| (1ULL << CPP14Parser::Long)
				| (1ULL << CPP14Parser::New)
				| (1ULL << CPP14Parser::Noexcept)
				| (1ULL << CPP14Parser::Nullptr)
				| (1ULL << CPP14Parser::Operator)
				| (1ULL << CPP14Parser::Reinterpret_cast)
				| (1ULL << CPP14Parser::Short)
				| (1ULL << CPP14Parser::Signed)
				| (1ULL << CPP14Parser::Sizeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
				((1ULL << (_la - 64)) & ((1ULL << (CPP14Parser::Static_cast - 64))
				| (1ULL << (CPP14Parser::This - 64))
				| (1ULL << (CPP14Parser::Throw - 64))
				| (1ULL << (CPP14Parser::True - 64))
				| (1ULL << (CPP14Parser::Typeid_ - 64))
				| (1ULL << (CPP14Parser::Typename_ - 64))
				| (1ULL << (CPP14Parser::Unsigned - 64))
				| (1ULL << (CPP14Parser::Void - 64))
				| (1ULL << (CPP14Parser::Wchar - 64))
				| (1ULL << (CPP14Parser::LeftParen - 64))
				| (1ULL << (CPP14Parser::LeftBracket - 64))
				| (1ULL << (CPP14Parser::Plus - 64))
				| (1ULL << (CPP14Parser::Minus - 64))
				| (1ULL << (CPP14Parser::Star - 64))
				| (1ULL << (CPP14Parser::And - 64))
				| (1ULL << (CPP14Parser::Or - 64))
				| (1ULL << (CPP14Parser::Tilde - 64))
				| (1ULL << (CPP14Parser::PlusPlus - 64))
				| (1ULL << (CPP14Parser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
				((1ULL << (_la - 128)) & ((1ULL << (CPP14Parser::Doublecolon - 128))
				| (1ULL << (CPP14Parser::Identifier - 128))
				| (1ULL << (CPP14Parser::Integerliteral - 128))
				| (1ULL << (CPP14Parser::Characterliteral - 128))
				| (1ULL << (CPP14Parser::Floatingliteral - 128))
				| (1ULL << (CPP14Parser::Stringliteral - 128))
				| (1ULL << (CPP14Parser::Userdefinedintegerliteral - 128))
				| (1ULL << (CPP14Parser::Userdefinedfloatingliteral - 128))
				| (1ULL << (CPP14Parser::Userdefinedstringliteral - 128))
				| (1ULL << (CPP14Parser::Userdefinedcharacterliteral - 128)))) != 0))
			{
				setState(1118); //951
				expression(0,ctx);
			}
			setState(1121);//958
			match(CPP14Parser::RightParen,ctx);
			setState(1122); //951
			statement(ctx);
			break;
		}

		case 4:
		{
			enterOuterAlt(ctx, 4);
			setState(1124);//958
			match(CPP14Parser::For,ctx);
			setState(1125);//958
			match(CPP14Parser::LeftParen,ctx);
			setState(1126); //951
			forrangedeclaration(ctx);
			setState(1127);//958
			match(CPP14Parser::Colon,ctx);
			setState(1128); //951
			forrangeinitializer(ctx);
			setState(1129);//958
			match(CPP14Parser::RightParen,ctx);
			setState(1130); //951
			statement(ctx);
			break;
		}

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

//----------------- ForinitstatementContext ------------------------------------------------------------------

CPP14Parser::ForinitstatementContext::ForinitstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::ExpressionstatementContext* CPP14Parser::ForinitstatementContext::expressionstatement()
{
	return getRuleContext<CPP14Parser::ExpressionstatementContext>(0);//1165
}

CPP14Parser::SimpledeclarationContext* CPP14Parser::ForinitstatementContext::simpledeclaration()
{
	return getRuleContext<CPP14Parser::SimpledeclarationContext>(0);//1165
}


size_t CPP14Parser::ForinitstatementContext::getRuleIndex() const
{
	return CPP14Parser::RuleForinitstatement;//688
}

void CPP14Parser::ForinitstatementContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::ForinitstatementContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::ForinitstatementContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitForinitstatement(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::ForinitstatementContext* CPP14Parser::forinitstatement( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<ForinitstatementContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 112, CPP14Parser::RuleForinitstatement);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1136);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 95, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(1134); //951
			expressionstatement(ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(1135); //951
			simpledeclaration(ctx);
			break;
		}

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

//----------------- ForrangedeclarationContext ------------------------------------------------------------------

CPP14Parser::ForrangedeclarationContext::ForrangedeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::DeclspecifierseqContext* CPP14Parser::ForrangedeclarationContext::declspecifierseq()
{
	return getRuleContext<CPP14Parser::DeclspecifierseqContext>(0);//1165
}

CPP14Parser::DeclaratorContext* CPP14Parser::ForrangedeclarationContext::declarator()
{
	return getRuleContext<CPP14Parser::DeclaratorContext>(0);//1165
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::ForrangedeclarationContext::attributespecifierseq()
{
	return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);//1165
}


size_t CPP14Parser::ForrangedeclarationContext::getRuleIndex() const
{
	return CPP14Parser::RuleForrangedeclaration;//688
}

void CPP14Parser::ForrangedeclarationContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::ForrangedeclarationContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::ForrangedeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitForrangedeclaration(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::ForrangedeclarationContext* CPP14Parser::forrangedeclaration( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<ForrangedeclarationContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 114, CPP14Parser::RuleForrangedeclaration);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(1139);//788
		_errHandler->sync(this, ctx);

		_la = _input->LA(1);
		if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket)
		{
			setState(1138); //951
			attributespecifierseq(0,ctx);
		}
		setState(1141); //951
		declspecifierseq(ctx);
		setState(1142); //951
		declarator(ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- ForrangeinitializerContext ------------------------------------------------------------------

CPP14Parser::ForrangeinitializerContext::ForrangeinitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::ExpressionContext* CPP14Parser::ForrangeinitializerContext::expression()
{
	return getRuleContext<CPP14Parser::ExpressionContext>(0);//1165
}

CPP14Parser::BracedinitlistContext* CPP14Parser::ForrangeinitializerContext::bracedinitlist()
{
	return getRuleContext<CPP14Parser::BracedinitlistContext>(0);//1165
}


size_t CPP14Parser::ForrangeinitializerContext::getRuleIndex() const
{
	return CPP14Parser::RuleForrangeinitializer;//688
}

void CPP14Parser::ForrangeinitializerContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::ForrangeinitializerContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::ForrangeinitializerContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitForrangeinitializer(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::ForrangeinitializerContext* CPP14Parser::forrangeinitializer( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<ForrangeinitializerContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 116, CPP14Parser::RuleForrangeinitializer);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1146);//750
		_errHandler->sync(this, ctx);
		switch (_input->LA(1))
		{
			case CPP14Parser::T__0:
			case CPP14Parser::T__1:
			case CPP14Parser::Alignof:
			case CPP14Parser::Auto:
			case CPP14Parser::Bool:
			case CPP14Parser::Char:
			case CPP14Parser::Char16:
			case CPP14Parser::Char32:
			case CPP14Parser::Const_cast:
			case CPP14Parser::Decltype:
			case CPP14Parser::Delete:
			case CPP14Parser::Double:
			case CPP14Parser::Dynamic_cast:
			case CPP14Parser::False:
			case CPP14Parser::Float:
			case CPP14Parser::Int:
			case CPP14Parser::Long:
			case CPP14Parser::New:
			case CPP14Parser::Noexcept:
			case CPP14Parser::Nullptr:
			case CPP14Parser::Operator:
			case CPP14Parser::Reinterpret_cast:
			case CPP14Parser::Short:
			case CPP14Parser::Signed:
			case CPP14Parser::Sizeof:
			case CPP14Parser::Static_cast:
			case CPP14Parser::This:
			case CPP14Parser::Throw:
			case CPP14Parser::True:
			case CPP14Parser::Typeid_:
			case CPP14Parser::Typename_:
			case CPP14Parser::Unsigned:
			case CPP14Parser::Void:
			case CPP14Parser::Wchar:
			case CPP14Parser::LeftParen:
			case CPP14Parser::LeftBracket:
			case CPP14Parser::Plus:
			case CPP14Parser::Minus:
			case CPP14Parser::Star:
			case CPP14Parser::And:
			case CPP14Parser::Or:
			case CPP14Parser::Tilde:
			case CPP14Parser::PlusPlus:
			case CPP14Parser::MinusMinus:
			case CPP14Parser::Doublecolon:
			case CPP14Parser::Identifier:
			case CPP14Parser::Integerliteral:
			case CPP14Parser::Characterliteral:
			case CPP14Parser::Floatingliteral:
			case CPP14Parser::Stringliteral:
			case CPP14Parser::Userdefinedintegerliteral:
			case CPP14Parser::Userdefinedfloatingliteral:
			case CPP14Parser::Userdefinedstringliteral:
			case CPP14Parser::Userdefinedcharacterliteral:
			{
				enterOuterAlt(ctx, 1);
				setState(1144); //951
				expression(0,ctx);
				break;
			}

			case CPP14Parser::LeftBrace:
			{
				enterOuterAlt(ctx, 2);
				setState(1145); //951
				bracedinitlist(ctx);
				break;
			}

		default:
			throw NoViableAltException(this, ctx);
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

//----------------- JumpstatementContext ------------------------------------------------------------------

CPP14Parser::JumpstatementContext::JumpstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::JumpstatementContext::Break()
{
	return getToken(CPP14Parser::Break, 0);
}

tree::TerminalNode* CPP14Parser::JumpstatementContext::Semi()
{
	return getToken(CPP14Parser::Semi, 0);
}

tree::TerminalNode* CPP14Parser::JumpstatementContext::Continue()
{
	return getToken(CPP14Parser::Continue, 0);
}

tree::TerminalNode* CPP14Parser::JumpstatementContext::Return()
{
	return getToken(CPP14Parser::Return, 0);
}

CPP14Parser::ExpressionContext* CPP14Parser::JumpstatementContext::expression()
{
	return getRuleContext<CPP14Parser::ExpressionContext>(0);//1165
}

CPP14Parser::BracedinitlistContext* CPP14Parser::JumpstatementContext::bracedinitlist()
{
	return getRuleContext<CPP14Parser::BracedinitlistContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::JumpstatementContext::Goto()
{
	return getToken(CPP14Parser::Goto, 0);
}

tree::TerminalNode* CPP14Parser::JumpstatementContext::Identifier()
{
	return getToken(CPP14Parser::Identifier, 0);
}


size_t CPP14Parser::JumpstatementContext::getRuleIndex() const
{
	return CPP14Parser::RuleJumpstatement;//688
}

void CPP14Parser::JumpstatementContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::JumpstatementContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::JumpstatementContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitJumpstatement(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::JumpstatementContext* CPP14Parser::jumpstatement( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<JumpstatementContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 118, CPP14Parser::RuleJumpstatement);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1164);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 99, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(1148);//958
			match(CPP14Parser::Break,ctx);
			setState(1149);//958
			match(CPP14Parser::Semi,ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(1150);//958
			match(CPP14Parser::Continue,ctx);
			setState(1151);//958
			match(CPP14Parser::Semi,ctx);
			break;
		}

		case 3:
		{
			enterOuterAlt(ctx, 3);
			setState(1152);//958
			match(CPP14Parser::Return,ctx);
			setState(1154);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if ((((_la & ~ 0x3fULL) == 0) &&
				((1ULL << _la) & ((1ULL << CPP14Parser::T__0)
				| (1ULL << CPP14Parser::T__1)
				| (1ULL << CPP14Parser::Alignof)
				| (1ULL << CPP14Parser::Auto)
				| (1ULL << CPP14Parser::Bool)
				| (1ULL << CPP14Parser::Char)
				| (1ULL << CPP14Parser::Char16)
				| (1ULL << CPP14Parser::Char32)
				| (1ULL << CPP14Parser::Const_cast)
				| (1ULL << CPP14Parser::Decltype)
				| (1ULL << CPP14Parser::Delete)
				| (1ULL << CPP14Parser::Double)
				| (1ULL << CPP14Parser::Dynamic_cast)
				| (1ULL << CPP14Parser::False)
				| (1ULL << CPP14Parser::Float)
				| (1ULL << CPP14Parser::Int)
				| (1ULL << CPP14Parser::Long)
				| (1ULL << CPP14Parser::New)
				| (1ULL << CPP14Parser::Noexcept)
				| (1ULL << CPP14Parser::Nullptr)
				| (1ULL << CPP14Parser::Operator)
				| (1ULL << CPP14Parser::Reinterpret_cast)
				| (1ULL << CPP14Parser::Short)
				| (1ULL << CPP14Parser::Signed)
				| (1ULL << CPP14Parser::Sizeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
				((1ULL << (_la - 64)) & ((1ULL << (CPP14Parser::Static_cast - 64))
				| (1ULL << (CPP14Parser::This - 64))
				| (1ULL << (CPP14Parser::Throw - 64))
				| (1ULL << (CPP14Parser::True - 64))
				| (1ULL << (CPP14Parser::Typeid_ - 64))
				| (1ULL << (CPP14Parser::Typename_ - 64))
				| (1ULL << (CPP14Parser::Unsigned - 64))
				| (1ULL << (CPP14Parser::Void - 64))
				| (1ULL << (CPP14Parser::Wchar - 64))
				| (1ULL << (CPP14Parser::LeftParen - 64))
				| (1ULL << (CPP14Parser::LeftBracket - 64))
				| (1ULL << (CPP14Parser::Plus - 64))
				| (1ULL << (CPP14Parser::Minus - 64))
				| (1ULL << (CPP14Parser::Star - 64))
				| (1ULL << (CPP14Parser::And - 64))
				| (1ULL << (CPP14Parser::Or - 64))
				| (1ULL << (CPP14Parser::Tilde - 64))
				| (1ULL << (CPP14Parser::PlusPlus - 64))
				| (1ULL << (CPP14Parser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
				((1ULL << (_la - 128)) & ((1ULL << (CPP14Parser::Doublecolon - 128))
				| (1ULL << (CPP14Parser::Identifier - 128))
				| (1ULL << (CPP14Parser::Integerliteral - 128))
				| (1ULL << (CPP14Parser::Characterliteral - 128))
				| (1ULL << (CPP14Parser::Floatingliteral - 128))
				| (1ULL << (CPP14Parser::Stringliteral - 128))
				| (1ULL << (CPP14Parser::Userdefinedintegerliteral - 128))
				| (1ULL << (CPP14Parser::Userdefinedfloatingliteral - 128))
				| (1ULL << (CPP14Parser::Userdefinedstringliteral - 128))
				| (1ULL << (CPP14Parser::Userdefinedcharacterliteral - 128)))) != 0))
			{
				setState(1153); //951
				expression(0,ctx);
			}
			setState(1156);//958
			match(CPP14Parser::Semi,ctx);
			break;
		}

		case 4:
		{
			enterOuterAlt(ctx, 4);
			setState(1157);//958
			match(CPP14Parser::Return,ctx);
			setState(1158); //951
			bracedinitlist(ctx);
			setState(1159);//958
			match(CPP14Parser::Semi,ctx);
			break;
		}

		case 5:
		{
			enterOuterAlt(ctx, 5);
			setState(1161);//958
			match(CPP14Parser::Goto,ctx);
			setState(1162);//958
			match(CPP14Parser::Identifier,ctx);
			setState(1163);//958
			match(CPP14Parser::Semi,ctx);
			break;
		}

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

//----------------- DeclarationstatementContext ------------------------------------------------------------------

CPP14Parser::DeclarationstatementContext::DeclarationstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::BlockdeclarationContext* CPP14Parser::DeclarationstatementContext::blockdeclaration()
{
	return getRuleContext<CPP14Parser::BlockdeclarationContext>(0);//1165
}


size_t CPP14Parser::DeclarationstatementContext::getRuleIndex() const
{
	return CPP14Parser::RuleDeclarationstatement;//688
}

void CPP14Parser::DeclarationstatementContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::DeclarationstatementContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::DeclarationstatementContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitDeclarationstatement(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::DeclarationstatementContext* CPP14Parser::declarationstatement( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<DeclarationstatementContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 120, CPP14Parser::RuleDeclarationstatement);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(1166); //951
		blockdeclaration(ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- DeclarationseqContext ------------------------------------------------------------------

CPP14Parser::DeclarationseqContext::DeclarationseqContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::DeclarationContext* CPP14Parser::DeclarationseqContext::declaration()
{
	return getRuleContext<CPP14Parser::DeclarationContext>(0);//1165
}

CPP14Parser::DeclarationseqContext* CPP14Parser::DeclarationseqContext::declarationseq()
{
	return getRuleContext<CPP14Parser::DeclarationseqContext>(0);//1165
}


size_t CPP14Parser::DeclarationseqContext::getRuleIndex() const
{
	return CPP14Parser::RuleDeclarationseq;//688
}

void CPP14Parser::DeclarationseqContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::DeclarationseqContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::DeclarationseqContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitDeclarationseq(this);
	else
		return visitor->visitChildren(this);
}


CPP14Parser::DeclarationseqContext* CPP14Parser::declarationseq()
{
	 return declarationseq(0, nullptr);//600
}

CPP14Parser::DeclarationseqContext* CPP14Parser::declarationseq(int precedence, antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	antlr4::ParserRuleContext *parentContext = parent;
	size_t parentState = getState();
	auto _localctx = std::make_unique<DeclarationseqContext>(parentContext, parentState);//610
	auto ctx = _localctx.get();//609
	size_t startState = 122;
	enterRecursionRule(ctx, 122, CPP14Parser::RuleDeclarationseq, precedence);

		

	auto onExit = finally([=,&_localctx]
{
		unrollRecursionContexts(parentContext, std::move(_localctx));
	});
	try
{
		size_t alt;
		enterOuterAlt(ctx, 1);
		setState(1169); //951
		declaration(ctx);
		ctx->stop = _input->LT(-1);
		setState(1175);//865
		_errHandler->sync(this, ctx);
		alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 100, ctx);
		while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
		{
			if (alt == 1)
		{
				if (!_parseListeners.empty())
					triggerExitRuleEvent(ctx);

				auto tmpContext = std::make_unique<DeclarationseqContext>(parentContext, parentState);
				pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleDeclarationseq);//1240
				_localctx = std::move(tmpContext);
				ctx = _localctx.get();
				setState(1171);//1002

				if (!(precpred(nullptr, 1))) throw FailedPredicateException(this, "precpred(nullptr, 1)", ctx);
				setState(1172); //951
				declaration(ctx); 
			}
			setState(1177);//875
			_errHandler->sync(this, ctx);
			alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 100, ctx);
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

//----------------- DeclarationContext ------------------------------------------------------------------

CPP14Parser::DeclarationContext::DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::BlockdeclarationContext* CPP14Parser::DeclarationContext::blockdeclaration()
{
	return getRuleContext<CPP14Parser::BlockdeclarationContext>(0);//1165
}

CPP14Parser::FunctiondefinitionContext* CPP14Parser::DeclarationContext::functiondefinition()
{
	return getRuleContext<CPP14Parser::FunctiondefinitionContext>(0);//1165
}

CPP14Parser::TemplatedeclarationContext* CPP14Parser::DeclarationContext::templatedeclaration()
{
	return getRuleContext<CPP14Parser::TemplatedeclarationContext>(0);//1165
}

CPP14Parser::ExplicitinstantiationContext* CPP14Parser::DeclarationContext::explicitinstantiation()
{
	return getRuleContext<CPP14Parser::ExplicitinstantiationContext>(0);//1165
}

CPP14Parser::ExplicitspecializationContext* CPP14Parser::DeclarationContext::explicitspecialization()
{
	return getRuleContext<CPP14Parser::ExplicitspecializationContext>(0);//1165
}

CPP14Parser::LinkagespecificationContext* CPP14Parser::DeclarationContext::linkagespecification()
{
	return getRuleContext<CPP14Parser::LinkagespecificationContext>(0);//1165
}

CPP14Parser::NamespacedefinitionContext* CPP14Parser::DeclarationContext::namespacedefinition()
{
	return getRuleContext<CPP14Parser::NamespacedefinitionContext>(0);//1165
}

CPP14Parser::EmptydeclarationContext* CPP14Parser::DeclarationContext::emptydeclaration()
{
	return getRuleContext<CPP14Parser::EmptydeclarationContext>(0);//1165
}

CPP14Parser::AttributedeclarationContext* CPP14Parser::DeclarationContext::attributedeclaration()
{
	return getRuleContext<CPP14Parser::AttributedeclarationContext>(0);//1165
}


size_t CPP14Parser::DeclarationContext::getRuleIndex() const
{
	return CPP14Parser::RuleDeclaration;//688
}

void CPP14Parser::DeclarationContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::DeclarationContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitDeclaration(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::DeclarationContext* CPP14Parser::declaration( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<DeclarationContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 124, CPP14Parser::RuleDeclaration);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1187);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 101, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(1178); //951
			blockdeclaration(ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(1179); //951
			functiondefinition(ctx);
			break;
		}

		case 3:
		{
			enterOuterAlt(ctx, 3);
			setState(1180); //951
			templatedeclaration(ctx);
			break;
		}

		case 4:
		{
			enterOuterAlt(ctx, 4);
			setState(1181); //951
			explicitinstantiation(ctx);
			break;
		}

		case 5:
		{
			enterOuterAlt(ctx, 5);
			setState(1182); //951
			explicitspecialization(ctx);
			break;
		}

		case 6:
		{
			enterOuterAlt(ctx, 6);
			setState(1183); //951
			linkagespecification(ctx);
			break;
		}

		case 7:
		{
			enterOuterAlt(ctx, 7);
			setState(1184); //951
			namespacedefinition(ctx);
			break;
		}

		case 8:
		{
			enterOuterAlt(ctx, 8);
			setState(1185); //951
			emptydeclaration(ctx);
			break;
		}

		case 9:
		{
			enterOuterAlt(ctx, 9);
			setState(1186); //951
			attributedeclaration(ctx);
			break;
		}

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

//----------------- BlockdeclarationContext ------------------------------------------------------------------

CPP14Parser::BlockdeclarationContext::BlockdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::SimpledeclarationContext* CPP14Parser::BlockdeclarationContext::simpledeclaration()
{
	return getRuleContext<CPP14Parser::SimpledeclarationContext>(0);//1165
}

CPP14Parser::AsmdefinitionContext* CPP14Parser::BlockdeclarationContext::asmdefinition()
{
	return getRuleContext<CPP14Parser::AsmdefinitionContext>(0);//1165
}

CPP14Parser::NamespacealiasdefinitionContext* CPP14Parser::BlockdeclarationContext::namespacealiasdefinition()
{
	return getRuleContext<CPP14Parser::NamespacealiasdefinitionContext>(0);//1165
}

CPP14Parser::UsingdeclarationContext* CPP14Parser::BlockdeclarationContext::usingdeclaration()
{
	return getRuleContext<CPP14Parser::UsingdeclarationContext>(0);//1165
}

CPP14Parser::UsingdirectiveContext* CPP14Parser::BlockdeclarationContext::usingdirective()
{
	return getRuleContext<CPP14Parser::UsingdirectiveContext>(0);//1165
}

CPP14Parser::Static_assertdeclarationContext* CPP14Parser::BlockdeclarationContext::static_assertdeclaration()
{
	return getRuleContext<CPP14Parser::Static_assertdeclarationContext>(0);//1165
}

CPP14Parser::AliasdeclarationContext* CPP14Parser::BlockdeclarationContext::aliasdeclaration()
{
	return getRuleContext<CPP14Parser::AliasdeclarationContext>(0);//1165
}

CPP14Parser::OpaqueenumdeclarationContext* CPP14Parser::BlockdeclarationContext::opaqueenumdeclaration()
{
	return getRuleContext<CPP14Parser::OpaqueenumdeclarationContext>(0);//1165
}


size_t CPP14Parser::BlockdeclarationContext::getRuleIndex() const
{
	return CPP14Parser::RuleBlockdeclaration;//688
}

void CPP14Parser::BlockdeclarationContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::BlockdeclarationContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::BlockdeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitBlockdeclaration(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::BlockdeclarationContext* CPP14Parser::blockdeclaration( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<BlockdeclarationContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 126, CPP14Parser::RuleBlockdeclaration);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1197);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 102, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(1189); //951
			simpledeclaration(ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(1190); //951
			asmdefinition(ctx);
			break;
		}

		case 3:
		{
			enterOuterAlt(ctx, 3);
			setState(1191); //951
			namespacealiasdefinition(ctx);
			break;
		}

		case 4:
		{
			enterOuterAlt(ctx, 4);
			setState(1192); //951
			usingdeclaration(ctx);
			break;
		}

		case 5:
		{
			enterOuterAlt(ctx, 5);
			setState(1193); //951
			usingdirective(ctx);
			break;
		}

		case 6:
		{
			enterOuterAlt(ctx, 6);
			setState(1194); //951
			static_assertdeclaration(ctx);
			break;
		}

		case 7:
		{
			enterOuterAlt(ctx, 7);
			setState(1195); //951
			aliasdeclaration(ctx);
			break;
		}

		case 8:
		{
			enterOuterAlt(ctx, 8);
			setState(1196); //951
			opaqueenumdeclaration(ctx);
			break;
		}

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

//----------------- AliasdeclarationContext ------------------------------------------------------------------

CPP14Parser::AliasdeclarationContext::AliasdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::AliasdeclarationContext::Using()
{
	return getToken(CPP14Parser::Using, 0);
}

tree::TerminalNode* CPP14Parser::AliasdeclarationContext::Identifier()
{
	return getToken(CPP14Parser::Identifier, 0);
}

tree::TerminalNode* CPP14Parser::AliasdeclarationContext::Assign()
{
	return getToken(CPP14Parser::Assign, 0);
}

CPP14Parser::ThetypeidContext* CPP14Parser::AliasdeclarationContext::thetypeid()
{
	return getRuleContext<CPP14Parser::ThetypeidContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::AliasdeclarationContext::Semi()
{
	return getToken(CPP14Parser::Semi, 0);
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::AliasdeclarationContext::attributespecifierseq()
{
	return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);//1165
}


size_t CPP14Parser::AliasdeclarationContext::getRuleIndex() const
{
	return CPP14Parser::RuleAliasdeclaration;//688
}

void CPP14Parser::AliasdeclarationContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::AliasdeclarationContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::AliasdeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitAliasdeclaration(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::AliasdeclarationContext* CPP14Parser::aliasdeclaration( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<AliasdeclarationContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 128, CPP14Parser::RuleAliasdeclaration);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(1199);//958
		match(CPP14Parser::Using,ctx);
		setState(1200);//958
		match(CPP14Parser::Identifier,ctx);
		setState(1202);//788
		_errHandler->sync(this, ctx);

		_la = _input->LA(1);
		if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket)
		{
			setState(1201); //951
			attributespecifierseq(0,ctx);
		}
		setState(1204);//958
		match(CPP14Parser::Assign,ctx);
		setState(1205); //951
		thetypeid(ctx);
		setState(1206);//958
		match(CPP14Parser::Semi,ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- SimpledeclarationContext ------------------------------------------------------------------

CPP14Parser::SimpledeclarationContext::SimpledeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::SimpledeclarationContext::Semi()
{
	return getToken(CPP14Parser::Semi, 0);
}

CPP14Parser::DeclspecifierseqContext* CPP14Parser::SimpledeclarationContext::declspecifierseq()
{
	return getRuleContext<CPP14Parser::DeclspecifierseqContext>(0);//1165
}

CPP14Parser::InitdeclaratorlistContext* CPP14Parser::SimpledeclarationContext::initdeclaratorlist()
{
	return getRuleContext<CPP14Parser::InitdeclaratorlistContext>(0);//1165
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::SimpledeclarationContext::attributespecifierseq()
{
	return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);//1165
}


size_t CPP14Parser::SimpledeclarationContext::getRuleIndex() const
{
	return CPP14Parser::RuleSimpledeclaration;//688
}

void CPP14Parser::SimpledeclarationContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::SimpledeclarationContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::SimpledeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitSimpledeclaration(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::SimpledeclarationContext* CPP14Parser::simpledeclaration( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<SimpledeclarationContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 130, CPP14Parser::RuleSimpledeclaration);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1222);//750
		_errHandler->sync(this, ctx);
		switch (_input->LA(1))
		{
			case CPP14Parser::T__2:
			case CPP14Parser::Auto:
			case CPP14Parser::Bool:
			case CPP14Parser::Char:
			case CPP14Parser::Char16:
			case CPP14Parser::Char32:
			case CPP14Parser::Class:
			case CPP14Parser::Const:
			case CPP14Parser::Constexpr:
			case CPP14Parser::Decltype:
			case CPP14Parser::Double:
			case CPP14Parser::Enum:
			case CPP14Parser::Explicit:
			case CPP14Parser::Extern:
			case CPP14Parser::Float:
			case CPP14Parser::Friend:
			case CPP14Parser::Inline:
			case CPP14Parser::Int:
			case CPP14Parser::Long:
			case CPP14Parser::Mutable:
			case CPP14Parser::Operator:
			case CPP14Parser::Register:
			case CPP14Parser::Short:
			case CPP14Parser::Signed:
			case CPP14Parser::Static:
			case CPP14Parser::Struct:
			case CPP14Parser::Thread_local:
			case CPP14Parser::Typedef:
			case CPP14Parser::Typename_:
			case CPP14Parser::Union:
			case CPP14Parser::Unsigned:
			case CPP14Parser::Virtual:
			case CPP14Parser::Void:
			case CPP14Parser::Volatile:
			case CPP14Parser::Wchar:
			case CPP14Parser::LeftParen:
			case CPP14Parser::Star:
			case CPP14Parser::And:
			case CPP14Parser::Tilde:
			case CPP14Parser::Doublecolon:
			case CPP14Parser::Semi:
			case CPP14Parser::Ellipsis:
			case CPP14Parser::Identifier:
			{
				enterOuterAlt(ctx, 1);
				setState(1209);//848
				_errHandler->sync(this, ctx);

				switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 104, ctx))
				{
				case 1:
				{
					setState(1208); //951
					declspecifierseq(ctx);
					break;
				}

				}
				setState(1212);//788
				_errHandler->sync(this, ctx);

				_la = _input->LA(1);
				if ((((_la & ~ 0x3fULL) == 0) &&
					((1ULL << _la) & ((1ULL << CPP14Parser::T__2)
					| (1ULL << CPP14Parser::Decltype)
					| (1ULL << CPP14Parser::Operator))) != 0) || ((((_la - 84) & ~ 0x3fULL) == 0) &&
					((1ULL << (_la - 84)) & ((1ULL << (CPP14Parser::LeftParen - 84))
					| (1ULL << (CPP14Parser::Star - 84))
					| (1ULL << (CPP14Parser::And - 84))
					| (1ULL << (CPP14Parser::Tilde - 84))
					| (1ULL << (CPP14Parser::Doublecolon - 84))
					| (1ULL << (CPP14Parser::Ellipsis - 84))
					| (1ULL << (CPP14Parser::Identifier - 84)))) != 0))
				{
					setState(1211); //951
					initdeclaratorlist(0,ctx);
				}
				setState(1214);//958
				match(CPP14Parser::Semi,ctx);
				break;
			}

			case CPP14Parser::Alignas:
			case CPP14Parser::LeftBracket:
			{
				enterOuterAlt(ctx, 2);
				setState(1215); //951
				attributespecifierseq(0,ctx);
				setState(1217);//848
				_errHandler->sync(this, ctx);

				switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 106, ctx))
				{
				case 1:
				{
					setState(1216); //951
					declspecifierseq(ctx);
					break;
				}

				}
				setState(1219); //951
				initdeclaratorlist(0,ctx);
				setState(1220);//958
				match(CPP14Parser::Semi,ctx);
				break;
			}

		default:
			throw NoViableAltException(this, ctx);
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

//----------------- Static_assertdeclarationContext ------------------------------------------------------------------

CPP14Parser::Static_assertdeclarationContext::Static_assertdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::Static_assertdeclarationContext::Static_assert()
{
	return getToken(CPP14Parser::Static_assert, 0);
}

tree::TerminalNode* CPP14Parser::Static_assertdeclarationContext::LeftParen()
{
	return getToken(CPP14Parser::LeftParen, 0);
}

CPP14Parser::ConstantexpressionContext* CPP14Parser::Static_assertdeclarationContext::constantexpression()
{
	return getRuleContext<CPP14Parser::ConstantexpressionContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::Static_assertdeclarationContext::Comma()
{
	return getToken(CPP14Parser::Comma, 0);
}

tree::TerminalNode* CPP14Parser::Static_assertdeclarationContext::Stringliteral()
{
	return getToken(CPP14Parser::Stringliteral, 0);
}

tree::TerminalNode* CPP14Parser::Static_assertdeclarationContext::RightParen()
{
	return getToken(CPP14Parser::RightParen, 0);
}

tree::TerminalNode* CPP14Parser::Static_assertdeclarationContext::Semi()
{
	return getToken(CPP14Parser::Semi, 0);
}


size_t CPP14Parser::Static_assertdeclarationContext::getRuleIndex() const
{
	return CPP14Parser::RuleStatic_assertdeclaration;//688
}

void CPP14Parser::Static_assertdeclarationContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::Static_assertdeclarationContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::Static_assertdeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitStatic_assertdeclaration(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::Static_assertdeclarationContext* CPP14Parser::static_assertdeclaration( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<Static_assertdeclarationContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 132, CPP14Parser::RuleStatic_assertdeclaration);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(1224);//958
		match(CPP14Parser::Static_assert,ctx);
		setState(1225);//958
		match(CPP14Parser::LeftParen,ctx);
		setState(1226); //951
		constantexpression(ctx);
		setState(1227);//958
		match(CPP14Parser::Comma,ctx);
		setState(1228);//958
		match(CPP14Parser::Stringliteral,ctx);
		setState(1229);//958
		match(CPP14Parser::RightParen,ctx);
		setState(1230);//958
		match(CPP14Parser::Semi,ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- EmptydeclarationContext ------------------------------------------------------------------

CPP14Parser::EmptydeclarationContext::EmptydeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::EmptydeclarationContext::Semi()
{
	return getToken(CPP14Parser::Semi, 0);
}


size_t CPP14Parser::EmptydeclarationContext::getRuleIndex() const
{
	return CPP14Parser::RuleEmptydeclaration;//688
}

void CPP14Parser::EmptydeclarationContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::EmptydeclarationContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::EmptydeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitEmptydeclaration(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::EmptydeclarationContext* CPP14Parser::emptydeclaration( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<EmptydeclarationContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 134, CPP14Parser::RuleEmptydeclaration);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(1232);//958
		match(CPP14Parser::Semi,ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- AttributedeclarationContext ------------------------------------------------------------------

CPP14Parser::AttributedeclarationContext::AttributedeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::AttributedeclarationContext::attributespecifierseq()
{
	return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::AttributedeclarationContext::Semi()
{
	return getToken(CPP14Parser::Semi, 0);
}


size_t CPP14Parser::AttributedeclarationContext::getRuleIndex() const
{
	return CPP14Parser::RuleAttributedeclaration;//688
}

void CPP14Parser::AttributedeclarationContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::AttributedeclarationContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::AttributedeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitAttributedeclaration(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::AttributedeclarationContext* CPP14Parser::attributedeclaration( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<AttributedeclarationContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 136, CPP14Parser::RuleAttributedeclaration);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(1234); //951
		attributespecifierseq(0,ctx);
		setState(1235);//958
		match(CPP14Parser::Semi,ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- DeclspecifierContext ------------------------------------------------------------------

CPP14Parser::DeclspecifierContext::DeclspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::StorageclassspecifierContext* CPP14Parser::DeclspecifierContext::storageclassspecifier()
{
	return getRuleContext<CPP14Parser::StorageclassspecifierContext>(0);//1165
}

CPP14Parser::TypespecifierContext* CPP14Parser::DeclspecifierContext::typespecifier()
{
	return getRuleContext<CPP14Parser::TypespecifierContext>(0);//1165
}

CPP14Parser::FunctionspecifierContext* CPP14Parser::DeclspecifierContext::functionspecifier()
{
	return getRuleContext<CPP14Parser::FunctionspecifierContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::DeclspecifierContext::Friend()
{
	return getToken(CPP14Parser::Friend, 0);
}

tree::TerminalNode* CPP14Parser::DeclspecifierContext::Typedef()
{
	return getToken(CPP14Parser::Typedef, 0);
}

tree::TerminalNode* CPP14Parser::DeclspecifierContext::Constexpr()
{
	return getToken(CPP14Parser::Constexpr, 0);
}


size_t CPP14Parser::DeclspecifierContext::getRuleIndex() const
{
	return CPP14Parser::RuleDeclspecifier;//688
}

void CPP14Parser::DeclspecifierContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::DeclspecifierContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::DeclspecifierContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitDeclspecifier(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::DeclspecifierContext* CPP14Parser::declspecifier( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<DeclspecifierContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 138, CPP14Parser::RuleDeclspecifier);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1243);//750
		_errHandler->sync(this, ctx);
		switch (_input->LA(1))
		{
			case CPP14Parser::Extern:
			case CPP14Parser::Mutable:
			case CPP14Parser::Register:
			case CPP14Parser::Static:
			case CPP14Parser::Thread_local:
			{
				enterOuterAlt(ctx, 1);
				setState(1237); //951
				storageclassspecifier(ctx);
				break;
			}

			case CPP14Parser::Auto:
			case CPP14Parser::Bool:
			case CPP14Parser::Char:
			case CPP14Parser::Char16:
			case CPP14Parser::Char32:
			case CPP14Parser::Class:
			case CPP14Parser::Const:
			case CPP14Parser::Decltype:
			case CPP14Parser::Double:
			case CPP14Parser::Enum:
			case CPP14Parser::Float:
			case CPP14Parser::Int:
			case CPP14Parser::Long:
			case CPP14Parser::Short:
			case CPP14Parser::Signed:
			case CPP14Parser::Struct:
			case CPP14Parser::Typename_:
			case CPP14Parser::Union:
			case CPP14Parser::Unsigned:
			case CPP14Parser::Void:
			case CPP14Parser::Volatile:
			case CPP14Parser::Wchar:
			case CPP14Parser::Doublecolon:
			case CPP14Parser::Identifier:
			{
				enterOuterAlt(ctx, 2);
				setState(1238); //951
				typespecifier(ctx);
				break;
			}

			case CPP14Parser::Explicit:
			case CPP14Parser::Inline:
			case CPP14Parser::Virtual:
			{
				enterOuterAlt(ctx, 3);
				setState(1239); //951
				functionspecifier(ctx);
				break;
			}

			case CPP14Parser::Friend:
			{
				enterOuterAlt(ctx, 4);
				setState(1240);//958
				match(CPP14Parser::Friend,ctx);
				break;
			}

			case CPP14Parser::Typedef:
			{
				enterOuterAlt(ctx, 5);
				setState(1241);//958
				match(CPP14Parser::Typedef,ctx);
				break;
			}

			case CPP14Parser::Constexpr:
			{
				enterOuterAlt(ctx, 6);
				setState(1242);//958
				match(CPP14Parser::Constexpr,ctx);
				break;
			}

		default:
			throw NoViableAltException(this, ctx);
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

//----------------- DeclspecifierseqContext ------------------------------------------------------------------

CPP14Parser::DeclspecifierseqContext::DeclspecifierseqContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::DeclspecifierContext* CPP14Parser::DeclspecifierseqContext::declspecifier()
{
	return getRuleContext<CPP14Parser::DeclspecifierContext>(0);//1165
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::DeclspecifierseqContext::attributespecifierseq()
{
	return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);//1165
}

CPP14Parser::DeclspecifierseqContext* CPP14Parser::DeclspecifierseqContext::declspecifierseq()
{
	return getRuleContext<CPP14Parser::DeclspecifierseqContext>(0);//1165
}


size_t CPP14Parser::DeclspecifierseqContext::getRuleIndex() const
{
	return CPP14Parser::RuleDeclspecifierseq;//688
}

void CPP14Parser::DeclspecifierseqContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::DeclspecifierseqContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::DeclspecifierseqContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitDeclspecifierseq(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::DeclspecifierseqContext* CPP14Parser::declspecifierseq( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<DeclspecifierseqContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 140, CPP14Parser::RuleDeclspecifierseq);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1252);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 110, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(1245); //951
			declspecifier(ctx);
			setState(1247);//848
			_errHandler->sync(this, ctx);

			switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 109, ctx))
			{
			case 1:
			{
				setState(1246); //951
				attributespecifierseq(0,ctx);
				break;
			}

			}
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(1249); //951
			declspecifier(ctx);
			setState(1250); //951
			declspecifierseq(ctx);
			break;
		}

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

//----------------- StorageclassspecifierContext ------------------------------------------------------------------

CPP14Parser::StorageclassspecifierContext::StorageclassspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::StorageclassspecifierContext::Register()
{
	return getToken(CPP14Parser::Register, 0);
}

tree::TerminalNode* CPP14Parser::StorageclassspecifierContext::Static()
{
	return getToken(CPP14Parser::Static, 0);
}

tree::TerminalNode* CPP14Parser::StorageclassspecifierContext::Thread_local()
{
	return getToken(CPP14Parser::Thread_local, 0);
}

tree::TerminalNode* CPP14Parser::StorageclassspecifierContext::Extern()
{
	return getToken(CPP14Parser::Extern, 0);
}

tree::TerminalNode* CPP14Parser::StorageclassspecifierContext::Mutable()
{
	return getToken(CPP14Parser::Mutable, 0);
}


size_t CPP14Parser::StorageclassspecifierContext::getRuleIndex() const
{
	return CPP14Parser::RuleStorageclassspecifier;//688
}

void CPP14Parser::StorageclassspecifierContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::StorageclassspecifierContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::StorageclassspecifierContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitStorageclassspecifier(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::StorageclassspecifierContext* CPP14Parser::storageclassspecifier( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<StorageclassspecifierContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 142, CPP14Parser::RuleStorageclassspecifier);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(1254);//970
		_la = _input->LA(1);
		if (!(((((_la - 35) & ~ 0x3fULL) == 0) &&
			((1ULL << (_la - 35)) & ((1ULL << (CPP14Parser::Extern - 35))
			| (1ULL << (CPP14Parser::Mutable - 35))
			| (1ULL << (CPP14Parser::Register - 35))
			| (1ULL << (CPP14Parser::Static - 35))
			| (1ULL << (CPP14Parser::Thread_local - 35)))) != 0)))
		{
		_errHandler->recoverInline(this, ctx);
		}
		else
		{
			_errHandler->reportMatch(this);
			consume(ctx);
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

//----------------- FunctionspecifierContext ------------------------------------------------------------------

CPP14Parser::FunctionspecifierContext::FunctionspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::FunctionspecifierContext::Inline()
{
	return getToken(CPP14Parser::Inline, 0);
}

tree::TerminalNode* CPP14Parser::FunctionspecifierContext::Virtual()
{
	return getToken(CPP14Parser::Virtual, 0);
}

tree::TerminalNode* CPP14Parser::FunctionspecifierContext::Explicit()
{
	return getToken(CPP14Parser::Explicit, 0);
}


size_t CPP14Parser::FunctionspecifierContext::getRuleIndex() const
{
	return CPP14Parser::RuleFunctionspecifier;//688
}

void CPP14Parser::FunctionspecifierContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::FunctionspecifierContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::FunctionspecifierContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitFunctionspecifier(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::FunctionspecifierContext* CPP14Parser::functionspecifier( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<FunctionspecifierContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 144, CPP14Parser::RuleFunctionspecifier);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(1256);//970
		_la = _input->LA(1);
		if (!(((((_la - 33) & ~ 0x3fULL) == 0) &&
			((1ULL << (_la - 33)) & ((1ULL << (CPP14Parser::Explicit - 33))
			| (1ULL << (CPP14Parser::Inline - 33))
			| (1ULL << (CPP14Parser::Virtual - 33)))) != 0)))
		{
		_errHandler->recoverInline(this, ctx);
		}
		else
		{
			_errHandler->reportMatch(this);
			consume(ctx);
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

//----------------- TypedefnameContext ------------------------------------------------------------------

CPP14Parser::TypedefnameContext::TypedefnameContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::TypedefnameContext::Identifier()
{
	return getToken(CPP14Parser::Identifier, 0);
}


size_t CPP14Parser::TypedefnameContext::getRuleIndex() const
{
	return CPP14Parser::RuleTypedefname;//688
}

void CPP14Parser::TypedefnameContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::TypedefnameContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::TypedefnameContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitTypedefname(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::TypedefnameContext* CPP14Parser::typedefname( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<TypedefnameContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 146, CPP14Parser::RuleTypedefname);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(1258);//958
		match(CPP14Parser::Identifier,ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- TypespecifierContext ------------------------------------------------------------------

CPP14Parser::TypespecifierContext::TypespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::TrailingtypespecifierContext* CPP14Parser::TypespecifierContext::trailingtypespecifier()
{
	return getRuleContext<CPP14Parser::TrailingtypespecifierContext>(0);//1165
}

CPP14Parser::ClassspecifierContext* CPP14Parser::TypespecifierContext::classspecifier()
{
	return getRuleContext<CPP14Parser::ClassspecifierContext>(0);//1165
}

CPP14Parser::EnumspecifierContext* CPP14Parser::TypespecifierContext::enumspecifier()
{
	return getRuleContext<CPP14Parser::EnumspecifierContext>(0);//1165
}


size_t CPP14Parser::TypespecifierContext::getRuleIndex() const
{
	return CPP14Parser::RuleTypespecifier;//688
}

void CPP14Parser::TypespecifierContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::TypespecifierContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::TypespecifierContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitTypespecifier(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::TypespecifierContext* CPP14Parser::typespecifier( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<TypespecifierContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 148, CPP14Parser::RuleTypespecifier);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1263);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 111, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(1260); //951
			trailingtypespecifier(ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(1261); //951
			classspecifier(ctx);
			break;
		}

		case 3:
		{
			enterOuterAlt(ctx, 3);
			setState(1262); //951
			enumspecifier(ctx);
			break;
		}

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

//----------------- TrailingtypespecifierContext ------------------------------------------------------------------

CPP14Parser::TrailingtypespecifierContext::TrailingtypespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::SimpletypespecifierContext* CPP14Parser::TrailingtypespecifierContext::simpletypespecifier()
{
	return getRuleContext<CPP14Parser::SimpletypespecifierContext>(0);//1165
}

CPP14Parser::ElaboratedtypespecifierContext* CPP14Parser::TrailingtypespecifierContext::elaboratedtypespecifier()
{
	return getRuleContext<CPP14Parser::ElaboratedtypespecifierContext>(0);//1165
}

CPP14Parser::TypenamespecifierContext* CPP14Parser::TrailingtypespecifierContext::typenamespecifier()
{
	return getRuleContext<CPP14Parser::TypenamespecifierContext>(0);//1165
}

CPP14Parser::CvqualifierContext* CPP14Parser::TrailingtypespecifierContext::cvqualifier()
{
	return getRuleContext<CPP14Parser::CvqualifierContext>(0);//1165
}


size_t CPP14Parser::TrailingtypespecifierContext::getRuleIndex() const
{
	return CPP14Parser::RuleTrailingtypespecifier;//688
}

void CPP14Parser::TrailingtypespecifierContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::TrailingtypespecifierContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::TrailingtypespecifierContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitTrailingtypespecifier(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::TrailingtypespecifierContext* CPP14Parser::trailingtypespecifier( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<TrailingtypespecifierContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 150, CPP14Parser::RuleTrailingtypespecifier);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1269);//750
		_errHandler->sync(this, ctx);
		switch (_input->LA(1))
		{
			case CPP14Parser::Auto:
			case CPP14Parser::Bool:
			case CPP14Parser::Char:
			case CPP14Parser::Char16:
			case CPP14Parser::Char32:
			case CPP14Parser::Decltype:
			case CPP14Parser::Double:
			case CPP14Parser::Float:
			case CPP14Parser::Int:
			case CPP14Parser::Long:
			case CPP14Parser::Short:
			case CPP14Parser::Signed:
			case CPP14Parser::Unsigned:
			case CPP14Parser::Void:
			case CPP14Parser::Wchar:
			case CPP14Parser::Doublecolon:
			case CPP14Parser::Identifier:
			{
				enterOuterAlt(ctx, 1);
				setState(1265); //951
				simpletypespecifier(ctx);
				break;
			}

			case CPP14Parser::Class:
			case CPP14Parser::Enum:
			case CPP14Parser::Struct:
			case CPP14Parser::Union:
			{
				enterOuterAlt(ctx, 2);
				setState(1266); //951
				elaboratedtypespecifier(ctx);
				break;
			}

			case CPP14Parser::Typename_:
			{
				enterOuterAlt(ctx, 3);
				setState(1267); //951
				typenamespecifier(ctx);
				break;
			}

			case CPP14Parser::Const:
			case CPP14Parser::Volatile:
			{
				enterOuterAlt(ctx, 4);
				setState(1268); //951
				cvqualifier(ctx);
				break;
			}

		default:
			throw NoViableAltException(this, ctx);
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

//----------------- TypespecifierseqContext ------------------------------------------------------------------

CPP14Parser::TypespecifierseqContext::TypespecifierseqContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::TypespecifierContext* CPP14Parser::TypespecifierseqContext::typespecifier()
{
	return getRuleContext<CPP14Parser::TypespecifierContext>(0);//1165
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::TypespecifierseqContext::attributespecifierseq()
{
	return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);//1165
}

CPP14Parser::TypespecifierseqContext* CPP14Parser::TypespecifierseqContext::typespecifierseq()
{
	return getRuleContext<CPP14Parser::TypespecifierseqContext>(0);//1165
}


size_t CPP14Parser::TypespecifierseqContext::getRuleIndex() const
{
	return CPP14Parser::RuleTypespecifierseq;//688
}

void CPP14Parser::TypespecifierseqContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::TypespecifierseqContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::TypespecifierseqContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitTypespecifierseq(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::TypespecifierseqContext* CPP14Parser::typespecifierseq( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<TypespecifierseqContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 152, CPP14Parser::RuleTypespecifierseq);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1278);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 114, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(1271); //951
			typespecifier(ctx);
			setState(1273);//848
			_errHandler->sync(this, ctx);

			switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 113, ctx))
			{
			case 1:
			{
				setState(1272); //951
				attributespecifierseq(0,ctx);
				break;
			}

			}
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(1275); //951
			typespecifier(ctx);
			setState(1276); //951
			typespecifierseq(ctx);
			break;
		}

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

//----------------- TrailingtypespecifierseqContext ------------------------------------------------------------------

CPP14Parser::TrailingtypespecifierseqContext::TrailingtypespecifierseqContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::TrailingtypespecifierContext* CPP14Parser::TrailingtypespecifierseqContext::trailingtypespecifier()
{
	return getRuleContext<CPP14Parser::TrailingtypespecifierContext>(0);//1165
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::TrailingtypespecifierseqContext::attributespecifierseq()
{
	return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);//1165
}

CPP14Parser::TrailingtypespecifierseqContext* CPP14Parser::TrailingtypespecifierseqContext::trailingtypespecifierseq()
{
	return getRuleContext<CPP14Parser::TrailingtypespecifierseqContext>(0);//1165
}


size_t CPP14Parser::TrailingtypespecifierseqContext::getRuleIndex() const
{
	return CPP14Parser::RuleTrailingtypespecifierseq;//688
}

void CPP14Parser::TrailingtypespecifierseqContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::TrailingtypespecifierseqContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::TrailingtypespecifierseqContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitTrailingtypespecifierseq(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::TrailingtypespecifierseqContext* CPP14Parser::trailingtypespecifierseq( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<TrailingtypespecifierseqContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 154, CPP14Parser::RuleTrailingtypespecifierseq);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1287);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 116, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(1280); //951
			trailingtypespecifier(ctx);
			setState(1282);//848
			_errHandler->sync(this, ctx);

			switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 115, ctx))
			{
			case 1:
			{
				setState(1281); //951
				attributespecifierseq(0,ctx);
				break;
			}

			}
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(1284); //951
			trailingtypespecifier(ctx);
			setState(1285); //951
			trailingtypespecifierseq(ctx);
			break;
		}

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

//----------------- SimpletypespecifierContext ------------------------------------------------------------------

CPP14Parser::SimpletypespecifierContext::SimpletypespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::ThetypenameContext* CPP14Parser::SimpletypespecifierContext::thetypename()
{
	return getRuleContext<CPP14Parser::ThetypenameContext>(0);//1165
}

CPP14Parser::NestednamespecifierContext* CPP14Parser::SimpletypespecifierContext::nestednamespecifier()
{
	return getRuleContext<CPP14Parser::NestednamespecifierContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::SimpletypespecifierContext::Template()
{
	return getToken(CPP14Parser::Template, 0);
}

CPP14Parser::SimpletemplateidContext* CPP14Parser::SimpletypespecifierContext::simpletemplateid()
{
	return getRuleContext<CPP14Parser::SimpletemplateidContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::SimpletypespecifierContext::Char()
{
	return getToken(CPP14Parser::Char, 0);
}

tree::TerminalNode* CPP14Parser::SimpletypespecifierContext::Char16()
{
	return getToken(CPP14Parser::Char16, 0);
}

tree::TerminalNode* CPP14Parser::SimpletypespecifierContext::Char32()
{
	return getToken(CPP14Parser::Char32, 0);
}

tree::TerminalNode* CPP14Parser::SimpletypespecifierContext::Wchar()
{
	return getToken(CPP14Parser::Wchar, 0);
}

tree::TerminalNode* CPP14Parser::SimpletypespecifierContext::Bool()
{
	return getToken(CPP14Parser::Bool, 0);
}

tree::TerminalNode* CPP14Parser::SimpletypespecifierContext::Short()
{
	return getToken(CPP14Parser::Short, 0);
}

tree::TerminalNode* CPP14Parser::SimpletypespecifierContext::Int()
{
	return getToken(CPP14Parser::Int, 0);
}

tree::TerminalNode* CPP14Parser::SimpletypespecifierContext::Long()
{
	return getToken(CPP14Parser::Long, 0);
}

tree::TerminalNode* CPP14Parser::SimpletypespecifierContext::Signed()
{
	return getToken(CPP14Parser::Signed, 0);
}

tree::TerminalNode* CPP14Parser::SimpletypespecifierContext::Unsigned()
{
	return getToken(CPP14Parser::Unsigned, 0);
}

tree::TerminalNode* CPP14Parser::SimpletypespecifierContext::Float()
{
	return getToken(CPP14Parser::Float, 0);
}

tree::TerminalNode* CPP14Parser::SimpletypespecifierContext::Double()
{
	return getToken(CPP14Parser::Double, 0);
}

tree::TerminalNode* CPP14Parser::SimpletypespecifierContext::Void()
{
	return getToken(CPP14Parser::Void, 0);
}

tree::TerminalNode* CPP14Parser::SimpletypespecifierContext::Auto()
{
	return getToken(CPP14Parser::Auto, 0);
}

CPP14Parser::DecltypespecifierContext* CPP14Parser::SimpletypespecifierContext::decltypespecifier()
{
	return getRuleContext<CPP14Parser::DecltypespecifierContext>(0);//1165
}


size_t CPP14Parser::SimpletypespecifierContext::getRuleIndex() const
{
	return CPP14Parser::RuleSimpletypespecifier;//688
}

void CPP14Parser::SimpletypespecifierContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::SimpletypespecifierContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::SimpletypespecifierContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitSimpletypespecifier(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::SimpletypespecifierContext* CPP14Parser::simpletypespecifier( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<SimpletypespecifierContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 156, CPP14Parser::RuleSimpletypespecifier);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1312);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 118, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(1290);//848
			_errHandler->sync(this, ctx);

			switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 117, ctx))
			{
			case 1:
			{
				setState(1289); //951
				nestednamespecifier(0,ctx);
				break;
			}

			}
			setState(1292); //951
			thetypename(ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(1293); //951
			nestednamespecifier(0,ctx);
			setState(1294);//958
			match(CPP14Parser::Template,ctx);
			setState(1295); //951
			simpletemplateid(ctx);
			break;
		}

		case 3:
		{
			enterOuterAlt(ctx, 3);
			setState(1297);//958
			match(CPP14Parser::Char,ctx);
			break;
		}

		case 4:
		{
			enterOuterAlt(ctx, 4);
			setState(1298);//958
			match(CPP14Parser::Char16,ctx);
			break;
		}

		case 5:
		{
			enterOuterAlt(ctx, 5);
			setState(1299);//958
			match(CPP14Parser::Char32,ctx);
			break;
		}

		case 6:
		{
			enterOuterAlt(ctx, 6);
			setState(1300);//958
			match(CPP14Parser::Wchar,ctx);
			break;
		}

		case 7:
		{
			enterOuterAlt(ctx, 7);
			setState(1301);//958
			match(CPP14Parser::Bool,ctx);
			break;
		}

		case 8:
		{
			enterOuterAlt(ctx, 8);
			setState(1302);//958
			match(CPP14Parser::Short,ctx);
			break;
		}

		case 9:
		{
			enterOuterAlt(ctx, 9);
			setState(1303);//958
			match(CPP14Parser::Int,ctx);
			break;
		}

		case 10:
		{
			enterOuterAlt(ctx, 10);
			setState(1304);//958
			match(CPP14Parser::Long,ctx);
			break;
		}

		case 11:
		{
			enterOuterAlt(ctx, 11);
			setState(1305);//958
			match(CPP14Parser::Signed,ctx);
			break;
		}

		case 12:
		{
			enterOuterAlt(ctx, 12);
			setState(1306);//958
			match(CPP14Parser::Unsigned,ctx);
			break;
		}

		case 13:
		{
			enterOuterAlt(ctx, 13);
			setState(1307);//958
			match(CPP14Parser::Float,ctx);
			break;
		}

		case 14:
		{
			enterOuterAlt(ctx, 14);
			setState(1308);//958
			match(CPP14Parser::Double,ctx);
			break;
		}

		case 15:
		{
			enterOuterAlt(ctx, 15);
			setState(1309);//958
			match(CPP14Parser::Void,ctx);
			break;
		}

		case 16:
		{
			enterOuterAlt(ctx, 16);
			setState(1310);//958
			match(CPP14Parser::Auto,ctx);
			break;
		}

		case 17:
		{
			enterOuterAlt(ctx, 17);
			setState(1311); //951
			decltypespecifier(ctx);
			break;
		}

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

//----------------- ThetypenameContext ------------------------------------------------------------------

CPP14Parser::ThetypenameContext::ThetypenameContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::ClassnameContext* CPP14Parser::ThetypenameContext::classname()
{
	return getRuleContext<CPP14Parser::ClassnameContext>(0);//1165
}

CPP14Parser::EnumnameContext* CPP14Parser::ThetypenameContext::enumname()
{
	return getRuleContext<CPP14Parser::EnumnameContext>(0);//1165
}

CPP14Parser::TypedefnameContext* CPP14Parser::ThetypenameContext::typedefname()
{
	return getRuleContext<CPP14Parser::TypedefnameContext>(0);//1165
}

CPP14Parser::SimpletemplateidContext* CPP14Parser::ThetypenameContext::simpletemplateid()
{
	return getRuleContext<CPP14Parser::SimpletemplateidContext>(0);//1165
}


size_t CPP14Parser::ThetypenameContext::getRuleIndex() const
{
	return CPP14Parser::RuleThetypename;//688
}

void CPP14Parser::ThetypenameContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::ThetypenameContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::ThetypenameContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitThetypename(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::ThetypenameContext* CPP14Parser::thetypename( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<ThetypenameContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 158, CPP14Parser::RuleThetypename);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1318);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 119, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(1314); //951
			classname(ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(1315); //951
			enumname(ctx);
			break;
		}

		case 3:
		{
			enterOuterAlt(ctx, 3);
			setState(1316); //951
			typedefname(ctx);
			break;
		}

		case 4:
		{
			enterOuterAlt(ctx, 4);
			setState(1317); //951
			simpletemplateid(ctx);
			break;
		}

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

//----------------- DecltypespecifierContext ------------------------------------------------------------------

CPP14Parser::DecltypespecifierContext::DecltypespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::DecltypespecifierContext::Decltype()
{
	return getToken(CPP14Parser::Decltype, 0);
}

tree::TerminalNode* CPP14Parser::DecltypespecifierContext::LeftParen()
{
	return getToken(CPP14Parser::LeftParen, 0);
}

CPP14Parser::ExpressionContext* CPP14Parser::DecltypespecifierContext::expression()
{
	return getRuleContext<CPP14Parser::ExpressionContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::DecltypespecifierContext::RightParen()
{
	return getToken(CPP14Parser::RightParen, 0);
}

tree::TerminalNode* CPP14Parser::DecltypespecifierContext::Auto()
{
	return getToken(CPP14Parser::Auto, 0);
}


size_t CPP14Parser::DecltypespecifierContext::getRuleIndex() const
{
	return CPP14Parser::RuleDecltypespecifier;//688
}

void CPP14Parser::DecltypespecifierContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::DecltypespecifierContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::DecltypespecifierContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitDecltypespecifier(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::DecltypespecifierContext* CPP14Parser::decltypespecifier( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<DecltypespecifierContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 160, CPP14Parser::RuleDecltypespecifier);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1329);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 120, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(1320);//958
			match(CPP14Parser::Decltype,ctx);
			setState(1321);//958
			match(CPP14Parser::LeftParen,ctx);
			setState(1322); //951
			expression(0,ctx);
			setState(1323);//958
			match(CPP14Parser::RightParen,ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(1325);//958
			match(CPP14Parser::Decltype,ctx);
			setState(1326);//958
			match(CPP14Parser::LeftParen,ctx);
			setState(1327);//958
			match(CPP14Parser::Auto,ctx);
			setState(1328);//958
			match(CPP14Parser::RightParen,ctx);
			break;
		}

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

//----------------- ElaboratedtypespecifierContext ------------------------------------------------------------------

CPP14Parser::ElaboratedtypespecifierContext::ElaboratedtypespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::ClasskeyContext* CPP14Parser::ElaboratedtypespecifierContext::classkey()
{
	return getRuleContext<CPP14Parser::ClasskeyContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::ElaboratedtypespecifierContext::Identifier()
{
	return getToken(CPP14Parser::Identifier, 0);
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::ElaboratedtypespecifierContext::attributespecifierseq()
{
	return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);//1165
}

CPP14Parser::NestednamespecifierContext* CPP14Parser::ElaboratedtypespecifierContext::nestednamespecifier()
{
	return getRuleContext<CPP14Parser::NestednamespecifierContext>(0);//1165
}

CPP14Parser::SimpletemplateidContext* CPP14Parser::ElaboratedtypespecifierContext::simpletemplateid()
{
	return getRuleContext<CPP14Parser::SimpletemplateidContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::ElaboratedtypespecifierContext::Template()
{
	return getToken(CPP14Parser::Template, 0);
}

tree::TerminalNode* CPP14Parser::ElaboratedtypespecifierContext::Enum()
{
	return getToken(CPP14Parser::Enum, 0);
}


size_t CPP14Parser::ElaboratedtypespecifierContext::getRuleIndex() const
{
	return CPP14Parser::RuleElaboratedtypespecifier;//688
}

void CPP14Parser::ElaboratedtypespecifierContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::ElaboratedtypespecifierContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::ElaboratedtypespecifierContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitElaboratedtypespecifier(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::ElaboratedtypespecifierContext* CPP14Parser::elaboratedtypespecifier( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<ElaboratedtypespecifierContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 162, CPP14Parser::RuleElaboratedtypespecifier);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1355);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 125, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(1331); //951
			classkey(ctx);
			setState(1333);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket)
			{
				setState(1332); //951
				attributespecifierseq(0,ctx);
			}
			setState(1336);//848
			_errHandler->sync(this, ctx);

			switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 122, ctx))
			{
			case 1:
			{
				setState(1335); //951
				nestednamespecifier(0,ctx);
				break;
			}

			}
			setState(1338);//958
			match(CPP14Parser::Identifier,ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(1340); //951
			classkey(ctx);
			setState(1341); //951
			simpletemplateid(ctx);
			break;
		}

		case 3:
		{
			enterOuterAlt(ctx, 3);
			setState(1343); //951
			classkey(ctx);
			setState(1344); //951
			nestednamespecifier(0,ctx);
			setState(1346);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Template)
			{
				setState(1345);//958
				match(CPP14Parser::Template,ctx);
			}
			setState(1348); //951
			simpletemplateid(ctx);
			break;
		}

		case 4:
		{
			enterOuterAlt(ctx, 4);
			setState(1350);//958
			match(CPP14Parser::Enum,ctx);
			setState(1352);//848
			_errHandler->sync(this, ctx);

			switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 124, ctx))
			{
			case 1:
			{
				setState(1351); //951
				nestednamespecifier(0,ctx);
				break;
			}

			}
			setState(1354);//958
			match(CPP14Parser::Identifier,ctx);
			break;
		}

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

//----------------- EnumnameContext ------------------------------------------------------------------

CPP14Parser::EnumnameContext::EnumnameContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::EnumnameContext::Identifier()
{
	return getToken(CPP14Parser::Identifier, 0);
}


size_t CPP14Parser::EnumnameContext::getRuleIndex() const
{
	return CPP14Parser::RuleEnumname;//688
}

void CPP14Parser::EnumnameContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::EnumnameContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::EnumnameContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitEnumname(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::EnumnameContext* CPP14Parser::enumname( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<EnumnameContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 164, CPP14Parser::RuleEnumname);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(1357);//958
		match(CPP14Parser::Identifier,ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- EnumspecifierContext ------------------------------------------------------------------

CPP14Parser::EnumspecifierContext::EnumspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::EnumheadContext* CPP14Parser::EnumspecifierContext::enumhead()
{
	return getRuleContext<CPP14Parser::EnumheadContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::EnumspecifierContext::LeftBrace()
{
	return getToken(CPP14Parser::LeftBrace, 0);
}

tree::TerminalNode* CPP14Parser::EnumspecifierContext::RightBrace()
{
	return getToken(CPP14Parser::RightBrace, 0);
}

CPP14Parser::EnumeratorlistContext* CPP14Parser::EnumspecifierContext::enumeratorlist()
{
	return getRuleContext<CPP14Parser::EnumeratorlistContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::EnumspecifierContext::Comma()
{
	return getToken(CPP14Parser::Comma, 0);
}


size_t CPP14Parser::EnumspecifierContext::getRuleIndex() const
{
	return CPP14Parser::RuleEnumspecifier;//688
}

void CPP14Parser::EnumspecifierContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::EnumspecifierContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::EnumspecifierContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitEnumspecifier(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::EnumspecifierContext* CPP14Parser::enumspecifier( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<EnumspecifierContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 166, CPP14Parser::RuleEnumspecifier);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1372);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 127, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(1359); //951
			enumhead(ctx);
			setState(1360);//958
			match(CPP14Parser::LeftBrace,ctx);
			setState(1362);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Identifier)
			{
				setState(1361); //951
				enumeratorlist(0,ctx);
			}
			setState(1364);//958
			match(CPP14Parser::RightBrace,ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(1366); //951
			enumhead(ctx);
			setState(1367);//958
			match(CPP14Parser::LeftBrace,ctx);
			setState(1368); //951
			enumeratorlist(0,ctx);
			setState(1369);//958
			match(CPP14Parser::Comma,ctx);
			setState(1370);//958
			match(CPP14Parser::RightBrace,ctx);
			break;
		}

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

//----------------- EnumheadContext ------------------------------------------------------------------

CPP14Parser::EnumheadContext::EnumheadContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::EnumkeyContext* CPP14Parser::EnumheadContext::enumkey()
{
	return getRuleContext<CPP14Parser::EnumkeyContext>(0);//1165
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::EnumheadContext::attributespecifierseq()
{
	return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::EnumheadContext::Identifier()
{
	return getToken(CPP14Parser::Identifier, 0);
}

CPP14Parser::EnumbaseContext* CPP14Parser::EnumheadContext::enumbase()
{
	return getRuleContext<CPP14Parser::EnumbaseContext>(0);//1165
}

CPP14Parser::NestednamespecifierContext* CPP14Parser::EnumheadContext::nestednamespecifier()
{
	return getRuleContext<CPP14Parser::NestednamespecifierContext>(0);//1165
}


size_t CPP14Parser::EnumheadContext::getRuleIndex() const
{
	return CPP14Parser::RuleEnumhead;//688
}

void CPP14Parser::EnumheadContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::EnumheadContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::EnumheadContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitEnumhead(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::EnumheadContext* CPP14Parser::enumhead( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<EnumheadContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 168, CPP14Parser::RuleEnumhead);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1393);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 133, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(1374); //951
			enumkey(ctx);
			setState(1376);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket)
			{
				setState(1375); //951
				attributespecifierseq(0,ctx);
			}
			setState(1379);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Identifier)
			{
				setState(1378);//958
				match(CPP14Parser::Identifier,ctx);
			}
			setState(1382);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Colon)
			{
				setState(1381); //951
				enumbase(ctx);
			}
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(1384); //951
			enumkey(ctx);
			setState(1386);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket)
			{
				setState(1385); //951
				attributespecifierseq(0,ctx);
			}
			setState(1388); //951
			nestednamespecifier(0,ctx);
			setState(1389);//958
			match(CPP14Parser::Identifier,ctx);
			setState(1391);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Colon)
			{
				setState(1390); //951
				enumbase(ctx);
			}
			break;
		}

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

//----------------- OpaqueenumdeclarationContext ------------------------------------------------------------------

CPP14Parser::OpaqueenumdeclarationContext::OpaqueenumdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::EnumkeyContext* CPP14Parser::OpaqueenumdeclarationContext::enumkey()
{
	return getRuleContext<CPP14Parser::EnumkeyContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::OpaqueenumdeclarationContext::Identifier()
{
	return getToken(CPP14Parser::Identifier, 0);
}

tree::TerminalNode* CPP14Parser::OpaqueenumdeclarationContext::Semi()
{
	return getToken(CPP14Parser::Semi, 0);
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::OpaqueenumdeclarationContext::attributespecifierseq()
{
	return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);//1165
}

CPP14Parser::EnumbaseContext* CPP14Parser::OpaqueenumdeclarationContext::enumbase()
{
	return getRuleContext<CPP14Parser::EnumbaseContext>(0);//1165
}


size_t CPP14Parser::OpaqueenumdeclarationContext::getRuleIndex() const
{
	return CPP14Parser::RuleOpaqueenumdeclaration;//688
}

void CPP14Parser::OpaqueenumdeclarationContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::OpaqueenumdeclarationContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::OpaqueenumdeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitOpaqueenumdeclaration(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::OpaqueenumdeclarationContext* CPP14Parser::opaqueenumdeclaration( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<OpaqueenumdeclarationContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 170, CPP14Parser::RuleOpaqueenumdeclaration);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(1395); //951
		enumkey(ctx);
		setState(1397);//788
		_errHandler->sync(this, ctx);

		_la = _input->LA(1);
		if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket)
		{
			setState(1396); //951
			attributespecifierseq(0,ctx);
		}
		setState(1399);//958
		match(CPP14Parser::Identifier,ctx);
		setState(1401);//788
		_errHandler->sync(this, ctx);

		_la = _input->LA(1);
		if (_la == CPP14Parser::Colon)
		{
			setState(1400); //951
			enumbase(ctx);
		}
		setState(1403);//958
		match(CPP14Parser::Semi,ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- EnumkeyContext ------------------------------------------------------------------

CPP14Parser::EnumkeyContext::EnumkeyContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::EnumkeyContext::Enum()
{
	return getToken(CPP14Parser::Enum, 0);
}

tree::TerminalNode* CPP14Parser::EnumkeyContext::Class()
{
	return getToken(CPP14Parser::Class, 0);
}

tree::TerminalNode* CPP14Parser::EnumkeyContext::Struct()
{
	return getToken(CPP14Parser::Struct, 0);
}


size_t CPP14Parser::EnumkeyContext::getRuleIndex() const
{
	return CPP14Parser::RuleEnumkey;//688
}

void CPP14Parser::EnumkeyContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::EnumkeyContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::EnumkeyContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitEnumkey(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::EnumkeyContext* CPP14Parser::enumkey( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<EnumkeyContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 172, CPP14Parser::RuleEnumkey);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1410);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 136, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(1405);//958
			match(CPP14Parser::Enum,ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(1406);//958
			match(CPP14Parser::Enum,ctx);
			setState(1407);//958
			match(CPP14Parser::Class,ctx);
			break;
		}

		case 3:
		{
			enterOuterAlt(ctx, 3);
			setState(1408);//958
			match(CPP14Parser::Enum,ctx);
			setState(1409);//958
			match(CPP14Parser::Struct,ctx);
			break;
		}

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

//----------------- EnumbaseContext ------------------------------------------------------------------

CPP14Parser::EnumbaseContext::EnumbaseContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::EnumbaseContext::Colon()
{
	return getToken(CPP14Parser::Colon, 0);
}

CPP14Parser::TypespecifierseqContext* CPP14Parser::EnumbaseContext::typespecifierseq()
{
	return getRuleContext<CPP14Parser::TypespecifierseqContext>(0);//1165
}


size_t CPP14Parser::EnumbaseContext::getRuleIndex() const
{
	return CPP14Parser::RuleEnumbase;//688
}

void CPP14Parser::EnumbaseContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::EnumbaseContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::EnumbaseContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitEnumbase(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::EnumbaseContext* CPP14Parser::enumbase( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<EnumbaseContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 174, CPP14Parser::RuleEnumbase);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(1412);//958
		match(CPP14Parser::Colon,ctx);
		setState(1413); //951
		typespecifierseq(ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- EnumeratorlistContext ------------------------------------------------------------------

CPP14Parser::EnumeratorlistContext::EnumeratorlistContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::EnumeratordefinitionContext* CPP14Parser::EnumeratorlistContext::enumeratordefinition()
{
	return getRuleContext<CPP14Parser::EnumeratordefinitionContext>(0);//1165
}

CPP14Parser::EnumeratorlistContext* CPP14Parser::EnumeratorlistContext::enumeratorlist()
{
	return getRuleContext<CPP14Parser::EnumeratorlistContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::EnumeratorlistContext::Comma()
{
	return getToken(CPP14Parser::Comma, 0);
}


size_t CPP14Parser::EnumeratorlistContext::getRuleIndex() const
{
	return CPP14Parser::RuleEnumeratorlist;//688
}

void CPP14Parser::EnumeratorlistContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::EnumeratorlistContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::EnumeratorlistContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitEnumeratorlist(this);
	else
		return visitor->visitChildren(this);
}


CPP14Parser::EnumeratorlistContext* CPP14Parser::enumeratorlist()
{
	 return enumeratorlist(0, nullptr);//600
}

CPP14Parser::EnumeratorlistContext* CPP14Parser::enumeratorlist(int precedence, antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	antlr4::ParserRuleContext *parentContext = parent;
	size_t parentState = getState();
	auto _localctx = std::make_unique<EnumeratorlistContext>(parentContext, parentState);//610
	auto ctx = _localctx.get();//609
	size_t startState = 176;
	enterRecursionRule(ctx, 176, CPP14Parser::RuleEnumeratorlist, precedence);

		

	auto onExit = finally([=,&_localctx]
{
		unrollRecursionContexts(parentContext, std::move(_localctx));
	});
	try
{
		size_t alt;
		enterOuterAlt(ctx, 1);
		setState(1416); //951
		enumeratordefinition(ctx);
		ctx->stop = _input->LT(-1);
		setState(1423);//865
		_errHandler->sync(this, ctx);
		alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 137, ctx);
		while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
		{
			if (alt == 1)
		{
				if (!_parseListeners.empty())
					triggerExitRuleEvent(ctx);

				auto tmpContext = std::make_unique<EnumeratorlistContext>(parentContext, parentState);
				pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleEnumeratorlist);//1240
				_localctx = std::move(tmpContext);
				ctx = _localctx.get();
				setState(1418);//1002

				if (!(precpred(nullptr, 1))) throw FailedPredicateException(this, "precpred(nullptr, 1)", ctx);
				setState(1419);//958
				match(CPP14Parser::Comma,ctx);
				setState(1420); //951
				enumeratordefinition(ctx); 
			}
			setState(1425);//875
			_errHandler->sync(this, ctx);
			alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 137, ctx);
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

//----------------- EnumeratordefinitionContext ------------------------------------------------------------------

CPP14Parser::EnumeratordefinitionContext::EnumeratordefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::EnumeratorContext* CPP14Parser::EnumeratordefinitionContext::enumerator()
{
	return getRuleContext<CPP14Parser::EnumeratorContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::EnumeratordefinitionContext::Assign()
{
	return getToken(CPP14Parser::Assign, 0);
}

CPP14Parser::ConstantexpressionContext* CPP14Parser::EnumeratordefinitionContext::constantexpression()
{
	return getRuleContext<CPP14Parser::ConstantexpressionContext>(0);//1165
}


size_t CPP14Parser::EnumeratordefinitionContext::getRuleIndex() const
{
	return CPP14Parser::RuleEnumeratordefinition;//688
}

void CPP14Parser::EnumeratordefinitionContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::EnumeratordefinitionContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::EnumeratordefinitionContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitEnumeratordefinition(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::EnumeratordefinitionContext* CPP14Parser::enumeratordefinition( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<EnumeratordefinitionContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 178, CPP14Parser::RuleEnumeratordefinition);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1431);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 138, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(1426); //951
			enumerator(ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(1427); //951
			enumerator(ctx);
			setState(1428);//958
			match(CPP14Parser::Assign,ctx);
			setState(1429); //951
			constantexpression(ctx);
			break;
		}

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

//----------------- EnumeratorContext ------------------------------------------------------------------

CPP14Parser::EnumeratorContext::EnumeratorContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::EnumeratorContext::Identifier()
{
	return getToken(CPP14Parser::Identifier, 0);
}


size_t CPP14Parser::EnumeratorContext::getRuleIndex() const
{
	return CPP14Parser::RuleEnumerator;//688
}

void CPP14Parser::EnumeratorContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::EnumeratorContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::EnumeratorContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitEnumerator(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::EnumeratorContext* CPP14Parser::enumerator( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<EnumeratorContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 180, CPP14Parser::RuleEnumerator);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(1433);//958
		match(CPP14Parser::Identifier,ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- NamespacenameContext ------------------------------------------------------------------

CPP14Parser::NamespacenameContext::NamespacenameContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::OriginalnamespacenameContext* CPP14Parser::NamespacenameContext::originalnamespacename()
{
	return getRuleContext<CPP14Parser::OriginalnamespacenameContext>(0);//1165
}

CPP14Parser::NamespacealiasContext* CPP14Parser::NamespacenameContext::namespacealias()
{
	return getRuleContext<CPP14Parser::NamespacealiasContext>(0);//1165
}


size_t CPP14Parser::NamespacenameContext::getRuleIndex() const
{
	return CPP14Parser::RuleNamespacename;//688
}

void CPP14Parser::NamespacenameContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::NamespacenameContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::NamespacenameContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitNamespacename(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::NamespacenameContext* CPP14Parser::namespacename( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<NamespacenameContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 182, CPP14Parser::RuleNamespacename);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1437);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 139, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(1435); //951
			originalnamespacename(ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(1436); //951
			namespacealias(ctx);
			break;
		}

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

//----------------- OriginalnamespacenameContext ------------------------------------------------------------------

CPP14Parser::OriginalnamespacenameContext::OriginalnamespacenameContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::OriginalnamespacenameContext::Identifier()
{
	return getToken(CPP14Parser::Identifier, 0);
}


size_t CPP14Parser::OriginalnamespacenameContext::getRuleIndex() const
{
	return CPP14Parser::RuleOriginalnamespacename;//688
}

void CPP14Parser::OriginalnamespacenameContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::OriginalnamespacenameContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::OriginalnamespacenameContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitOriginalnamespacename(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::OriginalnamespacenameContext* CPP14Parser::originalnamespacename( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<OriginalnamespacenameContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 184, CPP14Parser::RuleOriginalnamespacename);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(1439);//958
		match(CPP14Parser::Identifier,ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- NamespacedefinitionContext ------------------------------------------------------------------

CPP14Parser::NamespacedefinitionContext::NamespacedefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::NamednamespacedefinitionContext* CPP14Parser::NamespacedefinitionContext::namednamespacedefinition()
{
	return getRuleContext<CPP14Parser::NamednamespacedefinitionContext>(0);//1165
}

CPP14Parser::UnnamednamespacedefinitionContext* CPP14Parser::NamespacedefinitionContext::unnamednamespacedefinition()
{
	return getRuleContext<CPP14Parser::UnnamednamespacedefinitionContext>(0);//1165
}


size_t CPP14Parser::NamespacedefinitionContext::getRuleIndex() const
{
	return CPP14Parser::RuleNamespacedefinition;//688
}

void CPP14Parser::NamespacedefinitionContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::NamespacedefinitionContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::NamespacedefinitionContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitNamespacedefinition(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::NamespacedefinitionContext* CPP14Parser::namespacedefinition( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<NamespacedefinitionContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 186, CPP14Parser::RuleNamespacedefinition);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1443);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 140, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(1441); //951
			namednamespacedefinition(ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(1442); //951
			unnamednamespacedefinition(ctx);
			break;
		}

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

//----------------- NamednamespacedefinitionContext ------------------------------------------------------------------

CPP14Parser::NamednamespacedefinitionContext::NamednamespacedefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::OriginalnamespacedefinitionContext* CPP14Parser::NamednamespacedefinitionContext::originalnamespacedefinition()
{
	return getRuleContext<CPP14Parser::OriginalnamespacedefinitionContext>(0);//1165
}

CPP14Parser::ExtensionnamespacedefinitionContext* CPP14Parser::NamednamespacedefinitionContext::extensionnamespacedefinition()
{
	return getRuleContext<CPP14Parser::ExtensionnamespacedefinitionContext>(0);//1165
}


size_t CPP14Parser::NamednamespacedefinitionContext::getRuleIndex() const
{
	return CPP14Parser::RuleNamednamespacedefinition;//688
}

void CPP14Parser::NamednamespacedefinitionContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::NamednamespacedefinitionContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::NamednamespacedefinitionContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitNamednamespacedefinition(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::NamednamespacedefinitionContext* CPP14Parser::namednamespacedefinition( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<NamednamespacedefinitionContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 188, CPP14Parser::RuleNamednamespacedefinition);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1447);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 141, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(1445); //951
			originalnamespacedefinition(ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(1446); //951
			extensionnamespacedefinition(ctx);
			break;
		}

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

//----------------- OriginalnamespacedefinitionContext ------------------------------------------------------------------

CPP14Parser::OriginalnamespacedefinitionContext::OriginalnamespacedefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::OriginalnamespacedefinitionContext::Namespace()
{
	return getToken(CPP14Parser::Namespace, 0);
}

tree::TerminalNode* CPP14Parser::OriginalnamespacedefinitionContext::Identifier()
{
	return getToken(CPP14Parser::Identifier, 0);
}

tree::TerminalNode* CPP14Parser::OriginalnamespacedefinitionContext::LeftBrace()
{
	return getToken(CPP14Parser::LeftBrace, 0);
}

CPP14Parser::NamespacebodyContext* CPP14Parser::OriginalnamespacedefinitionContext::namespacebody()
{
	return getRuleContext<CPP14Parser::NamespacebodyContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::OriginalnamespacedefinitionContext::RightBrace()
{
	return getToken(CPP14Parser::RightBrace, 0);
}

tree::TerminalNode* CPP14Parser::OriginalnamespacedefinitionContext::Inline()
{
	return getToken(CPP14Parser::Inline, 0);
}


size_t CPP14Parser::OriginalnamespacedefinitionContext::getRuleIndex() const
{
	return CPP14Parser::RuleOriginalnamespacedefinition;//688
}

void CPP14Parser::OriginalnamespacedefinitionContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::OriginalnamespacedefinitionContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::OriginalnamespacedefinitionContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitOriginalnamespacedefinition(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::OriginalnamespacedefinitionContext* CPP14Parser::originalnamespacedefinition( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<OriginalnamespacedefinitionContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 190, CPP14Parser::RuleOriginalnamespacedefinition);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(1450);//788
		_errHandler->sync(this, ctx);

		_la = _input->LA(1);
		if (_la == CPP14Parser::Inline)
		{
			setState(1449);//958
			match(CPP14Parser::Inline,ctx);
		}
		setState(1452);//958
		match(CPP14Parser::Namespace,ctx);
		setState(1453);//958
		match(CPP14Parser::Identifier,ctx);
		setState(1454);//958
		match(CPP14Parser::LeftBrace,ctx);
		setState(1455); //951
		namespacebody(ctx);
		setState(1456);//958
		match(CPP14Parser::RightBrace,ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- ExtensionnamespacedefinitionContext ------------------------------------------------------------------

CPP14Parser::ExtensionnamespacedefinitionContext::ExtensionnamespacedefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::ExtensionnamespacedefinitionContext::Namespace()
{
	return getToken(CPP14Parser::Namespace, 0);
}

CPP14Parser::OriginalnamespacenameContext* CPP14Parser::ExtensionnamespacedefinitionContext::originalnamespacename()
{
	return getRuleContext<CPP14Parser::OriginalnamespacenameContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::ExtensionnamespacedefinitionContext::LeftBrace()
{
	return getToken(CPP14Parser::LeftBrace, 0);
}

CPP14Parser::NamespacebodyContext* CPP14Parser::ExtensionnamespacedefinitionContext::namespacebody()
{
	return getRuleContext<CPP14Parser::NamespacebodyContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::ExtensionnamespacedefinitionContext::RightBrace()
{
	return getToken(CPP14Parser::RightBrace, 0);
}

tree::TerminalNode* CPP14Parser::ExtensionnamespacedefinitionContext::Inline()
{
	return getToken(CPP14Parser::Inline, 0);
}


size_t CPP14Parser::ExtensionnamespacedefinitionContext::getRuleIndex() const
{
	return CPP14Parser::RuleExtensionnamespacedefinition;//688
}

void CPP14Parser::ExtensionnamespacedefinitionContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::ExtensionnamespacedefinitionContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::ExtensionnamespacedefinitionContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitExtensionnamespacedefinition(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::ExtensionnamespacedefinitionContext* CPP14Parser::extensionnamespacedefinition( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<ExtensionnamespacedefinitionContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 192, CPP14Parser::RuleExtensionnamespacedefinition);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(1459);//788
		_errHandler->sync(this, ctx);

		_la = _input->LA(1);
		if (_la == CPP14Parser::Inline)
		{
			setState(1458);//958
			match(CPP14Parser::Inline,ctx);
		}
		setState(1461);//958
		match(CPP14Parser::Namespace,ctx);
		setState(1462); //951
		originalnamespacename(ctx);
		setState(1463);//958
		match(CPP14Parser::LeftBrace,ctx);
		setState(1464); //951
		namespacebody(ctx);
		setState(1465);//958
		match(CPP14Parser::RightBrace,ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- UnnamednamespacedefinitionContext ------------------------------------------------------------------

CPP14Parser::UnnamednamespacedefinitionContext::UnnamednamespacedefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::UnnamednamespacedefinitionContext::Namespace()
{
	return getToken(CPP14Parser::Namespace, 0);
}

tree::TerminalNode* CPP14Parser::UnnamednamespacedefinitionContext::LeftBrace()
{
	return getToken(CPP14Parser::LeftBrace, 0);
}

CPP14Parser::NamespacebodyContext* CPP14Parser::UnnamednamespacedefinitionContext::namespacebody()
{
	return getRuleContext<CPP14Parser::NamespacebodyContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::UnnamednamespacedefinitionContext::RightBrace()
{
	return getToken(CPP14Parser::RightBrace, 0);
}

tree::TerminalNode* CPP14Parser::UnnamednamespacedefinitionContext::Inline()
{
	return getToken(CPP14Parser::Inline, 0);
}


size_t CPP14Parser::UnnamednamespacedefinitionContext::getRuleIndex() const
{
	return CPP14Parser::RuleUnnamednamespacedefinition;//688
}

void CPP14Parser::UnnamednamespacedefinitionContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::UnnamednamespacedefinitionContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::UnnamednamespacedefinitionContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitUnnamednamespacedefinition(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::UnnamednamespacedefinitionContext* CPP14Parser::unnamednamespacedefinition( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<UnnamednamespacedefinitionContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 194, CPP14Parser::RuleUnnamednamespacedefinition);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(1468);//788
		_errHandler->sync(this, ctx);

		_la = _input->LA(1);
		if (_la == CPP14Parser::Inline)
		{
			setState(1467);//958
			match(CPP14Parser::Inline,ctx);
		}
		setState(1470);//958
		match(CPP14Parser::Namespace,ctx);
		setState(1471);//958
		match(CPP14Parser::LeftBrace,ctx);
		setState(1472); //951
		namespacebody(ctx);
		setState(1473);//958
		match(CPP14Parser::RightBrace,ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- NamespacebodyContext ------------------------------------------------------------------

CPP14Parser::NamespacebodyContext::NamespacebodyContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::DeclarationseqContext* CPP14Parser::NamespacebodyContext::declarationseq()
{
	return getRuleContext<CPP14Parser::DeclarationseqContext>(0);//1165
}


size_t CPP14Parser::NamespacebodyContext::getRuleIndex() const
{
	return CPP14Parser::RuleNamespacebody;//688
}

void CPP14Parser::NamespacebodyContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::NamespacebodyContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::NamespacebodyContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitNamespacebody(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::NamespacebodyContext* CPP14Parser::namespacebody( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<NamespacebodyContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 196, CPP14Parser::RuleNamespacebody);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(1476);//788
		_errHandler->sync(this, ctx);

		_la = _input->LA(1);
		if ((((_la & ~ 0x3fULL) == 0) &&
			((1ULL << _la) & ((1ULL << CPP14Parser::T__2)
			| (1ULL << CPP14Parser::Alignas)
			| (1ULL << CPP14Parser::Asm)
			| (1ULL << CPP14Parser::Auto)
			| (1ULL << CPP14Parser::Bool)
			| (1ULL << CPP14Parser::Char)
			| (1ULL << CPP14Parser::Char16)
			| (1ULL << CPP14Parser::Char32)
			| (1ULL << CPP14Parser::Class)
			| (1ULL << CPP14Parser::Const)
			| (1ULL << CPP14Parser::Constexpr)
			| (1ULL << CPP14Parser::Decltype)
			| (1ULL << CPP14Parser::Double)
			| (1ULL << CPP14Parser::Enum)
			| (1ULL << CPP14Parser::Explicit)
			| (1ULL << CPP14Parser::Extern)
			| (1ULL << CPP14Parser::Float)
			| (1ULL << CPP14Parser::Friend)
			| (1ULL << CPP14Parser::Inline)
			| (1ULL << CPP14Parser::Int)
			| (1ULL << CPP14Parser::Long)
			| (1ULL << CPP14Parser::Mutable)
			| (1ULL << CPP14Parser::Namespace)
			| (1ULL << CPP14Parser::Operator)
			| (1ULL << CPP14Parser::Register)
			| (1ULL << CPP14Parser::Short)
			| (1ULL << CPP14Parser::Signed)
			| (1ULL << CPP14Parser::Static)
			| (1ULL << CPP14Parser::Static_assert))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
			((1ULL << (_la - 65)) & ((1ULL << (CPP14Parser::Struct - 65))
			| (1ULL << (CPP14Parser::Template - 65))
			| (1ULL << (CPP14Parser::Thread_local - 65))
			| (1ULL << (CPP14Parser::Typedef - 65))
			| (1ULL << (CPP14Parser::Typename_ - 65))
			| (1ULL << (CPP14Parser::Union - 65))
			| (1ULL << (CPP14Parser::Unsigned - 65))
			| (1ULL << (CPP14Parser::Using - 65))
			| (1ULL << (CPP14Parser::Virtual - 65))
			| (1ULL << (CPP14Parser::Void - 65))
			| (1ULL << (CPP14Parser::Volatile - 65))
			| (1ULL << (CPP14Parser::Wchar - 65))
			| (1ULL << (CPP14Parser::LeftParen - 65))
			| (1ULL << (CPP14Parser::LeftBracket - 65))
			| (1ULL << (CPP14Parser::Star - 65))
			| (1ULL << (CPP14Parser::And - 65))
			| (1ULL << (CPP14Parser::Tilde - 65))
			| (1ULL << (CPP14Parser::Doublecolon - 65)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
			((1ULL << (_la - 129)) & ((1ULL << (CPP14Parser::Semi - 129))
			| (1ULL << (CPP14Parser::Ellipsis - 129))
			| (1ULL << (CPP14Parser::Identifier - 129)))) != 0))
		{
			setState(1475); //951
			declarationseq(0,ctx);
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

//----------------- NamespacealiasContext ------------------------------------------------------------------

CPP14Parser::NamespacealiasContext::NamespacealiasContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::NamespacealiasContext::Identifier()
{
	return getToken(CPP14Parser::Identifier, 0);
}


size_t CPP14Parser::NamespacealiasContext::getRuleIndex() const
{
	return CPP14Parser::RuleNamespacealias;//688
}

void CPP14Parser::NamespacealiasContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::NamespacealiasContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::NamespacealiasContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitNamespacealias(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::NamespacealiasContext* CPP14Parser::namespacealias( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<NamespacealiasContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 198, CPP14Parser::RuleNamespacealias);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(1478);//958
		match(CPP14Parser::Identifier,ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- NamespacealiasdefinitionContext ------------------------------------------------------------------

CPP14Parser::NamespacealiasdefinitionContext::NamespacealiasdefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::NamespacealiasdefinitionContext::Namespace()
{
	return getToken(CPP14Parser::Namespace, 0);
}

tree::TerminalNode* CPP14Parser::NamespacealiasdefinitionContext::Identifier()
{
	return getToken(CPP14Parser::Identifier, 0);
}

tree::TerminalNode* CPP14Parser::NamespacealiasdefinitionContext::Assign()
{
	return getToken(CPP14Parser::Assign, 0);
}

CPP14Parser::QualifiednamespacespecifierContext* CPP14Parser::NamespacealiasdefinitionContext::qualifiednamespacespecifier()
{
	return getRuleContext<CPP14Parser::QualifiednamespacespecifierContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::NamespacealiasdefinitionContext::Semi()
{
	return getToken(CPP14Parser::Semi, 0);
}


size_t CPP14Parser::NamespacealiasdefinitionContext::getRuleIndex() const
{
	return CPP14Parser::RuleNamespacealiasdefinition;//688
}

void CPP14Parser::NamespacealiasdefinitionContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::NamespacealiasdefinitionContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::NamespacealiasdefinitionContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitNamespacealiasdefinition(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::NamespacealiasdefinitionContext* CPP14Parser::namespacealiasdefinition( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<NamespacealiasdefinitionContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 200, CPP14Parser::RuleNamespacealiasdefinition);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(1480);//958
		match(CPP14Parser::Namespace,ctx);
		setState(1481);//958
		match(CPP14Parser::Identifier,ctx);
		setState(1482);//958
		match(CPP14Parser::Assign,ctx);
		setState(1483); //951
		qualifiednamespacespecifier(ctx);
		setState(1484);//958
		match(CPP14Parser::Semi,ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- QualifiednamespacespecifierContext ------------------------------------------------------------------

CPP14Parser::QualifiednamespacespecifierContext::QualifiednamespacespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::NamespacenameContext* CPP14Parser::QualifiednamespacespecifierContext::namespacename()
{
	return getRuleContext<CPP14Parser::NamespacenameContext>(0);//1165
}

CPP14Parser::NestednamespecifierContext* CPP14Parser::QualifiednamespacespecifierContext::nestednamespecifier()
{
	return getRuleContext<CPP14Parser::NestednamespecifierContext>(0);//1165
}


size_t CPP14Parser::QualifiednamespacespecifierContext::getRuleIndex() const
{
	return CPP14Parser::RuleQualifiednamespacespecifier;//688
}

void CPP14Parser::QualifiednamespacespecifierContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::QualifiednamespacespecifierContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::QualifiednamespacespecifierContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitQualifiednamespacespecifier(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::QualifiednamespacespecifierContext* CPP14Parser::qualifiednamespacespecifier( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<QualifiednamespacespecifierContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 202, CPP14Parser::RuleQualifiednamespacespecifier);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(1487);//848
		_errHandler->sync(this, ctx);

		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 146, ctx))
		{
		case 1:
		{
			setState(1486); //951
			nestednamespecifier(0,ctx);
			break;
		}

		}
		setState(1489); //951
		namespacename(ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- UsingdeclarationContext ------------------------------------------------------------------

CPP14Parser::UsingdeclarationContext::UsingdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::UsingdeclarationContext::Using()
{
	return getToken(CPP14Parser::Using, 0);
}

CPP14Parser::NestednamespecifierContext* CPP14Parser::UsingdeclarationContext::nestednamespecifier()
{
	return getRuleContext<CPP14Parser::NestednamespecifierContext>(0);//1165
}

CPP14Parser::UnqualifiedidContext* CPP14Parser::UsingdeclarationContext::unqualifiedid()
{
	return getRuleContext<CPP14Parser::UnqualifiedidContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::UsingdeclarationContext::Semi()
{
	return getToken(CPP14Parser::Semi, 0);
}

tree::TerminalNode* CPP14Parser::UsingdeclarationContext::Typename_()
{
	return getToken(CPP14Parser::Typename_, 0);
}

tree::TerminalNode* CPP14Parser::UsingdeclarationContext::Doublecolon()
{
	return getToken(CPP14Parser::Doublecolon, 0);
}


size_t CPP14Parser::UsingdeclarationContext::getRuleIndex() const
{
	return CPP14Parser::RuleUsingdeclaration;//688
}

void CPP14Parser::UsingdeclarationContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::UsingdeclarationContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::UsingdeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitUsingdeclaration(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::UsingdeclarationContext* CPP14Parser::usingdeclaration( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<UsingdeclarationContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 204, CPP14Parser::RuleUsingdeclaration);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1504);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 148, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(1491);//958
			match(CPP14Parser::Using,ctx);
			setState(1493);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Typename_)
			{
				setState(1492);//958
				match(CPP14Parser::Typename_,ctx);
			}
			setState(1495); //951
			nestednamespecifier(0,ctx);
			setState(1496); //951
			unqualifiedid(ctx);
			setState(1497);//958
			match(CPP14Parser::Semi,ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(1499);//958
			match(CPP14Parser::Using,ctx);
			setState(1500);//958
			match(CPP14Parser::Doublecolon,ctx);
			setState(1501); //951
			unqualifiedid(ctx);
			setState(1502);//958
			match(CPP14Parser::Semi,ctx);
			break;
		}

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

//----------------- UsingdirectiveContext ------------------------------------------------------------------

CPP14Parser::UsingdirectiveContext::UsingdirectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::UsingdirectiveContext::Using()
{
	return getToken(CPP14Parser::Using, 0);
}

tree::TerminalNode* CPP14Parser::UsingdirectiveContext::Namespace()
{
	return getToken(CPP14Parser::Namespace, 0);
}

CPP14Parser::NamespacenameContext* CPP14Parser::UsingdirectiveContext::namespacename()
{
	return getRuleContext<CPP14Parser::NamespacenameContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::UsingdirectiveContext::Semi()
{
	return getToken(CPP14Parser::Semi, 0);
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::UsingdirectiveContext::attributespecifierseq()
{
	return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);//1165
}

CPP14Parser::NestednamespecifierContext* CPP14Parser::UsingdirectiveContext::nestednamespecifier()
{
	return getRuleContext<CPP14Parser::NestednamespecifierContext>(0);//1165
}


size_t CPP14Parser::UsingdirectiveContext::getRuleIndex() const
{
	return CPP14Parser::RuleUsingdirective;//688
}

void CPP14Parser::UsingdirectiveContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::UsingdirectiveContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::UsingdirectiveContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitUsingdirective(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::UsingdirectiveContext* CPP14Parser::usingdirective( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<UsingdirectiveContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 206, CPP14Parser::RuleUsingdirective);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(1507);//788
		_errHandler->sync(this, ctx);

		_la = _input->LA(1);
		if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket)
		{
			setState(1506); //951
			attributespecifierseq(0,ctx);
		}
		setState(1509);//958
		match(CPP14Parser::Using,ctx);
		setState(1510);//958
		match(CPP14Parser::Namespace,ctx);
		setState(1512);//848
		_errHandler->sync(this, ctx);

		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 150, ctx))
		{
		case 1:
		{
			setState(1511); //951
			nestednamespecifier(0,ctx);
			break;
		}

		}
		setState(1514); //951
		namespacename(ctx);
		setState(1515);//958
		match(CPP14Parser::Semi,ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- AsmdefinitionContext ------------------------------------------------------------------

CPP14Parser::AsmdefinitionContext::AsmdefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::AsmdefinitionContext::Asm()
{
	return getToken(CPP14Parser::Asm, 0);
}

tree::TerminalNode* CPP14Parser::AsmdefinitionContext::LeftParen()
{
	return getToken(CPP14Parser::LeftParen, 0);
}

tree::TerminalNode* CPP14Parser::AsmdefinitionContext::Stringliteral()
{
	return getToken(CPP14Parser::Stringliteral, 0);
}

tree::TerminalNode* CPP14Parser::AsmdefinitionContext::RightParen()
{
	return getToken(CPP14Parser::RightParen, 0);
}

tree::TerminalNode* CPP14Parser::AsmdefinitionContext::Semi()
{
	return getToken(CPP14Parser::Semi, 0);
}


size_t CPP14Parser::AsmdefinitionContext::getRuleIndex() const
{
	return CPP14Parser::RuleAsmdefinition;//688
}

void CPP14Parser::AsmdefinitionContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::AsmdefinitionContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::AsmdefinitionContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitAsmdefinition(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::AsmdefinitionContext* CPP14Parser::asmdefinition( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<AsmdefinitionContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 208, CPP14Parser::RuleAsmdefinition);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(1517);//958
		match(CPP14Parser::Asm,ctx);
		setState(1518);//958
		match(CPP14Parser::LeftParen,ctx);
		setState(1519);//958
		match(CPP14Parser::Stringliteral,ctx);
		setState(1520);//958
		match(CPP14Parser::RightParen,ctx);
		setState(1521);//958
		match(CPP14Parser::Semi,ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- LinkagespecificationContext ------------------------------------------------------------------

CPP14Parser::LinkagespecificationContext::LinkagespecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::LinkagespecificationContext::Extern()
{
	return getToken(CPP14Parser::Extern, 0);
}

tree::TerminalNode* CPP14Parser::LinkagespecificationContext::Stringliteral()
{
	return getToken(CPP14Parser::Stringliteral, 0);
}

tree::TerminalNode* CPP14Parser::LinkagespecificationContext::LeftBrace()
{
	return getToken(CPP14Parser::LeftBrace, 0);
}

tree::TerminalNode* CPP14Parser::LinkagespecificationContext::RightBrace()
{
	return getToken(CPP14Parser::RightBrace, 0);
}

CPP14Parser::DeclarationseqContext* CPP14Parser::LinkagespecificationContext::declarationseq()
{
	return getRuleContext<CPP14Parser::DeclarationseqContext>(0);//1165
}

CPP14Parser::DeclarationContext* CPP14Parser::LinkagespecificationContext::declaration()
{
	return getRuleContext<CPP14Parser::DeclarationContext>(0);//1165
}


size_t CPP14Parser::LinkagespecificationContext::getRuleIndex() const
{
	return CPP14Parser::RuleLinkagespecification;//688
}

void CPP14Parser::LinkagespecificationContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::LinkagespecificationContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::LinkagespecificationContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitLinkagespecification(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::LinkagespecificationContext* CPP14Parser::linkagespecification( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<LinkagespecificationContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 210, CPP14Parser::RuleLinkagespecification);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1533);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 152, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(1523);//958
			match(CPP14Parser::Extern,ctx);
			setState(1524);//958
			match(CPP14Parser::Stringliteral,ctx);
			setState(1525);//958
			match(CPP14Parser::LeftBrace,ctx);
			setState(1527);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if ((((_la & ~ 0x3fULL) == 0) &&
				((1ULL << _la) & ((1ULL << CPP14Parser::T__2)
				| (1ULL << CPP14Parser::Alignas)
				| (1ULL << CPP14Parser::Asm)
				| (1ULL << CPP14Parser::Auto)
				| (1ULL << CPP14Parser::Bool)
				| (1ULL << CPP14Parser::Char)
				| (1ULL << CPP14Parser::Char16)
				| (1ULL << CPP14Parser::Char32)
				| (1ULL << CPP14Parser::Class)
				| (1ULL << CPP14Parser::Const)
				| (1ULL << CPP14Parser::Constexpr)
				| (1ULL << CPP14Parser::Decltype)
				| (1ULL << CPP14Parser::Double)
				| (1ULL << CPP14Parser::Enum)
				| (1ULL << CPP14Parser::Explicit)
				| (1ULL << CPP14Parser::Extern)
				| (1ULL << CPP14Parser::Float)
				| (1ULL << CPP14Parser::Friend)
				| (1ULL << CPP14Parser::Inline)
				| (1ULL << CPP14Parser::Int)
				| (1ULL << CPP14Parser::Long)
				| (1ULL << CPP14Parser::Mutable)
				| (1ULL << CPP14Parser::Namespace)
				| (1ULL << CPP14Parser::Operator)
				| (1ULL << CPP14Parser::Register)
				| (1ULL << CPP14Parser::Short)
				| (1ULL << CPP14Parser::Signed)
				| (1ULL << CPP14Parser::Static)
				| (1ULL << CPP14Parser::Static_assert))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
				((1ULL << (_la - 65)) & ((1ULL << (CPP14Parser::Struct - 65))
				| (1ULL << (CPP14Parser::Template - 65))
				| (1ULL << (CPP14Parser::Thread_local - 65))
				| (1ULL << (CPP14Parser::Typedef - 65))
				| (1ULL << (CPP14Parser::Typename_ - 65))
				| (1ULL << (CPP14Parser::Union - 65))
				| (1ULL << (CPP14Parser::Unsigned - 65))
				| (1ULL << (CPP14Parser::Using - 65))
				| (1ULL << (CPP14Parser::Virtual - 65))
				| (1ULL << (CPP14Parser::Void - 65))
				| (1ULL << (CPP14Parser::Volatile - 65))
				| (1ULL << (CPP14Parser::Wchar - 65))
				| (1ULL << (CPP14Parser::LeftParen - 65))
				| (1ULL << (CPP14Parser::LeftBracket - 65))
				| (1ULL << (CPP14Parser::Star - 65))
				| (1ULL << (CPP14Parser::And - 65))
				| (1ULL << (CPP14Parser::Tilde - 65))
				| (1ULL << (CPP14Parser::Doublecolon - 65)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
				((1ULL << (_la - 129)) & ((1ULL << (CPP14Parser::Semi - 129))
				| (1ULL << (CPP14Parser::Ellipsis - 129))
				| (1ULL << (CPP14Parser::Identifier - 129)))) != 0))
			{
				setState(1526); //951
				declarationseq(0,ctx);
			}
			setState(1529);//958
			match(CPP14Parser::RightBrace,ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(1530);//958
			match(CPP14Parser::Extern,ctx);
			setState(1531);//958
			match(CPP14Parser::Stringliteral,ctx);
			setState(1532); //951
			declaration(ctx);
			break;
		}

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

//----------------- AttributespecifierseqContext ------------------------------------------------------------------

CPP14Parser::AttributespecifierseqContext::AttributespecifierseqContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::AttributespecifierContext* CPP14Parser::AttributespecifierseqContext::attributespecifier()
{
	return getRuleContext<CPP14Parser::AttributespecifierContext>(0);//1165
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::AttributespecifierseqContext::attributespecifierseq()
{
	return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);//1165
}


size_t CPP14Parser::AttributespecifierseqContext::getRuleIndex() const
{
	return CPP14Parser::RuleAttributespecifierseq;//688
}

void CPP14Parser::AttributespecifierseqContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::AttributespecifierseqContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::AttributespecifierseqContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitAttributespecifierseq(this);
	else
		return visitor->visitChildren(this);
}


CPP14Parser::AttributespecifierseqContext* CPP14Parser::attributespecifierseq()
{
	 return attributespecifierseq(0, nullptr);//600
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::attributespecifierseq(int precedence, antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	antlr4::ParserRuleContext *parentContext = parent;
	size_t parentState = getState();
	auto _localctx = std::make_unique<AttributespecifierseqContext>(parentContext, parentState);//610
	auto ctx = _localctx.get();//609
	size_t startState = 212;
	enterRecursionRule(ctx, 212, CPP14Parser::RuleAttributespecifierseq, precedence);

		

	auto onExit = finally([=,&_localctx]
{
		unrollRecursionContexts(parentContext, std::move(_localctx));
	});
	try
{
		size_t alt;
		enterOuterAlt(ctx, 1);
		setState(1536); //951
		attributespecifier(ctx);
		ctx->stop = _input->LT(-1);
		setState(1542);//865
		_errHandler->sync(this, ctx);
		alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 153, ctx);
		while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
		{
			if (alt == 1)
		{
				if (!_parseListeners.empty())
					triggerExitRuleEvent(ctx);

				auto tmpContext = std::make_unique<AttributespecifierseqContext>(parentContext, parentState);
				pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleAttributespecifierseq);//1240
				_localctx = std::move(tmpContext);
				ctx = _localctx.get();
				setState(1538);//1002

				if (!(precpred(nullptr, 1))) throw FailedPredicateException(this, "precpred(nullptr, 1)", ctx);
				setState(1539); //951
				attributespecifier(ctx); 
			}
			setState(1544);//875
			_errHandler->sync(this, ctx);
			alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 153, ctx);
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

//----------------- AttributespecifierContext ------------------------------------------------------------------

CPP14Parser::AttributespecifierContext::AttributespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

std::vector<tree::TerminalNode *> CPP14Parser::AttributespecifierContext::LeftBracket()
{
	return getTokens(CPP14Parser::LeftBracket);
}

tree::TerminalNode* CPP14Parser::AttributespecifierContext::LeftBracket(size_t i)
{
	return getToken(CPP14Parser::LeftBracket, i);
}

CPP14Parser::AttributelistContext* CPP14Parser::AttributespecifierContext::attributelist()
{
	return getRuleContext<CPP14Parser::AttributelistContext>(0);//1165
}

std::vector<tree::TerminalNode *> CPP14Parser::AttributespecifierContext::RightBracket()
{
	return getTokens(CPP14Parser::RightBracket);
}

tree::TerminalNode* CPP14Parser::AttributespecifierContext::RightBracket(size_t i)
{
	return getToken(CPP14Parser::RightBracket, i);
}

CPP14Parser::AlignmentspecifierContext* CPP14Parser::AttributespecifierContext::alignmentspecifier()
{
	return getRuleContext<CPP14Parser::AlignmentspecifierContext>(0);//1165
}


size_t CPP14Parser::AttributespecifierContext::getRuleIndex() const
{
	return CPP14Parser::RuleAttributespecifier;//688
}

void CPP14Parser::AttributespecifierContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::AttributespecifierContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::AttributespecifierContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitAttributespecifier(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::AttributespecifierContext* CPP14Parser::attributespecifier( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<AttributespecifierContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 214, CPP14Parser::RuleAttributespecifier);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1552);//750
		_errHandler->sync(this, ctx);
		switch (_input->LA(1))
		{
			case CPP14Parser::LeftBracket:
			{
				enterOuterAlt(ctx, 1);
				setState(1545);//958
				match(CPP14Parser::LeftBracket,ctx);
				setState(1546);//958
				match(CPP14Parser::LeftBracket,ctx);
				setState(1547); //951
				attributelist(0,ctx);
				setState(1548);//958
				match(CPP14Parser::RightBracket,ctx);
				setState(1549);//958
				match(CPP14Parser::RightBracket,ctx);
				break;
			}

			case CPP14Parser::Alignas:
			{
				enterOuterAlt(ctx, 2);
				setState(1551); //951
				alignmentspecifier(ctx);
				break;
			}

		default:
			throw NoViableAltException(this, ctx);
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

//----------------- AlignmentspecifierContext ------------------------------------------------------------------

CPP14Parser::AlignmentspecifierContext::AlignmentspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::AlignmentspecifierContext::Alignas()
{
	return getToken(CPP14Parser::Alignas, 0);
}

tree::TerminalNode* CPP14Parser::AlignmentspecifierContext::LeftParen()
{
	return getToken(CPP14Parser::LeftParen, 0);
}

CPP14Parser::ThetypeidContext* CPP14Parser::AlignmentspecifierContext::thetypeid()
{
	return getRuleContext<CPP14Parser::ThetypeidContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::AlignmentspecifierContext::RightParen()
{
	return getToken(CPP14Parser::RightParen, 0);
}

tree::TerminalNode* CPP14Parser::AlignmentspecifierContext::Ellipsis()
{
	return getToken(CPP14Parser::Ellipsis, 0);
}

CPP14Parser::ConstantexpressionContext* CPP14Parser::AlignmentspecifierContext::constantexpression()
{
	return getRuleContext<CPP14Parser::ConstantexpressionContext>(0);//1165
}


size_t CPP14Parser::AlignmentspecifierContext::getRuleIndex() const
{
	return CPP14Parser::RuleAlignmentspecifier;//688
}

void CPP14Parser::AlignmentspecifierContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::AlignmentspecifierContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::AlignmentspecifierContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitAlignmentspecifier(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::AlignmentspecifierContext* CPP14Parser::alignmentspecifier( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<AlignmentspecifierContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 216, CPP14Parser::RuleAlignmentspecifier);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1570);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 157, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(1554);//958
			match(CPP14Parser::Alignas,ctx);
			setState(1555);//958
			match(CPP14Parser::LeftParen,ctx);
			setState(1556); //951
			thetypeid(ctx);
			setState(1558);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Ellipsis)
			{
				setState(1557);//958
				match(CPP14Parser::Ellipsis,ctx);
			}
			setState(1560);//958
			match(CPP14Parser::RightParen,ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(1562);//958
			match(CPP14Parser::Alignas,ctx);
			setState(1563);//958
			match(CPP14Parser::LeftParen,ctx);
			setState(1564); //951
			constantexpression(ctx);
			setState(1566);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Ellipsis)
			{
				setState(1565);//958
				match(CPP14Parser::Ellipsis,ctx);
			}
			setState(1568);//958
			match(CPP14Parser::RightParen,ctx);
			break;
		}

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

//----------------- AttributelistContext ------------------------------------------------------------------

CPP14Parser::AttributelistContext::AttributelistContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::AttributeContext* CPP14Parser::AttributelistContext::attribute()
{
	return getRuleContext<CPP14Parser::AttributeContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::AttributelistContext::Ellipsis()
{
	return getToken(CPP14Parser::Ellipsis, 0);
}

CPP14Parser::AttributelistContext* CPP14Parser::AttributelistContext::attributelist()
{
	return getRuleContext<CPP14Parser::AttributelistContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::AttributelistContext::Comma()
{
	return getToken(CPP14Parser::Comma, 0);
}


size_t CPP14Parser::AttributelistContext::getRuleIndex() const
{
	return CPP14Parser::RuleAttributelist;//688
}

void CPP14Parser::AttributelistContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::AttributelistContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::AttributelistContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitAttributelist(this);
	else
		return visitor->visitChildren(this);
}


CPP14Parser::AttributelistContext* CPP14Parser::attributelist()
{
	 return attributelist(0, nullptr);//600
}

CPP14Parser::AttributelistContext* CPP14Parser::attributelist(int precedence, antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	antlr4::ParserRuleContext *parentContext = parent;
	size_t parentState = getState();
	auto _localctx = std::make_unique<AttributelistContext>(parentContext, parentState);//610
	auto ctx = _localctx.get();//609
	size_t startState = 218;
	enterRecursionRule(ctx, 218, CPP14Parser::RuleAttributelist, precedence);

		

	auto onExit = finally([=,&_localctx]
{
		unrollRecursionContexts(parentContext, std::move(_localctx));
	});
	try
{
		size_t alt;
		enterOuterAlt(ctx, 1);
		setState(1579);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 159, ctx))
		{
		case 1:
		{
			setState(1574);//848
			_errHandler->sync(this, ctx);

			switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 158, ctx))
			{
			case 1:
			{
				setState(1573); //951
				attribute(ctx);
				break;
			}

			}
			break;
		}

		case 2:
		{
			setState(1576); //951
			attribute(ctx);
			setState(1577);//958
			match(CPP14Parser::Ellipsis,ctx);
			break;
		}

		}
		ctx->stop = _input->LT(-1);
		setState(1593);//865
		_errHandler->sync(this, ctx);
		alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 162, ctx);
		while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
		{
			if (alt == 1)
		{
				if (!_parseListeners.empty())
					triggerExitRuleEvent(ctx);

				setState(1591);//830
				_errHandler->sync(this, ctx);
				switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 161, ctx))
				{
				case 1:
				{
					auto tmpContext = std::make_unique<AttributelistContext>(parentContext, parentState);
					pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleAttributelist);//1240
					_localctx = std::move(tmpContext);
					ctx = _localctx.get();
					setState(1581);//1002

					if (!(precpred(nullptr, 3))) throw FailedPredicateException(this, "precpred(nullptr, 3)", ctx);
					setState(1582);//958
					match(CPP14Parser::Comma,ctx);
					setState(1584);//848
					_errHandler->sync(this, ctx);

					switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 160, ctx))
					{
					case 1:
					{
						setState(1583); //951
						attribute(ctx);
						break;
					}

					}
					break;
				}

				case 2:
				{
					auto tmpContext = std::make_unique<AttributelistContext>(parentContext, parentState);
					pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleAttributelist);//1240
					_localctx = std::move(tmpContext);
					ctx = _localctx.get();
					setState(1586);//1002

					if (!(precpred(nullptr, 1))) throw FailedPredicateException(this, "precpred(nullptr, 1)", ctx);
					setState(1587);//958
					match(CPP14Parser::Comma,ctx);
					setState(1588); //951
					attribute(ctx);
					setState(1589);//958
					match(CPP14Parser::Ellipsis,ctx);
					break;
				}

				} 
			}
			setState(1595);//875
			_errHandler->sync(this, ctx);
			alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 162, ctx);
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

//----------------- AttributeContext ------------------------------------------------------------------

CPP14Parser::AttributeContext::AttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::AttributetokenContext* CPP14Parser::AttributeContext::attributetoken()
{
	return getRuleContext<CPP14Parser::AttributetokenContext>(0);//1165
}

CPP14Parser::AttributeargumentclauseContext* CPP14Parser::AttributeContext::attributeargumentclause()
{
	return getRuleContext<CPP14Parser::AttributeargumentclauseContext>(0);//1165
}


size_t CPP14Parser::AttributeContext::getRuleIndex() const
{
	return CPP14Parser::RuleAttribute;//688
}

void CPP14Parser::AttributeContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::AttributeContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::AttributeContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitAttribute(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::AttributeContext* CPP14Parser::attribute( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<AttributeContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 220, CPP14Parser::RuleAttribute);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(1596); //951
		attributetoken(ctx);
		setState(1598);//848
		_errHandler->sync(this, ctx);

		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 163, ctx))
		{
		case 1:
		{
			setState(1597); //951
			attributeargumentclause(ctx);
			break;
		}

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

//----------------- AttributetokenContext ------------------------------------------------------------------

CPP14Parser::AttributetokenContext::AttributetokenContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::AttributetokenContext::Identifier()
{
	return getToken(CPP14Parser::Identifier, 0);
}

CPP14Parser::AttributescopedtokenContext* CPP14Parser::AttributetokenContext::attributescopedtoken()
{
	return getRuleContext<CPP14Parser::AttributescopedtokenContext>(0);//1165
}


size_t CPP14Parser::AttributetokenContext::getRuleIndex() const
{
	return CPP14Parser::RuleAttributetoken;//688
}

void CPP14Parser::AttributetokenContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::AttributetokenContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::AttributetokenContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitAttributetoken(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::AttributetokenContext* CPP14Parser::attributetoken( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<AttributetokenContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 222, CPP14Parser::RuleAttributetoken);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1602);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 164, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(1600);//958
			match(CPP14Parser::Identifier,ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(1601); //951
			attributescopedtoken(ctx);
			break;
		}

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

//----------------- AttributescopedtokenContext ------------------------------------------------------------------

CPP14Parser::AttributescopedtokenContext::AttributescopedtokenContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::AttributenamespaceContext* CPP14Parser::AttributescopedtokenContext::attributenamespace()
{
	return getRuleContext<CPP14Parser::AttributenamespaceContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::AttributescopedtokenContext::Doublecolon()
{
	return getToken(CPP14Parser::Doublecolon, 0);
}

tree::TerminalNode* CPP14Parser::AttributescopedtokenContext::Identifier()
{
	return getToken(CPP14Parser::Identifier, 0);
}


size_t CPP14Parser::AttributescopedtokenContext::getRuleIndex() const
{
	return CPP14Parser::RuleAttributescopedtoken;//688
}

void CPP14Parser::AttributescopedtokenContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::AttributescopedtokenContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::AttributescopedtokenContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitAttributescopedtoken(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::AttributescopedtokenContext* CPP14Parser::attributescopedtoken( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<AttributescopedtokenContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 224, CPP14Parser::RuleAttributescopedtoken);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(1604); //951
		attributenamespace(ctx);
		setState(1605);//958
		match(CPP14Parser::Doublecolon,ctx);
		setState(1606);//958
		match(CPP14Parser::Identifier,ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- AttributenamespaceContext ------------------------------------------------------------------

CPP14Parser::AttributenamespaceContext::AttributenamespaceContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::AttributenamespaceContext::Identifier()
{
	return getToken(CPP14Parser::Identifier, 0);
}


size_t CPP14Parser::AttributenamespaceContext::getRuleIndex() const
{
	return CPP14Parser::RuleAttributenamespace;//688
}

void CPP14Parser::AttributenamespaceContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::AttributenamespaceContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::AttributenamespaceContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitAttributenamespace(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::AttributenamespaceContext* CPP14Parser::attributenamespace( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<AttributenamespaceContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 226, CPP14Parser::RuleAttributenamespace);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(1608);//958
		match(CPP14Parser::Identifier,ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- AttributeargumentclauseContext ------------------------------------------------------------------

CPP14Parser::AttributeargumentclauseContext::AttributeargumentclauseContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::AttributeargumentclauseContext::LeftParen()
{
	return getToken(CPP14Parser::LeftParen, 0);
}

CPP14Parser::BalancedtokenseqContext* CPP14Parser::AttributeargumentclauseContext::balancedtokenseq()
{
	return getRuleContext<CPP14Parser::BalancedtokenseqContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::AttributeargumentclauseContext::RightParen()
{
	return getToken(CPP14Parser::RightParen, 0);
}


size_t CPP14Parser::AttributeargumentclauseContext::getRuleIndex() const
{
	return CPP14Parser::RuleAttributeargumentclause;//688
}

void CPP14Parser::AttributeargumentclauseContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::AttributeargumentclauseContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::AttributeargumentclauseContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitAttributeargumentclause(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::AttributeargumentclauseContext* CPP14Parser::attributeargumentclause( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<AttributeargumentclauseContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 228, CPP14Parser::RuleAttributeargumentclause);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(1610);//958
		match(CPP14Parser::LeftParen,ctx);
		setState(1611); //951
		balancedtokenseq(0,ctx);
		setState(1612);//958
		match(CPP14Parser::RightParen,ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- BalancedtokenseqContext ------------------------------------------------------------------

CPP14Parser::BalancedtokenseqContext::BalancedtokenseqContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::BalancedtokenContext* CPP14Parser::BalancedtokenseqContext::balancedtoken()
{
	return getRuleContext<CPP14Parser::BalancedtokenContext>(0);//1165
}

CPP14Parser::BalancedtokenseqContext* CPP14Parser::BalancedtokenseqContext::balancedtokenseq()
{
	return getRuleContext<CPP14Parser::BalancedtokenseqContext>(0);//1165
}


size_t CPP14Parser::BalancedtokenseqContext::getRuleIndex() const
{
	return CPP14Parser::RuleBalancedtokenseq;//688
}

void CPP14Parser::BalancedtokenseqContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::BalancedtokenseqContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::BalancedtokenseqContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitBalancedtokenseq(this);
	else
		return visitor->visitChildren(this);
}


CPP14Parser::BalancedtokenseqContext* CPP14Parser::balancedtokenseq()
{
	 return balancedtokenseq(0, nullptr);//600
}

CPP14Parser::BalancedtokenseqContext* CPP14Parser::balancedtokenseq(int precedence, antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	antlr4::ParserRuleContext *parentContext = parent;
	size_t parentState = getState();
	auto _localctx = std::make_unique<BalancedtokenseqContext>(parentContext, parentState);//610
	auto ctx = _localctx.get();//609
	size_t startState = 230;
	enterRecursionRule(ctx, 230, CPP14Parser::RuleBalancedtokenseq, precedence);

		

	auto onExit = finally([=,&_localctx]
{
		unrollRecursionContexts(parentContext, std::move(_localctx));
	});
	try
{
		size_t alt;
		enterOuterAlt(ctx, 1);
		setState(1616);//848
		_errHandler->sync(this, ctx);

		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 165, ctx))
		{
		case 1:
		{
			setState(1615); //951
			balancedtoken(ctx);
			break;
		}

		}
		ctx->stop = _input->LT(-1);
		setState(1622);//865
		_errHandler->sync(this, ctx);
		alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 166, ctx);
		while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
		{
			if (alt == 1)
		{
				if (!_parseListeners.empty())
					triggerExitRuleEvent(ctx);

				auto tmpContext = std::make_unique<BalancedtokenseqContext>(parentContext, parentState);
				pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleBalancedtokenseq);//1240
				_localctx = std::move(tmpContext);
				ctx = _localctx.get();
				setState(1618);//1002

				if (!(precpred(nullptr, 1))) throw FailedPredicateException(this, "precpred(nullptr, 1)", ctx);
				setState(1619); //951
				balancedtoken(ctx); 
			}
			setState(1624);//875
			_errHandler->sync(this, ctx);
			alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 166, ctx);
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

//----------------- BalancedtokenContext ------------------------------------------------------------------

CPP14Parser::BalancedtokenContext::BalancedtokenContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

std::vector<tree::TerminalNode *> CPP14Parser::BalancedtokenContext::LeftParen()
{
	return getTokens(CPP14Parser::LeftParen);
}

tree::TerminalNode* CPP14Parser::BalancedtokenContext::LeftParen(size_t i)
{
	return getToken(CPP14Parser::LeftParen, i);
}

CPP14Parser::BalancedtokenseqContext* CPP14Parser::BalancedtokenContext::balancedtokenseq()
{
	return getRuleContext<CPP14Parser::BalancedtokenseqContext>(0);//1165
}

std::vector<tree::TerminalNode *> CPP14Parser::BalancedtokenContext::RightParen()
{
	return getTokens(CPP14Parser::RightParen);
}

tree::TerminalNode* CPP14Parser::BalancedtokenContext::RightParen(size_t i)
{
	return getToken(CPP14Parser::RightParen, i);
}

std::vector<tree::TerminalNode *> CPP14Parser::BalancedtokenContext::LeftBracket()
{
	return getTokens(CPP14Parser::LeftBracket);
}

tree::TerminalNode* CPP14Parser::BalancedtokenContext::LeftBracket(size_t i)
{
	return getToken(CPP14Parser::LeftBracket, i);
}

std::vector<tree::TerminalNode *> CPP14Parser::BalancedtokenContext::RightBracket()
{
	return getTokens(CPP14Parser::RightBracket);
}

tree::TerminalNode* CPP14Parser::BalancedtokenContext::RightBracket(size_t i)
{
	return getToken(CPP14Parser::RightBracket, i);
}

std::vector<tree::TerminalNode *> CPP14Parser::BalancedtokenContext::LeftBrace()
{
	return getTokens(CPP14Parser::LeftBrace);
}

tree::TerminalNode* CPP14Parser::BalancedtokenContext::LeftBrace(size_t i)
{
	return getToken(CPP14Parser::LeftBrace, i);
}

std::vector<tree::TerminalNode *> CPP14Parser::BalancedtokenContext::RightBrace()
{
	return getTokens(CPP14Parser::RightBrace);
}

tree::TerminalNode* CPP14Parser::BalancedtokenContext::RightBrace(size_t i)
{
	return getToken(CPP14Parser::RightBrace, i);
}


size_t CPP14Parser::BalancedtokenContext::getRuleIndex() const
{
	return CPP14Parser::RuleBalancedtoken;//688
}

void CPP14Parser::BalancedtokenContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::BalancedtokenContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::BalancedtokenContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitBalancedtoken(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::BalancedtokenContext* CPP14Parser::balancedtoken( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<BalancedtokenContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 232, CPP14Parser::RuleBalancedtoken);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		size_t alt;
		setState(1642);//750
		_errHandler->sync(this, ctx);
		switch (_input->LA(1))
		{
			case CPP14Parser::LeftParen:
			{
				enterOuterAlt(ctx, 1);
				setState(1625);//958
				match(CPP14Parser::LeftParen,ctx);
				setState(1626); //951
				balancedtokenseq(0,ctx);
				setState(1627);//958
				match(CPP14Parser::RightParen,ctx);
				break;
			}

			case CPP14Parser::LeftBracket:
			{
				enterOuterAlt(ctx, 2);
				setState(1629);//958
				match(CPP14Parser::LeftBracket,ctx);
				setState(1630); //951
				balancedtokenseq(0,ctx);
				setState(1631);//958
				match(CPP14Parser::RightBracket,ctx);
				break;
			}

			case CPP14Parser::LeftBrace:
			{
				enterOuterAlt(ctx, 3);
				setState(1633);//958
				match(CPP14Parser::LeftBrace,ctx);
				setState(1634); //951
				balancedtokenseq(0,ctx);
				setState(1635);//958
				match(CPP14Parser::RightBrace,ctx);
				break;
			}

			case CPP14Parser::T__0:
			case CPP14Parser::T__1:
			case CPP14Parser::T__2:
			case CPP14Parser::T__3:
			case CPP14Parser::T__4:
			case CPP14Parser::T__5:
			case CPP14Parser::MultiLineMacro:
			case CPP14Parser::Directive:
			case CPP14Parser::Alignas:
			case CPP14Parser::Alignof:
			case CPP14Parser::Asm:
			case CPP14Parser::Auto:
			case CPP14Parser::Bool:
			case CPP14Parser::Break:
			case CPP14Parser::Case:
			case CPP14Parser::Catch:
			case CPP14Parser::Char:
			case CPP14Parser::Char16:
			case CPP14Parser::Char32:
			case CPP14Parser::Class:
			case CPP14Parser::Const:
			case CPP14Parser::Constexpr:
			case CPP14Parser::Const_cast:
			case CPP14Parser::Continue:
			case CPP14Parser::Decltype:
			case CPP14Parser::Default:
			case CPP14Parser::Delete:
			case CPP14Parser::Do:
			case CPP14Parser::Double:
			case CPP14Parser::Dynamic_cast:
			case CPP14Parser::Else:
			case CPP14Parser::Enum:
			case CPP14Parser::Explicit:
			case CPP14Parser::Export:
			case CPP14Parser::Extern:
			case CPP14Parser::False:
			case CPP14Parser::Final:
			case CPP14Parser::Float:
			case CPP14Parser::For:
			case CPP14Parser::Friend:
			case CPP14Parser::Goto:
			case CPP14Parser::If:
			case CPP14Parser::Inline:
			case CPP14Parser::Int:
			case CPP14Parser::Long:
			case CPP14Parser::Mutable:
			case CPP14Parser::Namespace:
			case CPP14Parser::New:
			case CPP14Parser::Noexcept:
			case CPP14Parser::Nullptr:
			case CPP14Parser::Operator:
			case CPP14Parser::Override:
			case CPP14Parser::Private:
			case CPP14Parser::Protected:
			case CPP14Parser::Public:
			case CPP14Parser::Register:
			case CPP14Parser::Reinterpret_cast:
			case CPP14Parser::Return:
			case CPP14Parser::Short:
			case CPP14Parser::Signed:
			case CPP14Parser::Sizeof:
			case CPP14Parser::Static:
			case CPP14Parser::Static_assert:
			case CPP14Parser::Static_cast:
			case CPP14Parser::Struct:
			case CPP14Parser::Switch:
			case CPP14Parser::Template:
			case CPP14Parser::This:
			case CPP14Parser::Thread_local:
			case CPP14Parser::Throw:
			case CPP14Parser::True:
			case CPP14Parser::Try:
			case CPP14Parser::Typedef:
			case CPP14Parser::Typeid_:
			case CPP14Parser::Typename_:
			case CPP14Parser::Union:
			case CPP14Parser::Unsigned:
			case CPP14Parser::Using:
			case CPP14Parser::Virtual:
			case CPP14Parser::Void:
			case CPP14Parser::Volatile:
			case CPP14Parser::Wchar:
			case CPP14Parser::While:
			case CPP14Parser::Plus:
			case CPP14Parser::Minus:
			case CPP14Parser::Star:
			case CPP14Parser::Div:
			case CPP14Parser::Mod:
			case CPP14Parser::Caret:
			case CPP14Parser::And:
			case CPP14Parser::Or:
			case CPP14Parser::Tilde:
			case CPP14Parser::Not:
			case CPP14Parser::Assign:
			case CPP14Parser::Less:
			case CPP14Parser::Greater:
			case CPP14Parser::PlusAssign:
			case CPP14Parser::MinusAssign:
			case CPP14Parser::StarAssign:
			case CPP14Parser::DivAssign:
			case CPP14Parser::ModAssign:
			case CPP14Parser::XorAssign:
			case CPP14Parser::AndAssign:
			case CPP14Parser::OrAssign:
			case CPP14Parser::LeftShift:
			case CPP14Parser::RightShift:
			case CPP14Parser::LeftShiftAssign:
			case CPP14Parser::RightShiftAssign:
			case CPP14Parser::Equal:
			case CPP14Parser::NotEqual:
			case CPP14Parser::LessEqual:
			case CPP14Parser::GreaterEqual:
			case CPP14Parser::AndAnd:
			case CPP14Parser::OrOr:
			case CPP14Parser::PlusPlus:
			case CPP14Parser::MinusMinus:
			case CPP14Parser::Comma:
			case CPP14Parser::ArrowStar:
			case CPP14Parser::Arrow:
			case CPP14Parser::Question:
			case CPP14Parser::Colon:
			case CPP14Parser::Doublecolon:
			case CPP14Parser::Semi:
			case CPP14Parser::Dot:
			case CPP14Parser::DotStar:
			case CPP14Parser::Ellipsis:
			case CPP14Parser::Identifier:
			case CPP14Parser::Integerliteral:
			case CPP14Parser::Decimalliteral:
			case CPP14Parser::Octalliteral:
			case CPP14Parser::Hexadecimalliteral:
			case CPP14Parser::Binaryliteral:
			case CPP14Parser::Integersuffix:
			case CPP14Parser::Characterliteral:
			case CPP14Parser::Floatingliteral:
			case CPP14Parser::Stringliteral:
			case CPP14Parser::Userdefinedintegerliteral:
			case CPP14Parser::Userdefinedfloatingliteral:
			case CPP14Parser::Userdefinedstringliteral:
			case CPP14Parser::Userdefinedcharacterliteral:
			case CPP14Parser::Whitespace:
			case CPP14Parser::Newline:
			case CPP14Parser::BlockComment:
			case CPP14Parser::LineComment:
			{
				enterOuterAlt(ctx, 4);
				setState(1638); //883
				_errHandler->sync(this, ctx);
				alt = 1;
				do
				{
					switch (alt)
				{
						case 1:
						{
									setState(1637);//970
									_la = _input->LA(1);
									if (_la == 0 || _la == Token::EOF || (((((_la - 84) & ~ 0x3fULL) == 0) &&
										((1ULL << (_la - 84)) & ((1ULL << (CPP14Parser::LeftParen - 84))
										| (1ULL << (CPP14Parser::RightParen - 84))
										| (1ULL << (CPP14Parser::LeftBracket - 84))
										| (1ULL << (CPP14Parser::RightBracket - 84))
										| (1ULL << (CPP14Parser::LeftBrace - 84))
										| (1ULL << (CPP14Parser::RightBrace - 84)))) != 0)))
									{
									_errHandler->recoverInline(this, ctx);
									}
									else
									{
										_errHandler->reportMatch(this);
										consume(ctx);
									}
									break;
								}

					default:
						throw NoViableAltException(this, ctx);
					}
					setState(1640); //900
					_errHandler->sync(this, ctx);
					alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 167, ctx);
				} while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
				break;
			}

		default:
			throw NoViableAltException(this, ctx);
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

//----------------- InitdeclaratorlistContext ------------------------------------------------------------------

CPP14Parser::InitdeclaratorlistContext::InitdeclaratorlistContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::InitdeclaratorContext* CPP14Parser::InitdeclaratorlistContext::initdeclarator()
{
	return getRuleContext<CPP14Parser::InitdeclaratorContext>(0);//1165
}

CPP14Parser::InitdeclaratorlistContext* CPP14Parser::InitdeclaratorlistContext::initdeclaratorlist()
{
	return getRuleContext<CPP14Parser::InitdeclaratorlistContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::InitdeclaratorlistContext::Comma()
{
	return getToken(CPP14Parser::Comma, 0);
}


size_t CPP14Parser::InitdeclaratorlistContext::getRuleIndex() const
{
	return CPP14Parser::RuleInitdeclaratorlist;//688
}

void CPP14Parser::InitdeclaratorlistContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::InitdeclaratorlistContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::InitdeclaratorlistContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitInitdeclaratorlist(this);
	else
		return visitor->visitChildren(this);
}


CPP14Parser::InitdeclaratorlistContext* CPP14Parser::initdeclaratorlist()
{
	 return initdeclaratorlist(0, nullptr);//600
}

CPP14Parser::InitdeclaratorlistContext* CPP14Parser::initdeclaratorlist(int precedence, antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	antlr4::ParserRuleContext *parentContext = parent;
	size_t parentState = getState();
	auto _localctx = std::make_unique<InitdeclaratorlistContext>(parentContext, parentState);//610
	auto ctx = _localctx.get();//609
	size_t startState = 234;
	enterRecursionRule(ctx, 234, CPP14Parser::RuleInitdeclaratorlist, precedence);

		

	auto onExit = finally([=,&_localctx]
{
		unrollRecursionContexts(parentContext, std::move(_localctx));
	});
	try
{
		size_t alt;
		enterOuterAlt(ctx, 1);
		setState(1645); //951
		initdeclarator(ctx);
		ctx->stop = _input->LT(-1);
		setState(1652);//865
		_errHandler->sync(this, ctx);
		alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 169, ctx);
		while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
		{
			if (alt == 1)
		{
				if (!_parseListeners.empty())
					triggerExitRuleEvent(ctx);

				auto tmpContext = std::make_unique<InitdeclaratorlistContext>(parentContext, parentState);
				pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleInitdeclaratorlist);//1240
				_localctx = std::move(tmpContext);
				ctx = _localctx.get();
				setState(1647);//1002

				if (!(precpred(nullptr, 1))) throw FailedPredicateException(this, "precpred(nullptr, 1)", ctx);
				setState(1648);//958
				match(CPP14Parser::Comma,ctx);
				setState(1649); //951
				initdeclarator(ctx); 
			}
			setState(1654);//875
			_errHandler->sync(this, ctx);
			alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 169, ctx);
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

//----------------- InitdeclaratorContext ------------------------------------------------------------------

CPP14Parser::InitdeclaratorContext::InitdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::DeclaratorContext* CPP14Parser::InitdeclaratorContext::declarator()
{
	return getRuleContext<CPP14Parser::DeclaratorContext>(0);//1165
}

CPP14Parser::InitializerContext* CPP14Parser::InitdeclaratorContext::initializer()
{
	return getRuleContext<CPP14Parser::InitializerContext>(0);//1165
}


size_t CPP14Parser::InitdeclaratorContext::getRuleIndex() const
{
	return CPP14Parser::RuleInitdeclarator;//688
}

void CPP14Parser::InitdeclaratorContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::InitdeclaratorContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::InitdeclaratorContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitInitdeclarator(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::InitdeclaratorContext* CPP14Parser::initdeclarator( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<InitdeclaratorContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 236, CPP14Parser::RuleInitdeclarator);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(1655); //951
		declarator(ctx);
		setState(1657);//848
		_errHandler->sync(this, ctx);

		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 170, ctx))
		{
		case 1:
		{
			setState(1656); //951
			initializer(ctx);
			break;
		}

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

//----------------- DeclaratorContext ------------------------------------------------------------------

CPP14Parser::DeclaratorContext::DeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::PtrdeclaratorContext* CPP14Parser::DeclaratorContext::ptrdeclarator()
{
	return getRuleContext<CPP14Parser::PtrdeclaratorContext>(0);//1165
}

CPP14Parser::NoptrdeclaratorContext* CPP14Parser::DeclaratorContext::noptrdeclarator()
{
	return getRuleContext<CPP14Parser::NoptrdeclaratorContext>(0);//1165
}

CPP14Parser::ParametersandqualifiersContext* CPP14Parser::DeclaratorContext::parametersandqualifiers()
{
	return getRuleContext<CPP14Parser::ParametersandqualifiersContext>(0);//1165
}

CPP14Parser::TrailingreturntypeContext* CPP14Parser::DeclaratorContext::trailingreturntype()
{
	return getRuleContext<CPP14Parser::TrailingreturntypeContext>(0);//1165
}


size_t CPP14Parser::DeclaratorContext::getRuleIndex() const
{
	return CPP14Parser::RuleDeclarator;//688
}

void CPP14Parser::DeclaratorContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::DeclaratorContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::DeclaratorContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitDeclarator(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::DeclaratorContext* CPP14Parser::declarator( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<DeclaratorContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 238, CPP14Parser::RuleDeclarator);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1664);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 171, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(1659); //951
			ptrdeclarator(ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(1660); //951
			noptrdeclarator(0,ctx);
			setState(1661); //951
			parametersandqualifiers(ctx);
			setState(1662); //951
			trailingreturntype(ctx);
			break;
		}

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

//----------------- PtrdeclaratorContext ------------------------------------------------------------------

CPP14Parser::PtrdeclaratorContext::PtrdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::NoptrdeclaratorContext* CPP14Parser::PtrdeclaratorContext::noptrdeclarator()
{
	return getRuleContext<CPP14Parser::NoptrdeclaratorContext>(0);//1165
}

CPP14Parser::PtroperatorContext* CPP14Parser::PtrdeclaratorContext::ptroperator()
{
	return getRuleContext<CPP14Parser::PtroperatorContext>(0);//1165
}

CPP14Parser::PtrdeclaratorContext* CPP14Parser::PtrdeclaratorContext::ptrdeclarator()
{
	return getRuleContext<CPP14Parser::PtrdeclaratorContext>(0);//1165
}


size_t CPP14Parser::PtrdeclaratorContext::getRuleIndex() const
{
	return CPP14Parser::RulePtrdeclarator;//688
}

void CPP14Parser::PtrdeclaratorContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::PtrdeclaratorContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::PtrdeclaratorContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitPtrdeclarator(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::PtrdeclaratorContext* CPP14Parser::ptrdeclarator( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<PtrdeclaratorContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 240, CPP14Parser::RulePtrdeclarator);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1670);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 172, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(1666); //951
			noptrdeclarator(0,ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(1667); //951
			ptroperator(ctx);
			setState(1668); //951
			ptrdeclarator(ctx);
			break;
		}

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

//----------------- NoptrdeclaratorContext ------------------------------------------------------------------

CPP14Parser::NoptrdeclaratorContext::NoptrdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::DeclaratoridContext* CPP14Parser::NoptrdeclaratorContext::declaratorid()
{
	return getRuleContext<CPP14Parser::DeclaratoridContext>(0);//1165
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::NoptrdeclaratorContext::attributespecifierseq()
{
	return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::NoptrdeclaratorContext::LeftParen()
{
	return getToken(CPP14Parser::LeftParen, 0);
}

CPP14Parser::PtrdeclaratorContext* CPP14Parser::NoptrdeclaratorContext::ptrdeclarator()
{
	return getRuleContext<CPP14Parser::PtrdeclaratorContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::NoptrdeclaratorContext::RightParen()
{
	return getToken(CPP14Parser::RightParen, 0);
}

CPP14Parser::NoptrdeclaratorContext* CPP14Parser::NoptrdeclaratorContext::noptrdeclarator()
{
	return getRuleContext<CPP14Parser::NoptrdeclaratorContext>(0);//1165
}

CPP14Parser::ParametersandqualifiersContext* CPP14Parser::NoptrdeclaratorContext::parametersandqualifiers()
{
	return getRuleContext<CPP14Parser::ParametersandqualifiersContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::NoptrdeclaratorContext::LeftBracket()
{
	return getToken(CPP14Parser::LeftBracket, 0);
}

tree::TerminalNode* CPP14Parser::NoptrdeclaratorContext::RightBracket()
{
	return getToken(CPP14Parser::RightBracket, 0);
}

CPP14Parser::ConstantexpressionContext* CPP14Parser::NoptrdeclaratorContext::constantexpression()
{
	return getRuleContext<CPP14Parser::ConstantexpressionContext>(0);//1165
}


size_t CPP14Parser::NoptrdeclaratorContext::getRuleIndex() const
{
	return CPP14Parser::RuleNoptrdeclarator;//688
}

void CPP14Parser::NoptrdeclaratorContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::NoptrdeclaratorContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::NoptrdeclaratorContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitNoptrdeclarator(this);
	else
		return visitor->visitChildren(this);
}


CPP14Parser::NoptrdeclaratorContext* CPP14Parser::noptrdeclarator()
{
	 return noptrdeclarator(0, nullptr);//600
}

CPP14Parser::NoptrdeclaratorContext* CPP14Parser::noptrdeclarator(int precedence, antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	antlr4::ParserRuleContext *parentContext = parent;
	size_t parentState = getState();
	auto _localctx = std::make_unique<NoptrdeclaratorContext>(parentContext, parentState);//610
	auto ctx = _localctx.get();//609
	size_t startState = 242;
	enterRecursionRule(ctx, 242, CPP14Parser::RuleNoptrdeclarator, precedence);

		size_t _la = 0;

	auto onExit = finally([=,&_localctx]
{
		unrollRecursionContexts(parentContext, std::move(_localctx));
	});
	try
{
		size_t alt;
		enterOuterAlt(ctx, 1);
		setState(1681);//750
		_errHandler->sync(this, ctx);
		switch (_input->LA(1))
		{
			case CPP14Parser::Decltype:
			case CPP14Parser::Operator:
			case CPP14Parser::Tilde:
			case CPP14Parser::Doublecolon:
			case CPP14Parser::Ellipsis:
			case CPP14Parser::Identifier:
			{
				setState(1673); //951
				declaratorid(ctx);
				setState(1675);//848
				_errHandler->sync(this, ctx);

				switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 173, ctx))
				{
				case 1:
				{
					setState(1674); //951
					attributespecifierseq(0,ctx);
					break;
				}

				}
				break;
			}

			case CPP14Parser::LeftParen:
			{
				setState(1677);//958
				match(CPP14Parser::LeftParen,ctx);
				setState(1678); //951
				ptrdeclarator(ctx);
				setState(1679);//958
				match(CPP14Parser::RightParen,ctx);
				break;
			}

		default:
			throw NoViableAltException(this, ctx);
		}
		ctx->stop = _input->LT(-1);
		setState(1696);//865
		_errHandler->sync(this, ctx);
		alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 178, ctx);
		while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
		{
			if (alt == 1)
		{
				if (!_parseListeners.empty())
					triggerExitRuleEvent(ctx);

				setState(1694);//830
				_errHandler->sync(this, ctx);
				switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 177, ctx))
				{
				case 1:
				{
					auto tmpContext = std::make_unique<NoptrdeclaratorContext>(parentContext, parentState);
					pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleNoptrdeclarator);//1240
					_localctx = std::move(tmpContext);
					ctx = _localctx.get();
					setState(1683);//1002

					if (!(precpred(nullptr, 3))) throw FailedPredicateException(this, "precpred(nullptr, 3)", ctx);
					setState(1684); //951
					parametersandqualifiers(ctx);
					break;
				}

				case 2:
				{
					auto tmpContext = std::make_unique<NoptrdeclaratorContext>(parentContext, parentState);
					pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleNoptrdeclarator);//1240
					_localctx = std::move(tmpContext);
					ctx = _localctx.get();
					setState(1685);//1002

					if (!(precpred(nullptr, 2))) throw FailedPredicateException(this, "precpred(nullptr, 2)", ctx);
					setState(1686);//958
					match(CPP14Parser::LeftBracket,ctx);
					setState(1688);//788
					_errHandler->sync(this, ctx);

					_la = _input->LA(1);
					if ((((_la & ~ 0x3fULL) == 0) &&
						((1ULL << _la) & ((1ULL << CPP14Parser::T__0)
						| (1ULL << CPP14Parser::T__1)
						| (1ULL << CPP14Parser::Alignof)
						| (1ULL << CPP14Parser::Auto)
						| (1ULL << CPP14Parser::Bool)
						| (1ULL << CPP14Parser::Char)
						| (1ULL << CPP14Parser::Char16)
						| (1ULL << CPP14Parser::Char32)
						| (1ULL << CPP14Parser::Const_cast)
						| (1ULL << CPP14Parser::Decltype)
						| (1ULL << CPP14Parser::Delete)
						| (1ULL << CPP14Parser::Double)
						| (1ULL << CPP14Parser::Dynamic_cast)
						| (1ULL << CPP14Parser::False)
						| (1ULL << CPP14Parser::Float)
						| (1ULL << CPP14Parser::Int)
						| (1ULL << CPP14Parser::Long)
						| (1ULL << CPP14Parser::New)
						| (1ULL << CPP14Parser::Noexcept)
						| (1ULL << CPP14Parser::Nullptr)
						| (1ULL << CPP14Parser::Operator)
						| (1ULL << CPP14Parser::Reinterpret_cast)
						| (1ULL << CPP14Parser::Short)
						| (1ULL << CPP14Parser::Signed)
						| (1ULL << CPP14Parser::Sizeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
						((1ULL << (_la - 64)) & ((1ULL << (CPP14Parser::Static_cast - 64))
						| (1ULL << (CPP14Parser::This - 64))
						| (1ULL << (CPP14Parser::True - 64))
						| (1ULL << (CPP14Parser::Typeid_ - 64))
						| (1ULL << (CPP14Parser::Typename_ - 64))
						| (1ULL << (CPP14Parser::Unsigned - 64))
						| (1ULL << (CPP14Parser::Void - 64))
						| (1ULL << (CPP14Parser::Wchar - 64))
						| (1ULL << (CPP14Parser::LeftParen - 64))
						| (1ULL << (CPP14Parser::LeftBracket - 64))
						| (1ULL << (CPP14Parser::Plus - 64))
						| (1ULL << (CPP14Parser::Minus - 64))
						| (1ULL << (CPP14Parser::Star - 64))
						| (1ULL << (CPP14Parser::And - 64))
						| (1ULL << (CPP14Parser::Or - 64))
						| (1ULL << (CPP14Parser::Tilde - 64))
						| (1ULL << (CPP14Parser::PlusPlus - 64))
						| (1ULL << (CPP14Parser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
						((1ULL << (_la - 128)) & ((1ULL << (CPP14Parser::Doublecolon - 128))
						| (1ULL << (CPP14Parser::Identifier - 128))
						| (1ULL << (CPP14Parser::Integerliteral - 128))
						| (1ULL << (CPP14Parser::Characterliteral - 128))
						| (1ULL << (CPP14Parser::Floatingliteral - 128))
						| (1ULL << (CPP14Parser::Stringliteral - 128))
						| (1ULL << (CPP14Parser::Userdefinedintegerliteral - 128))
						| (1ULL << (CPP14Parser::Userdefinedfloatingliteral - 128))
						| (1ULL << (CPP14Parser::Userdefinedstringliteral - 128))
						| (1ULL << (CPP14Parser::Userdefinedcharacterliteral - 128)))) != 0))
					{
						setState(1687); //951
						constantexpression(ctx);
					}
					setState(1690);//958
					match(CPP14Parser::RightBracket,ctx);
					setState(1692);//848
					_errHandler->sync(this, ctx);

					switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 176, ctx))
					{
					case 1:
					{
						setState(1691); //951
						attributespecifierseq(0,ctx);
						break;
					}

					}
					break;
				}

				} 
			}
			setState(1698);//875
			_errHandler->sync(this, ctx);
			alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 178, ctx);
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

//----------------- ParametersandqualifiersContext ------------------------------------------------------------------

CPP14Parser::ParametersandqualifiersContext::ParametersandqualifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::ParametersandqualifiersContext::LeftParen()
{
	return getToken(CPP14Parser::LeftParen, 0);
}

CPP14Parser::ParameterdeclarationclauseContext* CPP14Parser::ParametersandqualifiersContext::parameterdeclarationclause()
{
	return getRuleContext<CPP14Parser::ParameterdeclarationclauseContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::ParametersandqualifiersContext::RightParen()
{
	return getToken(CPP14Parser::RightParen, 0);
}

CPP14Parser::CvqualifierseqContext* CPP14Parser::ParametersandqualifiersContext::cvqualifierseq()
{
	return getRuleContext<CPP14Parser::CvqualifierseqContext>(0);//1165
}

CPP14Parser::RefqualifierContext* CPP14Parser::ParametersandqualifiersContext::refqualifier()
{
	return getRuleContext<CPP14Parser::RefqualifierContext>(0);//1165
}

CPP14Parser::ExceptionspecificationContext* CPP14Parser::ParametersandqualifiersContext::exceptionspecification()
{
	return getRuleContext<CPP14Parser::ExceptionspecificationContext>(0);//1165
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::ParametersandqualifiersContext::attributespecifierseq()
{
	return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);//1165
}


size_t CPP14Parser::ParametersandqualifiersContext::getRuleIndex() const
{
	return CPP14Parser::RuleParametersandqualifiers;//688
}

void CPP14Parser::ParametersandqualifiersContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::ParametersandqualifiersContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::ParametersandqualifiersContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitParametersandqualifiers(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::ParametersandqualifiersContext* CPP14Parser::parametersandqualifiers( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<ParametersandqualifiersContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 244, CPP14Parser::RuleParametersandqualifiers);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(1699);//958
		match(CPP14Parser::LeftParen,ctx);
		setState(1700); //951
		parameterdeclarationclause(ctx);
		setState(1701);//958
		match(CPP14Parser::RightParen,ctx);
		setState(1703);//848
		_errHandler->sync(this, ctx);

		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 179, ctx))
		{
		case 1:
		{
			setState(1702); //951
			cvqualifierseq(ctx);
			break;
		}

		}
		setState(1706);//848
		_errHandler->sync(this, ctx);

		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 180, ctx))
		{
		case 1:
		{
			setState(1705); //951
			refqualifier(ctx);
			break;
		}

		}
		setState(1709);//848
		_errHandler->sync(this, ctx);

		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 181, ctx))
		{
		case 1:
		{
			setState(1708); //951
			exceptionspecification(ctx);
			break;
		}

		}
		setState(1712);//848
		_errHandler->sync(this, ctx);

		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 182, ctx))
		{
		case 1:
		{
			setState(1711); //951
			attributespecifierseq(0,ctx);
			break;
		}

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

//----------------- TrailingreturntypeContext ------------------------------------------------------------------

CPP14Parser::TrailingreturntypeContext::TrailingreturntypeContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::TrailingreturntypeContext::Arrow()
{
	return getToken(CPP14Parser::Arrow, 0);
}

CPP14Parser::TrailingtypespecifierseqContext* CPP14Parser::TrailingreturntypeContext::trailingtypespecifierseq()
{
	return getRuleContext<CPP14Parser::TrailingtypespecifierseqContext>(0);//1165
}

CPP14Parser::AbstractdeclaratorContext* CPP14Parser::TrailingreturntypeContext::abstractdeclarator()
{
	return getRuleContext<CPP14Parser::AbstractdeclaratorContext>(0);//1165
}


size_t CPP14Parser::TrailingreturntypeContext::getRuleIndex() const
{
	return CPP14Parser::RuleTrailingreturntype;//688
}

void CPP14Parser::TrailingreturntypeContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::TrailingreturntypeContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::TrailingreturntypeContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitTrailingreturntype(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::TrailingreturntypeContext* CPP14Parser::trailingreturntype( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<TrailingreturntypeContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 246, CPP14Parser::RuleTrailingreturntype);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(1714);//958
		match(CPP14Parser::Arrow,ctx);
		setState(1715); //951
		trailingtypespecifierseq(ctx);
		setState(1717);//848
		_errHandler->sync(this, ctx);

		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 183, ctx))
		{
		case 1:
		{
			setState(1716); //951
			abstractdeclarator(ctx);
			break;
		}

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

//----------------- PtroperatorContext ------------------------------------------------------------------

CPP14Parser::PtroperatorContext::PtroperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::PtroperatorContext::Star()
{
	return getToken(CPP14Parser::Star, 0);
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::PtroperatorContext::attributespecifierseq()
{
	return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);//1165
}

CPP14Parser::CvqualifierseqContext* CPP14Parser::PtroperatorContext::cvqualifierseq()
{
	return getRuleContext<CPP14Parser::CvqualifierseqContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::PtroperatorContext::And()
{
	return getToken(CPP14Parser::And, 0);
}

CPP14Parser::NestednamespecifierContext* CPP14Parser::PtroperatorContext::nestednamespecifier()
{
	return getRuleContext<CPP14Parser::NestednamespecifierContext>(0);//1165
}


size_t CPP14Parser::PtroperatorContext::getRuleIndex() const
{
	return CPP14Parser::RulePtroperator;//688
}

void CPP14Parser::PtroperatorContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::PtroperatorContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::PtroperatorContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitPtroperator(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::PtroperatorContext* CPP14Parser::ptroperator( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<PtroperatorContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 248, CPP14Parser::RulePtroperator);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1742);//750
		_errHandler->sync(this, ctx);
		switch (_input->LA(1))
		{
			case CPP14Parser::Star:
			{
				enterOuterAlt(ctx, 1);
				setState(1719);//958
				match(CPP14Parser::Star,ctx);
				setState(1721);//848
				_errHandler->sync(this, ctx);

				switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 184, ctx))
				{
				case 1:
				{
					setState(1720); //951
					attributespecifierseq(0,ctx);
					break;
				}

				}
				setState(1724);//848
				_errHandler->sync(this, ctx);

				switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 185, ctx))
				{
				case 1:
				{
					setState(1723); //951
					cvqualifierseq(ctx);
					break;
				}

				}
				break;
			}

			case CPP14Parser::And:
			{
				enterOuterAlt(ctx, 2);
				setState(1726);//958
				match(CPP14Parser::And,ctx);
				setState(1728);//848
				_errHandler->sync(this, ctx);

				switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 186, ctx))
				{
				case 1:
				{
					setState(1727); //951
					attributespecifierseq(0,ctx);
					break;
				}

				}
				break;
			}

			case CPP14Parser::T__2:
			{
				enterOuterAlt(ctx, 3);
				setState(1730);//958
				match(CPP14Parser::T__2,ctx);
				setState(1732);//848
				_errHandler->sync(this, ctx);

				switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 187, ctx))
				{
				case 1:
				{
					setState(1731); //951
					attributespecifierseq(0,ctx);
					break;
				}

				}
				break;
			}

			case CPP14Parser::Decltype:
			case CPP14Parser::Doublecolon:
			case CPP14Parser::Identifier:
			{
				enterOuterAlt(ctx, 4);
				setState(1734); //951
				nestednamespecifier(0,ctx);
				setState(1735);//958
				match(CPP14Parser::Star,ctx);
				setState(1737);//848
				_errHandler->sync(this, ctx);

				switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 188, ctx))
				{
				case 1:
				{
					setState(1736); //951
					attributespecifierseq(0,ctx);
					break;
				}

				}
				setState(1740);//848
				_errHandler->sync(this, ctx);

				switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 189, ctx))
				{
				case 1:
				{
					setState(1739); //951
					cvqualifierseq(ctx);
					break;
				}

				}
				break;
			}

		default:
			throw NoViableAltException(this, ctx);
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

//----------------- CvqualifierseqContext ------------------------------------------------------------------

CPP14Parser::CvqualifierseqContext::CvqualifierseqContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::CvqualifierContext* CPP14Parser::CvqualifierseqContext::cvqualifier()
{
	return getRuleContext<CPP14Parser::CvqualifierContext>(0);//1165
}

CPP14Parser::CvqualifierseqContext* CPP14Parser::CvqualifierseqContext::cvqualifierseq()
{
	return getRuleContext<CPP14Parser::CvqualifierseqContext>(0);//1165
}


size_t CPP14Parser::CvqualifierseqContext::getRuleIndex() const
{
	return CPP14Parser::RuleCvqualifierseq;//688
}

void CPP14Parser::CvqualifierseqContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::CvqualifierseqContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::CvqualifierseqContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitCvqualifierseq(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::CvqualifierseqContext* CPP14Parser::cvqualifierseq( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<CvqualifierseqContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 250, CPP14Parser::RuleCvqualifierseq);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(1744); //951
		cvqualifier(ctx);
		setState(1746);//848
		_errHandler->sync(this, ctx);

		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 191, ctx))
		{
		case 1:
		{
			setState(1745); //951
			cvqualifierseq(ctx);
			break;
		}

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

//----------------- CvqualifierContext ------------------------------------------------------------------

CPP14Parser::CvqualifierContext::CvqualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::CvqualifierContext::Const()
{
	return getToken(CPP14Parser::Const, 0);
}

tree::TerminalNode* CPP14Parser::CvqualifierContext::Volatile()
{
	return getToken(CPP14Parser::Volatile, 0);
}


size_t CPP14Parser::CvqualifierContext::getRuleIndex() const
{
	return CPP14Parser::RuleCvqualifier;//688
}

void CPP14Parser::CvqualifierContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::CvqualifierContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::CvqualifierContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitCvqualifier(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::CvqualifierContext* CPP14Parser::cvqualifier( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<CvqualifierContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 252, CPP14Parser::RuleCvqualifier);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(1748);//970
		_la = _input->LA(1);
		if (!(_la == CPP14Parser::Const

		|| _la == CPP14Parser::Volatile))
		{
		_errHandler->recoverInline(this, ctx);
		}
		else
		{
			_errHandler->reportMatch(this);
			consume(ctx);
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

//----------------- RefqualifierContext ------------------------------------------------------------------

CPP14Parser::RefqualifierContext::RefqualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::RefqualifierContext::And()
{
	return getToken(CPP14Parser::And, 0);
}


size_t CPP14Parser::RefqualifierContext::getRuleIndex() const
{
	return CPP14Parser::RuleRefqualifier;//688
}

void CPP14Parser::RefqualifierContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::RefqualifierContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::RefqualifierContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitRefqualifier(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::RefqualifierContext* CPP14Parser::refqualifier( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<RefqualifierContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 254, CPP14Parser::RuleRefqualifier);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(1750);//970
		_la = _input->LA(1);
		if (!(_la == CPP14Parser::T__2 || _la == CPP14Parser::And))
		{
		_errHandler->recoverInline(this, ctx);
		}
		else
		{
			_errHandler->reportMatch(this);
			consume(ctx);
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

//----------------- DeclaratoridContext ------------------------------------------------------------------

CPP14Parser::DeclaratoridContext::DeclaratoridContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::IdexpressionContext* CPP14Parser::DeclaratoridContext::idexpression()
{
	return getRuleContext<CPP14Parser::IdexpressionContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::DeclaratoridContext::Ellipsis()
{
	return getToken(CPP14Parser::Ellipsis, 0);
}


size_t CPP14Parser::DeclaratoridContext::getRuleIndex() const
{
	return CPP14Parser::RuleDeclaratorid;//688
}

void CPP14Parser::DeclaratoridContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::DeclaratoridContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::DeclaratoridContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitDeclaratorid(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::DeclaratoridContext* CPP14Parser::declaratorid( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<DeclaratoridContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 256, CPP14Parser::RuleDeclaratorid);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(1753);//788
		_errHandler->sync(this, ctx);

		_la = _input->LA(1);
		if (_la == CPP14Parser::Ellipsis)
		{
			setState(1752);//958
			match(CPP14Parser::Ellipsis,ctx);
		}
		setState(1755); //951
		idexpression(ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- ThetypeidContext ------------------------------------------------------------------

CPP14Parser::ThetypeidContext::ThetypeidContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::TypespecifierseqContext* CPP14Parser::ThetypeidContext::typespecifierseq()
{
	return getRuleContext<CPP14Parser::TypespecifierseqContext>(0);//1165
}

CPP14Parser::AbstractdeclaratorContext* CPP14Parser::ThetypeidContext::abstractdeclarator()
{
	return getRuleContext<CPP14Parser::AbstractdeclaratorContext>(0);//1165
}


size_t CPP14Parser::ThetypeidContext::getRuleIndex() const
{
	return CPP14Parser::RuleThetypeid;//688
}

void CPP14Parser::ThetypeidContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::ThetypeidContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::ThetypeidContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitThetypeid(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::ThetypeidContext* CPP14Parser::thetypeid( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<ThetypeidContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 258, CPP14Parser::RuleThetypeid);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(1757); //951
		typespecifierseq(ctx);
		setState(1759);//848
		_errHandler->sync(this, ctx);

		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 193, ctx))
		{
		case 1:
		{
			setState(1758); //951
			abstractdeclarator(ctx);
			break;
		}

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

//----------------- AbstractdeclaratorContext ------------------------------------------------------------------

CPP14Parser::AbstractdeclaratorContext::AbstractdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::PtrabstractdeclaratorContext* CPP14Parser::AbstractdeclaratorContext::ptrabstractdeclarator()
{
	return getRuleContext<CPP14Parser::PtrabstractdeclaratorContext>(0);//1165
}

CPP14Parser::ParametersandqualifiersContext* CPP14Parser::AbstractdeclaratorContext::parametersandqualifiers()
{
	return getRuleContext<CPP14Parser::ParametersandqualifiersContext>(0);//1165
}

CPP14Parser::TrailingreturntypeContext* CPP14Parser::AbstractdeclaratorContext::trailingreturntype()
{
	return getRuleContext<CPP14Parser::TrailingreturntypeContext>(0);//1165
}

CPP14Parser::NoptrabstractdeclaratorContext* CPP14Parser::AbstractdeclaratorContext::noptrabstractdeclarator()
{
	return getRuleContext<CPP14Parser::NoptrabstractdeclaratorContext>(0);//1165
}

CPP14Parser::AbstractpackdeclaratorContext* CPP14Parser::AbstractdeclaratorContext::abstractpackdeclarator()
{
	return getRuleContext<CPP14Parser::AbstractpackdeclaratorContext>(0);//1165
}


size_t CPP14Parser::AbstractdeclaratorContext::getRuleIndex() const
{
	return CPP14Parser::RuleAbstractdeclarator;//688
}

void CPP14Parser::AbstractdeclaratorContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::AbstractdeclaratorContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::AbstractdeclaratorContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitAbstractdeclarator(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::AbstractdeclaratorContext* CPP14Parser::abstractdeclarator( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<AbstractdeclaratorContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 260, CPP14Parser::RuleAbstractdeclarator);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1769);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 195, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(1761); //951
			ptrabstractdeclarator(ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(1763);//848
			_errHandler->sync(this, ctx);

			switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 194, ctx))
			{
			case 1:
			{
				setState(1762); //951
				noptrabstractdeclarator(0,ctx);
				break;
			}

			}
			setState(1765); //951
			parametersandqualifiers(ctx);
			setState(1766); //951
			trailingreturntype(ctx);
			break;
		}

		case 3:
		{
			enterOuterAlt(ctx, 3);
			setState(1768); //951
			abstractpackdeclarator(ctx);
			break;
		}

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

//----------------- PtrabstractdeclaratorContext ------------------------------------------------------------------

CPP14Parser::PtrabstractdeclaratorContext::PtrabstractdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::NoptrabstractdeclaratorContext* CPP14Parser::PtrabstractdeclaratorContext::noptrabstractdeclarator()
{
	return getRuleContext<CPP14Parser::NoptrabstractdeclaratorContext>(0);//1165
}

CPP14Parser::PtroperatorContext* CPP14Parser::PtrabstractdeclaratorContext::ptroperator()
{
	return getRuleContext<CPP14Parser::PtroperatorContext>(0);//1165
}

CPP14Parser::PtrabstractdeclaratorContext* CPP14Parser::PtrabstractdeclaratorContext::ptrabstractdeclarator()
{
	return getRuleContext<CPP14Parser::PtrabstractdeclaratorContext>(0);//1165
}


size_t CPP14Parser::PtrabstractdeclaratorContext::getRuleIndex() const
{
	return CPP14Parser::RulePtrabstractdeclarator;//688
}

void CPP14Parser::PtrabstractdeclaratorContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::PtrabstractdeclaratorContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::PtrabstractdeclaratorContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitPtrabstractdeclarator(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::PtrabstractdeclaratorContext* CPP14Parser::ptrabstractdeclarator( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<PtrabstractdeclaratorContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 262, CPP14Parser::RulePtrabstractdeclarator);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1776);//750
		_errHandler->sync(this, ctx);
		switch (_input->LA(1))
		{
			case CPP14Parser::LeftParen:
			case CPP14Parser::LeftBracket:
			{
				enterOuterAlt(ctx, 1);
				setState(1771); //951
				noptrabstractdeclarator(0,ctx);
				break;
			}

			case CPP14Parser::T__2:
			case CPP14Parser::Decltype:
			case CPP14Parser::Star:
			case CPP14Parser::And:
			case CPP14Parser::Doublecolon:
			case CPP14Parser::Identifier:
			{
				enterOuterAlt(ctx, 2);
				setState(1772); //951
				ptroperator(ctx);
				setState(1774);//848
				_errHandler->sync(this, ctx);

				switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 196, ctx))
				{
				case 1:
				{
					setState(1773); //951
					ptrabstractdeclarator(ctx);
					break;
				}

				}
				break;
			}

		default:
			throw NoViableAltException(this, ctx);
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

//----------------- NoptrabstractdeclaratorContext ------------------------------------------------------------------

CPP14Parser::NoptrabstractdeclaratorContext::NoptrabstractdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::ParametersandqualifiersContext* CPP14Parser::NoptrabstractdeclaratorContext::parametersandqualifiers()
{
	return getRuleContext<CPP14Parser::ParametersandqualifiersContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::NoptrabstractdeclaratorContext::LeftBracket()
{
	return getToken(CPP14Parser::LeftBracket, 0);
}

tree::TerminalNode* CPP14Parser::NoptrabstractdeclaratorContext::RightBracket()
{
	return getToken(CPP14Parser::RightBracket, 0);
}

CPP14Parser::ConstantexpressionContext* CPP14Parser::NoptrabstractdeclaratorContext::constantexpression()
{
	return getRuleContext<CPP14Parser::ConstantexpressionContext>(0);//1165
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::NoptrabstractdeclaratorContext::attributespecifierseq()
{
	return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::NoptrabstractdeclaratorContext::LeftParen()
{
	return getToken(CPP14Parser::LeftParen, 0);
}

CPP14Parser::PtrabstractdeclaratorContext* CPP14Parser::NoptrabstractdeclaratorContext::ptrabstractdeclarator()
{
	return getRuleContext<CPP14Parser::PtrabstractdeclaratorContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::NoptrabstractdeclaratorContext::RightParen()
{
	return getToken(CPP14Parser::RightParen, 0);
}

CPP14Parser::NoptrabstractdeclaratorContext* CPP14Parser::NoptrabstractdeclaratorContext::noptrabstractdeclarator()
{
	return getRuleContext<CPP14Parser::NoptrabstractdeclaratorContext>(0);//1165
}


size_t CPP14Parser::NoptrabstractdeclaratorContext::getRuleIndex() const
{
	return CPP14Parser::RuleNoptrabstractdeclarator;//688
}

void CPP14Parser::NoptrabstractdeclaratorContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::NoptrabstractdeclaratorContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::NoptrabstractdeclaratorContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitNoptrabstractdeclarator(this);
	else
		return visitor->visitChildren(this);
}


CPP14Parser::NoptrabstractdeclaratorContext* CPP14Parser::noptrabstractdeclarator()
{
	 return noptrabstractdeclarator(0, nullptr);//600
}

CPP14Parser::NoptrabstractdeclaratorContext* CPP14Parser::noptrabstractdeclarator(int precedence, antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	antlr4::ParserRuleContext *parentContext = parent;
	size_t parentState = getState();
	auto _localctx = std::make_unique<NoptrabstractdeclaratorContext>(parentContext, parentState);//610
	auto ctx = _localctx.get();//609
	size_t startState = 264;
	enterRecursionRule(ctx, 264, CPP14Parser::RuleNoptrabstractdeclarator, precedence);

		size_t _la = 0;

	auto onExit = finally([=,&_localctx]
{
		unrollRecursionContexts(parentContext, std::move(_localctx));
	});
	try
{
		size_t alt;
		enterOuterAlt(ctx, 1);
		setState(1792);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 200, ctx))
		{
		case 1:
		{
			setState(1779); //951
			parametersandqualifiers(ctx);
			break;
		}

		case 2:
		{
			setState(1780);//958
			match(CPP14Parser::LeftBracket,ctx);
			setState(1782);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if ((((_la & ~ 0x3fULL) == 0) &&
				((1ULL << _la) & ((1ULL << CPP14Parser::T__0)
				| (1ULL << CPP14Parser::T__1)
				| (1ULL << CPP14Parser::Alignof)
				| (1ULL << CPP14Parser::Auto)
				| (1ULL << CPP14Parser::Bool)
				| (1ULL << CPP14Parser::Char)
				| (1ULL << CPP14Parser::Char16)
				| (1ULL << CPP14Parser::Char32)
				| (1ULL << CPP14Parser::Const_cast)
				| (1ULL << CPP14Parser::Decltype)
				| (1ULL << CPP14Parser::Delete)
				| (1ULL << CPP14Parser::Double)
				| (1ULL << CPP14Parser::Dynamic_cast)
				| (1ULL << CPP14Parser::False)
				| (1ULL << CPP14Parser::Float)
				| (1ULL << CPP14Parser::Int)
				| (1ULL << CPP14Parser::Long)
				| (1ULL << CPP14Parser::New)
				| (1ULL << CPP14Parser::Noexcept)
				| (1ULL << CPP14Parser::Nullptr)
				| (1ULL << CPP14Parser::Operator)
				| (1ULL << CPP14Parser::Reinterpret_cast)
				| (1ULL << CPP14Parser::Short)
				| (1ULL << CPP14Parser::Signed)
				| (1ULL << CPP14Parser::Sizeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
				((1ULL << (_la - 64)) & ((1ULL << (CPP14Parser::Static_cast - 64))
				| (1ULL << (CPP14Parser::This - 64))
				| (1ULL << (CPP14Parser::True - 64))
				| (1ULL << (CPP14Parser::Typeid_ - 64))
				| (1ULL << (CPP14Parser::Typename_ - 64))
				| (1ULL << (CPP14Parser::Unsigned - 64))
				| (1ULL << (CPP14Parser::Void - 64))
				| (1ULL << (CPP14Parser::Wchar - 64))
				| (1ULL << (CPP14Parser::LeftParen - 64))
				| (1ULL << (CPP14Parser::LeftBracket - 64))
				| (1ULL << (CPP14Parser::Plus - 64))
				| (1ULL << (CPP14Parser::Minus - 64))
				| (1ULL << (CPP14Parser::Star - 64))
				| (1ULL << (CPP14Parser::And - 64))
				| (1ULL << (CPP14Parser::Or - 64))
				| (1ULL << (CPP14Parser::Tilde - 64))
				| (1ULL << (CPP14Parser::PlusPlus - 64))
				| (1ULL << (CPP14Parser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
				((1ULL << (_la - 128)) & ((1ULL << (CPP14Parser::Doublecolon - 128))
				| (1ULL << (CPP14Parser::Identifier - 128))
				| (1ULL << (CPP14Parser::Integerliteral - 128))
				| (1ULL << (CPP14Parser::Characterliteral - 128))
				| (1ULL << (CPP14Parser::Floatingliteral - 128))
				| (1ULL << (CPP14Parser::Stringliteral - 128))
				| (1ULL << (CPP14Parser::Userdefinedintegerliteral - 128))
				| (1ULL << (CPP14Parser::Userdefinedfloatingliteral - 128))
				| (1ULL << (CPP14Parser::Userdefinedstringliteral - 128))
				| (1ULL << (CPP14Parser::Userdefinedcharacterliteral - 128)))) != 0))
			{
				setState(1781); //951
				constantexpression(ctx);
			}
			setState(1784);//958
			match(CPP14Parser::RightBracket,ctx);
			setState(1786);//848
			_errHandler->sync(this, ctx);

			switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 199, ctx))
			{
			case 1:
			{
				setState(1785); //951
				attributespecifierseq(0,ctx);
				break;
			}

			}
			break;
		}

		case 3:
		{
			setState(1788);//958
			match(CPP14Parser::LeftParen,ctx);
			setState(1789); //951
			ptrabstractdeclarator(ctx);
			setState(1790);//958
			match(CPP14Parser::RightParen,ctx);
			break;
		}

		}
		ctx->stop = _input->LT(-1);
		setState(1807);//865
		_errHandler->sync(this, ctx);
		alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 204, ctx);
		while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
		{
			if (alt == 1)
		{
				if (!_parseListeners.empty())
					triggerExitRuleEvent(ctx);

				setState(1805);//830
				_errHandler->sync(this, ctx);
				switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 203, ctx))
				{
				case 1:
				{
					auto tmpContext = std::make_unique<NoptrabstractdeclaratorContext>(parentContext, parentState);
					pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleNoptrabstractdeclarator);//1240
					_localctx = std::move(tmpContext);
					ctx = _localctx.get();
					setState(1794);//1002

					if (!(precpred(nullptr, 5))) throw FailedPredicateException(this, "precpred(nullptr, 5)", ctx);
					setState(1795); //951
					parametersandqualifiers(ctx);
					break;
				}

				case 2:
				{
					auto tmpContext = std::make_unique<NoptrabstractdeclaratorContext>(parentContext, parentState);
					pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleNoptrabstractdeclarator);//1240
					_localctx = std::move(tmpContext);
					ctx = _localctx.get();
					setState(1796);//1002

					if (!(precpred(nullptr, 3))) throw FailedPredicateException(this, "precpred(nullptr, 3)", ctx);
					setState(1797);//958
					match(CPP14Parser::LeftBracket,ctx);
					setState(1799);//788
					_errHandler->sync(this, ctx);

					_la = _input->LA(1);
					if ((((_la & ~ 0x3fULL) == 0) &&
						((1ULL << _la) & ((1ULL << CPP14Parser::T__0)
						| (1ULL << CPP14Parser::T__1)
						| (1ULL << CPP14Parser::Alignof)
						| (1ULL << CPP14Parser::Auto)
						| (1ULL << CPP14Parser::Bool)
						| (1ULL << CPP14Parser::Char)
						| (1ULL << CPP14Parser::Char16)
						| (1ULL << CPP14Parser::Char32)
						| (1ULL << CPP14Parser::Const_cast)
						| (1ULL << CPP14Parser::Decltype)
						| (1ULL << CPP14Parser::Delete)
						| (1ULL << CPP14Parser::Double)
						| (1ULL << CPP14Parser::Dynamic_cast)
						| (1ULL << CPP14Parser::False)
						| (1ULL << CPP14Parser::Float)
						| (1ULL << CPP14Parser::Int)
						| (1ULL << CPP14Parser::Long)
						| (1ULL << CPP14Parser::New)
						| (1ULL << CPP14Parser::Noexcept)
						| (1ULL << CPP14Parser::Nullptr)
						| (1ULL << CPP14Parser::Operator)
						| (1ULL << CPP14Parser::Reinterpret_cast)
						| (1ULL << CPP14Parser::Short)
						| (1ULL << CPP14Parser::Signed)
						| (1ULL << CPP14Parser::Sizeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
						((1ULL << (_la - 64)) & ((1ULL << (CPP14Parser::Static_cast - 64))
						| (1ULL << (CPP14Parser::This - 64))
						| (1ULL << (CPP14Parser::True - 64))
						| (1ULL << (CPP14Parser::Typeid_ - 64))
						| (1ULL << (CPP14Parser::Typename_ - 64))
						| (1ULL << (CPP14Parser::Unsigned - 64))
						| (1ULL << (CPP14Parser::Void - 64))
						| (1ULL << (CPP14Parser::Wchar - 64))
						| (1ULL << (CPP14Parser::LeftParen - 64))
						| (1ULL << (CPP14Parser::LeftBracket - 64))
						| (1ULL << (CPP14Parser::Plus - 64))
						| (1ULL << (CPP14Parser::Minus - 64))
						| (1ULL << (CPP14Parser::Star - 64))
						| (1ULL << (CPP14Parser::And - 64))
						| (1ULL << (CPP14Parser::Or - 64))
						| (1ULL << (CPP14Parser::Tilde - 64))
						| (1ULL << (CPP14Parser::PlusPlus - 64))
						| (1ULL << (CPP14Parser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
						((1ULL << (_la - 128)) & ((1ULL << (CPP14Parser::Doublecolon - 128))
						| (1ULL << (CPP14Parser::Identifier - 128))
						| (1ULL << (CPP14Parser::Integerliteral - 128))
						| (1ULL << (CPP14Parser::Characterliteral - 128))
						| (1ULL << (CPP14Parser::Floatingliteral - 128))
						| (1ULL << (CPP14Parser::Stringliteral - 128))
						| (1ULL << (CPP14Parser::Userdefinedintegerliteral - 128))
						| (1ULL << (CPP14Parser::Userdefinedfloatingliteral - 128))
						| (1ULL << (CPP14Parser::Userdefinedstringliteral - 128))
						| (1ULL << (CPP14Parser::Userdefinedcharacterliteral - 128)))) != 0))
					{
						setState(1798); //951
						constantexpression(ctx);
					}
					setState(1801);//958
					match(CPP14Parser::RightBracket,ctx);
					setState(1803);//848
					_errHandler->sync(this, ctx);

					switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 202, ctx))
					{
					case 1:
					{
						setState(1802); //951
						attributespecifierseq(0,ctx);
						break;
					}

					}
					break;
				}

				} 
			}
			setState(1809);//875
			_errHandler->sync(this, ctx);
			alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 204, ctx);
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

//----------------- AbstractpackdeclaratorContext ------------------------------------------------------------------

CPP14Parser::AbstractpackdeclaratorContext::AbstractpackdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::NoptrabstractpackdeclaratorContext* CPP14Parser::AbstractpackdeclaratorContext::noptrabstractpackdeclarator()
{
	return getRuleContext<CPP14Parser::NoptrabstractpackdeclaratorContext>(0);//1165
}

CPP14Parser::PtroperatorContext* CPP14Parser::AbstractpackdeclaratorContext::ptroperator()
{
	return getRuleContext<CPP14Parser::PtroperatorContext>(0);//1165
}

CPP14Parser::AbstractpackdeclaratorContext* CPP14Parser::AbstractpackdeclaratorContext::abstractpackdeclarator()
{
	return getRuleContext<CPP14Parser::AbstractpackdeclaratorContext>(0);//1165
}


size_t CPP14Parser::AbstractpackdeclaratorContext::getRuleIndex() const
{
	return CPP14Parser::RuleAbstractpackdeclarator;//688
}

void CPP14Parser::AbstractpackdeclaratorContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::AbstractpackdeclaratorContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::AbstractpackdeclaratorContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitAbstractpackdeclarator(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::AbstractpackdeclaratorContext* CPP14Parser::abstractpackdeclarator( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<AbstractpackdeclaratorContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 266, CPP14Parser::RuleAbstractpackdeclarator);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1814);//750
		_errHandler->sync(this, ctx);
		switch (_input->LA(1))
		{
			case CPP14Parser::Ellipsis:
			{
				enterOuterAlt(ctx, 1);
				setState(1810); //951
				noptrabstractpackdeclarator(0,ctx);
				break;
			}

			case CPP14Parser::T__2:
			case CPP14Parser::Decltype:
			case CPP14Parser::Star:
			case CPP14Parser::And:
			case CPP14Parser::Doublecolon:
			case CPP14Parser::Identifier:
			{
				enterOuterAlt(ctx, 2);
				setState(1811); //951
				ptroperator(ctx);
				setState(1812); //951
				abstractpackdeclarator(ctx);
				break;
			}

		default:
			throw NoViableAltException(this, ctx);
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

//----------------- NoptrabstractpackdeclaratorContext ------------------------------------------------------------------

CPP14Parser::NoptrabstractpackdeclaratorContext::NoptrabstractpackdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::NoptrabstractpackdeclaratorContext::Ellipsis()
{
	return getToken(CPP14Parser::Ellipsis, 0);
}

CPP14Parser::NoptrabstractpackdeclaratorContext* CPP14Parser::NoptrabstractpackdeclaratorContext::noptrabstractpackdeclarator()
{
	return getRuleContext<CPP14Parser::NoptrabstractpackdeclaratorContext>(0);//1165
}

CPP14Parser::ParametersandqualifiersContext* CPP14Parser::NoptrabstractpackdeclaratorContext::parametersandqualifiers()
{
	return getRuleContext<CPP14Parser::ParametersandqualifiersContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::NoptrabstractpackdeclaratorContext::LeftBracket()
{
	return getToken(CPP14Parser::LeftBracket, 0);
}

tree::TerminalNode* CPP14Parser::NoptrabstractpackdeclaratorContext::RightBracket()
{
	return getToken(CPP14Parser::RightBracket, 0);
}

CPP14Parser::ConstantexpressionContext* CPP14Parser::NoptrabstractpackdeclaratorContext::constantexpression()
{
	return getRuleContext<CPP14Parser::ConstantexpressionContext>(0);//1165
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::NoptrabstractpackdeclaratorContext::attributespecifierseq()
{
	return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);//1165
}


size_t CPP14Parser::NoptrabstractpackdeclaratorContext::getRuleIndex() const
{
	return CPP14Parser::RuleNoptrabstractpackdeclarator;//688
}

void CPP14Parser::NoptrabstractpackdeclaratorContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::NoptrabstractpackdeclaratorContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::NoptrabstractpackdeclaratorContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitNoptrabstractpackdeclarator(this);
	else
		return visitor->visitChildren(this);
}


CPP14Parser::NoptrabstractpackdeclaratorContext* CPP14Parser::noptrabstractpackdeclarator()
{
	 return noptrabstractpackdeclarator(0, nullptr);//600
}

CPP14Parser::NoptrabstractpackdeclaratorContext* CPP14Parser::noptrabstractpackdeclarator(int precedence, antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	antlr4::ParserRuleContext *parentContext = parent;
	size_t parentState = getState();
	auto _localctx = std::make_unique<NoptrabstractpackdeclaratorContext>(parentContext, parentState);//610
	auto ctx = _localctx.get();//609
	size_t startState = 268;
	enterRecursionRule(ctx, 268, CPP14Parser::RuleNoptrabstractpackdeclarator, precedence);

		size_t _la = 0;

	auto onExit = finally([=,&_localctx]
{
		unrollRecursionContexts(parentContext, std::move(_localctx));
	});
	try
{
		size_t alt;
		enterOuterAlt(ctx, 1);
		setState(1817);//958
		match(CPP14Parser::Ellipsis,ctx);
		ctx->stop = _input->LT(-1);
		setState(1832);//865
		_errHandler->sync(this, ctx);
		alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 209, ctx);
		while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
		{
			if (alt == 1)
		{
				if (!_parseListeners.empty())
					triggerExitRuleEvent(ctx);

				setState(1830);//830
				_errHandler->sync(this, ctx);
				switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 208, ctx))
				{
				case 1:
				{
					auto tmpContext = std::make_unique<NoptrabstractpackdeclaratorContext>(parentContext, parentState);
					pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleNoptrabstractpackdeclarator);//1240
					_localctx = std::move(tmpContext);
					ctx = _localctx.get();
					setState(1819);//1002

					if (!(precpred(nullptr, 3))) throw FailedPredicateException(this, "precpred(nullptr, 3)", ctx);
					setState(1820); //951
					parametersandqualifiers(ctx);
					break;
				}

				case 2:
				{
					auto tmpContext = std::make_unique<NoptrabstractpackdeclaratorContext>(parentContext, parentState);
					pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleNoptrabstractpackdeclarator);//1240
					_localctx = std::move(tmpContext);
					ctx = _localctx.get();
					setState(1821);//1002

					if (!(precpred(nullptr, 2))) throw FailedPredicateException(this, "precpred(nullptr, 2)", ctx);
					setState(1822);//958
					match(CPP14Parser::LeftBracket,ctx);
					setState(1824);//788
					_errHandler->sync(this, ctx);

					_la = _input->LA(1);
					if ((((_la & ~ 0x3fULL) == 0) &&
						((1ULL << _la) & ((1ULL << CPP14Parser::T__0)
						| (1ULL << CPP14Parser::T__1)
						| (1ULL << CPP14Parser::Alignof)
						| (1ULL << CPP14Parser::Auto)
						| (1ULL << CPP14Parser::Bool)
						| (1ULL << CPP14Parser::Char)
						| (1ULL << CPP14Parser::Char16)
						| (1ULL << CPP14Parser::Char32)
						| (1ULL << CPP14Parser::Const_cast)
						| (1ULL << CPP14Parser::Decltype)
						| (1ULL << CPP14Parser::Delete)
						| (1ULL << CPP14Parser::Double)
						| (1ULL << CPP14Parser::Dynamic_cast)
						| (1ULL << CPP14Parser::False)
						| (1ULL << CPP14Parser::Float)
						| (1ULL << CPP14Parser::Int)
						| (1ULL << CPP14Parser::Long)
						| (1ULL << CPP14Parser::New)
						| (1ULL << CPP14Parser::Noexcept)
						| (1ULL << CPP14Parser::Nullptr)
						| (1ULL << CPP14Parser::Operator)
						| (1ULL << CPP14Parser::Reinterpret_cast)
						| (1ULL << CPP14Parser::Short)
						| (1ULL << CPP14Parser::Signed)
						| (1ULL << CPP14Parser::Sizeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
						((1ULL << (_la - 64)) & ((1ULL << (CPP14Parser::Static_cast - 64))
						| (1ULL << (CPP14Parser::This - 64))
						| (1ULL << (CPP14Parser::True - 64))
						| (1ULL << (CPP14Parser::Typeid_ - 64))
						| (1ULL << (CPP14Parser::Typename_ - 64))
						| (1ULL << (CPP14Parser::Unsigned - 64))
						| (1ULL << (CPP14Parser::Void - 64))
						| (1ULL << (CPP14Parser::Wchar - 64))
						| (1ULL << (CPP14Parser::LeftParen - 64))
						| (1ULL << (CPP14Parser::LeftBracket - 64))
						| (1ULL << (CPP14Parser::Plus - 64))
						| (1ULL << (CPP14Parser::Minus - 64))
						| (1ULL << (CPP14Parser::Star - 64))
						| (1ULL << (CPP14Parser::And - 64))
						| (1ULL << (CPP14Parser::Or - 64))
						| (1ULL << (CPP14Parser::Tilde - 64))
						| (1ULL << (CPP14Parser::PlusPlus - 64))
						| (1ULL << (CPP14Parser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
						((1ULL << (_la - 128)) & ((1ULL << (CPP14Parser::Doublecolon - 128))
						| (1ULL << (CPP14Parser::Identifier - 128))
						| (1ULL << (CPP14Parser::Integerliteral - 128))
						| (1ULL << (CPP14Parser::Characterliteral - 128))
						| (1ULL << (CPP14Parser::Floatingliteral - 128))
						| (1ULL << (CPP14Parser::Stringliteral - 128))
						| (1ULL << (CPP14Parser::Userdefinedintegerliteral - 128))
						| (1ULL << (CPP14Parser::Userdefinedfloatingliteral - 128))
						| (1ULL << (CPP14Parser::Userdefinedstringliteral - 128))
						| (1ULL << (CPP14Parser::Userdefinedcharacterliteral - 128)))) != 0))
					{
						setState(1823); //951
						constantexpression(ctx);
					}
					setState(1826);//958
					match(CPP14Parser::RightBracket,ctx);
					setState(1828);//848
					_errHandler->sync(this, ctx);

					switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 207, ctx))
					{
					case 1:
					{
						setState(1827); //951
						attributespecifierseq(0,ctx);
						break;
					}

					}
					break;
				}

				} 
			}
			setState(1834);//875
			_errHandler->sync(this, ctx);
			alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 209, ctx);
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

//----------------- ParameterdeclarationclauseContext ------------------------------------------------------------------

CPP14Parser::ParameterdeclarationclauseContext::ParameterdeclarationclauseContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::ParameterdeclarationlistContext* CPP14Parser::ParameterdeclarationclauseContext::parameterdeclarationlist()
{
	return getRuleContext<CPP14Parser::ParameterdeclarationlistContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::ParameterdeclarationclauseContext::Ellipsis()
{
	return getToken(CPP14Parser::Ellipsis, 0);
}

tree::TerminalNode* CPP14Parser::ParameterdeclarationclauseContext::Comma()
{
	return getToken(CPP14Parser::Comma, 0);
}


size_t CPP14Parser::ParameterdeclarationclauseContext::getRuleIndex() const
{
	return CPP14Parser::RuleParameterdeclarationclause;//688
}

void CPP14Parser::ParameterdeclarationclauseContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::ParameterdeclarationclauseContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::ParameterdeclarationclauseContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitParameterdeclarationclause(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::ParameterdeclarationclauseContext* CPP14Parser::parameterdeclarationclause( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<ParameterdeclarationclauseContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 270, CPP14Parser::RuleParameterdeclarationclause);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1845);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 212, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(1836);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (((((_la - 9) & ~ 0x3fULL) == 0) &&
				((1ULL << (_la - 9)) & ((1ULL << (CPP14Parser::Alignas - 9))
				| (1ULL << (CPP14Parser::Auto - 9))
				| (1ULL << (CPP14Parser::Bool - 9))
				| (1ULL << (CPP14Parser::Char - 9))
				| (1ULL << (CPP14Parser::Char16 - 9))
				| (1ULL << (CPP14Parser::Char32 - 9))
				| (1ULL << (CPP14Parser::Class - 9))
				| (1ULL << (CPP14Parser::Const - 9))
				| (1ULL << (CPP14Parser::Constexpr - 9))
				| (1ULL << (CPP14Parser::Decltype - 9))
				| (1ULL << (CPP14Parser::Double - 9))
				| (1ULL << (CPP14Parser::Enum - 9))
				| (1ULL << (CPP14Parser::Explicit - 9))
				| (1ULL << (CPP14Parser::Extern - 9))
				| (1ULL << (CPP14Parser::Float - 9))
				| (1ULL << (CPP14Parser::Friend - 9))
				| (1ULL << (CPP14Parser::Inline - 9))
				| (1ULL << (CPP14Parser::Int - 9))
				| (1ULL << (CPP14Parser::Long - 9))
				| (1ULL << (CPP14Parser::Mutable - 9))
				| (1ULL << (CPP14Parser::Register - 9))
				| (1ULL << (CPP14Parser::Short - 9))
				| (1ULL << (CPP14Parser::Signed - 9))
				| (1ULL << (CPP14Parser::Static - 9))
				| (1ULL << (CPP14Parser::Struct - 9))
				| (1ULL << (CPP14Parser::Thread_local - 9)))) != 0) || ((((_la - 73) & ~ 0x3fULL) == 0) &&
				((1ULL << (_la - 73)) & ((1ULL << (CPP14Parser::Typedef - 73))
				| (1ULL << (CPP14Parser::Typename_ - 73))
				| (1ULL << (CPP14Parser::Union - 73))
				| (1ULL << (CPP14Parser::Unsigned - 73))
				| (1ULL << (CPP14Parser::Virtual - 73))
				| (1ULL << (CPP14Parser::Void - 73))
				| (1ULL << (CPP14Parser::Volatile - 73))
				| (1ULL << (CPP14Parser::Wchar - 73))
				| (1ULL << (CPP14Parser::LeftBracket - 73))
				| (1ULL << (CPP14Parser::Doublecolon - 73))
				| (1ULL << (CPP14Parser::Identifier - 73)))) != 0))
			{
				setState(1835); //951
				parameterdeclarationlist(0,ctx);
			}
			setState(1839);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Ellipsis)
			{
				setState(1838);//958
				match(CPP14Parser::Ellipsis,ctx);
			}
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(1841); //951
			parameterdeclarationlist(0,ctx);
			setState(1842);//958
			match(CPP14Parser::Comma,ctx);
			setState(1843);//958
			match(CPP14Parser::Ellipsis,ctx);
			break;
		}

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

//----------------- ParameterdeclarationlistContext ------------------------------------------------------------------

CPP14Parser::ParameterdeclarationlistContext::ParameterdeclarationlistContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::ParameterdeclarationContext* CPP14Parser::ParameterdeclarationlistContext::parameterdeclaration()
{
	return getRuleContext<CPP14Parser::ParameterdeclarationContext>(0);//1165
}

CPP14Parser::ParameterdeclarationlistContext* CPP14Parser::ParameterdeclarationlistContext::parameterdeclarationlist()
{
	return getRuleContext<CPP14Parser::ParameterdeclarationlistContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::ParameterdeclarationlistContext::Comma()
{
	return getToken(CPP14Parser::Comma, 0);
}


size_t CPP14Parser::ParameterdeclarationlistContext::getRuleIndex() const
{
	return CPP14Parser::RuleParameterdeclarationlist;//688
}

void CPP14Parser::ParameterdeclarationlistContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::ParameterdeclarationlistContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::ParameterdeclarationlistContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitParameterdeclarationlist(this);
	else
		return visitor->visitChildren(this);
}


CPP14Parser::ParameterdeclarationlistContext* CPP14Parser::parameterdeclarationlist()
{
	 return parameterdeclarationlist(0, nullptr);//600
}

CPP14Parser::ParameterdeclarationlistContext* CPP14Parser::parameterdeclarationlist(int precedence, antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	antlr4::ParserRuleContext *parentContext = parent;
	size_t parentState = getState();
	auto _localctx = std::make_unique<ParameterdeclarationlistContext>(parentContext, parentState);//610
	auto ctx = _localctx.get();//609
	size_t startState = 272;
	enterRecursionRule(ctx, 272, CPP14Parser::RuleParameterdeclarationlist, precedence);

		

	auto onExit = finally([=,&_localctx]
{
		unrollRecursionContexts(parentContext, std::move(_localctx));
	});
	try
{
		size_t alt;
		enterOuterAlt(ctx, 1);
		setState(1848); //951
		parameterdeclaration(ctx);
		ctx->stop = _input->LT(-1);
		setState(1855);//865
		_errHandler->sync(this, ctx);
		alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 213, ctx);
		while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
		{
			if (alt == 1)
		{
				if (!_parseListeners.empty())
					triggerExitRuleEvent(ctx);

				auto tmpContext = std::make_unique<ParameterdeclarationlistContext>(parentContext, parentState);
				pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleParameterdeclarationlist);//1240
				_localctx = std::move(tmpContext);
				ctx = _localctx.get();
				setState(1850);//1002

				if (!(precpred(nullptr, 1))) throw FailedPredicateException(this, "precpred(nullptr, 1)", ctx);
				setState(1851);//958
				match(CPP14Parser::Comma,ctx);
				setState(1852); //951
				parameterdeclaration(ctx); 
			}
			setState(1857);//875
			_errHandler->sync(this, ctx);
			alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 213, ctx);
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

//----------------- ParameterdeclarationContext ------------------------------------------------------------------

CPP14Parser::ParameterdeclarationContext::ParameterdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::DeclspecifierseqContext* CPP14Parser::ParameterdeclarationContext::declspecifierseq()
{
	return getRuleContext<CPP14Parser::DeclspecifierseqContext>(0);//1165
}

CPP14Parser::DeclaratorContext* CPP14Parser::ParameterdeclarationContext::declarator()
{
	return getRuleContext<CPP14Parser::DeclaratorContext>(0);//1165
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::ParameterdeclarationContext::attributespecifierseq()
{
	return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::ParameterdeclarationContext::Assign()
{
	return getToken(CPP14Parser::Assign, 0);
}

CPP14Parser::InitializerclauseContext* CPP14Parser::ParameterdeclarationContext::initializerclause()
{
	return getRuleContext<CPP14Parser::InitializerclauseContext>(0);//1165
}

CPP14Parser::AbstractdeclaratorContext* CPP14Parser::ParameterdeclarationContext::abstractdeclarator()
{
	return getRuleContext<CPP14Parser::AbstractdeclaratorContext>(0);//1165
}


size_t CPP14Parser::ParameterdeclarationContext::getRuleIndex() const
{
	return CPP14Parser::RuleParameterdeclaration;//688
}

void CPP14Parser::ParameterdeclarationContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::ParameterdeclarationContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::ParameterdeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitParameterdeclaration(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::ParameterdeclarationContext* CPP14Parser::parameterdeclaration( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<ParameterdeclarationContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 274, CPP14Parser::RuleParameterdeclaration);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1889);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 220, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(1859);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket)
			{
				setState(1858); //951
				attributespecifierseq(0,ctx);
			}
			setState(1861); //951
			declspecifierseq(ctx);
			setState(1862); //951
			declarator(ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(1865);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket)
			{
				setState(1864); //951
				attributespecifierseq(0,ctx);
			}
			setState(1867); //951
			declspecifierseq(ctx);
			setState(1868); //951
			declarator(ctx);
			setState(1869);//958
			match(CPP14Parser::Assign,ctx);
			setState(1870); //951
			initializerclause(ctx);
			break;
		}

		case 3:
		{
			enterOuterAlt(ctx, 3);
			setState(1873);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket)
			{
				setState(1872); //951
				attributespecifierseq(0,ctx);
			}
			setState(1875); //951
			declspecifierseq(ctx);
			setState(1877);//848
			_errHandler->sync(this, ctx);

			switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 217, ctx))
			{
			case 1:
			{
				setState(1876); //951
				abstractdeclarator(ctx);
				break;
			}

			}
			break;
		}

		case 4:
		{
			enterOuterAlt(ctx, 4);
			setState(1880);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket)
			{
				setState(1879); //951
				attributespecifierseq(0,ctx);
			}
			setState(1882); //951
			declspecifierseq(ctx);
			setState(1884);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::T__2

			|| _la == CPP14Parser::Decltype || ((((_la - 84) & ~ 0x3fULL) == 0) &&
				((1ULL << (_la - 84)) & ((1ULL << (CPP14Parser::LeftParen - 84))
				| (1ULL << (CPP14Parser::LeftBracket - 84))
				| (1ULL << (CPP14Parser::Star - 84))
				| (1ULL << (CPP14Parser::And - 84))
				| (1ULL << (CPP14Parser::Doublecolon - 84))
				| (1ULL << (CPP14Parser::Ellipsis - 84))
				| (1ULL << (CPP14Parser::Identifier - 84)))) != 0))
			{
				setState(1883); //951
				abstractdeclarator(ctx);
			}
			setState(1886);//958
			match(CPP14Parser::Assign,ctx);
			setState(1887); //951
			initializerclause(ctx);
			break;
		}

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

//----------------- FunctiondefinitionContext ------------------------------------------------------------------

CPP14Parser::FunctiondefinitionContext::FunctiondefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::DeclaratorContext* CPP14Parser::FunctiondefinitionContext::declarator()
{
	return getRuleContext<CPP14Parser::DeclaratorContext>(0);//1165
}

CPP14Parser::FunctionbodyContext* CPP14Parser::FunctiondefinitionContext::functionbody()
{
	return getRuleContext<CPP14Parser::FunctionbodyContext>(0);//1165
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::FunctiondefinitionContext::attributespecifierseq()
{
	return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);//1165
}

CPP14Parser::DeclspecifierseqContext* CPP14Parser::FunctiondefinitionContext::declspecifierseq()
{
	return getRuleContext<CPP14Parser::DeclspecifierseqContext>(0);//1165
}

CPP14Parser::VirtspecifierseqContext* CPP14Parser::FunctiondefinitionContext::virtspecifierseq()
{
	return getRuleContext<CPP14Parser::VirtspecifierseqContext>(0);//1165
}


size_t CPP14Parser::FunctiondefinitionContext::getRuleIndex() const
{
	return CPP14Parser::RuleFunctiondefinition;//688
}

void CPP14Parser::FunctiondefinitionContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::FunctiondefinitionContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::FunctiondefinitionContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitFunctiondefinition(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::FunctiondefinitionContext* CPP14Parser::functiondefinition( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<FunctiondefinitionContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 276, CPP14Parser::RuleFunctiondefinition);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(1892);//788
		_errHandler->sync(this, ctx);

		_la = _input->LA(1);
		if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket)
		{
			setState(1891); //951
			attributespecifierseq(0,ctx);
		}
		setState(1895);//848
		_errHandler->sync(this, ctx);

		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 222, ctx))
		{
		case 1:
		{
			setState(1894); //951
			declspecifierseq(ctx);
			break;
		}

		}
		setState(1897); //951
		declarator(ctx);
		setState(1899);//788
		_errHandler->sync(this, ctx);

		_la = _input->LA(1);
		if (_la == CPP14Parser::Final

		|| _la == CPP14Parser::Override)
		{
			setState(1898); //951
			virtspecifierseq(0,ctx);
		}
		setState(1901); //951
		functionbody(ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- FunctionbodyContext ------------------------------------------------------------------

CPP14Parser::FunctionbodyContext::FunctionbodyContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::CompoundstatementContext* CPP14Parser::FunctionbodyContext::compoundstatement()
{
	return getRuleContext<CPP14Parser::CompoundstatementContext>(0);//1165
}

CPP14Parser::CtorinitializerContext* CPP14Parser::FunctionbodyContext::ctorinitializer()
{
	return getRuleContext<CPP14Parser::CtorinitializerContext>(0);//1165
}

CPP14Parser::FunctiontryblockContext* CPP14Parser::FunctionbodyContext::functiontryblock()
{
	return getRuleContext<CPP14Parser::FunctiontryblockContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::FunctionbodyContext::Assign()
{
	return getToken(CPP14Parser::Assign, 0);
}

tree::TerminalNode* CPP14Parser::FunctionbodyContext::Default()
{
	return getToken(CPP14Parser::Default, 0);
}

tree::TerminalNode* CPP14Parser::FunctionbodyContext::Semi()
{
	return getToken(CPP14Parser::Semi, 0);
}

tree::TerminalNode* CPP14Parser::FunctionbodyContext::Delete()
{
	return getToken(CPP14Parser::Delete, 0);
}


size_t CPP14Parser::FunctionbodyContext::getRuleIndex() const
{
	return CPP14Parser::RuleFunctionbody;//688
}

void CPP14Parser::FunctionbodyContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::FunctionbodyContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::FunctionbodyContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitFunctionbody(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::FunctionbodyContext* CPP14Parser::functionbody( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<FunctionbodyContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 278, CPP14Parser::RuleFunctionbody);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1914);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 225, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(1904);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Colon)
			{
				setState(1903); //951
				ctorinitializer(ctx);
			}
			setState(1906); //951
			compoundstatement(ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(1907); //951
			functiontryblock(ctx);
			break;
		}

		case 3:
		{
			enterOuterAlt(ctx, 3);
			setState(1908);//958
			match(CPP14Parser::Assign,ctx);
			setState(1909);//958
			match(CPP14Parser::Default,ctx);
			setState(1910);//958
			match(CPP14Parser::Semi,ctx);
			break;
		}

		case 4:
		{
			enterOuterAlt(ctx, 4);
			setState(1911);//958
			match(CPP14Parser::Assign,ctx);
			setState(1912);//958
			match(CPP14Parser::Delete,ctx);
			setState(1913);//958
			match(CPP14Parser::Semi,ctx);
			break;
		}

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

//----------------- InitializerContext ------------------------------------------------------------------

CPP14Parser::InitializerContext::InitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::BraceorequalinitializerContext* CPP14Parser::InitializerContext::braceorequalinitializer()
{
	return getRuleContext<CPP14Parser::BraceorequalinitializerContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::InitializerContext::LeftParen()
{
	return getToken(CPP14Parser::LeftParen, 0);
}

CPP14Parser::ExpressionlistContext* CPP14Parser::InitializerContext::expressionlist()
{
	return getRuleContext<CPP14Parser::ExpressionlistContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::InitializerContext::RightParen()
{
	return getToken(CPP14Parser::RightParen, 0);
}


size_t CPP14Parser::InitializerContext::getRuleIndex() const
{
	return CPP14Parser::RuleInitializer;//688
}

void CPP14Parser::InitializerContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::InitializerContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::InitializerContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitInitializer(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::InitializerContext* CPP14Parser::initializer( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<InitializerContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 280, CPP14Parser::RuleInitializer);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1921);//750
		_errHandler->sync(this, ctx);
		switch (_input->LA(1))
		{
			case CPP14Parser::LeftBrace:
			case CPP14Parser::Assign:
			{
				enterOuterAlt(ctx, 1);
				setState(1916); //951
				braceorequalinitializer(ctx);
				break;
			}

			case CPP14Parser::LeftParen:
			{
				enterOuterAlt(ctx, 2);
				setState(1917);//958
				match(CPP14Parser::LeftParen,ctx);
				setState(1918); //951
				expressionlist(ctx);
				setState(1919);//958
				match(CPP14Parser::RightParen,ctx);
				break;
			}

		default:
			throw NoViableAltException(this, ctx);
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

//----------------- BraceorequalinitializerContext ------------------------------------------------------------------

CPP14Parser::BraceorequalinitializerContext::BraceorequalinitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::BraceorequalinitializerContext::Assign()
{
	return getToken(CPP14Parser::Assign, 0);
}

CPP14Parser::InitializerclauseContext* CPP14Parser::BraceorequalinitializerContext::initializerclause()
{
	return getRuleContext<CPP14Parser::InitializerclauseContext>(0);//1165
}

CPP14Parser::BracedinitlistContext* CPP14Parser::BraceorequalinitializerContext::bracedinitlist()
{
	return getRuleContext<CPP14Parser::BracedinitlistContext>(0);//1165
}


size_t CPP14Parser::BraceorequalinitializerContext::getRuleIndex() const
{
	return CPP14Parser::RuleBraceorequalinitializer;//688
}

void CPP14Parser::BraceorequalinitializerContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::BraceorequalinitializerContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::BraceorequalinitializerContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitBraceorequalinitializer(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::BraceorequalinitializerContext* CPP14Parser::braceorequalinitializer( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<BraceorequalinitializerContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 282, CPP14Parser::RuleBraceorequalinitializer);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1926);//750
		_errHandler->sync(this, ctx);
		switch (_input->LA(1))
		{
			case CPP14Parser::Assign:
			{
				enterOuterAlt(ctx, 1);
				setState(1923);//958
				match(CPP14Parser::Assign,ctx);
				setState(1924); //951
				initializerclause(ctx);
				break;
			}

			case CPP14Parser::LeftBrace:
			{
				enterOuterAlt(ctx, 2);
				setState(1925); //951
				bracedinitlist(ctx);
				break;
			}

		default:
			throw NoViableAltException(this, ctx);
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

//----------------- InitializerclauseContext ------------------------------------------------------------------

CPP14Parser::InitializerclauseContext::InitializerclauseContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::AssignmentexpressionContext* CPP14Parser::InitializerclauseContext::assignmentexpression()
{
	return getRuleContext<CPP14Parser::AssignmentexpressionContext>(0);//1165
}

CPP14Parser::BracedinitlistContext* CPP14Parser::InitializerclauseContext::bracedinitlist()
{
	return getRuleContext<CPP14Parser::BracedinitlistContext>(0);//1165
}


size_t CPP14Parser::InitializerclauseContext::getRuleIndex() const
{
	return CPP14Parser::RuleInitializerclause;//688
}

void CPP14Parser::InitializerclauseContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::InitializerclauseContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::InitializerclauseContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitInitializerclause(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::InitializerclauseContext* CPP14Parser::initializerclause( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<InitializerclauseContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 284, CPP14Parser::RuleInitializerclause);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1930);//750
		_errHandler->sync(this, ctx);
		switch (_input->LA(1))
		{
			case CPP14Parser::T__0:
			case CPP14Parser::T__1:
			case CPP14Parser::Alignof:
			case CPP14Parser::Auto:
			case CPP14Parser::Bool:
			case CPP14Parser::Char:
			case CPP14Parser::Char16:
			case CPP14Parser::Char32:
			case CPP14Parser::Const_cast:
			case CPP14Parser::Decltype:
			case CPP14Parser::Delete:
			case CPP14Parser::Double:
			case CPP14Parser::Dynamic_cast:
			case CPP14Parser::False:
			case CPP14Parser::Float:
			case CPP14Parser::Int:
			case CPP14Parser::Long:
			case CPP14Parser::New:
			case CPP14Parser::Noexcept:
			case CPP14Parser::Nullptr:
			case CPP14Parser::Operator:
			case CPP14Parser::Reinterpret_cast:
			case CPP14Parser::Short:
			case CPP14Parser::Signed:
			case CPP14Parser::Sizeof:
			case CPP14Parser::Static_cast:
			case CPP14Parser::This:
			case CPP14Parser::Throw:
			case CPP14Parser::True:
			case CPP14Parser::Typeid_:
			case CPP14Parser::Typename_:
			case CPP14Parser::Unsigned:
			case CPP14Parser::Void:
			case CPP14Parser::Wchar:
			case CPP14Parser::LeftParen:
			case CPP14Parser::LeftBracket:
			case CPP14Parser::Plus:
			case CPP14Parser::Minus:
			case CPP14Parser::Star:
			case CPP14Parser::And:
			case CPP14Parser::Or:
			case CPP14Parser::Tilde:
			case CPP14Parser::PlusPlus:
			case CPP14Parser::MinusMinus:
			case CPP14Parser::Doublecolon:
			case CPP14Parser::Identifier:
			case CPP14Parser::Integerliteral:
			case CPP14Parser::Characterliteral:
			case CPP14Parser::Floatingliteral:
			case CPP14Parser::Stringliteral:
			case CPP14Parser::Userdefinedintegerliteral:
			case CPP14Parser::Userdefinedfloatingliteral:
			case CPP14Parser::Userdefinedstringliteral:
			case CPP14Parser::Userdefinedcharacterliteral:
			{
				enterOuterAlt(ctx, 1);
				setState(1928); //951
				assignmentexpression(ctx);
				break;
			}

			case CPP14Parser::LeftBrace:
			{
				enterOuterAlt(ctx, 2);
				setState(1929); //951
				bracedinitlist(ctx);
				break;
			}

		default:
			throw NoViableAltException(this, ctx);
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

//----------------- InitializerlistContext ------------------------------------------------------------------

CPP14Parser::InitializerlistContext::InitializerlistContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::InitializerclauseContext* CPP14Parser::InitializerlistContext::initializerclause()
{
	return getRuleContext<CPP14Parser::InitializerclauseContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::InitializerlistContext::Ellipsis()
{
	return getToken(CPP14Parser::Ellipsis, 0);
}

CPP14Parser::InitializerlistContext* CPP14Parser::InitializerlistContext::initializerlist()
{
	return getRuleContext<CPP14Parser::InitializerlistContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::InitializerlistContext::Comma()
{
	return getToken(CPP14Parser::Comma, 0);
}


size_t CPP14Parser::InitializerlistContext::getRuleIndex() const
{
	return CPP14Parser::RuleInitializerlist;//688
}

void CPP14Parser::InitializerlistContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::InitializerlistContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::InitializerlistContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitInitializerlist(this);
	else
		return visitor->visitChildren(this);
}


CPP14Parser::InitializerlistContext* CPP14Parser::initializerlist()
{
	 return initializerlist(0, nullptr);//600
}

CPP14Parser::InitializerlistContext* CPP14Parser::initializerlist(int precedence, antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	antlr4::ParserRuleContext *parentContext = parent;
	size_t parentState = getState();
	auto _localctx = std::make_unique<InitializerlistContext>(parentContext, parentState);//610
	auto ctx = _localctx.get();//609
	size_t startState = 286;
	enterRecursionRule(ctx, 286, CPP14Parser::RuleInitializerlist, precedence);

		

	auto onExit = finally([=,&_localctx]
{
		unrollRecursionContexts(parentContext, std::move(_localctx));
	});
	try
{
		size_t alt;
		enterOuterAlt(ctx, 1);
		setState(1933); //951
		initializerclause(ctx);
		setState(1935);//848
		_errHandler->sync(this, ctx);

		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 229, ctx))
		{
		case 1:
		{
			setState(1934);//958
			match(CPP14Parser::Ellipsis,ctx);
			break;
		}

		}
		ctx->stop = _input->LT(-1);
		setState(1945);//865
		_errHandler->sync(this, ctx);
		alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 231, ctx);
		while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
		{
			if (alt == 1)
		{
				if (!_parseListeners.empty())
					triggerExitRuleEvent(ctx);

				auto tmpContext = std::make_unique<InitializerlistContext>(parentContext, parentState);
				pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleInitializerlist);//1240
				_localctx = std::move(tmpContext);
				ctx = _localctx.get();
				setState(1937);//1002

				if (!(precpred(nullptr, 1))) throw FailedPredicateException(this, "precpred(nullptr, 1)", ctx);
				setState(1938);//958
				match(CPP14Parser::Comma,ctx);
				setState(1939); //951
				initializerclause(ctx);
				setState(1941);//848
				_errHandler->sync(this, ctx);

				switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 230, ctx))
				{
				case 1:
				{
					setState(1940);//958
					match(CPP14Parser::Ellipsis,ctx);
					break;
				}

				} 
			}
			setState(1947);//875
			_errHandler->sync(this, ctx);
			alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 231, ctx);
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

//----------------- BracedinitlistContext ------------------------------------------------------------------

CPP14Parser::BracedinitlistContext::BracedinitlistContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::BracedinitlistContext::LeftBrace()
{
	return getToken(CPP14Parser::LeftBrace, 0);
}

CPP14Parser::InitializerlistContext* CPP14Parser::BracedinitlistContext::initializerlist()
{
	return getRuleContext<CPP14Parser::InitializerlistContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::BracedinitlistContext::RightBrace()
{
	return getToken(CPP14Parser::RightBrace, 0);
}

tree::TerminalNode* CPP14Parser::BracedinitlistContext::Comma()
{
	return getToken(CPP14Parser::Comma, 0);
}


size_t CPP14Parser::BracedinitlistContext::getRuleIndex() const
{
	return CPP14Parser::RuleBracedinitlist;//688
}

void CPP14Parser::BracedinitlistContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::BracedinitlistContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::BracedinitlistContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitBracedinitlist(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::BracedinitlistContext* CPP14Parser::bracedinitlist( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<BracedinitlistContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 288, CPP14Parser::RuleBracedinitlist);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1957);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 233, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(1948);//958
			match(CPP14Parser::LeftBrace,ctx);
			setState(1949); //951
			initializerlist(0,ctx);
			setState(1951);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Comma)
			{
				setState(1950);//958
				match(CPP14Parser::Comma,ctx);
			}
			setState(1953);//958
			match(CPP14Parser::RightBrace,ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(1955);//958
			match(CPP14Parser::LeftBrace,ctx);
			setState(1956);//958
			match(CPP14Parser::RightBrace,ctx);
			break;
		}

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

//----------------- ClassnameContext ------------------------------------------------------------------

CPP14Parser::ClassnameContext::ClassnameContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::ClassnameContext::Identifier()
{
	return getToken(CPP14Parser::Identifier, 0);
}

CPP14Parser::SimpletemplateidContext* CPP14Parser::ClassnameContext::simpletemplateid()
{
	return getRuleContext<CPP14Parser::SimpletemplateidContext>(0);//1165
}


size_t CPP14Parser::ClassnameContext::getRuleIndex() const
{
	return CPP14Parser::RuleClassname;//688
}

void CPP14Parser::ClassnameContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::ClassnameContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::ClassnameContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitClassname(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::ClassnameContext* CPP14Parser::classname( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<ClassnameContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 290, CPP14Parser::RuleClassname);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1961);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 234, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(1959);//958
			match(CPP14Parser::Identifier,ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(1960); //951
			simpletemplateid(ctx);
			break;
		}

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

//----------------- ClassspecifierContext ------------------------------------------------------------------

CPP14Parser::ClassspecifierContext::ClassspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::ClassheadContext* CPP14Parser::ClassspecifierContext::classhead()
{
	return getRuleContext<CPP14Parser::ClassheadContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::ClassspecifierContext::LeftBrace()
{
	return getToken(CPP14Parser::LeftBrace, 0);
}

tree::TerminalNode* CPP14Parser::ClassspecifierContext::RightBrace()
{
	return getToken(CPP14Parser::RightBrace, 0);
}

CPP14Parser::MemberspecificationContext* CPP14Parser::ClassspecifierContext::memberspecification()
{
	return getRuleContext<CPP14Parser::MemberspecificationContext>(0);//1165
}


size_t CPP14Parser::ClassspecifierContext::getRuleIndex() const
{
	return CPP14Parser::RuleClassspecifier;//688
}

void CPP14Parser::ClassspecifierContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::ClassspecifierContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::ClassspecifierContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitClassspecifier(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::ClassspecifierContext* CPP14Parser::classspecifier( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<ClassspecifierContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 292, CPP14Parser::RuleClassspecifier);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(1963); //951
		classhead(ctx);
		setState(1964);//958
		match(CPP14Parser::LeftBrace,ctx);
		setState(1966);//788
		_errHandler->sync(this, ctx);

		_la = _input->LA(1);
		if ((((_la & ~ 0x3fULL) == 0) &&
			((1ULL << _la) & ((1ULL << CPP14Parser::T__2)
			| (1ULL << CPP14Parser::Alignas)
			| (1ULL << CPP14Parser::Auto)
			| (1ULL << CPP14Parser::Bool)
			| (1ULL << CPP14Parser::Char)
			| (1ULL << CPP14Parser::Char16)
			| (1ULL << CPP14Parser::Char32)
			| (1ULL << CPP14Parser::Class)
			| (1ULL << CPP14Parser::Const)
			| (1ULL << CPP14Parser::Constexpr)
			| (1ULL << CPP14Parser::Decltype)
			| (1ULL << CPP14Parser::Double)
			| (1ULL << CPP14Parser::Enum)
			| (1ULL << CPP14Parser::Explicit)
			| (1ULL << CPP14Parser::Extern)
			| (1ULL << CPP14Parser::Float)
			| (1ULL << CPP14Parser::Friend)
			| (1ULL << CPP14Parser::Inline)
			| (1ULL << CPP14Parser::Int)
			| (1ULL << CPP14Parser::Long)
			| (1ULL << CPP14Parser::Mutable)
			| (1ULL << CPP14Parser::Operator)
			| (1ULL << CPP14Parser::Private)
			| (1ULL << CPP14Parser::Protected)
			| (1ULL << CPP14Parser::Public)
			| (1ULL << CPP14Parser::Register)
			| (1ULL << CPP14Parser::Short)
			| (1ULL << CPP14Parser::Signed)
			| (1ULL << CPP14Parser::Static)
			| (1ULL << CPP14Parser::Static_assert))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
			((1ULL << (_la - 65)) & ((1ULL << (CPP14Parser::Struct - 65))
			| (1ULL << (CPP14Parser::Template - 65))
			| (1ULL << (CPP14Parser::Thread_local - 65))
			| (1ULL << (CPP14Parser::Typedef - 65))
			| (1ULL << (CPP14Parser::Typename_ - 65))
			| (1ULL << (CPP14Parser::Union - 65))
			| (1ULL << (CPP14Parser::Unsigned - 65))
			| (1ULL << (CPP14Parser::Using - 65))
			| (1ULL << (CPP14Parser::Virtual - 65))
			| (1ULL << (CPP14Parser::Void - 65))
			| (1ULL << (CPP14Parser::Volatile - 65))
			| (1ULL << (CPP14Parser::Wchar - 65))
			| (1ULL << (CPP14Parser::LeftParen - 65))
			| (1ULL << (CPP14Parser::LeftBracket - 65))
			| (1ULL << (CPP14Parser::Star - 65))
			| (1ULL << (CPP14Parser::And - 65))
			| (1ULL << (CPP14Parser::Tilde - 65))
			| (1ULL << (CPP14Parser::Colon - 65))
			| (1ULL << (CPP14Parser::Doublecolon - 65)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
			((1ULL << (_la - 129)) & ((1ULL << (CPP14Parser::Semi - 129))
			| (1ULL << (CPP14Parser::Ellipsis - 129))
			| (1ULL << (CPP14Parser::Identifier - 129)))) != 0))
		{
			setState(1965); //951
			memberspecification(ctx);
		}
		setState(1968);//958
		match(CPP14Parser::RightBrace,ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- ClassheadContext ------------------------------------------------------------------

CPP14Parser::ClassheadContext::ClassheadContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::ClasskeyContext* CPP14Parser::ClassheadContext::classkey()
{
	return getRuleContext<CPP14Parser::ClasskeyContext>(0);//1165
}

CPP14Parser::ClassheadnameContext* CPP14Parser::ClassheadContext::classheadname()
{
	return getRuleContext<CPP14Parser::ClassheadnameContext>(0);//1165
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::ClassheadContext::attributespecifierseq()
{
	return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);//1165
}

CPP14Parser::ClassvirtspecifierContext* CPP14Parser::ClassheadContext::classvirtspecifier()
{
	return getRuleContext<CPP14Parser::ClassvirtspecifierContext>(0);//1165
}

CPP14Parser::BaseclauseContext* CPP14Parser::ClassheadContext::baseclause()
{
	return getRuleContext<CPP14Parser::BaseclauseContext>(0);//1165
}


size_t CPP14Parser::ClassheadContext::getRuleIndex() const
{
	return CPP14Parser::RuleClasshead;//688
}

void CPP14Parser::ClassheadContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::ClassheadContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::ClassheadContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitClasshead(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::ClassheadContext* CPP14Parser::classhead( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<ClassheadContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 294, CPP14Parser::RuleClasshead);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(1988);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 241, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(1970); //951
			classkey(ctx);
			setState(1972);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket)
			{
				setState(1971); //951
				attributespecifierseq(0,ctx);
			}
			setState(1974); //951
			classheadname(ctx);
			setState(1976);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Final)
			{
				setState(1975); //951
				classvirtspecifier(ctx);
			}
			setState(1979);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Colon)
			{
				setState(1978); //951
				baseclause(ctx);
			}
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(1981); //951
			classkey(ctx);
			setState(1983);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket)
			{
				setState(1982); //951
				attributespecifierseq(0,ctx);
			}
			setState(1986);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Colon)
			{
				setState(1985); //951
				baseclause(ctx);
			}
			break;
		}

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

//----------------- ClassheadnameContext ------------------------------------------------------------------

CPP14Parser::ClassheadnameContext::ClassheadnameContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::ClassnameContext* CPP14Parser::ClassheadnameContext::classname()
{
	return getRuleContext<CPP14Parser::ClassnameContext>(0);//1165
}

CPP14Parser::NestednamespecifierContext* CPP14Parser::ClassheadnameContext::nestednamespecifier()
{
	return getRuleContext<CPP14Parser::NestednamespecifierContext>(0);//1165
}


size_t CPP14Parser::ClassheadnameContext::getRuleIndex() const
{
	return CPP14Parser::RuleClassheadname;//688
}

void CPP14Parser::ClassheadnameContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::ClassheadnameContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::ClassheadnameContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitClassheadname(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::ClassheadnameContext* CPP14Parser::classheadname( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<ClassheadnameContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 296, CPP14Parser::RuleClassheadname);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(1991);//848
		_errHandler->sync(this, ctx);

		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 242, ctx))
		{
		case 1:
		{
			setState(1990); //951
			nestednamespecifier(0,ctx);
			break;
		}

		}
		setState(1993); //951
		classname(ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- ClassvirtspecifierContext ------------------------------------------------------------------

CPP14Parser::ClassvirtspecifierContext::ClassvirtspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::ClassvirtspecifierContext::Final()
{
	return getToken(CPP14Parser::Final, 0);
}


size_t CPP14Parser::ClassvirtspecifierContext::getRuleIndex() const
{
	return CPP14Parser::RuleClassvirtspecifier;//688
}

void CPP14Parser::ClassvirtspecifierContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::ClassvirtspecifierContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::ClassvirtspecifierContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitClassvirtspecifier(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::ClassvirtspecifierContext* CPP14Parser::classvirtspecifier( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<ClassvirtspecifierContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 298, CPP14Parser::RuleClassvirtspecifier);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(1995);//958
		match(CPP14Parser::Final,ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- ClasskeyContext ------------------------------------------------------------------

CPP14Parser::ClasskeyContext::ClasskeyContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::ClasskeyContext::Class()
{
	return getToken(CPP14Parser::Class, 0);
}

tree::TerminalNode* CPP14Parser::ClasskeyContext::Struct()
{
	return getToken(CPP14Parser::Struct, 0);
}

tree::TerminalNode* CPP14Parser::ClasskeyContext::Union()
{
	return getToken(CPP14Parser::Union, 0);
}


size_t CPP14Parser::ClasskeyContext::getRuleIndex() const
{
	return CPP14Parser::RuleClasskey;//688
}

void CPP14Parser::ClasskeyContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::ClasskeyContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::ClasskeyContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitClasskey(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::ClasskeyContext* CPP14Parser::classkey( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<ClasskeyContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 300, CPP14Parser::RuleClasskey);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(1997);//970
		_la = _input->LA(1);
		if (!(((((_la - 20) & ~ 0x3fULL) == 0) &&
			((1ULL << (_la - 20)) & ((1ULL << (CPP14Parser::Class - 20))
			| (1ULL << (CPP14Parser::Struct - 20))
			| (1ULL << (CPP14Parser::Union - 20)))) != 0)))
		{
		_errHandler->recoverInline(this, ctx);
		}
		else
		{
			_errHandler->reportMatch(this);
			consume(ctx);
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

//----------------- MemberspecificationContext ------------------------------------------------------------------

CPP14Parser::MemberspecificationContext::MemberspecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::MemberdeclarationContext* CPP14Parser::MemberspecificationContext::memberdeclaration()
{
	return getRuleContext<CPP14Parser::MemberdeclarationContext>(0);//1165
}

CPP14Parser::MemberspecificationContext* CPP14Parser::MemberspecificationContext::memberspecification()
{
	return getRuleContext<CPP14Parser::MemberspecificationContext>(0);//1165
}

CPP14Parser::AccessspecifierContext* CPP14Parser::MemberspecificationContext::accessspecifier()
{
	return getRuleContext<CPP14Parser::AccessspecifierContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::MemberspecificationContext::Colon()
{
	return getToken(CPP14Parser::Colon, 0);
}


size_t CPP14Parser::MemberspecificationContext::getRuleIndex() const
{
	return CPP14Parser::RuleMemberspecification;//688
}

void CPP14Parser::MemberspecificationContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::MemberspecificationContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::MemberspecificationContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitMemberspecification(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::MemberspecificationContext* CPP14Parser::memberspecification( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<MemberspecificationContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 302, CPP14Parser::RuleMemberspecification);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(2008);//750
		_errHandler->sync(this, ctx);
		switch (_input->LA(1))
		{
			case CPP14Parser::T__2:
			case CPP14Parser::Alignas:
			case CPP14Parser::Auto:
			case CPP14Parser::Bool:
			case CPP14Parser::Char:
			case CPP14Parser::Char16:
			case CPP14Parser::Char32:
			case CPP14Parser::Class:
			case CPP14Parser::Const:
			case CPP14Parser::Constexpr:
			case CPP14Parser::Decltype:
			case CPP14Parser::Double:
			case CPP14Parser::Enum:
			case CPP14Parser::Explicit:
			case CPP14Parser::Extern:
			case CPP14Parser::Float:
			case CPP14Parser::Friend:
			case CPP14Parser::Inline:
			case CPP14Parser::Int:
			case CPP14Parser::Long:
			case CPP14Parser::Mutable:
			case CPP14Parser::Operator:
			case CPP14Parser::Register:
			case CPP14Parser::Short:
			case CPP14Parser::Signed:
			case CPP14Parser::Static:
			case CPP14Parser::Static_assert:
			case CPP14Parser::Struct:
			case CPP14Parser::Template:
			case CPP14Parser::Thread_local:
			case CPP14Parser::Typedef:
			case CPP14Parser::Typename_:
			case CPP14Parser::Union:
			case CPP14Parser::Unsigned:
			case CPP14Parser::Using:
			case CPP14Parser::Virtual:
			case CPP14Parser::Void:
			case CPP14Parser::Volatile:
			case CPP14Parser::Wchar:
			case CPP14Parser::LeftParen:
			case CPP14Parser::LeftBracket:
			case CPP14Parser::Star:
			case CPP14Parser::And:
			case CPP14Parser::Tilde:
			case CPP14Parser::Colon:
			case CPP14Parser::Doublecolon:
			case CPP14Parser::Semi:
			case CPP14Parser::Ellipsis:
			case CPP14Parser::Identifier:
			{
				enterOuterAlt(ctx, 1);
				setState(1999); //951
				memberdeclaration(ctx);
				setState(2001);//788
				_errHandler->sync(this, ctx);

				_la = _input->LA(1);
				if ((((_la & ~ 0x3fULL) == 0) &&
					((1ULL << _la) & ((1ULL << CPP14Parser::T__2)
					| (1ULL << CPP14Parser::Alignas)
					| (1ULL << CPP14Parser::Auto)
					| (1ULL << CPP14Parser::Bool)
					| (1ULL << CPP14Parser::Char)
					| (1ULL << CPP14Parser::Char16)
					| (1ULL << CPP14Parser::Char32)
					| (1ULL << CPP14Parser::Class)
					| (1ULL << CPP14Parser::Const)
					| (1ULL << CPP14Parser::Constexpr)
					| (1ULL << CPP14Parser::Decltype)
					| (1ULL << CPP14Parser::Double)
					| (1ULL << CPP14Parser::Enum)
					| (1ULL << CPP14Parser::Explicit)
					| (1ULL << CPP14Parser::Extern)
					| (1ULL << CPP14Parser::Float)
					| (1ULL << CPP14Parser::Friend)
					| (1ULL << CPP14Parser::Inline)
					| (1ULL << CPP14Parser::Int)
					| (1ULL << CPP14Parser::Long)
					| (1ULL << CPP14Parser::Mutable)
					| (1ULL << CPP14Parser::Operator)
					| (1ULL << CPP14Parser::Private)
					| (1ULL << CPP14Parser::Protected)
					| (1ULL << CPP14Parser::Public)
					| (1ULL << CPP14Parser::Register)
					| (1ULL << CPP14Parser::Short)
					| (1ULL << CPP14Parser::Signed)
					| (1ULL << CPP14Parser::Static)
					| (1ULL << CPP14Parser::Static_assert))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
					((1ULL << (_la - 65)) & ((1ULL << (CPP14Parser::Struct - 65))
					| (1ULL << (CPP14Parser::Template - 65))
					| (1ULL << (CPP14Parser::Thread_local - 65))
					| (1ULL << (CPP14Parser::Typedef - 65))
					| (1ULL << (CPP14Parser::Typename_ - 65))
					| (1ULL << (CPP14Parser::Union - 65))
					| (1ULL << (CPP14Parser::Unsigned - 65))
					| (1ULL << (CPP14Parser::Using - 65))
					| (1ULL << (CPP14Parser::Virtual - 65))
					| (1ULL << (CPP14Parser::Void - 65))
					| (1ULL << (CPP14Parser::Volatile - 65))
					| (1ULL << (CPP14Parser::Wchar - 65))
					| (1ULL << (CPP14Parser::LeftParen - 65))
					| (1ULL << (CPP14Parser::LeftBracket - 65))
					| (1ULL << (CPP14Parser::Star - 65))
					| (1ULL << (CPP14Parser::And - 65))
					| (1ULL << (CPP14Parser::Tilde - 65))
					| (1ULL << (CPP14Parser::Colon - 65))
					| (1ULL << (CPP14Parser::Doublecolon - 65)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
					((1ULL << (_la - 129)) & ((1ULL << (CPP14Parser::Semi - 129))
					| (1ULL << (CPP14Parser::Ellipsis - 129))
					| (1ULL << (CPP14Parser::Identifier - 129)))) != 0))
				{
					setState(2000); //951
					memberspecification(ctx);
				}
				break;
			}

			case CPP14Parser::Private:
			case CPP14Parser::Protected:
			case CPP14Parser::Public:
			{
				enterOuterAlt(ctx, 2);
				setState(2003); //951
				accessspecifier(ctx);
				setState(2004);//958
				match(CPP14Parser::Colon,ctx);
				setState(2006);//788
				_errHandler->sync(this, ctx);

				_la = _input->LA(1);
				if ((((_la & ~ 0x3fULL) == 0) &&
					((1ULL << _la) & ((1ULL << CPP14Parser::T__2)
					| (1ULL << CPP14Parser::Alignas)
					| (1ULL << CPP14Parser::Auto)
					| (1ULL << CPP14Parser::Bool)
					| (1ULL << CPP14Parser::Char)
					| (1ULL << CPP14Parser::Char16)
					| (1ULL << CPP14Parser::Char32)
					| (1ULL << CPP14Parser::Class)
					| (1ULL << CPP14Parser::Const)
					| (1ULL << CPP14Parser::Constexpr)
					| (1ULL << CPP14Parser::Decltype)
					| (1ULL << CPP14Parser::Double)
					| (1ULL << CPP14Parser::Enum)
					| (1ULL << CPP14Parser::Explicit)
					| (1ULL << CPP14Parser::Extern)
					| (1ULL << CPP14Parser::Float)
					| (1ULL << CPP14Parser::Friend)
					| (1ULL << CPP14Parser::Inline)
					| (1ULL << CPP14Parser::Int)
					| (1ULL << CPP14Parser::Long)
					| (1ULL << CPP14Parser::Mutable)
					| (1ULL << CPP14Parser::Operator)
					| (1ULL << CPP14Parser::Private)
					| (1ULL << CPP14Parser::Protected)
					| (1ULL << CPP14Parser::Public)
					| (1ULL << CPP14Parser::Register)
					| (1ULL << CPP14Parser::Short)
					| (1ULL << CPP14Parser::Signed)
					| (1ULL << CPP14Parser::Static)
					| (1ULL << CPP14Parser::Static_assert))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
					((1ULL << (_la - 65)) & ((1ULL << (CPP14Parser::Struct - 65))
					| (1ULL << (CPP14Parser::Template - 65))
					| (1ULL << (CPP14Parser::Thread_local - 65))
					| (1ULL << (CPP14Parser::Typedef - 65))
					| (1ULL << (CPP14Parser::Typename_ - 65))
					| (1ULL << (CPP14Parser::Union - 65))
					| (1ULL << (CPP14Parser::Unsigned - 65))
					| (1ULL << (CPP14Parser::Using - 65))
					| (1ULL << (CPP14Parser::Virtual - 65))
					| (1ULL << (CPP14Parser::Void - 65))
					| (1ULL << (CPP14Parser::Volatile - 65))
					| (1ULL << (CPP14Parser::Wchar - 65))
					| (1ULL << (CPP14Parser::LeftParen - 65))
					| (1ULL << (CPP14Parser::LeftBracket - 65))
					| (1ULL << (CPP14Parser::Star - 65))
					| (1ULL << (CPP14Parser::And - 65))
					| (1ULL << (CPP14Parser::Tilde - 65))
					| (1ULL << (CPP14Parser::Colon - 65))
					| (1ULL << (CPP14Parser::Doublecolon - 65)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
					((1ULL << (_la - 129)) & ((1ULL << (CPP14Parser::Semi - 129))
					| (1ULL << (CPP14Parser::Ellipsis - 129))
					| (1ULL << (CPP14Parser::Identifier - 129)))) != 0))
				{
					setState(2005); //951
					memberspecification(ctx);
				}
				break;
			}

		default:
			throw NoViableAltException(this, ctx);
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

//----------------- MemberdeclarationContext ------------------------------------------------------------------

CPP14Parser::MemberdeclarationContext::MemberdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::MemberdeclarationContext::Semi()
{
	return getToken(CPP14Parser::Semi, 0);
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::MemberdeclarationContext::attributespecifierseq()
{
	return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);//1165
}

CPP14Parser::DeclspecifierseqContext* CPP14Parser::MemberdeclarationContext::declspecifierseq()
{
	return getRuleContext<CPP14Parser::DeclspecifierseqContext>(0);//1165
}

CPP14Parser::MemberdeclaratorlistContext* CPP14Parser::MemberdeclarationContext::memberdeclaratorlist()
{
	return getRuleContext<CPP14Parser::MemberdeclaratorlistContext>(0);//1165
}

CPP14Parser::FunctiondefinitionContext* CPP14Parser::MemberdeclarationContext::functiondefinition()
{
	return getRuleContext<CPP14Parser::FunctiondefinitionContext>(0);//1165
}

CPP14Parser::UsingdeclarationContext* CPP14Parser::MemberdeclarationContext::usingdeclaration()
{
	return getRuleContext<CPP14Parser::UsingdeclarationContext>(0);//1165
}

CPP14Parser::Static_assertdeclarationContext* CPP14Parser::MemberdeclarationContext::static_assertdeclaration()
{
	return getRuleContext<CPP14Parser::Static_assertdeclarationContext>(0);//1165
}

CPP14Parser::TemplatedeclarationContext* CPP14Parser::MemberdeclarationContext::templatedeclaration()
{
	return getRuleContext<CPP14Parser::TemplatedeclarationContext>(0);//1165
}

CPP14Parser::AliasdeclarationContext* CPP14Parser::MemberdeclarationContext::aliasdeclaration()
{
	return getRuleContext<CPP14Parser::AliasdeclarationContext>(0);//1165
}

CPP14Parser::EmptydeclarationContext* CPP14Parser::MemberdeclarationContext::emptydeclaration()
{
	return getRuleContext<CPP14Parser::EmptydeclarationContext>(0);//1165
}


size_t CPP14Parser::MemberdeclarationContext::getRuleIndex() const
{
	return CPP14Parser::RuleMemberdeclaration;//688
}

void CPP14Parser::MemberdeclarationContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::MemberdeclarationContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::MemberdeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitMemberdeclaration(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::MemberdeclarationContext* CPP14Parser::memberdeclaration( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<MemberdeclarationContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 304, CPP14Parser::RuleMemberdeclaration);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(2026);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 249, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(2011);//848
			_errHandler->sync(this, ctx);

			switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 246, ctx))
			{
			case 1:
			{
				setState(2010); //951
				attributespecifierseq(0,ctx);
				break;
			}

			}
			setState(2014);//848
			_errHandler->sync(this, ctx);

			switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 247, ctx))
			{
			case 1:
			{
				setState(2013); //951
				declspecifierseq(ctx);
				break;
			}

			}
			setState(2017);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if ((((_la & ~ 0x3fULL) == 0) &&
				((1ULL << _la) & ((1ULL << CPP14Parser::T__2)
				| (1ULL << CPP14Parser::Alignas)
				| (1ULL << CPP14Parser::Decltype)
				| (1ULL << CPP14Parser::Operator))) != 0) || ((((_la - 84) & ~ 0x3fULL) == 0) &&
				((1ULL << (_la - 84)) & ((1ULL << (CPP14Parser::LeftParen - 84))
				| (1ULL << (CPP14Parser::LeftBracket - 84))
				| (1ULL << (CPP14Parser::Star - 84))
				| (1ULL << (CPP14Parser::And - 84))
				| (1ULL << (CPP14Parser::Tilde - 84))
				| (1ULL << (CPP14Parser::Colon - 84))
				| (1ULL << (CPP14Parser::Doublecolon - 84))
				| (1ULL << (CPP14Parser::Ellipsis - 84))
				| (1ULL << (CPP14Parser::Identifier - 84)))) != 0))
			{
				setState(2016); //951
				memberdeclaratorlist(0,ctx);
			}
			setState(2019);//958
			match(CPP14Parser::Semi,ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(2020); //951
			functiondefinition(ctx);
			break;
		}

		case 3:
		{
			enterOuterAlt(ctx, 3);
			setState(2021); //951
			usingdeclaration(ctx);
			break;
		}

		case 4:
		{
			enterOuterAlt(ctx, 4);
			setState(2022); //951
			static_assertdeclaration(ctx);
			break;
		}

		case 5:
		{
			enterOuterAlt(ctx, 5);
			setState(2023); //951
			templatedeclaration(ctx);
			break;
		}

		case 6:
		{
			enterOuterAlt(ctx, 6);
			setState(2024); //951
			aliasdeclaration(ctx);
			break;
		}

		case 7:
		{
			enterOuterAlt(ctx, 7);
			setState(2025); //951
			emptydeclaration(ctx);
			break;
		}

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

//----------------- MemberdeclaratorlistContext ------------------------------------------------------------------

CPP14Parser::MemberdeclaratorlistContext::MemberdeclaratorlistContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::MemberdeclaratorContext* CPP14Parser::MemberdeclaratorlistContext::memberdeclarator()
{
	return getRuleContext<CPP14Parser::MemberdeclaratorContext>(0);//1165
}

CPP14Parser::MemberdeclaratorlistContext* CPP14Parser::MemberdeclaratorlistContext::memberdeclaratorlist()
{
	return getRuleContext<CPP14Parser::MemberdeclaratorlistContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::MemberdeclaratorlistContext::Comma()
{
	return getToken(CPP14Parser::Comma, 0);
}


size_t CPP14Parser::MemberdeclaratorlistContext::getRuleIndex() const
{
	return CPP14Parser::RuleMemberdeclaratorlist;//688
}

void CPP14Parser::MemberdeclaratorlistContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::MemberdeclaratorlistContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::MemberdeclaratorlistContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitMemberdeclaratorlist(this);
	else
		return visitor->visitChildren(this);
}


CPP14Parser::MemberdeclaratorlistContext* CPP14Parser::memberdeclaratorlist()
{
	 return memberdeclaratorlist(0, nullptr);//600
}

CPP14Parser::MemberdeclaratorlistContext* CPP14Parser::memberdeclaratorlist(int precedence, antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	antlr4::ParserRuleContext *parentContext = parent;
	size_t parentState = getState();
	auto _localctx = std::make_unique<MemberdeclaratorlistContext>(parentContext, parentState);//610
	auto ctx = _localctx.get();//609
	size_t startState = 306;
	enterRecursionRule(ctx, 306, CPP14Parser::RuleMemberdeclaratorlist, precedence);

		

	auto onExit = finally([=,&_localctx]
{
		unrollRecursionContexts(parentContext, std::move(_localctx));
	});
	try
{
		size_t alt;
		enterOuterAlt(ctx, 1);
		setState(2029); //951
		memberdeclarator(ctx);
		ctx->stop = _input->LT(-1);
		setState(2036);//865
		_errHandler->sync(this, ctx);
		alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 250, ctx);
		while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
		{
			if (alt == 1)
		{
				if (!_parseListeners.empty())
					triggerExitRuleEvent(ctx);

				auto tmpContext = std::make_unique<MemberdeclaratorlistContext>(parentContext, parentState);
				pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleMemberdeclaratorlist);//1240
				_localctx = std::move(tmpContext);
				ctx = _localctx.get();
				setState(2031);//1002

				if (!(precpred(nullptr, 1))) throw FailedPredicateException(this, "precpred(nullptr, 1)", ctx);
				setState(2032);//958
				match(CPP14Parser::Comma,ctx);
				setState(2033); //951
				memberdeclarator(ctx); 
			}
			setState(2038);//875
			_errHandler->sync(this, ctx);
			alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 250, ctx);
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

//----------------- MemberdeclaratorContext ------------------------------------------------------------------

CPP14Parser::MemberdeclaratorContext::MemberdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::DeclaratorContext* CPP14Parser::MemberdeclaratorContext::declarator()
{
	return getRuleContext<CPP14Parser::DeclaratorContext>(0);//1165
}

CPP14Parser::VirtspecifierseqContext* CPP14Parser::MemberdeclaratorContext::virtspecifierseq()
{
	return getRuleContext<CPP14Parser::VirtspecifierseqContext>(0);//1165
}

CPP14Parser::PurespecifierContext* CPP14Parser::MemberdeclaratorContext::purespecifier()
{
	return getRuleContext<CPP14Parser::PurespecifierContext>(0);//1165
}

CPP14Parser::BraceorequalinitializerContext* CPP14Parser::MemberdeclaratorContext::braceorequalinitializer()
{
	return getRuleContext<CPP14Parser::BraceorequalinitializerContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::MemberdeclaratorContext::Colon()
{
	return getToken(CPP14Parser::Colon, 0);
}

CPP14Parser::ConstantexpressionContext* CPP14Parser::MemberdeclaratorContext::constantexpression()
{
	return getRuleContext<CPP14Parser::ConstantexpressionContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::MemberdeclaratorContext::Identifier()
{
	return getToken(CPP14Parser::Identifier, 0);
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::MemberdeclaratorContext::attributespecifierseq()
{
	return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);//1165
}


size_t CPP14Parser::MemberdeclaratorContext::getRuleIndex() const
{
	return CPP14Parser::RuleMemberdeclarator;//688
}

void CPP14Parser::MemberdeclaratorContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::MemberdeclaratorContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::MemberdeclaratorContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitMemberdeclarator(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::MemberdeclaratorContext* CPP14Parser::memberdeclarator( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<MemberdeclaratorContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 308, CPP14Parser::RuleMemberdeclarator);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(2058);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 256, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(2039); //951
			declarator(ctx);
			setState(2041);//848
			_errHandler->sync(this, ctx);

			switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 251, ctx))
			{
			case 1:
			{
				setState(2040); //951
				virtspecifierseq(0,ctx);
				break;
			}

			}
			setState(2044);//848
			_errHandler->sync(this, ctx);

			switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 252, ctx))
			{
			case 1:
			{
				setState(2043); //951
				purespecifier(ctx);
				break;
			}

			}
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(2046); //951
			declarator(ctx);
			setState(2048);//848
			_errHandler->sync(this, ctx);

			switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 253, ctx))
			{
			case 1:
			{
				setState(2047); //951
				braceorequalinitializer(ctx);
				break;
			}

			}
			break;
		}

		case 3:
		{
			enterOuterAlt(ctx, 3);
			setState(2051);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Identifier)
			{
				setState(2050);//958
				match(CPP14Parser::Identifier,ctx);
			}
			setState(2054);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket)
			{
				setState(2053); //951
				attributespecifierseq(0,ctx);
			}
			setState(2056);//958
			match(CPP14Parser::Colon,ctx);
			setState(2057); //951
			constantexpression(ctx);
			break;
		}

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

//----------------- VirtspecifierseqContext ------------------------------------------------------------------

CPP14Parser::VirtspecifierseqContext::VirtspecifierseqContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::VirtspecifierContext* CPP14Parser::VirtspecifierseqContext::virtspecifier()
{
	return getRuleContext<CPP14Parser::VirtspecifierContext>(0);//1165
}

CPP14Parser::VirtspecifierseqContext* CPP14Parser::VirtspecifierseqContext::virtspecifierseq()
{
	return getRuleContext<CPP14Parser::VirtspecifierseqContext>(0);//1165
}


size_t CPP14Parser::VirtspecifierseqContext::getRuleIndex() const
{
	return CPP14Parser::RuleVirtspecifierseq;//688
}

void CPP14Parser::VirtspecifierseqContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::VirtspecifierseqContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::VirtspecifierseqContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitVirtspecifierseq(this);
	else
		return visitor->visitChildren(this);
}


CPP14Parser::VirtspecifierseqContext* CPP14Parser::virtspecifierseq()
{
	 return virtspecifierseq(0, nullptr);//600
}

CPP14Parser::VirtspecifierseqContext* CPP14Parser::virtspecifierseq(int precedence, antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	antlr4::ParserRuleContext *parentContext = parent;
	size_t parentState = getState();
	auto _localctx = std::make_unique<VirtspecifierseqContext>(parentContext, parentState);//610
	auto ctx = _localctx.get();//609
	size_t startState = 310;
	enterRecursionRule(ctx, 310, CPP14Parser::RuleVirtspecifierseq, precedence);

		

	auto onExit = finally([=,&_localctx]
{
		unrollRecursionContexts(parentContext, std::move(_localctx));
	});
	try
{
		size_t alt;
		enterOuterAlt(ctx, 1);
		setState(2061); //951
		virtspecifier(ctx);
		ctx->stop = _input->LT(-1);
		setState(2067);//865
		_errHandler->sync(this, ctx);
		alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 257, ctx);
		while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
		{
			if (alt == 1)
		{
				if (!_parseListeners.empty())
					triggerExitRuleEvent(ctx);

				auto tmpContext = std::make_unique<VirtspecifierseqContext>(parentContext, parentState);
				pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleVirtspecifierseq);//1240
				_localctx = std::move(tmpContext);
				ctx = _localctx.get();
				setState(2063);//1002

				if (!(precpred(nullptr, 1))) throw FailedPredicateException(this, "precpred(nullptr, 1)", ctx);
				setState(2064); //951
				virtspecifier(ctx); 
			}
			setState(2069);//875
			_errHandler->sync(this, ctx);
			alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 257, ctx);
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

//----------------- VirtspecifierContext ------------------------------------------------------------------

CPP14Parser::VirtspecifierContext::VirtspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::VirtspecifierContext::Override()
{
	return getToken(CPP14Parser::Override, 0);
}

tree::TerminalNode* CPP14Parser::VirtspecifierContext::Final()
{
	return getToken(CPP14Parser::Final, 0);
}


size_t CPP14Parser::VirtspecifierContext::getRuleIndex() const
{
	return CPP14Parser::RuleVirtspecifier;//688
}

void CPP14Parser::VirtspecifierContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::VirtspecifierContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::VirtspecifierContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitVirtspecifier(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::VirtspecifierContext* CPP14Parser::virtspecifier( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<VirtspecifierContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 312, CPP14Parser::RuleVirtspecifier);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(2070);//970
		_la = _input->LA(1);
		if (!(_la == CPP14Parser::Final

		|| _la == CPP14Parser::Override))
		{
		_errHandler->recoverInline(this, ctx);
		}
		else
		{
			_errHandler->reportMatch(this);
			consume(ctx);
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

//----------------- PurespecifierContext ------------------------------------------------------------------

CPP14Parser::PurespecifierContext::PurespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::PurespecifierContext::Assign()
{
	return getToken(CPP14Parser::Assign, 0);
}

tree::TerminalNode* CPP14Parser::PurespecifierContext::Octalliteral()
{
	return getToken(CPP14Parser::Octalliteral, 0);
}


size_t CPP14Parser::PurespecifierContext::getRuleIndex() const
{
	return CPP14Parser::RulePurespecifier;//688
}

void CPP14Parser::PurespecifierContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::PurespecifierContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::PurespecifierContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitPurespecifier(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::PurespecifierContext* CPP14Parser::purespecifier( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<PurespecifierContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 314, CPP14Parser::RulePurespecifier);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(2072);//958
		match(CPP14Parser::Assign,ctx);
		setState(2073);//958
		dynamic_cast<PurespecifierContext *>(_localctx.get())->val = match(CPP14Parser::Octalliteral,ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- BaseclauseContext ------------------------------------------------------------------

CPP14Parser::BaseclauseContext::BaseclauseContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::BaseclauseContext::Colon()
{
	return getToken(CPP14Parser::Colon, 0);
}

CPP14Parser::BasespecifierlistContext* CPP14Parser::BaseclauseContext::basespecifierlist()
{
	return getRuleContext<CPP14Parser::BasespecifierlistContext>(0);//1165
}


size_t CPP14Parser::BaseclauseContext::getRuleIndex() const
{
	return CPP14Parser::RuleBaseclause;//688
}

void CPP14Parser::BaseclauseContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::BaseclauseContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::BaseclauseContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitBaseclause(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::BaseclauseContext* CPP14Parser::baseclause( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<BaseclauseContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 316, CPP14Parser::RuleBaseclause);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(2075);//958
		match(CPP14Parser::Colon,ctx);
		setState(2076); //951
		basespecifierlist(0,ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- BasespecifierlistContext ------------------------------------------------------------------

CPP14Parser::BasespecifierlistContext::BasespecifierlistContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::BasespecifierContext* CPP14Parser::BasespecifierlistContext::basespecifier()
{
	return getRuleContext<CPP14Parser::BasespecifierContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::BasespecifierlistContext::Ellipsis()
{
	return getToken(CPP14Parser::Ellipsis, 0);
}

CPP14Parser::BasespecifierlistContext* CPP14Parser::BasespecifierlistContext::basespecifierlist()
{
	return getRuleContext<CPP14Parser::BasespecifierlistContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::BasespecifierlistContext::Comma()
{
	return getToken(CPP14Parser::Comma, 0);
}


size_t CPP14Parser::BasespecifierlistContext::getRuleIndex() const
{
	return CPP14Parser::RuleBasespecifierlist;//688
}

void CPP14Parser::BasespecifierlistContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::BasespecifierlistContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::BasespecifierlistContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitBasespecifierlist(this);
	else
		return visitor->visitChildren(this);
}


CPP14Parser::BasespecifierlistContext* CPP14Parser::basespecifierlist()
{
	 return basespecifierlist(0, nullptr);//600
}

CPP14Parser::BasespecifierlistContext* CPP14Parser::basespecifierlist(int precedence, antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	antlr4::ParserRuleContext *parentContext = parent;
	size_t parentState = getState();
	auto _localctx = std::make_unique<BasespecifierlistContext>(parentContext, parentState);//610
	auto ctx = _localctx.get();//609
	size_t startState = 318;
	enterRecursionRule(ctx, 318, CPP14Parser::RuleBasespecifierlist, precedence);

		

	auto onExit = finally([=,&_localctx]
{
		unrollRecursionContexts(parentContext, std::move(_localctx));
	});
	try
{
		size_t alt;
		enterOuterAlt(ctx, 1);
		setState(2079); //951
		basespecifier(ctx);
		setState(2081);//848
		_errHandler->sync(this, ctx);

		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 258, ctx))
		{
		case 1:
		{
			setState(2080);//958
			match(CPP14Parser::Ellipsis,ctx);
			break;
		}

		}
		ctx->stop = _input->LT(-1);
		setState(2091);//865
		_errHandler->sync(this, ctx);
		alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 260, ctx);
		while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
		{
			if (alt == 1)
		{
				if (!_parseListeners.empty())
					triggerExitRuleEvent(ctx);

				auto tmpContext = std::make_unique<BasespecifierlistContext>(parentContext, parentState);
				pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleBasespecifierlist);//1240
				_localctx = std::move(tmpContext);
				ctx = _localctx.get();
				setState(2083);//1002

				if (!(precpred(nullptr, 1))) throw FailedPredicateException(this, "precpred(nullptr, 1)", ctx);
				setState(2084);//958
				match(CPP14Parser::Comma,ctx);
				setState(2085); //951
				basespecifier(ctx);
				setState(2087);//848
				_errHandler->sync(this, ctx);

				switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 259, ctx))
				{
				case 1:
				{
					setState(2086);//958
					match(CPP14Parser::Ellipsis,ctx);
					break;
				}

				} 
			}
			setState(2093);//875
			_errHandler->sync(this, ctx);
			alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 260, ctx);
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

//----------------- BasespecifierContext ------------------------------------------------------------------

CPP14Parser::BasespecifierContext::BasespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::BasetypespecifierContext* CPP14Parser::BasespecifierContext::basetypespecifier()
{
	return getRuleContext<CPP14Parser::BasetypespecifierContext>(0);//1165
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::BasespecifierContext::attributespecifierseq()
{
	return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::BasespecifierContext::Virtual()
{
	return getToken(CPP14Parser::Virtual, 0);
}

CPP14Parser::AccessspecifierContext* CPP14Parser::BasespecifierContext::accessspecifier()
{
	return getRuleContext<CPP14Parser::AccessspecifierContext>(0);//1165
}


size_t CPP14Parser::BasespecifierContext::getRuleIndex() const
{
	return CPP14Parser::RuleBasespecifier;//688
}

void CPP14Parser::BasespecifierContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::BasespecifierContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::BasespecifierContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitBasespecifier(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::BasespecifierContext* CPP14Parser::basespecifier( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<BasespecifierContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 320, CPP14Parser::RuleBasespecifier);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(2115);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 266, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(2095);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket)
			{
				setState(2094); //951
				attributespecifierseq(0,ctx);
			}
			setState(2097); //951
			basetypespecifier(ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(2099);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket)
			{
				setState(2098); //951
				attributespecifierseq(0,ctx);
			}
			setState(2101);//958
			match(CPP14Parser::Virtual,ctx);
			setState(2103);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if ((((_la & ~ 0x3fULL) == 0) &&
				((1ULL << _la) & ((1ULL << CPP14Parser::Private)
				| (1ULL << CPP14Parser::Protected)
				| (1ULL << CPP14Parser::Public))) != 0))
			{
				setState(2102); //951
				accessspecifier(ctx);
			}
			setState(2105); //951
			basetypespecifier(ctx);
			break;
		}

		case 3:
		{
			enterOuterAlt(ctx, 3);
			setState(2107);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket)
			{
				setState(2106); //951
				attributespecifierseq(0,ctx);
			}
			setState(2109); //951
			accessspecifier(ctx);
			setState(2111);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Virtual)
			{
				setState(2110);//958
				match(CPP14Parser::Virtual,ctx);
			}
			setState(2113); //951
			basetypespecifier(ctx);
			break;
		}

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

//----------------- ClassordecltypeContext ------------------------------------------------------------------

CPP14Parser::ClassordecltypeContext::ClassordecltypeContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::ClassnameContext* CPP14Parser::ClassordecltypeContext::classname()
{
	return getRuleContext<CPP14Parser::ClassnameContext>(0);//1165
}

CPP14Parser::NestednamespecifierContext* CPP14Parser::ClassordecltypeContext::nestednamespecifier()
{
	return getRuleContext<CPP14Parser::NestednamespecifierContext>(0);//1165
}

CPP14Parser::DecltypespecifierContext* CPP14Parser::ClassordecltypeContext::decltypespecifier()
{
	return getRuleContext<CPP14Parser::DecltypespecifierContext>(0);//1165
}


size_t CPP14Parser::ClassordecltypeContext::getRuleIndex() const
{
	return CPP14Parser::RuleClassordecltype;//688
}

void CPP14Parser::ClassordecltypeContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::ClassordecltypeContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::ClassordecltypeContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitClassordecltype(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::ClassordecltypeContext* CPP14Parser::classordecltype( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<ClassordecltypeContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 322, CPP14Parser::RuleClassordecltype);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(2122);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 268, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(2118);//848
			_errHandler->sync(this, ctx);

			switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 267, ctx))
			{
			case 1:
			{
				setState(2117); //951
				nestednamespecifier(0,ctx);
				break;
			}

			}
			setState(2120); //951
			classname(ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(2121); //951
			decltypespecifier(ctx);
			break;
		}

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

//----------------- BasetypespecifierContext ------------------------------------------------------------------

CPP14Parser::BasetypespecifierContext::BasetypespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::ClassordecltypeContext* CPP14Parser::BasetypespecifierContext::classordecltype()
{
	return getRuleContext<CPP14Parser::ClassordecltypeContext>(0);//1165
}


size_t CPP14Parser::BasetypespecifierContext::getRuleIndex() const
{
	return CPP14Parser::RuleBasetypespecifier;//688
}

void CPP14Parser::BasetypespecifierContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::BasetypespecifierContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::BasetypespecifierContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitBasetypespecifier(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::BasetypespecifierContext* CPP14Parser::basetypespecifier( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<BasetypespecifierContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 324, CPP14Parser::RuleBasetypespecifier);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(2124); //951
		classordecltype(ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- AccessspecifierContext ------------------------------------------------------------------

CPP14Parser::AccessspecifierContext::AccessspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::AccessspecifierContext::Private()
{
	return getToken(CPP14Parser::Private, 0);
}

tree::TerminalNode* CPP14Parser::AccessspecifierContext::Protected()
{
	return getToken(CPP14Parser::Protected, 0);
}

tree::TerminalNode* CPP14Parser::AccessspecifierContext::Public()
{
	return getToken(CPP14Parser::Public, 0);
}


size_t CPP14Parser::AccessspecifierContext::getRuleIndex() const
{
	return CPP14Parser::RuleAccessspecifier;//688
}

void CPP14Parser::AccessspecifierContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::AccessspecifierContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::AccessspecifierContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitAccessspecifier(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::AccessspecifierContext* CPP14Parser::accessspecifier( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<AccessspecifierContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 326, CPP14Parser::RuleAccessspecifier);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(2126);//970
		_la = _input->LA(1);
		if (!((((_la & ~ 0x3fULL) == 0) &&
			((1ULL << _la) & ((1ULL << CPP14Parser::Private)
			| (1ULL << CPP14Parser::Protected)
			| (1ULL << CPP14Parser::Public))) != 0)))
		{
		_errHandler->recoverInline(this, ctx);
		}
		else
		{
			_errHandler->reportMatch(this);
			consume(ctx);
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

//----------------- ConversionfunctionidContext ------------------------------------------------------------------

CPP14Parser::ConversionfunctionidContext::ConversionfunctionidContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::ConversionfunctionidContext::Operator()
{
	return getToken(CPP14Parser::Operator, 0);
}

CPP14Parser::ConversiontypeidContext* CPP14Parser::ConversionfunctionidContext::conversiontypeid()
{
	return getRuleContext<CPP14Parser::ConversiontypeidContext>(0);//1165
}


size_t CPP14Parser::ConversionfunctionidContext::getRuleIndex() const
{
	return CPP14Parser::RuleConversionfunctionid;//688
}

void CPP14Parser::ConversionfunctionidContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::ConversionfunctionidContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::ConversionfunctionidContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitConversionfunctionid(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::ConversionfunctionidContext* CPP14Parser::conversionfunctionid( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<ConversionfunctionidContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 328, CPP14Parser::RuleConversionfunctionid);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(2128);//958
		match(CPP14Parser::Operator,ctx);
		setState(2129); //951
		conversiontypeid(ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- ConversiontypeidContext ------------------------------------------------------------------

CPP14Parser::ConversiontypeidContext::ConversiontypeidContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::TypespecifierseqContext* CPP14Parser::ConversiontypeidContext::typespecifierseq()
{
	return getRuleContext<CPP14Parser::TypespecifierseqContext>(0);//1165
}

CPP14Parser::ConversiondeclaratorContext* CPP14Parser::ConversiontypeidContext::conversiondeclarator()
{
	return getRuleContext<CPP14Parser::ConversiondeclaratorContext>(0);//1165
}


size_t CPP14Parser::ConversiontypeidContext::getRuleIndex() const
{
	return CPP14Parser::RuleConversiontypeid;//688
}

void CPP14Parser::ConversiontypeidContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::ConversiontypeidContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::ConversiontypeidContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitConversiontypeid(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::ConversiontypeidContext* CPP14Parser::conversiontypeid( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<ConversiontypeidContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 330, CPP14Parser::RuleConversiontypeid);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(2131); //951
		typespecifierseq(ctx);
		setState(2133);//848
		_errHandler->sync(this, ctx);

		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 269, ctx))
		{
		case 1:
		{
			setState(2132); //951
			conversiondeclarator(ctx);
			break;
		}

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

//----------------- ConversiondeclaratorContext ------------------------------------------------------------------

CPP14Parser::ConversiondeclaratorContext::ConversiondeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::PtroperatorContext* CPP14Parser::ConversiondeclaratorContext::ptroperator()
{
	return getRuleContext<CPP14Parser::PtroperatorContext>(0);//1165
}

CPP14Parser::ConversiondeclaratorContext* CPP14Parser::ConversiondeclaratorContext::conversiondeclarator()
{
	return getRuleContext<CPP14Parser::ConversiondeclaratorContext>(0);//1165
}


size_t CPP14Parser::ConversiondeclaratorContext::getRuleIndex() const
{
	return CPP14Parser::RuleConversiondeclarator;//688
}

void CPP14Parser::ConversiondeclaratorContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::ConversiondeclaratorContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::ConversiondeclaratorContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitConversiondeclarator(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::ConversiondeclaratorContext* CPP14Parser::conversiondeclarator( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<ConversiondeclaratorContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 332, CPP14Parser::RuleConversiondeclarator);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(2135); //951
		ptroperator(ctx);
		setState(2137);//848
		_errHandler->sync(this, ctx);

		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 270, ctx))
		{
		case 1:
		{
			setState(2136); //951
			conversiondeclarator(ctx);
			break;
		}

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

//----------------- CtorinitializerContext ------------------------------------------------------------------

CPP14Parser::CtorinitializerContext::CtorinitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::CtorinitializerContext::Colon()
{
	return getToken(CPP14Parser::Colon, 0);
}

CPP14Parser::MeminitializerlistContext* CPP14Parser::CtorinitializerContext::meminitializerlist()
{
	return getRuleContext<CPP14Parser::MeminitializerlistContext>(0);//1165
}


size_t CPP14Parser::CtorinitializerContext::getRuleIndex() const
{
	return CPP14Parser::RuleCtorinitializer;//688
}

void CPP14Parser::CtorinitializerContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::CtorinitializerContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::CtorinitializerContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitCtorinitializer(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::CtorinitializerContext* CPP14Parser::ctorinitializer( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<CtorinitializerContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 334, CPP14Parser::RuleCtorinitializer);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(2139);//958
		match(CPP14Parser::Colon,ctx);
		setState(2140); //951
		meminitializerlist(ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- MeminitializerlistContext ------------------------------------------------------------------

CPP14Parser::MeminitializerlistContext::MeminitializerlistContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::MeminitializerContext* CPP14Parser::MeminitializerlistContext::meminitializer()
{
	return getRuleContext<CPP14Parser::MeminitializerContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::MeminitializerlistContext::Ellipsis()
{
	return getToken(CPP14Parser::Ellipsis, 0);
}

tree::TerminalNode* CPP14Parser::MeminitializerlistContext::Comma()
{
	return getToken(CPP14Parser::Comma, 0);
}

CPP14Parser::MeminitializerlistContext* CPP14Parser::MeminitializerlistContext::meminitializerlist()
{
	return getRuleContext<CPP14Parser::MeminitializerlistContext>(0);//1165
}


size_t CPP14Parser::MeminitializerlistContext::getRuleIndex() const
{
	return CPP14Parser::RuleMeminitializerlist;//688
}

void CPP14Parser::MeminitializerlistContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::MeminitializerlistContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::MeminitializerlistContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitMeminitializerlist(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::MeminitializerlistContext* CPP14Parser::meminitializerlist( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<MeminitializerlistContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 336, CPP14Parser::RuleMeminitializerlist);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(2153);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 273, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(2142); //951
			meminitializer(ctx);
			setState(2144);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Ellipsis)
			{
				setState(2143);//958
				match(CPP14Parser::Ellipsis,ctx);
			}
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(2146); //951
			meminitializer(ctx);
			setState(2148);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Ellipsis)
			{
				setState(2147);//958
				match(CPP14Parser::Ellipsis,ctx);
			}
			setState(2150);//958
			match(CPP14Parser::Comma,ctx);
			setState(2151); //951
			meminitializerlist(ctx);
			break;
		}

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

//----------------- MeminitializerContext ------------------------------------------------------------------

CPP14Parser::MeminitializerContext::MeminitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::MeminitializeridContext* CPP14Parser::MeminitializerContext::meminitializerid()
{
	return getRuleContext<CPP14Parser::MeminitializeridContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::MeminitializerContext::LeftParen()
{
	return getToken(CPP14Parser::LeftParen, 0);
}

tree::TerminalNode* CPP14Parser::MeminitializerContext::RightParen()
{
	return getToken(CPP14Parser::RightParen, 0);
}

CPP14Parser::ExpressionlistContext* CPP14Parser::MeminitializerContext::expressionlist()
{
	return getRuleContext<CPP14Parser::ExpressionlistContext>(0);//1165
}

CPP14Parser::BracedinitlistContext* CPP14Parser::MeminitializerContext::bracedinitlist()
{
	return getRuleContext<CPP14Parser::BracedinitlistContext>(0);//1165
}


size_t CPP14Parser::MeminitializerContext::getRuleIndex() const
{
	return CPP14Parser::RuleMeminitializer;//688
}

void CPP14Parser::MeminitializerContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::MeminitializerContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::MeminitializerContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitMeminitializer(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::MeminitializerContext* CPP14Parser::meminitializer( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<MeminitializerContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 338, CPP14Parser::RuleMeminitializer);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(2165);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 275, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(2155); //951
			meminitializerid(ctx);
			setState(2156);//958
			match(CPP14Parser::LeftParen,ctx);
			setState(2158);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if ((((_la & ~ 0x3fULL) == 0) &&
				((1ULL << _la) & ((1ULL << CPP14Parser::T__0)
				| (1ULL << CPP14Parser::T__1)
				| (1ULL << CPP14Parser::Alignof)
				| (1ULL << CPP14Parser::Auto)
				| (1ULL << CPP14Parser::Bool)
				| (1ULL << CPP14Parser::Char)
				| (1ULL << CPP14Parser::Char16)
				| (1ULL << CPP14Parser::Char32)
				| (1ULL << CPP14Parser::Const_cast)
				| (1ULL << CPP14Parser::Decltype)
				| (1ULL << CPP14Parser::Delete)
				| (1ULL << CPP14Parser::Double)
				| (1ULL << CPP14Parser::Dynamic_cast)
				| (1ULL << CPP14Parser::False)
				| (1ULL << CPP14Parser::Float)
				| (1ULL << CPP14Parser::Int)
				| (1ULL << CPP14Parser::Long)
				| (1ULL << CPP14Parser::New)
				| (1ULL << CPP14Parser::Noexcept)
				| (1ULL << CPP14Parser::Nullptr)
				| (1ULL << CPP14Parser::Operator)
				| (1ULL << CPP14Parser::Reinterpret_cast)
				| (1ULL << CPP14Parser::Short)
				| (1ULL << CPP14Parser::Signed)
				| (1ULL << CPP14Parser::Sizeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
				((1ULL << (_la - 64)) & ((1ULL << (CPP14Parser::Static_cast - 64))
				| (1ULL << (CPP14Parser::This - 64))
				| (1ULL << (CPP14Parser::Throw - 64))
				| (1ULL << (CPP14Parser::True - 64))
				| (1ULL << (CPP14Parser::Typeid_ - 64))
				| (1ULL << (CPP14Parser::Typename_ - 64))
				| (1ULL << (CPP14Parser::Unsigned - 64))
				| (1ULL << (CPP14Parser::Void - 64))
				| (1ULL << (CPP14Parser::Wchar - 64))
				| (1ULL << (CPP14Parser::LeftParen - 64))
				| (1ULL << (CPP14Parser::LeftBracket - 64))
				| (1ULL << (CPP14Parser::LeftBrace - 64))
				| (1ULL << (CPP14Parser::Plus - 64))
				| (1ULL << (CPP14Parser::Minus - 64))
				| (1ULL << (CPP14Parser::Star - 64))
				| (1ULL << (CPP14Parser::And - 64))
				| (1ULL << (CPP14Parser::Or - 64))
				| (1ULL << (CPP14Parser::Tilde - 64))
				| (1ULL << (CPP14Parser::PlusPlus - 64))
				| (1ULL << (CPP14Parser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
				((1ULL << (_la - 128)) & ((1ULL << (CPP14Parser::Doublecolon - 128))
				| (1ULL << (CPP14Parser::Identifier - 128))
				| (1ULL << (CPP14Parser::Integerliteral - 128))
				| (1ULL << (CPP14Parser::Characterliteral - 128))
				| (1ULL << (CPP14Parser::Floatingliteral - 128))
				| (1ULL << (CPP14Parser::Stringliteral - 128))
				| (1ULL << (CPP14Parser::Userdefinedintegerliteral - 128))
				| (1ULL << (CPP14Parser::Userdefinedfloatingliteral - 128))
				| (1ULL << (CPP14Parser::Userdefinedstringliteral - 128))
				| (1ULL << (CPP14Parser::Userdefinedcharacterliteral - 128)))) != 0))
			{
				setState(2157); //951
				expressionlist(ctx);
			}
			setState(2160);//958
			match(CPP14Parser::RightParen,ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(2162); //951
			meminitializerid(ctx);
			setState(2163); //951
			bracedinitlist(ctx);
			break;
		}

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

//----------------- MeminitializeridContext ------------------------------------------------------------------

CPP14Parser::MeminitializeridContext::MeminitializeridContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::ClassordecltypeContext* CPP14Parser::MeminitializeridContext::classordecltype()
{
	return getRuleContext<CPP14Parser::ClassordecltypeContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::MeminitializeridContext::Identifier()
{
	return getToken(CPP14Parser::Identifier, 0);
}


size_t CPP14Parser::MeminitializeridContext::getRuleIndex() const
{
	return CPP14Parser::RuleMeminitializerid;//688
}

void CPP14Parser::MeminitializeridContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::MeminitializeridContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::MeminitializeridContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitMeminitializerid(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::MeminitializeridContext* CPP14Parser::meminitializerid( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<MeminitializeridContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 340, CPP14Parser::RuleMeminitializerid);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(2169);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 276, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(2167); //951
			classordecltype(ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(2168);//958
			match(CPP14Parser::Identifier,ctx);
			break;
		}

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

//----------------- OperatorfunctionidContext ------------------------------------------------------------------

CPP14Parser::OperatorfunctionidContext::OperatorfunctionidContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::OperatorfunctionidContext::Operator()
{
	return getToken(CPP14Parser::Operator, 0);
}

CPP14Parser::TheoperatorContext* CPP14Parser::OperatorfunctionidContext::theoperator()
{
	return getRuleContext<CPP14Parser::TheoperatorContext>(0);//1165
}


size_t CPP14Parser::OperatorfunctionidContext::getRuleIndex() const
{
	return CPP14Parser::RuleOperatorfunctionid;//688
}

void CPP14Parser::OperatorfunctionidContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::OperatorfunctionidContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::OperatorfunctionidContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitOperatorfunctionid(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::OperatorfunctionidContext* CPP14Parser::operatorfunctionid( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<OperatorfunctionidContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 342, CPP14Parser::RuleOperatorfunctionid);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(2171);//958
		match(CPP14Parser::Operator,ctx);
		setState(2172); //951
		theoperator(ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- LiteraloperatoridContext ------------------------------------------------------------------

CPP14Parser::LiteraloperatoridContext::LiteraloperatoridContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::LiteraloperatoridContext::Operator()
{
	return getToken(CPP14Parser::Operator, 0);
}

tree::TerminalNode* CPP14Parser::LiteraloperatoridContext::Stringliteral()
{
	return getToken(CPP14Parser::Stringliteral, 0);
}

tree::TerminalNode* CPP14Parser::LiteraloperatoridContext::Identifier()
{
	return getToken(CPP14Parser::Identifier, 0);
}

tree::TerminalNode* CPP14Parser::LiteraloperatoridContext::Userdefinedstringliteral()
{
	return getToken(CPP14Parser::Userdefinedstringliteral, 0);
}


size_t CPP14Parser::LiteraloperatoridContext::getRuleIndex() const
{
	return CPP14Parser::RuleLiteraloperatorid;//688
}

void CPP14Parser::LiteraloperatoridContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::LiteraloperatoridContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::LiteraloperatoridContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitLiteraloperatorid(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::LiteraloperatoridContext* CPP14Parser::literaloperatorid( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<LiteraloperatoridContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 344, CPP14Parser::RuleLiteraloperatorid);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(2179);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 277, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(2174);//958
			match(CPP14Parser::Operator,ctx);
			setState(2175);//958
			match(CPP14Parser::Stringliteral,ctx);
			setState(2176);//958
			match(CPP14Parser::Identifier,ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(2177);//958
			match(CPP14Parser::Operator,ctx);
			setState(2178);//958
			match(CPP14Parser::Userdefinedstringliteral,ctx);
			break;
		}

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

//----------------- TemplatedeclarationContext ------------------------------------------------------------------

CPP14Parser::TemplatedeclarationContext::TemplatedeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::TemplatedeclarationContext::Template()
{
	return getToken(CPP14Parser::Template, 0);
}

tree::TerminalNode* CPP14Parser::TemplatedeclarationContext::Less()
{
	return getToken(CPP14Parser::Less, 0);
}

CPP14Parser::TemplateparameterlistContext* CPP14Parser::TemplatedeclarationContext::templateparameterlist()
{
	return getRuleContext<CPP14Parser::TemplateparameterlistContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::TemplatedeclarationContext::Greater()
{
	return getToken(CPP14Parser::Greater, 0);
}

CPP14Parser::DeclarationContext* CPP14Parser::TemplatedeclarationContext::declaration()
{
	return getRuleContext<CPP14Parser::DeclarationContext>(0);//1165
}


size_t CPP14Parser::TemplatedeclarationContext::getRuleIndex() const
{
	return CPP14Parser::RuleTemplatedeclaration;//688
}

void CPP14Parser::TemplatedeclarationContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::TemplatedeclarationContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::TemplatedeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitTemplatedeclaration(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::TemplatedeclarationContext* CPP14Parser::templatedeclaration( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<TemplatedeclarationContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 346, CPP14Parser::RuleTemplatedeclaration);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(2181);//958
		match(CPP14Parser::Template,ctx);
		setState(2182);//958
		match(CPP14Parser::Less,ctx);
		setState(2183); //951
		templateparameterlist(0,ctx);
		setState(2184);//958
		match(CPP14Parser::Greater,ctx);
		setState(2185); //951
		declaration(ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- TemplateparameterlistContext ------------------------------------------------------------------

CPP14Parser::TemplateparameterlistContext::TemplateparameterlistContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::TemplateparameterContext* CPP14Parser::TemplateparameterlistContext::templateparameter()
{
	return getRuleContext<CPP14Parser::TemplateparameterContext>(0);//1165
}

CPP14Parser::TemplateparameterlistContext* CPP14Parser::TemplateparameterlistContext::templateparameterlist()
{
	return getRuleContext<CPP14Parser::TemplateparameterlistContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::TemplateparameterlistContext::Comma()
{
	return getToken(CPP14Parser::Comma, 0);
}


size_t CPP14Parser::TemplateparameterlistContext::getRuleIndex() const
{
	return CPP14Parser::RuleTemplateparameterlist;//688
}

void CPP14Parser::TemplateparameterlistContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::TemplateparameterlistContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::TemplateparameterlistContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitTemplateparameterlist(this);
	else
		return visitor->visitChildren(this);
}


CPP14Parser::TemplateparameterlistContext* CPP14Parser::templateparameterlist()
{
	 return templateparameterlist(0, nullptr);//600
}

CPP14Parser::TemplateparameterlistContext* CPP14Parser::templateparameterlist(int precedence, antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	antlr4::ParserRuleContext *parentContext = parent;
	size_t parentState = getState();
	auto _localctx = std::make_unique<TemplateparameterlistContext>(parentContext, parentState);//610
	auto ctx = _localctx.get();//609
	size_t startState = 348;
	enterRecursionRule(ctx, 348, CPP14Parser::RuleTemplateparameterlist, precedence);

		

	auto onExit = finally([=,&_localctx]
{
		unrollRecursionContexts(parentContext, std::move(_localctx));
	});
	try
{
		size_t alt;
		enterOuterAlt(ctx, 1);
		setState(2188); //951
		templateparameter(ctx);
		ctx->stop = _input->LT(-1);
		setState(2195);//865
		_errHandler->sync(this, ctx);
		alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 278, ctx);
		while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
		{
			if (alt == 1)
		{
				if (!_parseListeners.empty())
					triggerExitRuleEvent(ctx);

				auto tmpContext = std::make_unique<TemplateparameterlistContext>(parentContext, parentState);
				pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleTemplateparameterlist);//1240
				_localctx = std::move(tmpContext);
				ctx = _localctx.get();
				setState(2190);//1002

				if (!(precpred(nullptr, 1))) throw FailedPredicateException(this, "precpred(nullptr, 1)", ctx);
				setState(2191);//958
				match(CPP14Parser::Comma,ctx);
				setState(2192); //951
				templateparameter(ctx); 
			}
			setState(2197);//875
			_errHandler->sync(this, ctx);
			alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 278, ctx);
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

//----------------- TemplateparameterContext ------------------------------------------------------------------

CPP14Parser::TemplateparameterContext::TemplateparameterContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::TypeparameterContext* CPP14Parser::TemplateparameterContext::typeparameter()
{
	return getRuleContext<CPP14Parser::TypeparameterContext>(0);//1165
}

CPP14Parser::ParameterdeclarationContext* CPP14Parser::TemplateparameterContext::parameterdeclaration()
{
	return getRuleContext<CPP14Parser::ParameterdeclarationContext>(0);//1165
}


size_t CPP14Parser::TemplateparameterContext::getRuleIndex() const
{
	return CPP14Parser::RuleTemplateparameter;//688
}

void CPP14Parser::TemplateparameterContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::TemplateparameterContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::TemplateparameterContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitTemplateparameter(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::TemplateparameterContext* CPP14Parser::templateparameter( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<TemplateparameterContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 350, CPP14Parser::RuleTemplateparameter);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(2200);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 279, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(2198); //951
			typeparameter(ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(2199); //951
			parameterdeclaration(ctx);
			break;
		}

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

//----------------- TypeparameterContext ------------------------------------------------------------------

CPP14Parser::TypeparameterContext::TypeparameterContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::TypeparameterContext::Class()
{
	return getToken(CPP14Parser::Class, 0);
}

tree::TerminalNode* CPP14Parser::TypeparameterContext::Ellipsis()
{
	return getToken(CPP14Parser::Ellipsis, 0);
}

tree::TerminalNode* CPP14Parser::TypeparameterContext::Identifier()
{
	return getToken(CPP14Parser::Identifier, 0);
}

tree::TerminalNode* CPP14Parser::TypeparameterContext::Assign()
{
	return getToken(CPP14Parser::Assign, 0);
}

CPP14Parser::ThetypeidContext* CPP14Parser::TypeparameterContext::thetypeid()
{
	return getRuleContext<CPP14Parser::ThetypeidContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::TypeparameterContext::Typename_()
{
	return getToken(CPP14Parser::Typename_, 0);
}

tree::TerminalNode* CPP14Parser::TypeparameterContext::Template()
{
	return getToken(CPP14Parser::Template, 0);
}

tree::TerminalNode* CPP14Parser::TypeparameterContext::Less()
{
	return getToken(CPP14Parser::Less, 0);
}

CPP14Parser::TemplateparameterlistContext* CPP14Parser::TypeparameterContext::templateparameterlist()
{
	return getRuleContext<CPP14Parser::TemplateparameterlistContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::TypeparameterContext::Greater()
{
	return getToken(CPP14Parser::Greater, 0);
}

CPP14Parser::IdexpressionContext* CPP14Parser::TypeparameterContext::idexpression()
{
	return getRuleContext<CPP14Parser::IdexpressionContext>(0);//1165
}


size_t CPP14Parser::TypeparameterContext::getRuleIndex() const
{
	return CPP14Parser::RuleTypeparameter;//688
}

void CPP14Parser::TypeparameterContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::TypeparameterContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::TypeparameterContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitTypeparameter(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::TypeparameterContext* CPP14Parser::typeparameter( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<TypeparameterContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 352, CPP14Parser::RuleTypeparameter);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(2250);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 289, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(2202);//958
			match(CPP14Parser::Class,ctx);
			setState(2204);//848
			_errHandler->sync(this, ctx);

			switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 280, ctx))
			{
			case 1:
			{
				setState(2203);//958
				match(CPP14Parser::Ellipsis,ctx);
				break;
			}

			}
			setState(2207);//848
			_errHandler->sync(this, ctx);

			switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 281, ctx))
			{
			case 1:
			{
				setState(2206);//958
				match(CPP14Parser::Identifier,ctx);
				break;
			}

			}
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(2209);//958
			match(CPP14Parser::Class,ctx);
			setState(2211);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Identifier)
			{
				setState(2210);//958
				match(CPP14Parser::Identifier,ctx);
			}
			setState(2213);//958
			match(CPP14Parser::Assign,ctx);
			setState(2214); //951
			thetypeid(ctx);
			break;
		}

		case 3:
		{
			enterOuterAlt(ctx, 3);
			setState(2215);//958
			match(CPP14Parser::Typename_,ctx);
			setState(2217);//848
			_errHandler->sync(this, ctx);

			switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 283, ctx))
			{
			case 1:
			{
				setState(2216);//958
				match(CPP14Parser::Ellipsis,ctx);
				break;
			}

			}
			setState(2220);//848
			_errHandler->sync(this, ctx);

			switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 284, ctx))
			{
			case 1:
			{
				setState(2219);//958
				match(CPP14Parser::Identifier,ctx);
				break;
			}

			}
			break;
		}

		case 4:
		{
			enterOuterAlt(ctx, 4);
			setState(2222);//958
			match(CPP14Parser::Typename_,ctx);
			setState(2224);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Identifier)
			{
				setState(2223);//958
				match(CPP14Parser::Identifier,ctx);
			}
			setState(2226);//958
			match(CPP14Parser::Assign,ctx);
			setState(2227); //951
			thetypeid(ctx);
			break;
		}

		case 5:
		{
			enterOuterAlt(ctx, 5);
			setState(2228);//958
			match(CPP14Parser::Template,ctx);
			setState(2229);//958
			match(CPP14Parser::Less,ctx);
			setState(2230); //951
			templateparameterlist(0,ctx);
			setState(2231);//958
			match(CPP14Parser::Greater,ctx);
			setState(2232);//958
			match(CPP14Parser::Class,ctx);
			setState(2234);//848
			_errHandler->sync(this, ctx);

			switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 286, ctx))
			{
			case 1:
			{
				setState(2233);//958
				match(CPP14Parser::Ellipsis,ctx);
				break;
			}

			}
			setState(2237);//848
			_errHandler->sync(this, ctx);

			switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 287, ctx))
			{
			case 1:
			{
				setState(2236);//958
				match(CPP14Parser::Identifier,ctx);
				break;
			}

			}
			break;
		}

		case 6:
		{
			enterOuterAlt(ctx, 6);
			setState(2239);//958
			match(CPP14Parser::Template,ctx);
			setState(2240);//958
			match(CPP14Parser::Less,ctx);
			setState(2241); //951
			templateparameterlist(0,ctx);
			setState(2242);//958
			match(CPP14Parser::Greater,ctx);
			setState(2243);//958
			match(CPP14Parser::Class,ctx);
			setState(2245);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Identifier)
			{
				setState(2244);//958
				match(CPP14Parser::Identifier,ctx);
			}
			setState(2247);//958
			match(CPP14Parser::Assign,ctx);
			setState(2248); //951
			idexpression(ctx);
			break;
		}

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

//----------------- SimpletemplateidContext ------------------------------------------------------------------

CPP14Parser::SimpletemplateidContext::SimpletemplateidContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::TemplatenameContext* CPP14Parser::SimpletemplateidContext::templatename()
{
	return getRuleContext<CPP14Parser::TemplatenameContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::SimpletemplateidContext::Less()
{
	return getToken(CPP14Parser::Less, 0);
}

tree::TerminalNode* CPP14Parser::SimpletemplateidContext::Greater()
{
	return getToken(CPP14Parser::Greater, 0);
}

CPP14Parser::TemplateargumentlistContext* CPP14Parser::SimpletemplateidContext::templateargumentlist()
{
	return getRuleContext<CPP14Parser::TemplateargumentlistContext>(0);//1165
}


size_t CPP14Parser::SimpletemplateidContext::getRuleIndex() const
{
	return CPP14Parser::RuleSimpletemplateid;//688
}

void CPP14Parser::SimpletemplateidContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::SimpletemplateidContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::SimpletemplateidContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitSimpletemplateid(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::SimpletemplateidContext* CPP14Parser::simpletemplateid( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<SimpletemplateidContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 354, CPP14Parser::RuleSimpletemplateid);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(2252); //951
		templatename(ctx);
		setState(2253);//958
		match(CPP14Parser::Less,ctx);
		setState(2255);//788
		_errHandler->sync(this, ctx);

		_la = _input->LA(1);
		if ((((_la & ~ 0x3fULL) == 0) &&
			((1ULL << _la) & ((1ULL << CPP14Parser::T__0)
			| (1ULL << CPP14Parser::T__1)
			| (1ULL << CPP14Parser::Alignof)
			| (1ULL << CPP14Parser::Auto)
			| (1ULL << CPP14Parser::Bool)
			| (1ULL << CPP14Parser::Char)
			| (1ULL << CPP14Parser::Char16)
			| (1ULL << CPP14Parser::Char32)
			| (1ULL << CPP14Parser::Class)
			| (1ULL << CPP14Parser::Const)
			| (1ULL << CPP14Parser::Const_cast)
			| (1ULL << CPP14Parser::Decltype)
			| (1ULL << CPP14Parser::Delete)
			| (1ULL << CPP14Parser::Double)
			| (1ULL << CPP14Parser::Dynamic_cast)
			| (1ULL << CPP14Parser::Enum)
			| (1ULL << CPP14Parser::False)
			| (1ULL << CPP14Parser::Float)
			| (1ULL << CPP14Parser::Int)
			| (1ULL << CPP14Parser::Long)
			| (1ULL << CPP14Parser::New)
			| (1ULL << CPP14Parser::Noexcept)
			| (1ULL << CPP14Parser::Nullptr)
			| (1ULL << CPP14Parser::Operator)
			| (1ULL << CPP14Parser::Reinterpret_cast)
			| (1ULL << CPP14Parser::Short)
			| (1ULL << CPP14Parser::Signed)
			| (1ULL << CPP14Parser::Sizeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
			((1ULL << (_la - 64)) & ((1ULL << (CPP14Parser::Static_cast - 64))
			| (1ULL << (CPP14Parser::Struct - 64))
			| (1ULL << (CPP14Parser::This - 64))
			| (1ULL << (CPP14Parser::True - 64))
			| (1ULL << (CPP14Parser::Typeid_ - 64))
			| (1ULL << (CPP14Parser::Typename_ - 64))
			| (1ULL << (CPP14Parser::Union - 64))
			| (1ULL << (CPP14Parser::Unsigned - 64))
			| (1ULL << (CPP14Parser::Void - 64))
			| (1ULL << (CPP14Parser::Volatile - 64))
			| (1ULL << (CPP14Parser::Wchar - 64))
			| (1ULL << (CPP14Parser::LeftParen - 64))
			| (1ULL << (CPP14Parser::LeftBracket - 64))
			| (1ULL << (CPP14Parser::Plus - 64))
			| (1ULL << (CPP14Parser::Minus - 64))
			| (1ULL << (CPP14Parser::Star - 64))
			| (1ULL << (CPP14Parser::And - 64))
			| (1ULL << (CPP14Parser::Or - 64))
			| (1ULL << (CPP14Parser::Tilde - 64))
			| (1ULL << (CPP14Parser::PlusPlus - 64))
			| (1ULL << (CPP14Parser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
			((1ULL << (_la - 128)) & ((1ULL << (CPP14Parser::Doublecolon - 128))
			| (1ULL << (CPP14Parser::Identifier - 128))
			| (1ULL << (CPP14Parser::Integerliteral - 128))
			| (1ULL << (CPP14Parser::Characterliteral - 128))
			| (1ULL << (CPP14Parser::Floatingliteral - 128))
			| (1ULL << (CPP14Parser::Stringliteral - 128))
			| (1ULL << (CPP14Parser::Userdefinedintegerliteral - 128))
			| (1ULL << (CPP14Parser::Userdefinedfloatingliteral - 128))
			| (1ULL << (CPP14Parser::Userdefinedstringliteral - 128))
			| (1ULL << (CPP14Parser::Userdefinedcharacterliteral - 128)))) != 0))
		{
			setState(2254); //951
			templateargumentlist(0,ctx);
		}
		setState(2257);//958
		match(CPP14Parser::Greater,ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- TemplateidContext ------------------------------------------------------------------

CPP14Parser::TemplateidContext::TemplateidContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::SimpletemplateidContext* CPP14Parser::TemplateidContext::simpletemplateid()
{
	return getRuleContext<CPP14Parser::SimpletemplateidContext>(0);//1165
}

CPP14Parser::OperatorfunctionidContext* CPP14Parser::TemplateidContext::operatorfunctionid()
{
	return getRuleContext<CPP14Parser::OperatorfunctionidContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::TemplateidContext::Less()
{
	return getToken(CPP14Parser::Less, 0);
}

tree::TerminalNode* CPP14Parser::TemplateidContext::Greater()
{
	return getToken(CPP14Parser::Greater, 0);
}

CPP14Parser::TemplateargumentlistContext* CPP14Parser::TemplateidContext::templateargumentlist()
{
	return getRuleContext<CPP14Parser::TemplateargumentlistContext>(0);//1165
}

CPP14Parser::LiteraloperatoridContext* CPP14Parser::TemplateidContext::literaloperatorid()
{
	return getRuleContext<CPP14Parser::LiteraloperatoridContext>(0);//1165
}


size_t CPP14Parser::TemplateidContext::getRuleIndex() const
{
	return CPP14Parser::RuleTemplateid;//688
}

void CPP14Parser::TemplateidContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::TemplateidContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::TemplateidContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitTemplateid(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::TemplateidContext* CPP14Parser::templateid( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<TemplateidContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 356, CPP14Parser::RuleTemplateid);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(2274);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 293, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(2259); //951
			simpletemplateid(ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(2260); //951
			operatorfunctionid(ctx);
			setState(2261);//958
			match(CPP14Parser::Less,ctx);
			setState(2263);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if ((((_la & ~ 0x3fULL) == 0) &&
				((1ULL << _la) & ((1ULL << CPP14Parser::T__0)
				| (1ULL << CPP14Parser::T__1)
				| (1ULL << CPP14Parser::Alignof)
				| (1ULL << CPP14Parser::Auto)
				| (1ULL << CPP14Parser::Bool)
				| (1ULL << CPP14Parser::Char)
				| (1ULL << CPP14Parser::Char16)
				| (1ULL << CPP14Parser::Char32)
				| (1ULL << CPP14Parser::Class)
				| (1ULL << CPP14Parser::Const)
				| (1ULL << CPP14Parser::Const_cast)
				| (1ULL << CPP14Parser::Decltype)
				| (1ULL << CPP14Parser::Delete)
				| (1ULL << CPP14Parser::Double)
				| (1ULL << CPP14Parser::Dynamic_cast)
				| (1ULL << CPP14Parser::Enum)
				| (1ULL << CPP14Parser::False)
				| (1ULL << CPP14Parser::Float)
				| (1ULL << CPP14Parser::Int)
				| (1ULL << CPP14Parser::Long)
				| (1ULL << CPP14Parser::New)
				| (1ULL << CPP14Parser::Noexcept)
				| (1ULL << CPP14Parser::Nullptr)
				| (1ULL << CPP14Parser::Operator)
				| (1ULL << CPP14Parser::Reinterpret_cast)
				| (1ULL << CPP14Parser::Short)
				| (1ULL << CPP14Parser::Signed)
				| (1ULL << CPP14Parser::Sizeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
				((1ULL << (_la - 64)) & ((1ULL << (CPP14Parser::Static_cast - 64))
				| (1ULL << (CPP14Parser::Struct - 64))
				| (1ULL << (CPP14Parser::This - 64))
				| (1ULL << (CPP14Parser::True - 64))
				| (1ULL << (CPP14Parser::Typeid_ - 64))
				| (1ULL << (CPP14Parser::Typename_ - 64))
				| (1ULL << (CPP14Parser::Union - 64))
				| (1ULL << (CPP14Parser::Unsigned - 64))
				| (1ULL << (CPP14Parser::Void - 64))
				| (1ULL << (CPP14Parser::Volatile - 64))
				| (1ULL << (CPP14Parser::Wchar - 64))
				| (1ULL << (CPP14Parser::LeftParen - 64))
				| (1ULL << (CPP14Parser::LeftBracket - 64))
				| (1ULL << (CPP14Parser::Plus - 64))
				| (1ULL << (CPP14Parser::Minus - 64))
				| (1ULL << (CPP14Parser::Star - 64))
				| (1ULL << (CPP14Parser::And - 64))
				| (1ULL << (CPP14Parser::Or - 64))
				| (1ULL << (CPP14Parser::Tilde - 64))
				| (1ULL << (CPP14Parser::PlusPlus - 64))
				| (1ULL << (CPP14Parser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
				((1ULL << (_la - 128)) & ((1ULL << (CPP14Parser::Doublecolon - 128))
				| (1ULL << (CPP14Parser::Identifier - 128))
				| (1ULL << (CPP14Parser::Integerliteral - 128))
				| (1ULL << (CPP14Parser::Characterliteral - 128))
				| (1ULL << (CPP14Parser::Floatingliteral - 128))
				| (1ULL << (CPP14Parser::Stringliteral - 128))
				| (1ULL << (CPP14Parser::Userdefinedintegerliteral - 128))
				| (1ULL << (CPP14Parser::Userdefinedfloatingliteral - 128))
				| (1ULL << (CPP14Parser::Userdefinedstringliteral - 128))
				| (1ULL << (CPP14Parser::Userdefinedcharacterliteral - 128)))) != 0))
			{
				setState(2262); //951
				templateargumentlist(0,ctx);
			}
			setState(2265);//958
			match(CPP14Parser::Greater,ctx);
			break;
		}

		case 3:
		{
			enterOuterAlt(ctx, 3);
			setState(2267); //951
			literaloperatorid(ctx);
			setState(2268);//958
			match(CPP14Parser::Less,ctx);
			setState(2270);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if ((((_la & ~ 0x3fULL) == 0) &&
				((1ULL << _la) & ((1ULL << CPP14Parser::T__0)
				| (1ULL << CPP14Parser::T__1)
				| (1ULL << CPP14Parser::Alignof)
				| (1ULL << CPP14Parser::Auto)
				| (1ULL << CPP14Parser::Bool)
				| (1ULL << CPP14Parser::Char)
				| (1ULL << CPP14Parser::Char16)
				| (1ULL << CPP14Parser::Char32)
				| (1ULL << CPP14Parser::Class)
				| (1ULL << CPP14Parser::Const)
				| (1ULL << CPP14Parser::Const_cast)
				| (1ULL << CPP14Parser::Decltype)
				| (1ULL << CPP14Parser::Delete)
				| (1ULL << CPP14Parser::Double)
				| (1ULL << CPP14Parser::Dynamic_cast)
				| (1ULL << CPP14Parser::Enum)
				| (1ULL << CPP14Parser::False)
				| (1ULL << CPP14Parser::Float)
				| (1ULL << CPP14Parser::Int)
				| (1ULL << CPP14Parser::Long)
				| (1ULL << CPP14Parser::New)
				| (1ULL << CPP14Parser::Noexcept)
				| (1ULL << CPP14Parser::Nullptr)
				| (1ULL << CPP14Parser::Operator)
				| (1ULL << CPP14Parser::Reinterpret_cast)
				| (1ULL << CPP14Parser::Short)
				| (1ULL << CPP14Parser::Signed)
				| (1ULL << CPP14Parser::Sizeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
				((1ULL << (_la - 64)) & ((1ULL << (CPP14Parser::Static_cast - 64))
				| (1ULL << (CPP14Parser::Struct - 64))
				| (1ULL << (CPP14Parser::This - 64))
				| (1ULL << (CPP14Parser::True - 64))
				| (1ULL << (CPP14Parser::Typeid_ - 64))
				| (1ULL << (CPP14Parser::Typename_ - 64))
				| (1ULL << (CPP14Parser::Union - 64))
				| (1ULL << (CPP14Parser::Unsigned - 64))
				| (1ULL << (CPP14Parser::Void - 64))
				| (1ULL << (CPP14Parser::Volatile - 64))
				| (1ULL << (CPP14Parser::Wchar - 64))
				| (1ULL << (CPP14Parser::LeftParen - 64))
				| (1ULL << (CPP14Parser::LeftBracket - 64))
				| (1ULL << (CPP14Parser::Plus - 64))
				| (1ULL << (CPP14Parser::Minus - 64))
				| (1ULL << (CPP14Parser::Star - 64))
				| (1ULL << (CPP14Parser::And - 64))
				| (1ULL << (CPP14Parser::Or - 64))
				| (1ULL << (CPP14Parser::Tilde - 64))
				| (1ULL << (CPP14Parser::PlusPlus - 64))
				| (1ULL << (CPP14Parser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
				((1ULL << (_la - 128)) & ((1ULL << (CPP14Parser::Doublecolon - 128))
				| (1ULL << (CPP14Parser::Identifier - 128))
				| (1ULL << (CPP14Parser::Integerliteral - 128))
				| (1ULL << (CPP14Parser::Characterliteral - 128))
				| (1ULL << (CPP14Parser::Floatingliteral - 128))
				| (1ULL << (CPP14Parser::Stringliteral - 128))
				| (1ULL << (CPP14Parser::Userdefinedintegerliteral - 128))
				| (1ULL << (CPP14Parser::Userdefinedfloatingliteral - 128))
				| (1ULL << (CPP14Parser::Userdefinedstringliteral - 128))
				| (1ULL << (CPP14Parser::Userdefinedcharacterliteral - 128)))) != 0))
			{
				setState(2269); //951
				templateargumentlist(0,ctx);
			}
			setState(2272);//958
			match(CPP14Parser::Greater,ctx);
			break;
		}

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

//----------------- TemplatenameContext ------------------------------------------------------------------

CPP14Parser::TemplatenameContext::TemplatenameContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::TemplatenameContext::Identifier()
{
	return getToken(CPP14Parser::Identifier, 0);
}


size_t CPP14Parser::TemplatenameContext::getRuleIndex() const
{
	return CPP14Parser::RuleTemplatename;//688
}

void CPP14Parser::TemplatenameContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::TemplatenameContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::TemplatenameContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitTemplatename(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::TemplatenameContext* CPP14Parser::templatename( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<TemplatenameContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 358, CPP14Parser::RuleTemplatename);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(2276);//958
		match(CPP14Parser::Identifier,ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- TemplateargumentlistContext ------------------------------------------------------------------

CPP14Parser::TemplateargumentlistContext::TemplateargumentlistContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::TemplateargumentContext* CPP14Parser::TemplateargumentlistContext::templateargument()
{
	return getRuleContext<CPP14Parser::TemplateargumentContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::TemplateargumentlistContext::Ellipsis()
{
	return getToken(CPP14Parser::Ellipsis, 0);
}

CPP14Parser::TemplateargumentlistContext* CPP14Parser::TemplateargumentlistContext::templateargumentlist()
{
	return getRuleContext<CPP14Parser::TemplateargumentlistContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::TemplateargumentlistContext::Comma()
{
	return getToken(CPP14Parser::Comma, 0);
}


size_t CPP14Parser::TemplateargumentlistContext::getRuleIndex() const
{
	return CPP14Parser::RuleTemplateargumentlist;//688
}

void CPP14Parser::TemplateargumentlistContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::TemplateargumentlistContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::TemplateargumentlistContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitTemplateargumentlist(this);
	else
		return visitor->visitChildren(this);
}


CPP14Parser::TemplateargumentlistContext* CPP14Parser::templateargumentlist()
{
	 return templateargumentlist(0, nullptr);//600
}

CPP14Parser::TemplateargumentlistContext* CPP14Parser::templateargumentlist(int precedence, antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	antlr4::ParserRuleContext *parentContext = parent;
	size_t parentState = getState();
	auto _localctx = std::make_unique<TemplateargumentlistContext>(parentContext, parentState);//610
	auto ctx = _localctx.get();//609
	size_t startState = 360;
	enterRecursionRule(ctx, 360, CPP14Parser::RuleTemplateargumentlist, precedence);

		

	auto onExit = finally([=,&_localctx]
{
		unrollRecursionContexts(parentContext, std::move(_localctx));
	});
	try
{
		size_t alt;
		enterOuterAlt(ctx, 1);
		setState(2279); //951
		templateargument(ctx);
		setState(2281);//848
		_errHandler->sync(this, ctx);

		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 294, ctx))
		{
		case 1:
		{
			setState(2280);//958
			match(CPP14Parser::Ellipsis,ctx);
			break;
		}

		}
		ctx->stop = _input->LT(-1);
		setState(2291);//865
		_errHandler->sync(this, ctx);
		alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 296, ctx);
		while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
		{
			if (alt == 1)
		{
				if (!_parseListeners.empty())
					triggerExitRuleEvent(ctx);

				auto tmpContext = std::make_unique<TemplateargumentlistContext>(parentContext, parentState);
				pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleTemplateargumentlist);//1240
				_localctx = std::move(tmpContext);
				ctx = _localctx.get();
				setState(2283);//1002

				if (!(precpred(nullptr, 1))) throw FailedPredicateException(this, "precpred(nullptr, 1)", ctx);
				setState(2284);//958
				match(CPP14Parser::Comma,ctx);
				setState(2285); //951
				templateargument(ctx);
				setState(2287);//848
				_errHandler->sync(this, ctx);

				switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 295, ctx))
				{
				case 1:
				{
					setState(2286);//958
					match(CPP14Parser::Ellipsis,ctx);
					break;
				}

				} 
			}
			setState(2293);//875
			_errHandler->sync(this, ctx);
			alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 296, ctx);
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

//----------------- TemplateargumentContext ------------------------------------------------------------------

CPP14Parser::TemplateargumentContext::TemplateargumentContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::ThetypeidContext* CPP14Parser::TemplateargumentContext::thetypeid()
{
	return getRuleContext<CPP14Parser::ThetypeidContext>(0);//1165
}

CPP14Parser::ConstantexpressionContext* CPP14Parser::TemplateargumentContext::constantexpression()
{
	return getRuleContext<CPP14Parser::ConstantexpressionContext>(0);//1165
}

CPP14Parser::IdexpressionContext* CPP14Parser::TemplateargumentContext::idexpression()
{
	return getRuleContext<CPP14Parser::IdexpressionContext>(0);//1165
}


size_t CPP14Parser::TemplateargumentContext::getRuleIndex() const
{
	return CPP14Parser::RuleTemplateargument;//688
}

void CPP14Parser::TemplateargumentContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::TemplateargumentContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::TemplateargumentContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitTemplateargument(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::TemplateargumentContext* CPP14Parser::templateargument( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<TemplateargumentContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 362, CPP14Parser::RuleTemplateargument);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(2297);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 297, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(2294); //951
			thetypeid(ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(2295); //951
			constantexpression(ctx);
			break;
		}

		case 3:
		{
			enterOuterAlt(ctx, 3);
			setState(2296); //951
			idexpression(ctx);
			break;
		}

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

//----------------- TypenamespecifierContext ------------------------------------------------------------------

CPP14Parser::TypenamespecifierContext::TypenamespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::TypenamespecifierContext::Typename_()
{
	return getToken(CPP14Parser::Typename_, 0);
}

CPP14Parser::NestednamespecifierContext* CPP14Parser::TypenamespecifierContext::nestednamespecifier()
{
	return getRuleContext<CPP14Parser::NestednamespecifierContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::TypenamespecifierContext::Identifier()
{
	return getToken(CPP14Parser::Identifier, 0);
}

CPP14Parser::SimpletemplateidContext* CPP14Parser::TypenamespecifierContext::simpletemplateid()
{
	return getRuleContext<CPP14Parser::SimpletemplateidContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::TypenamespecifierContext::Template()
{
	return getToken(CPP14Parser::Template, 0);
}


size_t CPP14Parser::TypenamespecifierContext::getRuleIndex() const
{
	return CPP14Parser::RuleTypenamespecifier;//688
}

void CPP14Parser::TypenamespecifierContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::TypenamespecifierContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::TypenamespecifierContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitTypenamespecifier(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::TypenamespecifierContext* CPP14Parser::typenamespecifier( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<TypenamespecifierContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 364, CPP14Parser::RuleTypenamespecifier);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(2310);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 299, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(2299);//958
			match(CPP14Parser::Typename_,ctx);
			setState(2300); //951
			nestednamespecifier(0,ctx);
			setState(2301);//958
			match(CPP14Parser::Identifier,ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(2303);//958
			match(CPP14Parser::Typename_,ctx);
			setState(2304); //951
			nestednamespecifier(0,ctx);
			setState(2306);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Template)
			{
				setState(2305);//958
				match(CPP14Parser::Template,ctx);
			}
			setState(2308); //951
			simpletemplateid(ctx);
			break;
		}

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

//----------------- ExplicitinstantiationContext ------------------------------------------------------------------

CPP14Parser::ExplicitinstantiationContext::ExplicitinstantiationContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::ExplicitinstantiationContext::Template()
{
	return getToken(CPP14Parser::Template, 0);
}

CPP14Parser::DeclarationContext* CPP14Parser::ExplicitinstantiationContext::declaration()
{
	return getRuleContext<CPP14Parser::DeclarationContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::ExplicitinstantiationContext::Extern()
{
	return getToken(CPP14Parser::Extern, 0);
}


size_t CPP14Parser::ExplicitinstantiationContext::getRuleIndex() const
{
	return CPP14Parser::RuleExplicitinstantiation;//688
}

void CPP14Parser::ExplicitinstantiationContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::ExplicitinstantiationContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::ExplicitinstantiationContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitExplicitinstantiation(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::ExplicitinstantiationContext* CPP14Parser::explicitinstantiation( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<ExplicitinstantiationContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 366, CPP14Parser::RuleExplicitinstantiation);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(2313);//788
		_errHandler->sync(this, ctx);

		_la = _input->LA(1);
		if (_la == CPP14Parser::Extern)
		{
			setState(2312);//958
			match(CPP14Parser::Extern,ctx);
		}
		setState(2315);//958
		match(CPP14Parser::Template,ctx);
		setState(2316); //951
		declaration(ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- ExplicitspecializationContext ------------------------------------------------------------------

CPP14Parser::ExplicitspecializationContext::ExplicitspecializationContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::ExplicitspecializationContext::Template()
{
	return getToken(CPP14Parser::Template, 0);
}

tree::TerminalNode* CPP14Parser::ExplicitspecializationContext::Less()
{
	return getToken(CPP14Parser::Less, 0);
}

tree::TerminalNode* CPP14Parser::ExplicitspecializationContext::Greater()
{
	return getToken(CPP14Parser::Greater, 0);
}

CPP14Parser::DeclarationContext* CPP14Parser::ExplicitspecializationContext::declaration()
{
	return getRuleContext<CPP14Parser::DeclarationContext>(0);//1165
}


size_t CPP14Parser::ExplicitspecializationContext::getRuleIndex() const
{
	return CPP14Parser::RuleExplicitspecialization;//688
}

void CPP14Parser::ExplicitspecializationContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::ExplicitspecializationContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::ExplicitspecializationContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitExplicitspecialization(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::ExplicitspecializationContext* CPP14Parser::explicitspecialization( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<ExplicitspecializationContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 368, CPP14Parser::RuleExplicitspecialization);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(2318);//958
		match(CPP14Parser::Template,ctx);
		setState(2319);//958
		match(CPP14Parser::Less,ctx);
		setState(2320);//958
		match(CPP14Parser::Greater,ctx);
		setState(2321); //951
		declaration(ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- TryblockContext ------------------------------------------------------------------

CPP14Parser::TryblockContext::TryblockContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::TryblockContext::Try()
{
	return getToken(CPP14Parser::Try, 0);
}

CPP14Parser::CompoundstatementContext* CPP14Parser::TryblockContext::compoundstatement()
{
	return getRuleContext<CPP14Parser::CompoundstatementContext>(0);//1165
}

CPP14Parser::HandlerseqContext* CPP14Parser::TryblockContext::handlerseq()
{
	return getRuleContext<CPP14Parser::HandlerseqContext>(0);//1165
}


size_t CPP14Parser::TryblockContext::getRuleIndex() const
{
	return CPP14Parser::RuleTryblock;//688
}

void CPP14Parser::TryblockContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::TryblockContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::TryblockContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitTryblock(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::TryblockContext* CPP14Parser::tryblock( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<TryblockContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 370, CPP14Parser::RuleTryblock);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(2323);//958
		match(CPP14Parser::Try,ctx);
		setState(2324); //951
		compoundstatement(ctx);
		setState(2325); //951
		handlerseq(ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- FunctiontryblockContext ------------------------------------------------------------------

CPP14Parser::FunctiontryblockContext::FunctiontryblockContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::FunctiontryblockContext::Try()
{
	return getToken(CPP14Parser::Try, 0);
}

CPP14Parser::CompoundstatementContext* CPP14Parser::FunctiontryblockContext::compoundstatement()
{
	return getRuleContext<CPP14Parser::CompoundstatementContext>(0);//1165
}

CPP14Parser::HandlerseqContext* CPP14Parser::FunctiontryblockContext::handlerseq()
{
	return getRuleContext<CPP14Parser::HandlerseqContext>(0);//1165
}

CPP14Parser::CtorinitializerContext* CPP14Parser::FunctiontryblockContext::ctorinitializer()
{
	return getRuleContext<CPP14Parser::CtorinitializerContext>(0);//1165
}


size_t CPP14Parser::FunctiontryblockContext::getRuleIndex() const
{
	return CPP14Parser::RuleFunctiontryblock;//688
}

void CPP14Parser::FunctiontryblockContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::FunctiontryblockContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::FunctiontryblockContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitFunctiontryblock(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::FunctiontryblockContext* CPP14Parser::functiontryblock( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<FunctiontryblockContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 372, CPP14Parser::RuleFunctiontryblock);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(2327);//958
		match(CPP14Parser::Try,ctx);
		setState(2329);//788
		_errHandler->sync(this, ctx);

		_la = _input->LA(1);
		if (_la == CPP14Parser::Colon)
		{
			setState(2328); //951
			ctorinitializer(ctx);
		}
		setState(2331); //951
		compoundstatement(ctx);
		setState(2332); //951
		handlerseq(ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- HandlerseqContext ------------------------------------------------------------------

CPP14Parser::HandlerseqContext::HandlerseqContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::HandlerContext* CPP14Parser::HandlerseqContext::handler()
{
	return getRuleContext<CPP14Parser::HandlerContext>(0);//1165
}

CPP14Parser::HandlerseqContext* CPP14Parser::HandlerseqContext::handlerseq()
{
	return getRuleContext<CPP14Parser::HandlerseqContext>(0);//1165
}


size_t CPP14Parser::HandlerseqContext::getRuleIndex() const
{
	return CPP14Parser::RuleHandlerseq;//688
}

void CPP14Parser::HandlerseqContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::HandlerseqContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::HandlerseqContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitHandlerseq(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::HandlerseqContext* CPP14Parser::handlerseq( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<HandlerseqContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 374, CPP14Parser::RuleHandlerseq);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(2334); //951
		handler(ctx);
		setState(2336);//848
		_errHandler->sync(this, ctx);

		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 302, ctx))
		{
		case 1:
		{
			setState(2335); //951
			handlerseq(ctx);
			break;
		}

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

//----------------- HandlerContext ------------------------------------------------------------------

CPP14Parser::HandlerContext::HandlerContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::HandlerContext::Catch()
{
	return getToken(CPP14Parser::Catch, 0);
}

tree::TerminalNode* CPP14Parser::HandlerContext::LeftParen()
{
	return getToken(CPP14Parser::LeftParen, 0);
}

CPP14Parser::ExceptiondeclarationContext* CPP14Parser::HandlerContext::exceptiondeclaration()
{
	return getRuleContext<CPP14Parser::ExceptiondeclarationContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::HandlerContext::RightParen()
{
	return getToken(CPP14Parser::RightParen, 0);
}

CPP14Parser::CompoundstatementContext* CPP14Parser::HandlerContext::compoundstatement()
{
	return getRuleContext<CPP14Parser::CompoundstatementContext>(0);//1165
}


size_t CPP14Parser::HandlerContext::getRuleIndex() const
{
	return CPP14Parser::RuleHandler;//688
}

void CPP14Parser::HandlerContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::HandlerContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::HandlerContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitHandler(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::HandlerContext* CPP14Parser::handler( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<HandlerContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 376, CPP14Parser::RuleHandler);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(2338);//958
		match(CPP14Parser::Catch,ctx);
		setState(2339);//958
		match(CPP14Parser::LeftParen,ctx);
		setState(2340); //951
		exceptiondeclaration(ctx);
		setState(2341);//958
		match(CPP14Parser::RightParen,ctx);
		setState(2342); //951
		compoundstatement(ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- ExceptiondeclarationContext ------------------------------------------------------------------

CPP14Parser::ExceptiondeclarationContext::ExceptiondeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::TypespecifierseqContext* CPP14Parser::ExceptiondeclarationContext::typespecifierseq()
{
	return getRuleContext<CPP14Parser::TypespecifierseqContext>(0);//1165
}

CPP14Parser::DeclaratorContext* CPP14Parser::ExceptiondeclarationContext::declarator()
{
	return getRuleContext<CPP14Parser::DeclaratorContext>(0);//1165
}

CPP14Parser::AttributespecifierseqContext* CPP14Parser::ExceptiondeclarationContext::attributespecifierseq()
{
	return getRuleContext<CPP14Parser::AttributespecifierseqContext>(0);//1165
}

CPP14Parser::AbstractdeclaratorContext* CPP14Parser::ExceptiondeclarationContext::abstractdeclarator()
{
	return getRuleContext<CPP14Parser::AbstractdeclaratorContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::ExceptiondeclarationContext::Ellipsis()
{
	return getToken(CPP14Parser::Ellipsis, 0);
}


size_t CPP14Parser::ExceptiondeclarationContext::getRuleIndex() const
{
	return CPP14Parser::RuleExceptiondeclaration;//688
}

void CPP14Parser::ExceptiondeclarationContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::ExceptiondeclarationContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::ExceptiondeclarationContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitExceptiondeclaration(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::ExceptiondeclarationContext* CPP14Parser::exceptiondeclaration( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<ExceptiondeclarationContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 378, CPP14Parser::RuleExceptiondeclaration);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(2358);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 306, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(2345);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket)
			{
				setState(2344); //951
				attributespecifierseq(0,ctx);
			}
			setState(2347); //951
			typespecifierseq(ctx);
			setState(2348); //951
			declarator(ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(2351);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::Alignas || _la == CPP14Parser::LeftBracket)
			{
				setState(2350); //951
				attributespecifierseq(0,ctx);
			}
			setState(2353); //951
			typespecifierseq(ctx);
			setState(2355);//788
			_errHandler->sync(this, ctx);

			_la = _input->LA(1);
			if (_la == CPP14Parser::T__2

			|| _la == CPP14Parser::Decltype || ((((_la - 84) & ~ 0x3fULL) == 0) &&
				((1ULL << (_la - 84)) & ((1ULL << (CPP14Parser::LeftParen - 84))
				| (1ULL << (CPP14Parser::LeftBracket - 84))
				| (1ULL << (CPP14Parser::Star - 84))
				| (1ULL << (CPP14Parser::And - 84))
				| (1ULL << (CPP14Parser::Doublecolon - 84))
				| (1ULL << (CPP14Parser::Ellipsis - 84))
				| (1ULL << (CPP14Parser::Identifier - 84)))) != 0))
			{
				setState(2354); //951
				abstractdeclarator(ctx);
			}
			break;
		}

		case 3:
		{
			enterOuterAlt(ctx, 3);
			setState(2357);//958
			match(CPP14Parser::Ellipsis,ctx);
			break;
		}

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

//----------------- ThrowexpressionContext ------------------------------------------------------------------

CPP14Parser::ThrowexpressionContext::ThrowexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::ThrowexpressionContext::Throw()
{
	return getToken(CPP14Parser::Throw, 0);
}

CPP14Parser::AssignmentexpressionContext* CPP14Parser::ThrowexpressionContext::assignmentexpression()
{
	return getRuleContext<CPP14Parser::AssignmentexpressionContext>(0);//1165
}


size_t CPP14Parser::ThrowexpressionContext::getRuleIndex() const
{
	return CPP14Parser::RuleThrowexpression;//688
}

void CPP14Parser::ThrowexpressionContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::ThrowexpressionContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::ThrowexpressionContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitThrowexpression(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::ThrowexpressionContext* CPP14Parser::throwexpression( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<ThrowexpressionContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 380, CPP14Parser::RuleThrowexpression);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(2360);//958
		match(CPP14Parser::Throw,ctx);
		setState(2362);//848
		_errHandler->sync(this, ctx);

		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 307, ctx))
		{
		case 1:
		{
			setState(2361); //951
			assignmentexpression(ctx);
			break;
		}

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

//----------------- ExceptionspecificationContext ------------------------------------------------------------------

CPP14Parser::ExceptionspecificationContext::ExceptionspecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::DynamicexceptionspecificationContext* CPP14Parser::ExceptionspecificationContext::dynamicexceptionspecification()
{
	return getRuleContext<CPP14Parser::DynamicexceptionspecificationContext>(0);//1165
}

CPP14Parser::NoexceptspecificationContext* CPP14Parser::ExceptionspecificationContext::noexceptspecification()
{
	return getRuleContext<CPP14Parser::NoexceptspecificationContext>(0);//1165
}


size_t CPP14Parser::ExceptionspecificationContext::getRuleIndex() const
{
	return CPP14Parser::RuleExceptionspecification;//688
}

void CPP14Parser::ExceptionspecificationContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::ExceptionspecificationContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::ExceptionspecificationContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitExceptionspecification(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::ExceptionspecificationContext* CPP14Parser::exceptionspecification( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<ExceptionspecificationContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 382, CPP14Parser::RuleExceptionspecification);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(2366);//750
		_errHandler->sync(this, ctx);
		switch (_input->LA(1))
		{
			case CPP14Parser::Throw:
			{
				enterOuterAlt(ctx, 1);
				setState(2364); //951
				dynamicexceptionspecification(ctx);
				break;
			}

			case CPP14Parser::Noexcept:
			{
				enterOuterAlt(ctx, 2);
				setState(2365); //951
				noexceptspecification(ctx);
				break;
			}

		default:
			throw NoViableAltException(this, ctx);
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

//----------------- DynamicexceptionspecificationContext ------------------------------------------------------------------

CPP14Parser::DynamicexceptionspecificationContext::DynamicexceptionspecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::DynamicexceptionspecificationContext::Throw()
{
	return getToken(CPP14Parser::Throw, 0);
}

tree::TerminalNode* CPP14Parser::DynamicexceptionspecificationContext::LeftParen()
{
	return getToken(CPP14Parser::LeftParen, 0);
}

tree::TerminalNode* CPP14Parser::DynamicexceptionspecificationContext::RightParen()
{
	return getToken(CPP14Parser::RightParen, 0);
}

CPP14Parser::TypeidlistContext* CPP14Parser::DynamicexceptionspecificationContext::typeidlist()
{
	return getRuleContext<CPP14Parser::TypeidlistContext>(0);//1165
}


size_t CPP14Parser::DynamicexceptionspecificationContext::getRuleIndex() const
{
	return CPP14Parser::RuleDynamicexceptionspecification;//688
}

void CPP14Parser::DynamicexceptionspecificationContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::DynamicexceptionspecificationContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::DynamicexceptionspecificationContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitDynamicexceptionspecification(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::DynamicexceptionspecificationContext* CPP14Parser::dynamicexceptionspecification( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<DynamicexceptionspecificationContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 384, CPP14Parser::RuleDynamicexceptionspecification);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(2368);//958
		match(CPP14Parser::Throw,ctx);
		setState(2369);//958
		match(CPP14Parser::LeftParen,ctx);
		setState(2371);//788
		_errHandler->sync(this, ctx);

		_la = _input->LA(1);
		if (((((_la - 12) & ~ 0x3fULL) == 0) &&
			((1ULL << (_la - 12)) & ((1ULL << (CPP14Parser::Auto - 12))
			| (1ULL << (CPP14Parser::Bool - 12))
			| (1ULL << (CPP14Parser::Char - 12))
			| (1ULL << (CPP14Parser::Char16 - 12))
			| (1ULL << (CPP14Parser::Char32 - 12))
			| (1ULL << (CPP14Parser::Class - 12))
			| (1ULL << (CPP14Parser::Const - 12))
			| (1ULL << (CPP14Parser::Decltype - 12))
			| (1ULL << (CPP14Parser::Double - 12))
			| (1ULL << (CPP14Parser::Enum - 12))
			| (1ULL << (CPP14Parser::Float - 12))
			| (1ULL << (CPP14Parser::Int - 12))
			| (1ULL << (CPP14Parser::Long - 12))
			| (1ULL << (CPP14Parser::Short - 12))
			| (1ULL << (CPP14Parser::Signed - 12))
			| (1ULL << (CPP14Parser::Struct - 12))
			| (1ULL << (CPP14Parser::Typename_ - 12)))) != 0) || ((((_la - 76) & ~ 0x3fULL) == 0) &&
			((1ULL << (_la - 76)) & ((1ULL << (CPP14Parser::Union - 76))
			| (1ULL << (CPP14Parser::Unsigned - 76))
			| (1ULL << (CPP14Parser::Void - 76))
			| (1ULL << (CPP14Parser::Volatile - 76))
			| (1ULL << (CPP14Parser::Wchar - 76))
			| (1ULL << (CPP14Parser::Doublecolon - 76))
			| (1ULL << (CPP14Parser::Identifier - 76)))) != 0))
		{
			setState(2370); //951
			typeidlist(0,ctx);
		}
		setState(2373);//958
		match(CPP14Parser::RightParen,ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- TypeidlistContext ------------------------------------------------------------------

CPP14Parser::TypeidlistContext::TypeidlistContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

CPP14Parser::ThetypeidContext* CPP14Parser::TypeidlistContext::thetypeid()
{
	return getRuleContext<CPP14Parser::ThetypeidContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::TypeidlistContext::Ellipsis()
{
	return getToken(CPP14Parser::Ellipsis, 0);
}

CPP14Parser::TypeidlistContext* CPP14Parser::TypeidlistContext::typeidlist()
{
	return getRuleContext<CPP14Parser::TypeidlistContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::TypeidlistContext::Comma()
{
	return getToken(CPP14Parser::Comma, 0);
}


size_t CPP14Parser::TypeidlistContext::getRuleIndex() const
{
	return CPP14Parser::RuleTypeidlist;//688
}

void CPP14Parser::TypeidlistContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::TypeidlistContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::TypeidlistContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitTypeidlist(this);
	else
		return visitor->visitChildren(this);
}


CPP14Parser::TypeidlistContext* CPP14Parser::typeidlist()
{
	 return typeidlist(0, nullptr);//600
}

CPP14Parser::TypeidlistContext* CPP14Parser::typeidlist(int precedence, antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	antlr4::ParserRuleContext *parentContext = parent;
	size_t parentState = getState();
	auto _localctx = std::make_unique<TypeidlistContext>(parentContext, parentState);//610
	auto ctx = _localctx.get();//609
	size_t startState = 386;
	enterRecursionRule(ctx, 386, CPP14Parser::RuleTypeidlist, precedence);

		

	auto onExit = finally([=,&_localctx]
{
		unrollRecursionContexts(parentContext, std::move(_localctx));
	});
	try
{
		size_t alt;
		enterOuterAlt(ctx, 1);
		setState(2376); //951
		thetypeid(ctx);
		setState(2378);//848
		_errHandler->sync(this, ctx);

		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 310, ctx))
		{
		case 1:
		{
			setState(2377);//958
			match(CPP14Parser::Ellipsis,ctx);
			break;
		}

		}
		ctx->stop = _input->LT(-1);
		setState(2388);//865
		_errHandler->sync(this, ctx);
		alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 312, ctx);
		while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER)
		{
			if (alt == 1)
		{
				if (!_parseListeners.empty())
					triggerExitRuleEvent(ctx);

				auto tmpContext = std::make_unique<TypeidlistContext>(parentContext, parentState);
				pushNewRecursionContext(std::move(_localctx), tmpContext.get(), startState, RuleTypeidlist);//1240
				_localctx = std::move(tmpContext);
				ctx = _localctx.get();
				setState(2380);//1002

				if (!(precpred(nullptr, 1))) throw FailedPredicateException(this, "precpred(nullptr, 1)", ctx);
				setState(2381);//958
				match(CPP14Parser::Comma,ctx);
				setState(2382); //951
				thetypeid(ctx);
				setState(2384);//848
				_errHandler->sync(this, ctx);

				switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 311, ctx))
				{
				case 1:
				{
					setState(2383);//958
					match(CPP14Parser::Ellipsis,ctx);
					break;
				}

				} 
			}
			setState(2390);//875
			_errHandler->sync(this, ctx);
			alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 312, ctx);
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

//----------------- NoexceptspecificationContext ------------------------------------------------------------------

CPP14Parser::NoexceptspecificationContext::NoexceptspecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::NoexceptspecificationContext::Noexcept()
{
	return getToken(CPP14Parser::Noexcept, 0);
}

tree::TerminalNode* CPP14Parser::NoexceptspecificationContext::LeftParen()
{
	return getToken(CPP14Parser::LeftParen, 0);
}

CPP14Parser::ConstantexpressionContext* CPP14Parser::NoexceptspecificationContext::constantexpression()
{
	return getRuleContext<CPP14Parser::ConstantexpressionContext>(0);//1165
}

tree::TerminalNode* CPP14Parser::NoexceptspecificationContext::RightParen()
{
	return getToken(CPP14Parser::RightParen, 0);
}


size_t CPP14Parser::NoexceptspecificationContext::getRuleIndex() const
{
	return CPP14Parser::RuleNoexceptspecification;//688
}

void CPP14Parser::NoexceptspecificationContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::NoexceptspecificationContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::NoexceptspecificationContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitNoexceptspecification(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::NoexceptspecificationContext* CPP14Parser::noexceptspecification( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<NoexceptspecificationContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 388, CPP14Parser::RuleNoexceptspecification);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(2397);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 313, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(2391);//958
			match(CPP14Parser::Noexcept,ctx);
			setState(2392);//958
			match(CPP14Parser::LeftParen,ctx);
			setState(2393); //951
			constantexpression(ctx);
			setState(2394);//958
			match(CPP14Parser::RightParen,ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(2396);//958
			match(CPP14Parser::Noexcept,ctx);
			break;
		}

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

//----------------- TheoperatorContext ------------------------------------------------------------------

CPP14Parser::TheoperatorContext::TheoperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::TheoperatorContext::New()
{
	return getToken(CPP14Parser::New, 0);
}

tree::TerminalNode* CPP14Parser::TheoperatorContext::Delete()
{
	return getToken(CPP14Parser::Delete, 0);
}

tree::TerminalNode* CPP14Parser::TheoperatorContext::LeftBracket()
{
	return getToken(CPP14Parser::LeftBracket, 0);
}

tree::TerminalNode* CPP14Parser::TheoperatorContext::RightBracket()
{
	return getToken(CPP14Parser::RightBracket, 0);
}

tree::TerminalNode* CPP14Parser::TheoperatorContext::Plus()
{
	return getToken(CPP14Parser::Plus, 0);
}

tree::TerminalNode* CPP14Parser::TheoperatorContext::Minus()
{
	return getToken(CPP14Parser::Minus, 0);
}

tree::TerminalNode* CPP14Parser::TheoperatorContext::Star()
{
	return getToken(CPP14Parser::Star, 0);
}

tree::TerminalNode* CPP14Parser::TheoperatorContext::Div()
{
	return getToken(CPP14Parser::Div, 0);
}

tree::TerminalNode* CPP14Parser::TheoperatorContext::Mod()
{
	return getToken(CPP14Parser::Mod, 0);
}

tree::TerminalNode* CPP14Parser::TheoperatorContext::Caret()
{
	return getToken(CPP14Parser::Caret, 0);
}

tree::TerminalNode* CPP14Parser::TheoperatorContext::And()
{
	return getToken(CPP14Parser::And, 0);
}

tree::TerminalNode* CPP14Parser::TheoperatorContext::Or()
{
	return getToken(CPP14Parser::Or, 0);
}

tree::TerminalNode* CPP14Parser::TheoperatorContext::Tilde()
{
	return getToken(CPP14Parser::Tilde, 0);
}

tree::TerminalNode* CPP14Parser::TheoperatorContext::Assign()
{
	return getToken(CPP14Parser::Assign, 0);
}

tree::TerminalNode* CPP14Parser::TheoperatorContext::Less()
{
	return getToken(CPP14Parser::Less, 0);
}

tree::TerminalNode* CPP14Parser::TheoperatorContext::Greater()
{
	return getToken(CPP14Parser::Greater, 0);
}

tree::TerminalNode* CPP14Parser::TheoperatorContext::PlusAssign()
{
	return getToken(CPP14Parser::PlusAssign, 0);
}

tree::TerminalNode* CPP14Parser::TheoperatorContext::MinusAssign()
{
	return getToken(CPP14Parser::MinusAssign, 0);
}

tree::TerminalNode* CPP14Parser::TheoperatorContext::StarAssign()
{
	return getToken(CPP14Parser::StarAssign, 0);
}

tree::TerminalNode* CPP14Parser::TheoperatorContext::DivAssign()
{
	return getToken(CPP14Parser::DivAssign, 0);
}

tree::TerminalNode* CPP14Parser::TheoperatorContext::ModAssign()
{
	return getToken(CPP14Parser::ModAssign, 0);
}

tree::TerminalNode* CPP14Parser::TheoperatorContext::XorAssign()
{
	return getToken(CPP14Parser::XorAssign, 0);
}

tree::TerminalNode* CPP14Parser::TheoperatorContext::AndAssign()
{
	return getToken(CPP14Parser::AndAssign, 0);
}

tree::TerminalNode* CPP14Parser::TheoperatorContext::OrAssign()
{
	return getToken(CPP14Parser::OrAssign, 0);
}

tree::TerminalNode* CPP14Parser::TheoperatorContext::LeftShift()
{
	return getToken(CPP14Parser::LeftShift, 0);
}

tree::TerminalNode* CPP14Parser::TheoperatorContext::RightShift()
{
	return getToken(CPP14Parser::RightShift, 0);
}

tree::TerminalNode* CPP14Parser::TheoperatorContext::RightShiftAssign()
{
	return getToken(CPP14Parser::RightShiftAssign, 0);
}

tree::TerminalNode* CPP14Parser::TheoperatorContext::LeftShiftAssign()
{
	return getToken(CPP14Parser::LeftShiftAssign, 0);
}

tree::TerminalNode* CPP14Parser::TheoperatorContext::Equal()
{
	return getToken(CPP14Parser::Equal, 0);
}

tree::TerminalNode* CPP14Parser::TheoperatorContext::NotEqual()
{
	return getToken(CPP14Parser::NotEqual, 0);
}

tree::TerminalNode* CPP14Parser::TheoperatorContext::LessEqual()
{
	return getToken(CPP14Parser::LessEqual, 0);
}

tree::TerminalNode* CPP14Parser::TheoperatorContext::GreaterEqual()
{
	return getToken(CPP14Parser::GreaterEqual, 0);
}

tree::TerminalNode* CPP14Parser::TheoperatorContext::PlusPlus()
{
	return getToken(CPP14Parser::PlusPlus, 0);
}

tree::TerminalNode* CPP14Parser::TheoperatorContext::MinusMinus()
{
	return getToken(CPP14Parser::MinusMinus, 0);
}

tree::TerminalNode* CPP14Parser::TheoperatorContext::Comma()
{
	return getToken(CPP14Parser::Comma, 0);
}

tree::TerminalNode* CPP14Parser::TheoperatorContext::ArrowStar()
{
	return getToken(CPP14Parser::ArrowStar, 0);
}

tree::TerminalNode* CPP14Parser::TheoperatorContext::Arrow()
{
	return getToken(CPP14Parser::Arrow, 0);
}

tree::TerminalNode* CPP14Parser::TheoperatorContext::LeftParen()
{
	return getToken(CPP14Parser::LeftParen, 0);
}

tree::TerminalNode* CPP14Parser::TheoperatorContext::RightParen()
{
	return getToken(CPP14Parser::RightParen, 0);
}


size_t CPP14Parser::TheoperatorContext::getRuleIndex() const
{
	return CPP14Parser::RuleTheoperator;//688
}

void CPP14Parser::TheoperatorContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::TheoperatorContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::TheoperatorContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitTheoperator(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::TheoperatorContext* CPP14Parser::theoperator( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<TheoperatorContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 390, CPP14Parser::RuleTheoperator);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(2450);//830
		_errHandler->sync(this, ctx);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 314, ctx))
		{
		case 1:
		{
			enterOuterAlt(ctx, 1);
			setState(2399);//958
			match(CPP14Parser::New,ctx);
			break;
		}

		case 2:
		{
			enterOuterAlt(ctx, 2);
			setState(2400);//958
			match(CPP14Parser::Delete,ctx);
			break;
		}

		case 3:
		{
			enterOuterAlt(ctx, 3);
			setState(2401);//958
			match(CPP14Parser::New,ctx);
			setState(2402);//958
			match(CPP14Parser::LeftBracket,ctx);
			setState(2403);//958
			match(CPP14Parser::RightBracket,ctx);
			break;
		}

		case 4:
		{
			enterOuterAlt(ctx, 4);
			setState(2404);//958
			match(CPP14Parser::Delete,ctx);
			setState(2405);//958
			match(CPP14Parser::LeftBracket,ctx);
			setState(2406);//958
			match(CPP14Parser::RightBracket,ctx);
			break;
		}

		case 5:
		{
			enterOuterAlt(ctx, 5);
			setState(2407);//958
			match(CPP14Parser::Plus,ctx);
			break;
		}

		case 6:
		{
			enterOuterAlt(ctx, 6);
			setState(2408);//958
			match(CPP14Parser::Minus,ctx);
			break;
		}

		case 7:
		{
			enterOuterAlt(ctx, 7);
			setState(2409);//958
			match(CPP14Parser::Star,ctx);
			break;
		}

		case 8:
		{
			enterOuterAlt(ctx, 8);
			setState(2410);//958
			match(CPP14Parser::Div,ctx);
			break;
		}

		case 9:
		{
			enterOuterAlt(ctx, 9);
			setState(2411);//958
			match(CPP14Parser::Mod,ctx);
			break;
		}

		case 10:
		{
			enterOuterAlt(ctx, 10);
			setState(2412);//958
			match(CPP14Parser::Caret,ctx);
			break;
		}

		case 11:
		{
			enterOuterAlt(ctx, 11);
			setState(2413);//958
			match(CPP14Parser::And,ctx);
			break;
		}

		case 12:
		{
			enterOuterAlt(ctx, 12);
			setState(2414);//958
			match(CPP14Parser::Or,ctx);
			break;
		}

		case 13:
		{
			enterOuterAlt(ctx, 13);
			setState(2415);//958
			match(CPP14Parser::Tilde,ctx);
			break;
		}

		case 14:
		{
			enterOuterAlt(ctx, 14);
			setState(2416);//958
			match(CPP14Parser::T__0,ctx);
			break;
		}

		case 15:
		{
			enterOuterAlt(ctx, 15);
			setState(2417);//958
			match(CPP14Parser::T__1,ctx);
			break;
		}

		case 16:
		{
			enterOuterAlt(ctx, 16);
			setState(2418);//958
			match(CPP14Parser::Assign,ctx);
			break;
		}

		case 17:
		{
			enterOuterAlt(ctx, 17);
			setState(2419);//958
			match(CPP14Parser::Less,ctx);
			break;
		}

		case 18:
		{
			enterOuterAlt(ctx, 18);
			setState(2420);//958
			match(CPP14Parser::Greater,ctx);
			break;
		}

		case 19:
		{
			enterOuterAlt(ctx, 19);
			setState(2421);//958
			match(CPP14Parser::PlusAssign,ctx);
			break;
		}

		case 20:
		{
			enterOuterAlt(ctx, 20);
			setState(2422);//958
			match(CPP14Parser::MinusAssign,ctx);
			break;
		}

		case 21:
		{
			enterOuterAlt(ctx, 21);
			setState(2423);//958
			match(CPP14Parser::StarAssign,ctx);
			break;
		}

		case 22:
		{
			enterOuterAlt(ctx, 22);
			setState(2424);//958
			match(CPP14Parser::DivAssign,ctx);
			break;
		}

		case 23:
		{
			enterOuterAlt(ctx, 23);
			setState(2425);//958
			match(CPP14Parser::ModAssign,ctx);
			break;
		}

		case 24:
		{
			enterOuterAlt(ctx, 24);
			setState(2426);//958
			match(CPP14Parser::XorAssign,ctx);
			break;
		}

		case 25:
		{
			enterOuterAlt(ctx, 25);
			setState(2427);//958
			match(CPP14Parser::AndAssign,ctx);
			break;
		}

		case 26:
		{
			enterOuterAlt(ctx, 26);
			setState(2428);//958
			match(CPP14Parser::OrAssign,ctx);
			break;
		}

		case 27:
		{
			enterOuterAlt(ctx, 27);
			setState(2429);//958
			match(CPP14Parser::LeftShift,ctx);
			break;
		}

		case 28:
		{
			enterOuterAlt(ctx, 28);
			setState(2430);//958
			match(CPP14Parser::RightShift,ctx);
			break;
		}

		case 29:
		{
			enterOuterAlt(ctx, 29);
			setState(2431);//958
			match(CPP14Parser::RightShiftAssign,ctx);
			break;
		}

		case 30:
		{
			enterOuterAlt(ctx, 30);
			setState(2432);//958
			match(CPP14Parser::LeftShiftAssign,ctx);
			break;
		}

		case 31:
		{
			enterOuterAlt(ctx, 31);
			setState(2433);//958
			match(CPP14Parser::Equal,ctx);
			break;
		}

		case 32:
		{
			enterOuterAlt(ctx, 32);
			setState(2434);//958
			match(CPP14Parser::NotEqual,ctx);
			break;
		}

		case 33:
		{
			enterOuterAlt(ctx, 33);
			setState(2435);//958
			match(CPP14Parser::LessEqual,ctx);
			break;
		}

		case 34:
		{
			enterOuterAlt(ctx, 34);
			setState(2436);//958
			match(CPP14Parser::GreaterEqual,ctx);
			break;
		}

		case 35:
		{
			enterOuterAlt(ctx, 35);
			setState(2437);//958
			match(CPP14Parser::T__2,ctx);
			break;
		}

		case 36:
		{
			enterOuterAlt(ctx, 36);
			setState(2438);//958
			match(CPP14Parser::T__3,ctx);
			break;
		}

		case 37:
		{
			enterOuterAlt(ctx, 37);
			setState(2439);//958
			match(CPP14Parser::T__4,ctx);
			break;
		}

		case 38:
		{
			enterOuterAlt(ctx, 38);
			setState(2440);//958
			match(CPP14Parser::T__5,ctx);
			break;
		}

		case 39:
		{
			enterOuterAlt(ctx, 39);
			setState(2441);//958
			match(CPP14Parser::PlusPlus,ctx);
			break;
		}

		case 40:
		{
			enterOuterAlt(ctx, 40);
			setState(2442);//958
			match(CPP14Parser::MinusMinus,ctx);
			break;
		}

		case 41:
		{
			enterOuterAlt(ctx, 41);
			setState(2443);//958
			match(CPP14Parser::Comma,ctx);
			break;
		}

		case 42:
		{
			enterOuterAlt(ctx, 42);
			setState(2444);//958
			match(CPP14Parser::ArrowStar,ctx);
			break;
		}

		case 43:
		{
			enterOuterAlt(ctx, 43);
			setState(2445);//958
			match(CPP14Parser::Arrow,ctx);
			break;
		}

		case 44:
		{
			enterOuterAlt(ctx, 44);
			setState(2446);//958
			match(CPP14Parser::LeftParen,ctx);
			setState(2447);//958
			match(CPP14Parser::RightParen,ctx);
			break;
		}

		case 45:
		{
			enterOuterAlt(ctx, 45);
			setState(2448);//958
			match(CPP14Parser::LeftBracket,ctx);
			setState(2449);//958
			match(CPP14Parser::RightBracket,ctx);
			break;
		}

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

//----------------- LiteralContext ------------------------------------------------------------------

CPP14Parser::LiteralContext::LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::LiteralContext::Integerliteral()
{
	return getToken(CPP14Parser::Integerliteral, 0);
}

tree::TerminalNode* CPP14Parser::LiteralContext::Characterliteral()
{
	return getToken(CPP14Parser::Characterliteral, 0);
}

tree::TerminalNode* CPP14Parser::LiteralContext::Floatingliteral()
{
	return getToken(CPP14Parser::Floatingliteral, 0);
}

tree::TerminalNode* CPP14Parser::LiteralContext::Stringliteral()
{
	return getToken(CPP14Parser::Stringliteral, 0);
}

CPP14Parser::BooleanliteralContext* CPP14Parser::LiteralContext::booleanliteral()
{
	return getRuleContext<CPP14Parser::BooleanliteralContext>(0);//1165
}

CPP14Parser::PointerliteralContext* CPP14Parser::LiteralContext::pointerliteral()
{
	return getRuleContext<CPP14Parser::PointerliteralContext>(0);//1165
}

CPP14Parser::UserdefinedliteralContext* CPP14Parser::LiteralContext::userdefinedliteral()
{
	return getRuleContext<CPP14Parser::UserdefinedliteralContext>(0);//1165
}


size_t CPP14Parser::LiteralContext::getRuleIndex() const
{
	return CPP14Parser::RuleLiteral;//688
}

void CPP14Parser::LiteralContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::LiteralContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::LiteralContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitLiteral(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::LiteralContext* CPP14Parser::literal( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<LiteralContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 392, CPP14Parser::RuleLiteral);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		setState(2459);//750
		_errHandler->sync(this, ctx);
		switch (_input->LA(1))
		{
			case CPP14Parser::Integerliteral:
			{
				enterOuterAlt(ctx, 1);
				setState(2452);//958
				match(CPP14Parser::Integerliteral,ctx);
				break;
			}

			case CPP14Parser::Characterliteral:
			{
				enterOuterAlt(ctx, 2);
				setState(2453);//958
				match(CPP14Parser::Characterliteral,ctx);
				break;
			}

			case CPP14Parser::Floatingliteral:
			{
				enterOuterAlt(ctx, 3);
				setState(2454);//958
				match(CPP14Parser::Floatingliteral,ctx);
				break;
			}

			case CPP14Parser::Stringliteral:
			{
				enterOuterAlt(ctx, 4);
				setState(2455);//958
				match(CPP14Parser::Stringliteral,ctx);
				break;
			}

			case CPP14Parser::False:
			case CPP14Parser::True:
			{
				enterOuterAlt(ctx, 5);
				setState(2456); //951
				booleanliteral(ctx);
				break;
			}

			case CPP14Parser::Nullptr:
			{
				enterOuterAlt(ctx, 6);
				setState(2457); //951
				pointerliteral(ctx);
				break;
			}

			case CPP14Parser::Userdefinedintegerliteral:
			case CPP14Parser::Userdefinedfloatingliteral:
			case CPP14Parser::Userdefinedstringliteral:
			case CPP14Parser::Userdefinedcharacterliteral:
			{
				enterOuterAlt(ctx, 7);
				setState(2458); //951
				userdefinedliteral(ctx);
				break;
			}

		default:
			throw NoViableAltException(this, ctx);
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

//----------------- BooleanliteralContext ------------------------------------------------------------------

CPP14Parser::BooleanliteralContext::BooleanliteralContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::BooleanliteralContext::False()
{
	return getToken(CPP14Parser::False, 0);
}

tree::TerminalNode* CPP14Parser::BooleanliteralContext::True()
{
	return getToken(CPP14Parser::True, 0);
}


size_t CPP14Parser::BooleanliteralContext::getRuleIndex() const
{
	return CPP14Parser::RuleBooleanliteral;//688
}

void CPP14Parser::BooleanliteralContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::BooleanliteralContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::BooleanliteralContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitBooleanliteral(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::BooleanliteralContext* CPP14Parser::booleanliteral( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<BooleanliteralContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 394, CPP14Parser::RuleBooleanliteral);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(2461);//970
		_la = _input->LA(1);
		if (!(_la == CPP14Parser::False

		|| _la == CPP14Parser::True))
		{
		_errHandler->recoverInline(this, ctx);
		}
		else
		{
			_errHandler->reportMatch(this);
			consume(ctx);
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

//----------------- PointerliteralContext ------------------------------------------------------------------

CPP14Parser::PointerliteralContext::PointerliteralContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::PointerliteralContext::Nullptr()
{
	return getToken(CPP14Parser::Nullptr, 0);
}


size_t CPP14Parser::PointerliteralContext::getRuleIndex() const
{
	return CPP14Parser::RulePointerliteral;//688
}

void CPP14Parser::PointerliteralContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::PointerliteralContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::PointerliteralContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitPointerliteral(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::PointerliteralContext* CPP14Parser::pointerliteral( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<PointerliteralContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 396, CPP14Parser::RulePointerliteral);

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(2463);//958
		match(CPP14Parser::Nullptr,ctx);
	 
	}
	catch (RecognitionException &e)
{
		_errHandler->reportError(this, e, ctx);
		ctx->exception = std::current_exception();
		_errHandler->recover(this, ctx->exception, ctx);
	}

	return ctx;
}

//----------------- UserdefinedliteralContext ------------------------------------------------------------------

CPP14Parser::UserdefinedliteralContext::UserdefinedliteralContext(antlr4::ParserRuleContext *parent, size_t invokingState)
	: antlr4::ParserRuleContext(parent, invokingState)
{
}

tree::TerminalNode* CPP14Parser::UserdefinedliteralContext::Userdefinedintegerliteral()
{
	return getToken(CPP14Parser::Userdefinedintegerliteral, 0);
}

tree::TerminalNode* CPP14Parser::UserdefinedliteralContext::Userdefinedfloatingliteral()
{
	return getToken(CPP14Parser::Userdefinedfloatingliteral, 0);
}

tree::TerminalNode* CPP14Parser::UserdefinedliteralContext::Userdefinedstringliteral()
{
	return getToken(CPP14Parser::Userdefinedstringliteral, 0);
}

tree::TerminalNode* CPP14Parser::UserdefinedliteralContext::Userdefinedcharacterliteral()
{
	return getToken(CPP14Parser::Userdefinedcharacterliteral, 0);
}


size_t CPP14Parser::UserdefinedliteralContext::getRuleIndex() const
{
	return CPP14Parser::RuleUserdefinedliteral;//688
}

void CPP14Parser::UserdefinedliteralContext::enterRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->enter(this);
}

void CPP14Parser::UserdefinedliteralContext::exitRule(not_null<tree::ParseTreeListener*> listener)
{
	auto parserListener = dynamic_cast<CPP14Listener *>(listener.get());//1212
	if (parserListener != nullptr)
		parserListener->exit(this);
}


antlrcpp::Any CPP14Parser::UserdefinedliteralContext::accept(tree::ParseTreeVisitor *visitor)
{
	if (auto parserVisitor = dynamic_cast<CPP14Visitor*>(visitor))//1226
		return parserVisitor->visitUserdefinedliteral(this);
	else
		return visitor->visitChildren(this);
}

CPP14Parser::UserdefinedliteralContext* CPP14Parser::userdefinedliteral( antlr4::ParserRuleContext *parent)
{
#ifdef PARSER_DEBUG
	if(parent != nullptr)
		std::cout<<parent->getText()<<std::endl;
#endif
	auto _localctx = std::make_unique<UserdefinedliteralContext>(parent, getState());//549
	auto ctx = _localctx.get();//549
	enterRule(std::move(_localctx), 398, CPP14Parser::RuleUserdefinedliteral);
	size_t _la = 0;

	auto onExit = finally([=]
{
		exitRule(ctx);
	});
	try
{
		enterOuterAlt(ctx, 1);
		setState(2465);//970
		_la = _input->LA(1);
		if (!(((((_la - 143) & ~ 0x3fULL) == 0) &&
			((1ULL << (_la - 143)) & ((1ULL << (CPP14Parser::Userdefinedintegerliteral - 143))
			| (1ULL << (CPP14Parser::Userdefinedfloatingliteral - 143))
			| (1ULL << (CPP14Parser::Userdefinedstringliteral - 143))
			| (1ULL << (CPP14Parser::Userdefinedcharacterliteral - 143)))) != 0)))
		{
		_errHandler->recoverInline(this, ctx);
		}
		else
		{
			_errHandler->reportMatch(this);
			consume(ctx);
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

bool CPP14Parser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex)
{
	switch (ruleIndex)
{
		case 5: return nestednamespecifierSempred(dynamic_cast<NestednamespecifierContext *>(context), predicateIndex);

		case 10: return capturelistSempred(dynamic_cast<CapturelistContext *>(context), predicateIndex);

		case 15: return postfixexpressionSempred(dynamic_cast<PostfixexpressionContext *>(context), predicateIndex);

		case 26: return noptrnewdeclaratorSempred(dynamic_cast<NoptrnewdeclaratorContext *>(context), predicateIndex);

		case 31: return pmexpressionSempred(dynamic_cast<PmexpressionContext *>(context), predicateIndex);

		case 32: return multiplicativeexpressionSempred(dynamic_cast<MultiplicativeexpressionContext *>(context), predicateIndex);

		case 33: return additiveexpressionSempred(dynamic_cast<AdditiveexpressionContext *>(context), predicateIndex);

		case 34: return shiftexpressionSempred(dynamic_cast<ShiftexpressionContext *>(context), predicateIndex);

		case 36: return relationalexpressionSempred(dynamic_cast<RelationalexpressionContext *>(context), predicateIndex);

		case 37: return equalityexpressionSempred(dynamic_cast<EqualityexpressionContext *>(context), predicateIndex);

		case 38: return andexpressionSempred(dynamic_cast<AndexpressionContext *>(context), predicateIndex);

		case 39: return exclusiveorexpressionSempred(dynamic_cast<ExclusiveorexpressionContext *>(context), predicateIndex);

		case 40: return inclusiveorexpressionSempred(dynamic_cast<InclusiveorexpressionContext *>(context), predicateIndex);

		case 41: return logicalandexpressionSempred(dynamic_cast<LogicalandexpressionContext *>(context), predicateIndex);

		case 42: return logicalorexpressionSempred(dynamic_cast<LogicalorexpressionContext *>(context), predicateIndex);

		case 46: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

		case 52: return statementseqSempred(dynamic_cast<StatementseqContext *>(context), predicateIndex);

		case 61: return declarationseqSempred(dynamic_cast<DeclarationseqContext *>(context), predicateIndex);

		case 88: return enumeratorlistSempred(dynamic_cast<EnumeratorlistContext *>(context), predicateIndex);

		case 106: return attributespecifierseqSempred(dynamic_cast<AttributespecifierseqContext *>(context), predicateIndex);

		case 109: return attributelistSempred(dynamic_cast<AttributelistContext *>(context), predicateIndex);

		case 115: return balancedtokenseqSempred(dynamic_cast<BalancedtokenseqContext *>(context), predicateIndex);

		case 117: return initdeclaratorlistSempred(dynamic_cast<InitdeclaratorlistContext *>(context), predicateIndex);

		case 121: return noptrdeclaratorSempred(dynamic_cast<NoptrdeclaratorContext *>(context), predicateIndex);

		case 132: return noptrabstractdeclaratorSempred(dynamic_cast<NoptrabstractdeclaratorContext *>(context), predicateIndex);

		case 134: return noptrabstractpackdeclaratorSempred(dynamic_cast<NoptrabstractpackdeclaratorContext *>(context), predicateIndex);

		case 136: return parameterdeclarationlistSempred(dynamic_cast<ParameterdeclarationlistContext *>(context), predicateIndex);

		case 143: return initializerlistSempred(dynamic_cast<InitializerlistContext *>(context), predicateIndex);

		case 153: return memberdeclaratorlistSempred(dynamic_cast<MemberdeclaratorlistContext *>(context), predicateIndex);

		case 155: return virtspecifierseqSempred(dynamic_cast<VirtspecifierseqContext *>(context), predicateIndex);

		case 159: return basespecifierlistSempred(dynamic_cast<BasespecifierlistContext *>(context), predicateIndex);

		case 174: return templateparameterlistSempred(dynamic_cast<TemplateparameterlistContext *>(context), predicateIndex);

		case 180: return templateargumentlistSempred(dynamic_cast<TemplateargumentlistContext *>(context), predicateIndex);

		case 193: return typeidlistSempred(dynamic_cast<TypeidlistContext *>(context), predicateIndex);//430

	default:
		break;
	}
	return true;
}

bool CPP14Parser::nestednamespecifierSempred(NestednamespecifierContext *_localctx, size_t predicateIndex)
{
	switch (predicateIndex)
{
		case 0: return precpred(nullptr, 2);
		case 1: return precpred(nullptr, 1);

	default:
		break;
	}
	return true;
}

bool CPP14Parser::capturelistSempred(CapturelistContext *_localctx, size_t predicateIndex)
{
	switch (predicateIndex)
{
		case 2: return precpred(nullptr, 1);

	default:
		break;
	}
	return true;
}

bool CPP14Parser::postfixexpressionSempred(PostfixexpressionContext *_localctx, size_t predicateIndex)
{
	switch (predicateIndex)
{
		case 3: return precpred(nullptr, 19);
		case 4: return precpred(nullptr, 18);
		case 5: return precpred(nullptr, 17);
		case 6: return precpred(nullptr, 12);
		case 7: return precpred(nullptr, 11);
		case 8: return precpred(nullptr, 10);
		case 9: return precpred(nullptr, 9);
		case 10: return precpred(nullptr, 8);
		case 11: return precpred(nullptr, 7);

	default:
		break;
	}
	return true;
}

bool CPP14Parser::noptrnewdeclaratorSempred(NoptrnewdeclaratorContext *_localctx, size_t predicateIndex)
{
	switch (predicateIndex)
{
		case 12: return precpred(nullptr, 1);

	default:
		break;
	}
	return true;
}

bool CPP14Parser::pmexpressionSempred(PmexpressionContext *_localctx, size_t predicateIndex)
{
	switch (predicateIndex)
{
		case 13: return precpred(nullptr, 2);
		case 14: return precpred(nullptr, 1);

	default:
		break;
	}
	return true;
}

bool CPP14Parser::multiplicativeexpressionSempred(MultiplicativeexpressionContext *_localctx, size_t predicateIndex)
{
	switch (predicateIndex)
{
		case 15: return precpred(nullptr, 3);
		case 16: return precpred(nullptr, 2);
		case 17: return precpred(nullptr, 1);

	default:
		break;
	}
	return true;
}

bool CPP14Parser::additiveexpressionSempred(AdditiveexpressionContext *_localctx, size_t predicateIndex)
{
	switch (predicateIndex)
{
		case 18: return precpred(nullptr, 2);
		case 19: return precpred(nullptr, 1);

	default:
		break;
	}
	return true;
}

bool CPP14Parser::shiftexpressionSempred(ShiftexpressionContext *_localctx, size_t predicateIndex)
{
	switch (predicateIndex)
{
		case 20: return precpred(nullptr, 1);

	default:
		break;
	}
	return true;
}

bool CPP14Parser::relationalexpressionSempred(RelationalexpressionContext *_localctx, size_t predicateIndex)
{
	switch (predicateIndex)
{
		case 21: return precpred(nullptr, 4);
		case 22: return precpred(nullptr, 3);
		case 23: return precpred(nullptr, 2);
		case 24: return precpred(nullptr, 1);

	default:
		break;
	}
	return true;
}

bool CPP14Parser::equalityexpressionSempred(EqualityexpressionContext *_localctx, size_t predicateIndex)
{
	switch (predicateIndex)
{
		case 25: return precpred(nullptr, 2);
		case 26: return precpred(nullptr, 1);

	default:
		break;
	}
	return true;
}

bool CPP14Parser::andexpressionSempred(AndexpressionContext *_localctx, size_t predicateIndex)
{
	switch (predicateIndex)
{
		case 27: return precpred(nullptr, 1);

	default:
		break;
	}
	return true;
}

bool CPP14Parser::exclusiveorexpressionSempred(ExclusiveorexpressionContext *_localctx, size_t predicateIndex)
{
	switch (predicateIndex)
{
		case 28: return precpred(nullptr, 1);

	default:
		break;
	}
	return true;
}

bool CPP14Parser::inclusiveorexpressionSempred(InclusiveorexpressionContext *_localctx, size_t predicateIndex)
{
	switch (predicateIndex)
{
		case 29: return precpred(nullptr, 1);

	default:
		break;
	}
	return true;
}

bool CPP14Parser::logicalandexpressionSempred(LogicalandexpressionContext *_localctx, size_t predicateIndex)
{
	switch (predicateIndex)
{
		case 30: return precpred(nullptr, 2);
		case 31: return precpred(nullptr, 1);

	default:
		break;
	}
	return true;
}

bool CPP14Parser::logicalorexpressionSempred(LogicalorexpressionContext *_localctx, size_t predicateIndex)
{
	switch (predicateIndex)
{
		case 32: return precpred(nullptr, 2);
		case 33: return precpred(nullptr, 1);

	default:
		break;
	}
	return true;
}

bool CPP14Parser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex)
{
	switch (predicateIndex)
{
		case 34: return precpred(nullptr, 1);

	default:
		break;
	}
	return true;
}

bool CPP14Parser::statementseqSempred(StatementseqContext *_localctx, size_t predicateIndex)
{
	switch (predicateIndex)
{
		case 35: return precpred(nullptr, 1);

	default:
		break;
	}
	return true;
}

bool CPP14Parser::declarationseqSempred(DeclarationseqContext *_localctx, size_t predicateIndex)
{
	switch (predicateIndex)
{
		case 36: return precpred(nullptr, 1);

	default:
		break;
	}
	return true;
}

bool CPP14Parser::enumeratorlistSempred(EnumeratorlistContext *_localctx, size_t predicateIndex)
{
	switch (predicateIndex)
{
		case 37: return precpred(nullptr, 1);

	default:
		break;
	}
	return true;
}

bool CPP14Parser::attributespecifierseqSempred(AttributespecifierseqContext *_localctx, size_t predicateIndex)
{
	switch (predicateIndex)
{
		case 38: return precpred(nullptr, 1);

	default:
		break;
	}
	return true;
}

bool CPP14Parser::attributelistSempred(AttributelistContext *_localctx, size_t predicateIndex)
{
	switch (predicateIndex)
{
		case 39: return precpred(nullptr, 3);
		case 40: return precpred(nullptr, 1);

	default:
		break;
	}
	return true;
}

bool CPP14Parser::balancedtokenseqSempred(BalancedtokenseqContext *_localctx, size_t predicateIndex)
{
	switch (predicateIndex)
{
		case 41: return precpred(nullptr, 1);

	default:
		break;
	}
	return true;
}

bool CPP14Parser::initdeclaratorlistSempred(InitdeclaratorlistContext *_localctx, size_t predicateIndex)
{
	switch (predicateIndex)
{
		case 42: return precpred(nullptr, 1);

	default:
		break;
	}
	return true;
}

bool CPP14Parser::noptrdeclaratorSempred(NoptrdeclaratorContext *_localctx, size_t predicateIndex)
{
	switch (predicateIndex)
{
		case 43: return precpred(nullptr, 3);
		case 44: return precpred(nullptr, 2);

	default:
		break;
	}
	return true;
}

bool CPP14Parser::noptrabstractdeclaratorSempred(NoptrabstractdeclaratorContext *_localctx, size_t predicateIndex)
{
	switch (predicateIndex)
{
		case 45: return precpred(nullptr, 5);
		case 46: return precpred(nullptr, 3);

	default:
		break;
	}
	return true;
}

bool CPP14Parser::noptrabstractpackdeclaratorSempred(NoptrabstractpackdeclaratorContext *_localctx, size_t predicateIndex)
{
	switch (predicateIndex)
{
		case 47: return precpred(nullptr, 3);
		case 48: return precpred(nullptr, 2);

	default:
		break;
	}
	return true;
}

bool CPP14Parser::parameterdeclarationlistSempred(ParameterdeclarationlistContext *_localctx, size_t predicateIndex)
{
	switch (predicateIndex)
{
		case 49: return precpred(nullptr, 1);

	default:
		break;
	}
	return true;
}

bool CPP14Parser::initializerlistSempred(InitializerlistContext *_localctx, size_t predicateIndex)
{
	switch (predicateIndex)
{
		case 50: return precpred(nullptr, 1);

	default:
		break;
	}
	return true;
}

bool CPP14Parser::memberdeclaratorlistSempred(MemberdeclaratorlistContext *_localctx, size_t predicateIndex)
{
	switch (predicateIndex)
{
		case 51: return precpred(nullptr, 1);

	default:
		break;
	}
	return true;
}

bool CPP14Parser::virtspecifierseqSempred(VirtspecifierseqContext *_localctx, size_t predicateIndex)
{
	switch (predicateIndex)
{
		case 52: return precpred(nullptr, 1);

	default:
		break;
	}
	return true;
}

bool CPP14Parser::basespecifierlistSempred(BasespecifierlistContext *_localctx, size_t predicateIndex)
{
	switch (predicateIndex)
{
		case 53: return precpred(nullptr, 1);

	default:
		break;
	}
	return true;
}

bool CPP14Parser::templateparameterlistSempred(TemplateparameterlistContext *_localctx, size_t predicateIndex)
{
	switch (predicateIndex)
{
		case 54: return precpred(nullptr, 1);

	default:
		break;
	}
	return true;
}

bool CPP14Parser::templateargumentlistSempred(TemplateargumentlistContext *_localctx, size_t predicateIndex)
{
	switch (predicateIndex)
{
		case 55: return precpred(nullptr, 1);

	default:
		break;
	}
	return true;
}

bool CPP14Parser::typeidlistSempred(TypeidlistContext *_localctx, size_t predicateIndex)
{
	switch (predicateIndex)
{
		case 56: return precpred(nullptr, 1);

	default:
		break;
	}
	return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> CPP14Parser::_decisionToDFA;
atn::PredictionContextCache CPP14Parser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN CPP14Parser::_atn;
std::vector<uint16_t> CPP14Parser::_serializedATN;

std::vector<std::string_view> CPP14Parser::_ruleNames =
{
	"translationunit", "primaryexpression", "idexpression", "unqualifiedid", 
	"qualifiedid", "nestednamespecifier", "lambdaexpression", "lambdaintroducer", 
	"lambdacapture", "capturedefault", "capturelist", "capture", "simplecapture", 
	"initcapture", "lambdadeclarator", "postfixexpression", "typeidofexpr", 
	"typeidofthetypeid", "expressionlist", "pseudodestructorname", "unaryexpression", 
	"unaryoperator", "newexpression", "newplacement", "newtypeid", "newdeclarator", 
	"noptrnewdeclarator", "newinitializer", "deleteexpression", "noexceptexpression", 
	"castexpression", "pmexpression", "multiplicativeexpression", "additiveexpression", 
	"shiftexpression", "shiftoperator", "relationalexpression", "equalityexpression", 
	"andexpression", "exclusiveorexpression", "inclusiveorexpression", "logicalandexpression", 
	"logicalorexpression", "conditionalexpression", "assignmentexpression", 
	"assignmentoperator", "expression", "constantexpression", "statement", 
	"labeledstatement", "expressionstatement", "compoundstatement", "statementseq", 
	"selectionstatement", "condition", "iterationstatement", "forinitstatement", 
	"forrangedeclaration", "forrangeinitializer", "jumpstatement", "declarationstatement", 
	"declarationseq", "declaration", "blockdeclaration", "aliasdeclaration", 
	"simpledeclaration", "static_assertdeclaration", "emptydeclaration", "attributedeclaration", 
	"declspecifier", "declspecifierseq", "storageclassspecifier", "functionspecifier", 
	"typedefname", "typespecifier", "trailingtypespecifier", "typespecifierseq", 
	"trailingtypespecifierseq", "simpletypespecifier", "thetypename", "decltypespecifier", 
	"elaboratedtypespecifier", "enumname", "enumspecifier", "enumhead", "opaqueenumdeclaration", 
	"enumkey", "enumbase", "enumeratorlist", "enumeratordefinition", "enumerator", 
	"namespacename", "originalnamespacename", "namespacedefinition", "namednamespacedefinition", 
	"originalnamespacedefinition", "extensionnamespacedefinition", "unnamednamespacedefinition", 
	"namespacebody", "namespacealias", "namespacealiasdefinition", "qualifiednamespacespecifier", 
	"usingdeclaration", "usingdirective", "asmdefinition", "linkagespecification", 
	"attributespecifierseq", "attributespecifier", "alignmentspecifier", "attributelist", 
	"attribute", "attributetoken", "attributescopedtoken", "attributenamespace", 
	"attributeargumentclause", "balancedtokenseq", "balancedtoken", "initdeclaratorlist", 
	"initdeclarator", "declarator", "ptrdeclarator", "noptrdeclarator", "parametersandqualifiers", 
	"trailingreturntype", "ptroperator", "cvqualifierseq", "cvqualifier", "refqualifier", 
	"declaratorid", "thetypeid", "abstractdeclarator", "ptrabstractdeclarator", 
	"noptrabstractdeclarator", "abstractpackdeclarator", "noptrabstractpackdeclarator", 
	"parameterdeclarationclause", "parameterdeclarationlist", "parameterdeclaration", 
	"functiondefinition", "functionbody", "initializer", "braceorequalinitializer", 
	"initializerclause", "initializerlist", "bracedinitlist", "classname", 
	"classspecifier", "classhead", "classheadname", "classvirtspecifier", "classkey", 
	"memberspecification", "memberdeclaration", "memberdeclaratorlist", "memberdeclarator", 
	"virtspecifierseq", "virtspecifier", "purespecifier", "baseclause", "basespecifierlist", 
	"basespecifier", "classordecltype", "basetypespecifier", "accessspecifier", 
	"conversionfunctionid", "conversiontypeid", "conversiondeclarator", "ctorinitializer", 
	"meminitializerlist", "meminitializer", "meminitializerid", "operatorfunctionid", 
	"literaloperatorid", "templatedeclaration", "templateparameterlist", "templateparameter", 
	"typeparameter", "simpletemplateid", "templateid", "templatename", "templateargumentlist", 
	"templateargument", "typenamespecifier", "explicitinstantiation", "explicitspecialization", 
	"tryblock", "functiontryblock", "handlerseq", "handler", "exceptiondeclaration", 
	"throwexpression", "exceptionspecification", "dynamicexceptionspecification", 
	"typeidlist", "noexceptspecification", "theoperator", "literal", "booleanliteral", 
	"pointerliteral", "userdefinedliteral"
};

std::vector<std::string_view> CPP14Parser::_literalNames =
{
	"", "'!'", "'not'", "'&&'", "'and'", "'||'", "'or'", "", "", "'alignas'", 
	"'alignof'", "'asm'", "'auto'", "'bool'", "'break'", "'case'", "'catch'", 
	"'char'", "'char16_t'", "'char32_t'", "'class'", "'const'", "'constexpr'", 
	"'const_cast'", "'continue'", "'decltype'", "'default'", "'delete'", "'do'", 
	"'double'", "'dynamic_cast'", "'else'", "'enum'", "'explicit'", "'export'", 
	"'extern'", "'false'", "'final'", "'float'", "'for'", "'friend'", "'goto'", 
	"'if'", "'inline'", "'int'", "'long'", "'mutable'", "'namespace'", "'new'", 
	"'noexcept'", "'nullptr'", "'operator'", "'override'", "'private'", "'protected'", 
	"'public'", "'register'", "'reinterpret_cast'", "'return'", "'short'", 
	"'signed'", "'sizeof'", "'static'", "'static_assert'", "'static_cast'", 
	"'struct'", "'switch'", "'template'", "'this'", "'thread_local'", "'throw'", 
	"'true'", "'try'", "'typedef'", "'typeid'", "'typename'", "'union'", "'unsigned'", 
	"'using'", "'virtual'", "'void'", "'volatile'", "'wchar_t'", "'while'", 
	"'('", "')'", "'['", "']'", "'{'", "'}'", "'+'", "'-'", "'*'", "'/'", "'%'", 
	"'^'", "'&'", "'|'", "'~'", "", "'='", "'<'", "'>'", "'+='", "'-='", "'*='", 
	"'/='", "'%='", "'^='", "'&='", "'|='", "'<<'", "'>>'", "'<<='", "'>>='", 
	"'=='", "'!='", "'<='", "'>='", "", "", "'++'", "'--'", "','", "'->*'", 
	"'->'", "'?'", "':'", "'::'", "';'", "'.'", "'.*'", "'...'"
};

std::vector<std::string_view> CPP14Parser::_symbolicNames =
{
	"", "", "", "", "", "", "", "MultiLineMacro", "Directive", "Alignas", "Alignof", 
	"Asm", "Auto", "Bool", "Break", "Case", "Catch", "Char", "Char16", "Char32", 
	"Class", "Const", "Constexpr", "Const_cast", "Continue", "Decltype", "Default", 
	"Delete", "Do", "Double", "Dynamic_cast", "Else", "Enum", "Explicit", "Export", 
	"Extern", "False", "Final", "Float", "For", "Friend", "Goto", "If", "Inline", 
	"Int", "Long", "Mutable", "Namespace", "New", "Noexcept", "Nullptr", "Operator", 
	"Override", "Private", "Protected", "Public", "Register", "Reinterpret_cast", 
	"Return", "Short", "Signed", "Sizeof", "Static", "Static_assert", "Static_cast", 
	"Struct", "Switch", "Template", "This", "Thread_local", "Throw", "True", 
	"Try", "Typedef", "Typeid_", "Typename_", "Union", "Unsigned", "Using", 
	"Virtual", "Void", "Volatile", "Wchar", "While", "LeftParen", "RightParen", 
	"LeftBracket", "RightBracket", "LeftBrace", "RightBrace", "Plus", "Minus", 
	"Star", "Div", "Mod", "Caret", "And", "Or", "Tilde", "Not", "Assign", "Less", 
	"Greater", "PlusAssign", "MinusAssign", "StarAssign", "DivAssign", "ModAssign", 
	"XorAssign", "AndAssign", "OrAssign", "LeftShift", "RightShift", "LeftShiftAssign", 
	"RightShiftAssign", "Equal", "NotEqual", "LessEqual", "GreaterEqual", "AndAnd", 
	"OrOr", "PlusPlus", "MinusMinus", "Comma", "ArrowStar", "Arrow", "Question", 
	"Colon", "Doublecolon", "Semi", "Dot", "DotStar", "Ellipsis", "Identifier", 
	"Integerliteral", "Decimalliteral", "Octalliteral", "Hexadecimalliteral", 
	"Binaryliteral", "Integersuffix", "Characterliteral", "Floatingliteral", 
	"Stringliteral", "Userdefinedintegerliteral", "Userdefinedfloatingliteral", 
	"Userdefinedstringliteral", "Userdefinedcharacterliteral", "Whitespace", 
	"Newline", "BlockComment", "LineComment"
};

dfa::Vocabulary CPP14Parser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string_view> CPP14Parser::_tokenNames;

CPP14Parser::Initializer::Initializer()
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

	static uint16_t serializedATNSegment0[] =
	{
		0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 0x3, 
			 0x98, 0x9a6, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
			 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
			 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
			 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
			 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
			 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
			 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 
			 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 
			 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 0x1f, 
			 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 0x9, 
			 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 0x25, 
			 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 0x4, 
			 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 0x2c, 
			 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 0x9, 
			 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 0x32, 
			 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 0x4, 
			 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 0x39, 
			 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 0x9, 0x3b, 0x4, 0x3c, 0x9, 
			 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 0x9, 0x3e, 0x4, 0x3f, 0x9, 0x3f, 
			 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 0x4, 
			 0x43, 0x9, 0x43, 0x4, 0x44, 0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 0x46, 
			 0x9, 0x46, 0x4, 0x47, 0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 0x9, 
			 0x49, 0x4, 0x4a, 0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 0x4c, 
			 0x4, 0x4d, 0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 0x4, 
			 0x50, 0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 0x53, 
			 0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 0x9, 
			 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 0x9, 0x59, 
			 0x4, 0x5a, 0x9, 0x5a, 0x4, 0x5b, 0x9, 0x5b, 0x4, 0x5c, 0x9, 0x5c, 0x4, 
			 0x5d, 0x9, 0x5d, 0x4, 0x5e, 0x9, 0x5e, 0x4, 0x5f, 0x9, 0x5f, 0x4, 0x60, 
			 0x9, 0x60, 0x4, 0x61, 0x9, 0x61, 0x4, 0x62, 0x9, 0x62, 0x4, 0x63, 0x9, 
			 0x63, 0x4, 0x64, 0x9, 0x64, 0x4, 0x65, 0x9, 0x65, 0x4, 0x66, 0x9, 0x66, 
			 0x4, 0x67, 0x9, 0x67, 0x4, 0x68, 0x9, 0x68, 0x4, 0x69, 0x9, 0x69, 0x4, 
			 0x6a, 0x9, 0x6a, 0x4, 0x6b, 0x9, 0x6b, 0x4, 0x6c, 0x9, 0x6c, 0x4, 0x6d, 
			 0x9, 0x6d, 0x4, 0x6e, 0x9, 0x6e, 0x4, 0x6f, 0x9, 0x6f, 0x4, 0x70, 0x9, 
			 0x70, 0x4, 0x71, 0x9, 0x71, 0x4, 0x72, 0x9, 0x72, 0x4, 0x73, 0x9, 0x73, 
			 0x4, 0x74, 0x9, 0x74, 0x4, 0x75, 0x9, 0x75, 0x4, 0x76, 0x9, 0x76, 0x4, 
			 0x77, 0x9, 0x77, 0x4, 0x78, 0x9, 0x78, 0x4, 0x79, 0x9, 0x79, 0x4, 0x7a, 
			 0x9, 0x7a, 0x4, 0x7b, 0x9, 0x7b, 0x4, 0x7c, 0x9, 0x7c, 0x4, 0x7d, 0x9, 
			 0x7d, 0x4, 0x7e, 0x9, 0x7e, 0x4, 0x7f, 0x9, 0x7f, 0x4, 0x80, 0x9, 0x80, 
			 0x4, 0x81, 0x9, 0x81, 0x4, 0x82, 0x9, 0x82, 0x4, 0x83, 0x9, 0x83, 0x4, 
			 0x84, 0x9, 0x84, 0x4, 0x85, 0x9, 0x85, 0x4, 0x86, 0x9, 0x86, 0x4, 0x87, 
			 0x9, 0x87, 0x4, 0x88, 0x9, 0x88, 0x4, 0x89, 0x9, 0x89, 0x4, 0x8a, 0x9, 
			 0x8a, 0x4, 0x8b, 0x9, 0x8b, 0x4, 0x8c, 0x9, 0x8c, 0x4, 0x8d, 0x9, 0x8d, 
			 0x4, 0x8e, 0x9, 0x8e, 0x4, 0x8f, 0x9, 0x8f, 0x4, 0x90, 0x9, 0x90, 0x4, 
			 0x91, 0x9, 0x91, 0x4, 0x92, 0x9, 0x92, 0x4, 0x93, 0x9, 0x93, 0x4, 0x94, 
			 0x9, 0x94, 0x4, 0x95, 0x9, 0x95, 0x4, 0x96, 0x9, 0x96, 0x4, 0x97, 0x9, 
			 0x97, 0x4, 0x98, 0x9, 0x98, 0x4, 0x99, 0x9, 0x99, 0x4, 0x9a, 0x9, 0x9a, 
			 0x4, 0x9b, 0x9, 0x9b, 0x4, 0x9c, 0x9, 0x9c, 0x4, 0x9d, 0x9, 0x9d, 0x4, 
			 0x9e, 0x9, 0x9e, 0x4, 0x9f, 0x9, 0x9f, 0x4, 0xa0, 0x9, 0xa0, 0x4, 0xa1, 
			 0x9, 0xa1, 0x4, 0xa2, 0x9, 0xa2, 0x4, 0xa3, 0x9, 0xa3, 0x4, 0xa4, 0x9, 
			 0xa4, 0x4, 0xa5, 0x9, 0xa5, 0x4, 0xa6, 0x9, 0xa6, 0x4, 0xa7, 0x9, 0xa7, 
			 0x4, 0xa8, 0x9, 0xa8, 0x4, 0xa9, 0x9, 0xa9, 0x4, 0xaa, 0x9, 0xaa, 0x4, 
			 0xab, 0x9, 0xab, 0x4, 0xac, 0x9, 0xac, 0x4, 0xad, 0x9, 0xad, 0x4, 0xae, 
			 0x9, 0xae, 0x4, 0xaf, 0x9, 0xaf, 0x4, 0xb0, 0x9, 0xb0, 0x4, 0xb1, 0x9, 
			 0xb1, 0x4, 0xb2, 0x9, 0xb2, 0x4, 0xb3, 0x9, 0xb3, 0x4, 0xb4, 0x9, 0xb4, 
			 0x4, 0xb5, 0x9, 0xb5, 0x4, 0xb6, 0x9, 0xb6, 0x4, 0xb7, 0x9, 0xb7, 0x4, 
			 0xb8, 0x9, 0xb8, 0x4, 0xb9, 0x9, 0xb9, 0x4, 0xba, 0x9, 0xba, 0x4, 0xbb, 
			 0x9, 0xbb, 0x4, 0xbc, 0x9, 0xbc, 0x4, 0xbd, 0x9, 0xbd, 0x4, 0xbe, 0x9, 
			 0xbe, 0x4, 0xbf, 0x9, 0xbf, 0x4, 0xc0, 0x9, 0xc0, 0x4, 0xc1, 0x9, 0xc1, 
			 0x4, 0xc2, 0x9, 0xc2, 0x4, 0xc3, 0x9, 0xc3, 0x4, 0xc4, 0x9, 0xc4, 0x4, 
			 0xc5, 0x9, 0xc5, 0x4, 0xc6, 0x9, 0xc6, 0x4, 0xc7, 0x9, 0xc7, 0x4, 0xc8, 
			 0x9, 0xc8, 0x4, 0xc9, 0x9, 0xc9, 0x3, 0x2, 0x5, 0x2, 0x194, 0xa, 0x2, 
			 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
			 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x1a0, 0xa, 0x3, 0x3, 0x4, 0x3, 
			 0x4, 0x5, 0x4, 0x1a4, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
			 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x1af, 0xa, 
			 0x5, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x1b3, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 
			 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
			 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x1c2, 0xa, 0x7, 0x3, 
			 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x1c9, 0xa, 0x7, 
			 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x1ce, 0xa, 0x7, 0xc, 0x7, 0xe, 
			 0x7, 0x1d1, 0xb, 0x7, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x1d5, 0xa, 0x8, 
			 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x1db, 0xa, 0x9, 0x3, 
			 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
			 0xa, 0x5, 0xa, 0x1e5, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 
			 0x3, 0xc, 0x5, 0xc, 0x1ec, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
			 0xc, 0x5, 0xc, 0x1f2, 0xa, 0xc, 0x7, 0xc, 0x1f4, 0xa, 0xc, 0xc, 0xc, 
			 0xe, 0xc, 0x1f7, 0xb, 0xc, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x1fb, 0xa, 
			 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x201, 0xa, 0xe, 
			 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x208, 0xa, 
			 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x20e, 0xa, 
			 0x10, 0x3, 0x10, 0x5, 0x10, 0x211, 0xa, 0x10, 0x3, 0x10, 0x5, 0x10, 
			 0x214, 0xa, 0x10, 0x3, 0x10, 0x5, 0x10, 0x217, 0xa, 0x10, 0x3, 0x11, 
			 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x21e, 0xa, 0x11, 
			 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x225, 
			 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
			 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
			 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
			 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
			 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
			 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
			 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
			 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 
			 0x259, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
			 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
			 0x11, 0x3, 0x11, 0x5, 0x11, 0x268, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 
			 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x26e, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 
			 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x274, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 
			 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
			 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0x281, 0xa, 0x11, 0xc, 0x11, 
			 0xe, 0x11, 0x284, 0xb, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 
			 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x5, 0x15, 0x28d, 0xa, 0x15, 0x3, 0x15, 
			 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
			 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 
			 0x29c, 0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 
			 0x2a2, 0xa, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
			 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
			 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
			 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
			 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0x2c0, 0xa, 0x16, 
			 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x5, 0x18, 0x2c5, 0xa, 0x18, 0x3, 0x18, 
			 0x3, 0x18, 0x5, 0x18, 0x2c9, 0xa, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 
			 0x2cd, 0xa, 0x18, 0x3, 0x18, 0x5, 0x18, 0x2d0, 0xa, 0x18, 0x3, 0x18, 
			 0x3, 0x18, 0x5, 0x18, 0x2d4, 0xa, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
			 0x3, 0x18, 0x5, 0x18, 0x2da, 0xa, 0x18, 0x5, 0x18, 0x2dc, 0xa, 0x18, 
			 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x5, 
			 0x1a, 0x2e4, 0xa, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x2e8, 0xa, 
			 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x2eb, 0xa, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 
			 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x2f2, 0xa, 0x1c, 0x3, 0x1c, 
			 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x2f9, 0xa, 0x1c, 
			 0x7, 0x1c, 0x2fb, 0xa, 0x1c, 0xc, 0x1c, 0xe, 0x1c, 0x2fe, 0xb, 0x1c, 
			 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x302, 0xa, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
			 0x5, 0x1d, 0x306, 0xa, 0x1d, 0x3, 0x1e, 0x5, 0x1e, 0x309, 0xa, 0x1e, 
			 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x30e, 0xa, 0x1e, 0x3, 0x1e, 
			 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x314, 0xa, 0x1e, 0x3, 0x1f, 
			 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 
			 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x5, 0x20, 0x321, 0xa, 0x20, 
			 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 
			 0x21, 0x3, 0x21, 0x3, 0x21, 0x7, 0x21, 0x32c, 0xa, 0x21, 0xc, 0x21, 
			 0xe, 0x21, 0x32f, 0xb, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
			 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
			 0x22, 0x3, 0x22, 0x7, 0x22, 0x33d, 0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 
			 0x340, 0xb, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 
			 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x7, 0x23, 0x34b, 0xa, 0x23, 
			 0xc, 0x23, 0xe, 0x23, 0x34e, 0xb, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 
			 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x7, 0x24, 0x357, 0xa, 0x24, 
			 0xc, 0x24, 0xe, 0x24, 0x35a, 0xb, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 
			 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 
			 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 
			 0x3, 0x26, 0x7, 0x26, 0x36d, 0xa, 0x26, 0xc, 0x26, 0xe, 0x26, 0x370, 
			 0xb, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 
			 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x7, 0x27, 0x37b, 0xa, 0x27, 
			 0xc, 0x27, 0xe, 0x27, 0x37e, 0xb, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 
			 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x7, 0x28, 0x386, 0xa, 0x28, 0xc, 0x28, 
			 0xe, 0x28, 0x389, 0xb, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
			 0x3, 0x29, 0x3, 0x29, 0x7, 0x29, 0x391, 0xa, 0x29, 0xc, 0x29, 0xe, 0x29, 
			 0x394, 0xb, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 
			 0x3, 0x2a, 0x7, 0x2a, 0x39c, 0xa, 0x2a, 0xc, 0x2a, 0xe, 0x2a, 0x39f, 
			 0xb, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 
			 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x7, 0x2b, 0x3aa, 0xa, 0x2b, 
			 0xc, 0x2b, 0xe, 0x2b, 0x3ad, 0xb, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
			 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x7, 
			 0x2c, 0x3b8, 0xa, 0x2c, 0xc, 0x2c, 0xe, 0x2c, 0x3bb, 0xb, 0x2c, 0x3, 
			 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 
			 0x5, 0x2d, 0x3c4, 0xa, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 
			 0x3, 0x2e, 0x3, 0x2e, 0x5, 0x2e, 0x3cc, 0xa, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 
			 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x7, 
			 0x30, 0x3d6, 0xa, 0x30, 0xc, 0x30, 0xe, 0x30, 0x3d9, 0xb, 0x30, 0x3, 
			 0x31, 0x3, 0x31, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x3df, 0xa, 0x32, 
			 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x3e3, 0xa, 0x32, 0x3, 0x32, 0x3, 0x32, 
			 0x5, 0x32, 0x3e7, 0xa, 0x32, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x3eb, 
			 0xa, 0x32, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x3ef, 0xa, 0x32, 0x3, 0x32, 
			 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x3f4, 0xa, 0x32, 0x3, 0x32, 0x5, 0x32, 
			 0x3f7, 0xa, 0x32, 0x3, 0x33, 0x5, 0x33, 0x3fa, 0xa, 0x33, 0x3, 0x33, 
			 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x5, 0x33, 0x400, 0xa, 0x33, 0x3, 0x33, 
			 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x5, 0x33, 0x408, 
			 0xa, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x5, 0x33, 0x40d, 0xa, 0x33, 
			 0x3, 0x34, 0x5, 0x34, 0x410, 0xa, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x35, 
			 0x3, 0x35, 0x5, 0x35, 0x416, 0xa, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x36, 
			 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x7, 0x36, 0x41f, 0xa, 0x36, 
			 0xc, 0x36, 0xe, 0x36, 0x422, 0xb, 0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 
			 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 
			 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 
			 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x5, 0x37, 0x438, 0xa, 0x37, 
			 0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 0x43c, 0xa, 0x38, 0x3, 0x38, 0x3, 0x38, 
			 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 0x444, 0xa, 0x38, 
			 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 0x44a, 0xa, 0x38, 
			 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 
			 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 
			 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x5, 0x39, 0x45e, 
			 0xa, 0x39, 0x3, 0x39, 0x3, 0x39, 0x5, 0x39, 0x462, 0xa, 0x39, 0x3, 0x39, 
			 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 
			 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x5, 0x39, 0x46f, 0xa, 0x39, 
			 0x3, 0x3a, 0x3, 0x3a, 0x5, 0x3a, 0x473, 0xa, 0x3a, 0x3, 0x3b, 0x5, 0x3b, 
			 0x476, 0xa, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 
			 0x5, 0x3c, 0x47d, 0xa, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 
			 0x3, 0x3d, 0x3, 0x3d, 0x5, 0x3d, 0x485, 0xa, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 
			 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x5, 
			 0x3d, 0x48f, 0xa, 0x3d, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 
			 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x7, 0x3f, 0x498, 0xa, 0x3f, 0xc, 0x3f, 
			 0xe, 0x3f, 0x49b, 0xb, 0x3f, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 
			 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x5, 0x40, 0x4a6, 
			 0xa, 0x40, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 
			 0x41, 0x3, 0x41, 0x3, 0x41, 0x5, 0x41, 0x4b0, 0xa, 0x41, 0x3, 0x42, 
			 0x3, 0x42, 0x3, 0x42, 0x5, 0x42, 0x4b5, 0xa, 0x42, 0x3, 0x42, 0x3, 0x42, 
			 0x3, 0x42, 0x3, 0x42, 0x3, 0x43, 0x5, 0x43, 0x4bc, 0xa, 0x43, 0x3, 0x43, 
			 0x5, 0x43, 0x4bf, 0xa, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x5, 0x43, 
			 0x4c4, 0xa, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x5, 0x43, 0x4c9, 
			 0xa, 0x43, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 
			 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x45, 0x3, 0x45, 0x3, 0x46, 0x3, 0x46, 
			 0x3, 0x46, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 
			 0x47, 0x5, 0x47, 0x4de, 0xa, 0x47, 0x3, 0x48, 0x3, 0x48, 0x5, 0x48, 
			 0x4e2, 0xa, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x5, 0x48, 0x4e7, 
			 0xa, 0x48, 0x3, 0x49, 0x3, 0x49, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4b, 0x3, 
			 0x4b, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x5, 0x4c, 0x4f2, 0xa, 0x4c, 
			 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x5, 0x4d, 0x4f8, 0xa, 0x4d, 
			 0x3, 0x4e, 0x3, 0x4e, 0x5, 0x4e, 0x4fc, 0xa, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 
			 0x3, 0x4e, 0x5, 0x4e, 0x501, 0xa, 0x4e, 0x3, 0x4f, 0x3, 0x4f, 0x5, 0x4f, 
			 0x505, 0xa, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x5, 0x4f, 0x50a, 
			 0xa, 0x4f, 0x3, 0x50, 0x5, 0x50, 0x50d, 0xa, 0x50, 0x3, 0x50, 0x3, 0x50, 
			 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 
			 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 
			 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x5, 0x50, 0x523, 
			 0xa, 0x50, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x5, 0x51, 0x529, 
			 0xa, 0x51, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 
			 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x5, 0x52, 0x534, 0xa, 0x52, 
			 0x3, 0x53, 0x3, 0x53, 0x5, 0x53, 0x538, 0xa, 0x53, 0x3, 0x53, 0x5, 0x53, 
			 0x53b, 0xa, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 
			 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x5, 0x53, 0x545, 0xa, 0x53, 0x3, 0x53, 
			 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x5, 0x53, 0x54b, 0xa, 0x53, 0x3, 0x53, 
			 0x5, 0x53, 0x54e, 0xa, 0x53, 0x3, 0x54, 0x3, 0x54, 0x3, 0x55, 0x3, 0x55, 
			 0x3, 0x55, 0x5, 0x55, 0x555, 0xa, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 
			 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x5, 0x55, 0x55f, 
			 0xa, 0x55, 0x3, 0x56, 0x3, 0x56, 0x5, 0x56, 0x563, 0xa, 0x56, 0x3, 0x56, 
			 0x5, 0x56, 0x566, 0xa, 0x56, 0x3, 0x56, 0x5, 0x56, 0x569, 0xa, 0x56, 
			 0x3, 0x56, 0x3, 0x56, 0x5, 0x56, 0x56d, 0xa, 0x56, 0x3, 0x56, 0x3, 0x56, 
			 0x3, 0x56, 0x5, 0x56, 0x572, 0xa, 0x56, 0x5, 0x56, 0x574, 0xa, 0x56, 
			 0x3, 0x57, 0x3, 0x57, 0x5, 0x57, 0x578, 0xa, 0x57, 0x3, 0x57, 0x3, 0x57, 
			 0x5, 0x57, 0x57c, 0xa, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x58, 0x3, 0x58, 
			 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x5, 0x58, 0x585, 0xa, 0x58, 0x3, 0x59, 
			 0x3, 0x59, 0x3, 0x59, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 
			 0x5a, 0x3, 0x5a, 0x7, 0x5a, 0x590, 0xa, 0x5a, 0xc, 0x5a, 0xe, 0x5a, 
			 0x593, 0xb, 0x5a, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 
			 0x5, 0x5b, 0x59a, 0xa, 0x5b, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5d, 0x3, 0x5d, 
			 0x5, 0x5d, 0x5a0, 0xa, 0x5d, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5f, 0x3, 0x5f, 
			 0x5, 0x5f, 0x5a6, 0xa, 0x5f, 0x3, 0x60, 0x3, 0x60, 0x5, 0x60, 0x5aa, 
			 0xa, 0x60, 0x3, 0x61, 0x5, 0x61, 0x5ad, 0xa, 0x61, 0x3, 0x61, 0x3, 0x61, 
			 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x62, 0x5, 0x62, 0x5b6, 
			 0xa, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 
			 0x62, 0x3, 0x63, 0x5, 0x63, 0x5bf, 0xa, 0x63, 0x3, 0x63, 0x3, 0x63, 
			 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x64, 0x5, 0x64, 0x5c7, 0xa, 0x64, 
			 0x3, 0x65, 0x3, 0x65, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 
			 0x66, 0x3, 0x66, 0x3, 0x67, 0x5, 0x67, 0x5d2, 0xa, 0x67, 0x3, 0x67, 
			 0x3, 0x67, 0x3, 0x68, 0x3, 0x68, 0x5, 0x68, 0x5d8, 0xa, 0x68, 0x3, 0x68, 
			 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 
			 0x68, 0x3, 0x68, 0x5, 0x68, 0x5e3, 0xa, 0x68, 0x3, 0x69, 0x5, 0x69, 
			 0x5e6, 0xa, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x5, 0x69, 0x5eb, 
			 0xa, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x6a, 0x3, 0x6a, 0x3, 
			 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 
			 0x3, 0x6b, 0x5, 0x6b, 0x5fa, 0xa, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 
			 0x3, 0x6b, 0x5, 0x6b, 0x600, 0xa, 0x6b, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 
			 0x3, 0x6c, 0x3, 0x6c, 0x7, 0x6c, 0x607, 0xa, 0x6c, 0xc, 0x6c, 0xe, 0x6c, 
			 0x60a, 0xb, 0x6c, 0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6d, 
			 0x3, 0x6d, 0x3, 0x6d, 0x5, 0x6d, 0x613, 0xa, 0x6d, 0x3, 0x6e, 0x3, 0x6e, 
			 0x3, 0x6e, 0x3, 0x6e, 0x5, 0x6e, 0x619, 0xa, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 
			 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x5, 0x6e, 0x621, 0xa, 0x6e, 
			 0x3, 0x6e, 0x3, 0x6e, 0x5, 0x6e, 0x625, 0xa, 0x6e, 0x3, 0x6f, 0x3, 0x6f, 
			 0x5, 0x6f, 0x629, 0xa, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x5, 0x6f, 
			 0x62e, 0xa, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x5, 0x6f, 0x633, 
			 0xa, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x7, 
			 0x6f, 0x63a, 0xa, 0x6f, 0xc, 0x6f, 0xe, 0x6f, 0x63d, 0xb, 0x6f, 0x3, 
			 0x70, 0x3, 0x70, 0x5, 0x70, 0x641, 0xa, 0x70, 0x3, 0x71, 0x3, 0x71, 
			 0x5, 0x71, 0x645, 0xa, 0x71, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 
			 0x3, 0x73, 0x3, 0x73, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 
			 0x75, 0x3, 0x75, 0x5, 0x75, 0x653, 0xa, 0x75, 0x3, 0x75, 0x3, 0x75, 
			 0x7, 0x75, 0x657, 0xa, 0x75, 0xc, 0x75, 0xe, 0x75, 0x65a, 0xb, 0x75, 
			 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 
			 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 
			 0x6, 0x76, 0x669, 0xa, 0x76, 0xd, 0x76, 0xe, 0x76, 0x66a, 0x5, 0x76, 
			 0x66d, 0xa, 0x76, 0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 
			 0x3, 0x77, 0x7, 0x77, 0x675, 0xa, 0x77, 0xc, 0x77, 0xe, 0x77, 0x678, 
			 0xb, 0x77, 0x3, 0x78, 0x3, 0x78, 0x5, 0x78, 0x67c, 0xa, 0x78, 0x3, 0x79, 
			 0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 0x5, 0x79, 0x683, 0xa, 0x79, 
			 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x5, 0x7a, 0x689, 0xa, 0x7a, 
			 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x5, 0x7b, 0x68e, 0xa, 0x7b, 0x3, 0x7b, 
			 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x5, 0x7b, 0x694, 0xa, 0x7b, 0x3, 0x7b, 
			 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x5, 0x7b, 0x69b, 0xa, 0x7b, 
			 0x3, 0x7b, 0x3, 0x7b, 0x5, 0x7b, 0x69f, 0xa, 0x7b, 0x7, 0x7b, 0x6a1, 
			 0xa, 0x7b, 0xc, 0x7b, 0xe, 0x7b, 0x6a4, 0xb, 0x7b, 0x3, 0x7c, 0x3, 0x7c, 
			 0x3, 0x7c, 0x3, 0x7c, 0x5, 0x7c, 0x6aa, 0xa, 0x7c, 0x3, 0x7c, 0x5, 0x7c, 
			 0x6ad, 0xa, 0x7c, 0x3, 0x7c, 0x5, 0x7c, 0x6b0, 0xa, 0x7c, 0x3, 0x7c, 
			 0x5, 0x7c, 0x6b3, 0xa, 0x7c, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x5, 0x7d, 
			 0x6b8, 0xa, 0x7d, 0x3, 0x7e, 0x3, 0x7e, 0x5, 0x7e, 0x6bc, 0xa, 0x7e, 
			 0x3, 0x7e, 0x5, 0x7e, 0x6bf, 0xa, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x5, 0x7e, 
			 0x6c3, 0xa, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x5, 0x7e, 0x6c7, 0xa, 0x7e, 
			 0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x5, 0x7e, 0x6cc, 0xa, 0x7e, 0x3, 0x7e, 
			 0x5, 0x7e, 0x6cf, 0xa, 0x7e, 0x5, 0x7e, 0x6d1, 0xa, 0x7e, 0x3, 0x7f, 
			 0x3, 0x7f, 0x5, 0x7f, 0x6d5, 0xa, 0x7f, 0x3, 0x80, 0x3, 0x80, 0x3, 0x81, 
			 0x3, 0x81, 0x3, 0x82, 0x5, 0x82, 0x6dc, 0xa, 0x82, 0x3, 0x82, 0x3, 0x82, 
			 0x3, 0x83, 0x3, 0x83, 0x5, 0x83, 0x6e2, 0xa, 0x83, 0x3, 0x84, 0x3, 0x84, 
			 0x5, 0x84, 0x6e6, 0xa, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 
			 0x5, 0x84, 0x6ec, 0xa, 0x84, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x5, 0x85, 
			 0x6f1, 0xa, 0x85, 0x5, 0x85, 0x6f3, 0xa, 0x85, 0x3, 0x86, 0x3, 0x86, 
			 0x3, 0x86, 0x3, 0x86, 0x5, 0x86, 0x6f9, 0xa, 0x86, 0x3, 0x86, 0x3, 0x86, 
			 0x5, 0x86, 0x6fd, 0xa, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 
			 0x5, 0x86, 0x703, 0xa, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 
			 0x3, 0x86, 0x5, 0x86, 0x70a, 0xa, 0x86, 0x3, 0x86, 0x3, 0x86, 0x5, 0x86, 
			 0x70e, 0xa, 0x86, 0x7, 0x86, 0x710, 0xa, 0x86, 0xc, 0x86, 0xe, 0x86, 
			 0x713, 0xb, 0x86, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x5, 0x87, 
			 0x719, 0xa, 0x87, 0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 
			 0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x5, 0x88, 0x723, 0xa, 0x88, 0x3, 0x88, 
			 0x3, 0x88, 0x5, 0x88, 0x727, 0xa, 0x88, 0x7, 0x88, 0x729, 0xa, 0x88, 
			 0xc, 0x88, 0xe, 0x88, 0x72c, 0xb, 0x88, 0x3, 0x89, 0x5, 0x89, 0x72f, 
			 0xa, 0x89, 0x3, 0x89, 0x5, 0x89, 0x732, 0xa, 0x89, 0x3, 0x89, 0x3, 0x89, 
			 0x3, 0x89, 0x3, 0x89, 0x5, 0x89, 0x738, 0xa, 0x89, 0x3, 0x8a, 0x3, 0x8a, 
			 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x7, 0x8a, 0x740, 0xa, 0x8a, 
			 0xc, 0x8a, 0xe, 0x8a, 0x743, 0xb, 0x8a, 0x3, 0x8b, 0x5, 0x8b, 0x746, 
			 0xa, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x5, 0x8b, 0x74c, 
			 0xa, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x3, 
			 0x8b, 0x5, 0x8b, 0x754, 0xa, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x5, 0x8b, 
			 0x758, 0xa, 0x8b, 0x3, 0x8b, 0x5, 0x8b, 0x75b, 0xa, 0x8b, 0x3, 0x8b, 
			 0x3, 0x8b, 0x5, 0x8b, 0x75f, 0xa, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 
			 0x5, 0x8b, 0x764, 0xa, 0x8b, 0x3, 0x8c, 0x5, 0x8c, 0x767, 0xa, 0x8c, 
			 0x3, 0x8c, 0x5, 0x8c, 0x76a, 0xa, 0x8c, 0x3, 0x8c, 0x3, 0x8c, 0x5, 0x8c, 
			 0x76e, 0xa, 0x8c, 0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8d, 0x5, 0x8d, 0x773, 
			 0xa, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 
			 0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x5, 0x8d, 0x77d, 0xa, 0x8d, 0x3, 0x8e, 
			 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x5, 0x8e, 0x784, 0xa, 0x8e, 
			 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x5, 0x8f, 0x789, 0xa, 0x8f, 0x3, 0x90, 
			 0x3, 0x90, 0x5, 0x90, 0x78d, 0xa, 0x90, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 
			 0x5, 0x91, 0x792, 0xa, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 
			 0x5, 0x91, 0x798, 0xa, 0x91, 0x7, 0x91, 0x79a, 0xa, 0x91, 0xc, 0x91, 
			 0xe, 0x91, 0x79d, 0xb, 0x91, 0x3, 0x92, 0x3, 0x92, 0x3, 0x92, 0x5, 0x92, 
			 0x7a2, 0xa, 0x92, 0x3, 0x92, 0x3, 0x92, 0x3, 0x92, 0x3, 0x92, 0x5, 0x92, 
			 0x7a8, 0xa, 0x92, 0x3, 0x93, 0x3, 0x93, 0x5, 0x93, 0x7ac, 0xa, 0x93, 
			 0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 0x5, 0x94, 0x7b1, 0xa, 0x94, 0x3, 0x94, 
			 0x3, 0x94, 0x3, 0x95, 0x3, 0x95, 0x5, 0x95, 0x7b7, 0xa, 0x95, 0x3, 0x95, 
			 0x3, 0x95, 0x5, 0x95, 0x7bb, 0xa, 0x95, 0x3, 0x95, 0x5, 0x95, 0x7be, 
			 0xa, 0x95, 0x3, 0x95, 0x3, 0x95, 0x5, 0x95, 0x7c2, 0xa, 0x95, 0x3, 0x95, 
			 0x5, 0x95, 0x7c5, 0xa, 0x95, 0x5, 0x95, 0x7c7, 0xa, 0x95, 0x3, 0x96, 
			 0x5, 0x96, 0x7ca, 0xa, 0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 0x97, 0x3, 0x97, 
			 0x3, 0x98, 0x3, 0x98, 0x3, 0x99, 0x3, 0x99, 0x5, 0x99, 0x7d4, 0xa, 0x99, 
			 0x3, 0x99, 0x3, 0x99, 0x3, 0x99, 0x5, 0x99, 0x7d9, 0xa, 0x99, 0x5, 0x99, 
			 0x7db, 0xa, 0x99, 0x3, 0x9a, 0x5, 0x9a, 0x7de, 0xa, 0x9a, 0x3, 0x9a, 
			 0x5, 0x9a, 0x7e1, 0xa, 0x9a, 0x3, 0x9a, 0x5, 0x9a, 0x7e4, 0xa, 0x9a, 
			 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 
			 0x9a, 0x5, 0x9a, 0x7ed, 0xa, 0x9a, 0x3, 0x9b, 0x3, 0x9b, 0x3, 0x9b, 
			 0x3, 0x9b, 0x3, 0x9b, 0x3, 0x9b, 0x7, 0x9b, 0x7f5, 0xa, 0x9b, 0xc, 0x9b, 
			 0xe, 0x9b, 0x7f8, 0xb, 0x9b, 0x3, 0x9c, 0x3, 0x9c, 0x5, 0x9c, 0x7fc, 
			 0xa, 0x9c, 0x3, 0x9c, 0x5, 0x9c, 0x7ff, 0xa, 0x9c, 0x3, 0x9c, 0x3, 0x9c, 
			 0x5, 0x9c, 0x803, 0xa, 0x9c, 0x3, 0x9c, 0x5, 0x9c, 0x806, 0xa, 0x9c, 
			 0x3, 0x9c, 0x5, 0x9c, 0x809, 0xa, 0x9c, 0x3, 0x9c, 0x3, 0x9c, 0x5, 0x9c, 
			 0x80d, 0xa, 0x9c, 0x3, 0x9d, 0x3, 0x9d, 0x3, 0x9d, 0x3, 0x9d, 0x3, 0x9d, 
			 0x7, 0x9d, 0x814, 0xa, 0x9d, 0xc, 0x9d, 0xe, 0x9d, 0x817, 0xb, 0x9d, 
			 0x3, 0x9e, 0x3, 0x9e, 0x3, 0x9f, 0x3, 0x9f, 0x3, 0x9f, 0x3, 0xa0, 0x3, 
			 0xa0, 0x3, 0xa0, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x5, 0xa1, 0x824, 
			 0xa, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x5, 0xa1, 0x82a, 
			 0xa, 0xa1, 0x7, 0xa1, 0x82c, 0xa, 0xa1, 0xc, 0xa1, 0xe, 0xa1, 0x82f, 
			 0xb, 0xa1, 0x3, 0xa2, 0x5, 0xa2, 0x832, 0xa, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 
			 0x5, 0xa2, 0x836, 0xa, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x5, 0xa2, 0x83a, 
			 0xa, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x5, 0xa2, 0x83e, 0xa, 0xa2, 0x3, 0xa2, 
			 0x3, 0xa2, 0x5, 0xa2, 0x842, 0xa, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x5, 0xa2, 
			 0x846, 0xa, 0xa2, 0x3, 0xa3, 0x5, 0xa3, 0x849, 0xa, 0xa3, 0x3, 0xa3, 
			 0x3, 0xa3, 0x5, 0xa3, 0x84d, 0xa, 0xa3, 0x3, 0xa4, 0x3, 0xa4, 0x3, 0xa5, 
			 0x3, 0xa5, 0x3, 0xa6, 0x3, 0xa6, 0x3, 0xa6, 0x3, 0xa7, 0x3, 0xa7, 0x5, 
			 0xa7, 0x858, 0xa, 0xa7, 0x3, 0xa8, 0x3, 0xa8, 0x5, 0xa8, 0x85c, 0xa, 
			 0xa8, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xaa, 0x3, 0xaa, 0x5, 0xaa, 
			 0x863, 0xa, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x5, 0xaa, 0x867, 0xa, 0xaa, 
			 0x3, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x5, 0xaa, 0x86c, 0xa, 0xaa, 0x3, 0xab, 
			 0x3, 0xab, 0x3, 0xab, 0x5, 0xab, 0x871, 0xa, 0xab, 0x3, 0xab, 0x3, 0xab, 
			 0x3, 0xab, 0x3, 0xab, 0x3, 0xab, 0x5, 0xab, 0x878, 0xa, 0xab, 0x3, 0xac, 
			 0x3, 0xac, 0x5, 0xac, 0x87c, 0xa, 0xac, 0x3, 0xad, 0x3, 0xad, 0x3, 0xad, 
			 0x3, 0xae, 0x3, 0xae, 0x3, 0xae, 0x3, 0xae, 0x3, 0xae, 0x5, 0xae, 0x886, 
			 0xa, 0xae, 0x3, 0xaf, 0x3, 0xaf, 0x3, 0xaf, 0x3, 0xaf, 0x3, 0xaf, 0x3, 
			 0xaf, 0x3, 0xb0, 0x3, 0xb0, 0x3, 0xb0, 0x3, 0xb0, 0x3, 0xb0, 0x3, 0xb0, 
			 0x7, 0xb0, 0x894, 0xa, 0xb0, 0xc, 0xb0, 0xe, 0xb0, 0x897, 0xb, 0xb0, 
			 0x3, 0xb1, 0x3, 0xb1, 0x5, 0xb1, 0x89b, 0xa, 0xb1, 0x3, 0xb2, 0x3, 0xb2, 
			 0x5, 0xb2, 0x89f, 0xa, 0xb2, 0x3, 0xb2, 0x5, 0xb2, 0x8a2, 0xa, 0xb2, 
			 0x3, 0xb2, 0x3, 0xb2, 0x5, 0xb2, 0x8a6, 0xa, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 
			 0x3, 0xb2, 0x3, 0xb2, 0x5, 0xb2, 0x8ac, 0xa, 0xb2, 0x3, 0xb2, 0x5, 0xb2, 
			 0x8af, 0xa, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x5, 0xb2, 0x8b3, 0xa, 0xb2, 
			 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 
			 0xb2, 0x3, 0xb2, 0x5, 0xb2, 0x8bd, 0xa, 0xb2, 0x3, 0xb2, 0x5, 0xb2, 
			 0x8c0, 0xa, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 
			 0x3, 0xb2, 0x5, 0xb2, 0x8c8, 0xa, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 
			 0x5, 0xb2, 0x8cd, 0xa, 0xb2, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x5, 0xb3, 
			 0x8d2, 0xa, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb4, 0x3, 0xb4, 0x3, 0xb4, 
			 0x3, 0xb4, 0x5, 0xb4, 0x8da, 0xa, 0xb4, 0x3, 0xb4, 0x3, 0xb4, 0x3, 0xb4, 
			 0x3, 0xb4, 0x3, 0xb4, 0x5, 0xb4, 0x8e1, 0xa, 0xb4, 0x3, 0xb4, 0x3, 0xb4, 
			 0x5, 0xb4, 0x8e5, 0xa, 0xb4, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb6, 0x3, 0xb6, 
			 0x3, 0xb6, 0x5, 0xb6, 0x8ec, 0xa, 0xb6, 0x3, 0xb6, 0x3, 0xb6, 0x3, 0xb6, 
			 0x3, 0xb6, 0x5, 0xb6, 0x8f2, 0xa, 0xb6, 0x7, 0xb6, 0x8f4, 0xa, 0xb6, 
			 0xc, 0xb6, 0xe, 0xb6, 0x8f7, 0xb, 0xb6, 0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 
			 0x5, 0xb7, 0x8fc, 0xa, 0xb7, 0x3, 0xb8, 0x3, 0xb8, 0x3, 0xb8, 0x3, 0xb8, 
			 0x3, 0xb8, 0x3, 0xb8, 0x3, 0xb8, 0x5, 0xb8, 0x905, 0xa, 0xb8, 0x3, 0xb8, 
			 0x3, 0xb8, 0x5, 0xb8, 0x909, 0xa, 0xb8, 0x3, 0xb9, 0x5, 0xb9, 0x90c, 
			 0xa, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xba, 0x3, 0xba, 0x3, 
			 0xba, 0x3, 0xba, 0x3, 0xba, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 
			 0x3, 0xbc, 0x3, 0xbc, 0x5, 0xbc, 0x91c, 0xa, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 
			 0x3, 0xbc, 0x3, 0xbd, 0x3, 0xbd, 0x5, 0xbd, 0x923, 0xa, 0xbd, 0x3, 0xbe, 
			 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbf, 0x5, 
			 0xbf, 0x92c, 0xa, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 
			 0x5, 0xbf, 0x932, 0xa, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x5, 0xbf, 0x936, 
			 0xa, 0xbf, 0x3, 0xbf, 0x5, 0xbf, 0x939, 0xa, 0xbf, 0x3, 0xc0, 0x3, 0xc0, 
			 0x5, 0xc0, 0x93d, 0xa, 0xc0, 0x3, 0xc1, 0x3, 0xc1, 0x5, 0xc1, 0x941, 
			 0xa, 0xc1, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x5, 0xc2, 0x946, 0xa, 0xc2, 
			 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x5, 0xc3, 0x94d, 
			 0xa, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x5, 0xc3, 0x953, 
			 0xa, 0xc3, 0x7, 0xc3, 0x955, 0xa, 0xc3, 0xc, 0xc3, 0xe, 0xc3, 0x958, 
			 0xb, 0xc3, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 
			 0xc4, 0x5, 0xc4, 0x960, 0xa, 0xc4, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 
			 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 
			 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 
			 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 
			 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 
			 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 
			 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 
			 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 
			 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x5, 0xc5, 0x995, 0xa, 0xc5, 0x3, 0xc6, 
			 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x5, 
			 0xc6, 0x99e, 0xa, 0xc6, 0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc8, 0x3, 0xc8, 
			 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x2, 0x24, 0xc, 0x16, 0x20, 0x36, 0x40, 
			 0x42, 0x44, 0x46, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x5e, 0x6a, 
			 0x7c, 0xb2, 0xd6, 0xdc, 0xe8, 0xec, 0xf4, 0x10a, 0x10e, 0x112, 0x120, 
			 0x134, 0x138, 0x140, 0x15e, 0x16a, 0x184, 0xca, 0x2, 0x4, 0x6, 0x8, 
			 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 
			 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 
			 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 
			 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 
			 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 
			 0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 0x92, 0x94, 0x96, 0x98, 
			 0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 0xa8, 0xaa, 0xac, 0xae, 0xb0, 
			 0xb2, 0xb4, 0xb6, 0xb8, 0xba, 0xbc, 0xbe, 0xc0, 0xc2, 0xc4, 0xc6, 0xc8, 
			 0xca, 0xcc, 0xce, 0xd0, 0xd2, 0xd4, 0xd6, 0xd8, 0xda, 0xdc, 0xde, 0xe0, 
			 0xe2, 0xe4, 0xe6, 0xe8, 0xea, 0xec, 0xee, 0xf0, 0xf2, 0xf4, 0xf6, 0xf8, 
			 0xfa, 0xfc, 0xfe, 0x100, 0x102, 0x104, 0x106, 0x108, 0x10a, 0x10c, 0x10e, 
			 0x110, 0x112, 0x114, 0x116, 0x118, 0x11a, 0x11c, 0x11e, 0x120, 0x122, 
			 0x124, 0x126, 0x128, 0x12a, 0x12c, 0x12e, 0x130, 0x132, 0x134, 0x136, 
			 0x138, 0x13a, 0x13c, 0x13e, 0x140, 0x142, 0x144, 0x146, 0x148, 0x14a, 
			 0x14c, 0x14e, 0x150, 0x152, 0x154, 0x156, 0x158, 0x15a, 0x15c, 0x15e, 
			 0x160, 0x162, 0x164, 0x166, 0x168, 0x16a, 0x16c, 0x16e, 0x170, 0x172, 
			 0x174, 0x176, 0x178, 0x17a, 0x17c, 0x17e, 0x180, 0x182, 0x184, 0x186, 
			 0x188, 0x18a, 0x18c, 0x18e, 0x190, 0x2, 0x10, 0x4, 0x2, 0x62, 0x62, 
			 0x66, 0x66, 0x5, 0x2, 0x3, 0x4, 0x5c, 0x5e, 0x62, 0x64, 0x3, 0x2, 0x71, 
			 0x72, 0x5, 0x2, 0x66, 0x66, 0x69, 0x70, 0x73, 0x74, 0x7, 0x2, 0x25, 
			 0x25, 0x30, 0x30, 0x3a, 0x3a, 0x40, 0x40, 0x47, 0x47, 0x5, 0x2, 0x23, 
			 0x23, 0x2d, 0x2d, 0x51, 0x51, 0x3, 0x2, 0x56, 0x5b, 0x4, 0x2, 0x17, 
			 0x17, 0x53, 0x53, 0x4, 0x2, 0x5, 0x5, 0x62, 0x62, 0x5, 0x2, 0x16, 0x16, 
			 0x43, 0x43, 0x4e, 0x4e, 0x4, 0x2, 0x27, 0x27, 0x36, 0x36, 0x3, 0x2, 
			 0x37, 0x39, 0x4, 0x2, 0x26, 0x26, 0x49, 0x49, 0x3, 0x2, 0x91, 0x94, 
			 0x2, 0xac2, 0x2, 0x193, 0x3, 0x2, 0x2, 0x2, 0x4, 0x19f, 0x3, 0x2, 0x2, 
			 0x2, 0x6, 0x1a3, 0x3, 0x2, 0x2, 0x2, 0x8, 0x1ae, 0x3, 0x2, 0x2, 0x2, 
			 0xa, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0xc, 0x1c1, 0x3, 0x2, 0x2, 0x2, 0xe, 
			 0x1d2, 0x3, 0x2, 0x2, 0x2, 0x10, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x12, 0x1e4, 
			 0x3, 0x2, 0x2, 0x2, 0x14, 0x1e6, 0x3, 0x2, 0x2, 0x2, 0x16, 0x1e8, 0x3, 
			 0x2, 0x2, 0x2, 0x18, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x200, 0x3, 0x2, 
			 0x2, 0x2, 0x1c, 0x207, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x209, 0x3, 0x2, 0x2, 
			 0x2, 0x20, 0x258, 0x3, 0x2, 0x2, 0x2, 0x22, 0x285, 0x3, 0x2, 0x2, 0x2, 
			 0x24, 0x287, 0x3, 0x2, 0x2, 0x2, 0x26, 0x289, 0x3, 0x2, 0x2, 0x2, 0x28, 
			 0x2a1, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2bf, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2c1, 
			 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2db, 0x3, 0x2, 0x2, 0x2, 0x30, 0x2dd, 0x3, 
			 0x2, 0x2, 0x2, 0x32, 0x2e1, 0x3, 0x2, 0x2, 0x2, 0x34, 0x2ea, 0x3, 0x2, 
			 0x2, 0x2, 0x36, 0x2ec, 0x3, 0x2, 0x2, 0x2, 0x38, 0x305, 0x3, 0x2, 0x2, 
			 0x2, 0x3a, 0x313, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x315, 0x3, 0x2, 0x2, 0x2, 
			 0x3e, 0x320, 0x3, 0x2, 0x2, 0x2, 0x40, 0x322, 0x3, 0x2, 0x2, 0x2, 0x42, 
			 0x330, 0x3, 0x2, 0x2, 0x2, 0x44, 0x341, 0x3, 0x2, 0x2, 0x2, 0x46, 0x34f, 
			 0x3, 0x2, 0x2, 0x2, 0x48, 0x35b, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x35d, 0x3, 
			 0x2, 0x2, 0x2, 0x4c, 0x371, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x37f, 0x3, 0x2, 
			 0x2, 0x2, 0x50, 0x38a, 0x3, 0x2, 0x2, 0x2, 0x52, 0x395, 0x3, 0x2, 0x2, 
			 0x2, 0x54, 0x3a0, 0x3, 0x2, 0x2, 0x2, 0x56, 0x3ae, 0x3, 0x2, 0x2, 0x2, 
			 0x58, 0x3c3, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x3cb, 0x3, 0x2, 0x2, 0x2, 0x5c, 
			 0x3cd, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x3cf, 0x3, 0x2, 0x2, 0x2, 0x60, 0x3da, 
			 0x3, 0x2, 0x2, 0x2, 0x62, 0x3f6, 0x3, 0x2, 0x2, 0x2, 0x64, 0x40c, 0x3, 
			 0x2, 0x2, 0x2, 0x66, 0x40f, 0x3, 0x2, 0x2, 0x2, 0x68, 0x413, 0x3, 0x2, 
			 0x2, 0x2, 0x6a, 0x419, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x437, 0x3, 0x2, 0x2, 
			 0x2, 0x6e, 0x449, 0x3, 0x2, 0x2, 0x2, 0x70, 0x46e, 0x3, 0x2, 0x2, 0x2, 
			 0x72, 0x472, 0x3, 0x2, 0x2, 0x2, 0x74, 0x475, 0x3, 0x2, 0x2, 0x2, 0x76, 
			 0x47c, 0x3, 0x2, 0x2, 0x2, 0x78, 0x48e, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x490, 
			 0x3, 0x2, 0x2, 0x2, 0x7c, 0x492, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x4a5, 0x3, 
			 0x2, 0x2, 0x2, 0x80, 0x4af, 0x3, 0x2, 0x2, 0x2, 0x82, 0x4b1, 0x3, 0x2, 
			 0x2, 0x2, 0x84, 0x4c8, 0x3, 0x2, 0x2, 0x2, 0x86, 0x4ca, 0x3, 0x2, 0x2, 
			 0x2, 0x88, 0x4d2, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x4d4, 0x3, 0x2, 0x2, 0x2, 
			 0x8c, 0x4dd, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x4e6, 0x3, 0x2, 0x2, 0x2, 0x90, 
			 0x4e8, 0x3, 0x2, 0x2, 0x2, 0x92, 0x4ea, 0x3, 0x2, 0x2, 0x2, 0x94, 0x4ec, 
			 0x3, 0x2, 0x2, 0x2, 0x96, 0x4f1, 0x3, 0x2, 0x2, 0x2, 0x98, 0x4f7, 0x3, 
			 0x2, 0x2, 0x2, 0x9a, 0x500, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x509, 0x3, 0x2, 
			 0x2, 0x2, 0x9e, 0x522, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x528, 0x3, 0x2, 0x2, 
			 0x2, 0xa2, 0x533, 0x3, 0x2, 0x2, 0x2, 0xa4, 0x54d, 0x3, 0x2, 0x2, 0x2, 
			 0xa6, 0x54f, 0x3, 0x2, 0x2, 0x2, 0xa8, 0x55e, 0x3, 0x2, 0x2, 0x2, 0xaa, 
			 0x573, 0x3, 0x2, 0x2, 0x2, 0xac, 0x575, 0x3, 0x2, 0x2, 0x2, 0xae, 0x584, 
			 0x3, 0x2, 0x2, 0x2, 0xb0, 0x586, 0x3, 0x2, 0x2, 0x2, 0xb2, 0x589, 0x3, 
			 0x2, 0x2, 0x2, 0xb4, 0x599, 0x3, 0x2, 0x2, 0x2, 0xb6, 0x59b, 0x3, 0x2, 
			 0x2, 0x2, 0xb8, 0x59f, 0x3, 0x2, 0x2, 0x2, 0xba, 0x5a1, 0x3, 0x2, 0x2, 
			 0x2, 0xbc, 0x5a5, 0x3, 0x2, 0x2, 0x2, 0xbe, 0x5a9, 0x3, 0x2, 0x2, 0x2, 
			 0xc0, 0x5ac, 0x3, 0x2, 0x2, 0x2, 0xc2, 0x5b5, 0x3, 0x2, 0x2, 0x2, 0xc4, 
			 0x5be, 0x3, 0x2, 0x2, 0x2, 0xc6, 0x5c6, 0x3, 0x2, 0x2, 0x2, 0xc8, 0x5c8, 
			 0x3, 0x2, 0x2, 0x2, 0xca, 0x5ca, 0x3, 0x2, 0x2, 0x2, 0xcc, 0x5d1, 0x3, 
			 0x2, 0x2, 0x2, 0xce, 0x5e2, 0x3, 0x2, 0x2, 0x2, 0xd0, 0x5e5, 0x3, 0x2, 
			 0x2, 0x2, 0xd2, 0x5ef, 0x3, 0x2, 0x2, 0x2, 0xd4, 0x5ff, 0x3, 0x2, 0x2, 
			 0x2, 0xd6, 0x601, 0x3, 0x2, 0x2, 0x2, 0xd8, 0x612, 0x3, 0x2, 0x2, 0x2, 
			 0xda, 0x624, 0x3, 0x2, 0x2, 0x2, 0xdc, 0x62d, 0x3, 0x2, 0x2, 0x2, 0xde, 
			 0x63e, 0x3, 0x2, 0x2, 0x2, 0xe0, 0x644, 0x3, 0x2, 0x2, 0x2, 0xe2, 0x646, 
			 0x3, 0x2, 0x2, 0x2, 0xe4, 0x64a, 0x3, 0x2, 0x2, 0x2, 0xe6, 0x64c, 0x3, 
			 0x2, 0x2, 0x2, 0xe8, 0x650, 0x3, 0x2, 0x2, 0x2, 0xea, 0x66c, 0x3, 0x2, 
			 0x2, 0x2, 0xec, 0x66e, 0x3, 0x2, 0x2, 0x2, 0xee, 0x679, 0x3, 0x2, 0x2, 
			 0x2, 0xf0, 0x682, 0x3, 0x2, 0x2, 0x2, 0xf2, 0x688, 0x3, 0x2, 0x2, 0x2, 
			 0xf4, 0x693, 0x3, 0x2, 0x2, 0x2, 0xf6, 0x6a5, 0x3, 0x2, 0x2, 0x2, 0xf8, 
			 0x6b4, 0x3, 0x2, 0x2, 0x2, 0xfa, 0x6d0, 0x3, 0x2, 0x2, 0x2, 0xfc, 0x6d2, 
			 0x3, 0x2, 0x2, 0x2, 0xfe, 0x6d6, 0x3, 0x2, 0x2, 0x2, 0x100, 0x6d8, 0x3, 
			 0x2, 0x2, 0x2, 0x102, 0x6db, 0x3, 0x2, 0x2, 0x2, 0x104, 0x6df, 0x3, 
			 0x2, 0x2, 0x2, 0x106, 0x6eb, 0x3, 0x2, 0x2, 0x2, 0x108, 0x6f2, 0x3, 
			 0x2, 0x2, 0x2, 0x10a, 0x702, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x718, 0x3, 
			 0x2, 0x2, 0x2, 0x10e, 0x71a, 0x3, 0x2, 0x2, 0x2, 0x110, 0x737, 0x3, 
			 0x2, 0x2, 0x2, 0x112, 0x739, 0x3, 0x2, 0x2, 0x2, 0x114, 0x763, 0x3, 
			 0x2, 0x2, 0x2, 0x116, 0x766, 0x3, 0x2, 0x2, 0x2, 0x118, 0x77c, 0x3, 
			 0x2, 0x2, 0x2, 0x11a, 0x783, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x788, 0x3, 
			 0x2, 0x2, 0x2, 0x11e, 0x78c, 0x3, 0x2, 0x2, 0x2, 0x120, 0x78e, 0x3, 
			 0x2, 0x2, 0x2, 0x122, 0x7a7, 0x3, 0x2, 0x2, 0x2, 0x124, 0x7ab, 0x3, 
			 0x2, 0x2, 0x2, 0x126, 0x7ad, 0x3, 0x2, 0x2, 0x2, 0x128, 0x7c6, 0x3, 
			 0x2, 0x2, 0x2, 0x12a, 0x7c9, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x7cd, 0x3, 
			 0x2, 0x2, 0x2, 0x12e, 0x7cf, 0x3, 0x2, 0x2, 0x2, 0x130, 0x7da, 0x3, 
			 0x2, 0x2, 0x2, 0x132, 0x7ec, 0x3, 0x2, 0x2, 0x2, 0x134, 0x7ee, 0x3, 
			 0x2, 0x2, 0x2, 0x136, 0x80c, 0x3, 0x2, 0x2, 0x2, 0x138, 0x80e, 0x3, 
			 0x2, 0x2, 0x2, 0x13a, 0x818, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x81a, 0x3, 
			 0x2, 0x2, 0x2, 0x13e, 0x81d, 0x3, 0x2, 0x2, 0x2, 0x140, 0x820, 0x3, 
			 0x2, 0x2, 0x2, 0x142, 0x845, 0x3, 0x2, 0x2, 0x2, 0x144, 0x84c, 0x3, 
			 0x2, 0x2, 0x2, 0x146, 0x84e, 0x3, 0x2, 0x2, 0x2, 0x148, 0x850, 0x3, 
			 0x2, 0x2, 0x2, 0x14a, 0x852, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x855, 0x3, 
			 0x2, 0x2, 0x2, 0x14e, 0x859, 0x3, 0x2, 0x2, 0x2, 0x150, 0x85d, 0x3, 
			 0x2, 0x2, 0x2, 0x152, 0x86b, 0x3, 0x2, 0x2, 0x2, 0x154, 0x877, 0x3, 
			 0x2, 0x2, 0x2, 0x156, 0x87b, 0x3, 0x2, 0x2, 0x2, 0x158, 0x87d, 0x3, 
			 0x2, 0x2, 0x2, 0x15a, 0x885, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x887, 0x3, 
			 0x2, 0x2, 0x2, 0x15e, 0x88d, 0x3, 0x2, 0x2, 0x2, 0x160, 0x89a, 0x3, 
			 0x2, 0x2, 0x2, 0x162, 0x8cc, 0x3, 0x2, 0x2, 0x2, 0x164, 0x8ce, 0x3, 
			 0x2, 0x2, 0x2, 0x166, 0x8e4, 0x3, 0x2, 0x2, 0x2, 0x168, 0x8e6, 0x3, 
			 0x2, 0x2, 0x2, 0x16a, 0x8e8, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x8fb, 0x3, 
			 0x2, 0x2, 0x2, 0x16e, 0x908, 0x3, 0x2, 0x2, 0x2, 0x170, 0x90b, 0x3, 
			 0x2, 0x2, 0x2, 0x172, 0x910, 0x3, 0x2, 0x2, 0x2, 0x174, 0x915, 0x3, 
			 0x2, 0x2, 0x2, 0x176, 0x919, 0x3, 0x2, 0x2, 0x2, 0x178, 0x920, 0x3, 
			 0x2, 0x2, 0x2, 0x17a, 0x924, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x938, 0x3, 
			 0x2, 0x2, 0x2, 0x17e, 0x93a, 0x3, 0x2, 0x2, 0x2, 0x180, 0x940, 0x3, 
			 0x2, 0x2, 0x2, 0x182, 0x942, 0x3, 0x2, 0x2, 0x2, 0x184, 0x949, 0x3, 
			 0x2, 0x2, 0x2, 0x186, 0x95f, 0x3, 0x2, 0x2, 0x2, 0x188, 0x994, 0x3, 
			 0x2, 0x2, 0x2, 0x18a, 0x99d, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x99f, 0x3, 
			 0x2, 0x2, 0x2, 0x18e, 0x9a1, 0x3, 0x2, 0x2, 0x2, 0x190, 0x9a3, 0x3, 
			 0x2, 0x2, 0x2, 0x192, 0x194, 0x5, 0x7c, 0x3f, 0x2, 0x193, 0x192, 0x3, 
			 0x2, 0x2, 0x2, 0x193, 0x194, 0x3, 0x2, 0x2, 0x2, 0x194, 0x195, 0x3, 
			 0x2, 0x2, 0x2, 0x195, 0x196, 0x7, 0x2, 0x2, 0x3, 0x196, 0x3, 0x3, 0x2, 
			 0x2, 0x2, 0x197, 0x1a0, 0x5, 0x18a, 0xc6, 0x2, 0x198, 0x1a0, 0x7, 0x46, 
			 0x2, 0x2, 0x199, 0x19a, 0x7, 0x56, 0x2, 0x2, 0x19a, 0x19b, 0x5, 0x5e, 
			 0x30, 0x2, 0x19b, 0x19c, 0x7, 0x57, 0x2, 0x2, 0x19c, 0x1a0, 0x3, 0x2, 
			 0x2, 0x2, 0x19d, 0x1a0, 0x5, 0x6, 0x4, 0x2, 0x19e, 0x1a0, 0x5, 0xe, 
			 0x8, 0x2, 0x19f, 0x197, 0x3, 0x2, 0x2, 0x2, 0x19f, 0x198, 0x3, 0x2, 
			 0x2, 0x2, 0x19f, 0x199, 0x3, 0x2, 0x2, 0x2, 0x19f, 0x19d, 0x3, 0x2, 
			 0x2, 0x2, 0x19f, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x1a0, 0x5, 0x3, 0x2, 0x2, 
			 0x2, 0x1a1, 0x1a4, 0x5, 0x8, 0x5, 0x2, 0x1a2, 0x1a4, 0x5, 0xa, 0x6, 
			 0x2, 0x1a3, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1a2, 0x3, 0x2, 0x2, 
			 0x2, 0x1a4, 0x7, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x1af, 0x7, 0x87, 0x2, 0x2, 
			 0x1a6, 0x1af, 0x5, 0x158, 0xad, 0x2, 0x1a7, 0x1af, 0x5, 0x14a, 0xa6, 
			 0x2, 0x1a8, 0x1af, 0x5, 0x15a, 0xae, 0x2, 0x1a9, 0x1aa, 0x7, 0x64, 0x2, 
			 0x2, 0x1aa, 0x1af, 0x5, 0x124, 0x93, 0x2, 0x1ab, 0x1ac, 0x7, 0x64, 0x2, 
			 0x2, 0x1ac, 0x1af, 0x5, 0xa2, 0x52, 0x2, 0x1ad, 0x1af, 0x5, 0x166, 0xb4, 
			 0x2, 0x1ae, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1a6, 0x3, 0x2, 0x2, 
			 0x2, 0x1ae, 0x1a7, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1a8, 0x3, 0x2, 0x2, 
			 0x2, 0x1ae, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1ab, 0x3, 0x2, 0x2, 
			 0x2, 0x1ae, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1af, 0x9, 0x3, 0x2, 0x2, 0x2, 
			 0x1b0, 0x1b2, 0x5, 0xc, 0x7, 0x2, 0x1b1, 0x1b3, 0x7, 0x45, 0x2, 0x2, 
			 0x1b2, 0x1b1, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0x1b3, 0x3, 0x2, 0x2, 0x2, 
			 0x1b3, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x1b5, 0x5, 0x8, 0x5, 0x2, 
			 0x1b5, 0xb, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0x1b7, 0x8, 0x7, 0x1, 0x2, 0x1b7, 
			 0x1c2, 0x7, 0x82, 0x2, 0x2, 0x1b8, 0x1b9, 0x5, 0xa0, 0x51, 0x2, 0x1b9, 
			 0x1ba, 0x7, 0x82, 0x2, 0x2, 0x1ba, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1bb, 
			 0x1bc, 0x5, 0xb8, 0x5d, 0x2, 0x1bc, 0x1bd, 0x7, 0x82, 0x2, 0x2, 0x1bd, 
			 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1be, 0x1bf, 0x5, 0xa2, 0x52, 0x2, 0x1bf, 
			 0x1c0, 0x7, 0x82, 0x2, 0x2, 0x1c0, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1c1, 
			 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x1c1, 
			 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1be, 0x3, 0x2, 0x2, 0x2, 0x1c2, 
			 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1c3, 0x1c4, 0xc, 0x4, 0x2, 0x2, 0x1c4, 
			 0x1c5, 0x7, 0x87, 0x2, 0x2, 0x1c5, 0x1ce, 0x7, 0x82, 0x2, 0x2, 0x1c6, 
			 0x1c8, 0xc, 0x3, 0x2, 0x2, 0x1c7, 0x1c9, 0x7, 0x45, 0x2, 0x2, 0x1c8, 
			 0x1c7, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1c9, 0x3, 0x2, 0x2, 0x2, 0x1c9, 
			 0x1ca, 0x3, 0x2, 0x2, 0x2, 0x1ca, 0x1cb, 0x5, 0x164, 0xb3, 0x2, 0x1cb, 
			 0x1cc, 0x7, 0x82, 0x2, 0x2, 0x1cc, 0x1ce, 0x3, 0x2, 0x2, 0x2, 0x1cd, 
			 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1c6, 0x3, 0x2, 0x2, 0x2, 0x1ce, 
			 0x1d1, 0x3, 0x2, 0x2, 0x2, 0x1cf, 0x1cd, 0x3, 0x2, 0x2, 0x2, 0x1cf, 
			 0x1d0, 0x3, 0x2, 0x2, 0x2, 0x1d0, 0xd, 0x3, 0x2, 0x2, 0x2, 0x1d1, 0x1cf, 
			 0x3, 0x2, 0x2, 0x2, 0x1d2, 0x1d4, 0x5, 0x10, 0x9, 0x2, 0x1d3, 0x1d5, 
			 0x5, 0x1e, 0x10, 0x2, 0x1d4, 0x1d3, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1d5, 
			 0x3, 0x2, 0x2, 0x2, 0x1d5, 0x1d6, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1d7, 
			 0x5, 0x68, 0x35, 0x2, 0x1d7, 0xf, 0x3, 0x2, 0x2, 0x2, 0x1d8, 0x1da, 
			 0x7, 0x58, 0x2, 0x2, 0x1d9, 0x1db, 0x5, 0x12, 0xa, 0x2, 0x1da, 0x1d9, 
			 0x3, 0x2, 0x2, 0x2, 0x1da, 0x1db, 0x3, 0x2, 0x2, 0x2, 0x1db, 0x1dc, 
			 0x3, 0x2, 0x2, 0x2, 0x1dc, 0x1dd, 0x7, 0x59, 0x2, 0x2, 0x1dd, 0x11, 
			 0x3, 0x2, 0x2, 0x2, 0x1de, 0x1e5, 0x5, 0x14, 0xb, 0x2, 0x1df, 0x1e5, 
			 0x5, 0x16, 0xc, 0x2, 0x1e0, 0x1e1, 0x5, 0x14, 0xb, 0x2, 0x1e1, 0x1e2, 
			 0x7, 0x7d, 0x2, 0x2, 0x1e2, 0x1e3, 0x5, 0x16, 0xc, 0x2, 0x1e3, 0x1e5, 
			 0x3, 0x2, 0x2, 0x2, 0x1e4, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x1e4, 0x1df, 
			 0x3, 0x2, 0x2, 0x2, 0x1e4, 0x1e0, 0x3, 0x2, 0x2, 0x2, 0x1e5, 0x13, 0x3, 
			 0x2, 0x2, 0x2, 0x1e6, 0x1e7, 0x9, 0x2, 0x2, 0x2, 0x1e7, 0x15, 0x3, 0x2, 
			 0x2, 0x2, 0x1e8, 0x1e9, 0x8, 0xc, 0x1, 0x2, 0x1e9, 0x1eb, 0x5, 0x18, 
			 0xd, 0x2, 0x1ea, 0x1ec, 0x7, 0x86, 0x2, 0x2, 0x1eb, 0x1ea, 0x3, 0x2, 
			 0x2, 0x2, 0x1eb, 0x1ec, 0x3, 0x2, 0x2, 0x2, 0x1ec, 0x1f5, 0x3, 0x2, 
			 0x2, 0x2, 0x1ed, 0x1ee, 0xc, 0x3, 0x2, 0x2, 0x1ee, 0x1ef, 0x7, 0x7d, 
			 0x2, 0x2, 0x1ef, 0x1f1, 0x5, 0x18, 0xd, 0x2, 0x1f0, 0x1f2, 0x7, 0x86, 
			 0x2, 0x2, 0x1f1, 0x1f0, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1f2, 0x3, 0x2, 
			 0x2, 0x2, 0x1f2, 0x1f4, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1ed, 0x3, 0x2, 
			 0x2, 0x2, 0x1f4, 0x1f7, 0x3, 0x2, 0x2, 0x2, 0x1f5, 0x1f3, 0x3, 0x2, 
			 0x2, 0x2, 0x1f5, 0x1f6, 0x3, 0x2, 0x2, 0x2, 0x1f6, 0x17, 0x3, 0x2, 0x2, 
			 0x2, 0x1f7, 0x1f5, 0x3, 0x2, 0x2, 0x2, 0x1f8, 0x1fb, 0x5, 0x1a, 0xe, 
			 0x2, 0x1f9, 0x1fb, 0x5, 0x1c, 0xf, 0x2, 0x1fa, 0x1f8, 0x3, 0x2, 0x2, 
			 0x2, 0x1fa, 0x1f9, 0x3, 0x2, 0x2, 0x2, 0x1fb, 0x19, 0x3, 0x2, 0x2, 0x2, 
			 0x1fc, 0x201, 0x7, 0x87, 0x2, 0x2, 0x1fd, 0x1fe, 0x7, 0x62, 0x2, 0x2, 
			 0x1fe, 0x201, 0x7, 0x87, 0x2, 0x2, 0x1ff, 0x201, 0x7, 0x46, 0x2, 0x2, 
			 0x200, 0x1fc, 0x3, 0x2, 0x2, 0x2, 0x200, 0x1fd, 0x3, 0x2, 0x2, 0x2, 
			 0x200, 0x1ff, 0x3, 0x2, 0x2, 0x2, 0x201, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x202, 
			 0x203, 0x7, 0x87, 0x2, 0x2, 0x203, 0x208, 0x5, 0x11a, 0x8e, 0x2, 0x204, 
			 0x205, 0x7, 0x62, 0x2, 0x2, 0x205, 0x206, 0x7, 0x87, 0x2, 0x2, 0x206, 
			 0x208, 0x5, 0x11a, 0x8e, 0x2, 0x207, 0x202, 0x3, 0x2, 0x2, 0x2, 0x207, 
			 0x204, 0x3, 0x2, 0x2, 0x2, 0x208, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x209, 0x20a, 
			 0x7, 0x56, 0x2, 0x2, 0x20a, 0x20b, 0x5, 0x110, 0x89, 0x2, 0x20b, 0x20d, 
			 0x7, 0x57, 0x2, 0x2, 0x20c, 0x20e, 0x7, 0x30, 0x2, 0x2, 0x20d, 0x20c, 
			 0x3, 0x2, 0x2, 0x2, 0x20d, 0x20e, 0x3, 0x2, 0x2, 0x2, 0x20e, 0x210, 
			 0x3, 0x2, 0x2, 0x2, 0x20f, 0x211, 0x5, 0x180, 0xc1, 0x2, 0x210, 0x20f, 
			 0x3, 0x2, 0x2, 0x2, 0x210, 0x211, 0x3, 0x2, 0x2, 0x2, 0x211, 0x213, 
			 0x3, 0x2, 0x2, 0x2, 0x212, 0x214, 0x5, 0xd6, 0x6c, 0x2, 0x213, 0x212, 
			 0x3, 0x2, 0x2, 0x2, 0x213, 0x214, 0x3, 0x2, 0x2, 0x2, 0x214, 0x216, 
			 0x3, 0x2, 0x2, 0x2, 0x215, 0x217, 0x5, 0xf8, 0x7d, 0x2, 0x216, 0x215, 
			 0x3, 0x2, 0x2, 0x2, 0x216, 0x217, 0x3, 0x2, 0x2, 0x2, 0x217, 0x1f, 0x3, 
			 0x2, 0x2, 0x2, 0x218, 0x219, 0x8, 0x11, 0x1, 0x2, 0x219, 0x259, 0x5, 
			 0x4, 0x3, 0x2, 0x21a, 0x21b, 0x5, 0x9e, 0x50, 0x2, 0x21b, 0x21d, 0x7, 
			 0x56, 0x2, 0x2, 0x21c, 0x21e, 0x5, 0x26, 0x14, 0x2, 0x21d, 0x21c, 0x3, 
			 0x2, 0x2, 0x2, 0x21d, 0x21e, 0x3, 0x2, 0x2, 0x2, 0x21e, 0x21f, 0x3, 
			 0x2, 0x2, 0x2, 0x21f, 0x220, 0x7, 0x57, 0x2, 0x2, 0x220, 0x259, 0x3, 
			 0x2, 0x2, 0x2, 0x221, 0x222, 0x5, 0x16e, 0xb8, 0x2, 0x222, 0x224, 0x7, 
			 0x56, 0x2, 0x2, 0x223, 0x225, 0x5, 0x26, 0x14, 0x2, 0x224, 0x223, 0x3, 
			 0x2, 0x2, 0x2, 0x224, 0x225, 0x3, 0x2, 0x2, 0x2, 0x225, 0x226, 0x3, 
			 0x2, 0x2, 0x2, 0x226, 0x227, 0x7, 0x57, 0x2, 0x2, 0x227, 0x259, 0x3, 
			 0x2, 0x2, 0x2, 0x228, 0x229, 0x5, 0x9e, 0x50, 0x2, 0x229, 0x22a, 0x5, 
			 0x122, 0x92, 0x2, 0x22a, 0x259, 0x3, 0x2, 0x2, 0x2, 0x22b, 0x22c, 0x5, 
			 0x16e, 0xb8, 0x2, 0x22c, 0x22d, 0x5, 0x122, 0x92, 0x2, 0x22d, 0x259, 
			 0x3, 0x2, 0x2, 0x2, 0x22e, 0x22f, 0x7, 0x20, 0x2, 0x2, 0x22f, 0x230, 
			 0x7, 0x67, 0x2, 0x2, 0x230, 0x231, 0x5, 0x104, 0x83, 0x2, 0x231, 0x232, 
			 0x7, 0x68, 0x2, 0x2, 0x232, 0x233, 0x7, 0x56, 0x2, 0x2, 0x233, 0x234, 
			 0x5, 0x5e, 0x30, 0x2, 0x234, 0x235, 0x7, 0x57, 0x2, 0x2, 0x235, 0x259, 
			 0x3, 0x2, 0x2, 0x2, 0x236, 0x237, 0x7, 0x42, 0x2, 0x2, 0x237, 0x238, 
			 0x7, 0x67, 0x2, 0x2, 0x238, 0x239, 0x5, 0x104, 0x83, 0x2, 0x239, 0x23a, 
			 0x7, 0x68, 0x2, 0x2, 0x23a, 0x23b, 0x7, 0x56, 0x2, 0x2, 0x23b, 0x23c, 
			 0x5, 0x5e, 0x30, 0x2, 0x23c, 0x23d, 0x7, 0x57, 0x2, 0x2, 0x23d, 0x259, 
			 0x3, 0x2, 0x2, 0x2, 0x23e, 0x23f, 0x7, 0x3b, 0x2, 0x2, 0x23f, 0x240, 
			 0x7, 0x67, 0x2, 0x2, 0x240, 0x241, 0x5, 0x104, 0x83, 0x2, 0x241, 0x242, 
			 0x7, 0x68, 0x2, 0x2, 0x242, 0x243, 0x7, 0x56, 0x2, 0x2, 0x243, 0x244, 
			 0x5, 0x5e, 0x30, 0x2, 0x244, 0x245, 0x7, 0x57, 0x2, 0x2, 0x245, 0x259, 
			 0x3, 0x2, 0x2, 0x2, 0x246, 0x247, 0x7, 0x19, 0x2, 0x2, 0x247, 0x248, 
			 0x7, 0x67, 0x2, 0x2, 0x248, 0x249, 0x5, 0x104, 0x83, 0x2, 0x249, 0x24a, 
			 0x7, 0x68, 0x2, 0x2, 0x24a, 0x24b, 0x7, 0x56, 0x2, 0x2, 0x24b, 0x24c, 
			 0x5, 0x5e, 0x30, 0x2, 0x24c, 0x24d, 0x7, 0x57, 0x2, 0x2, 0x24d, 0x259, 
			 0x3, 0x2, 0x2, 0x2, 0x24e, 0x24f, 0x5, 0x24, 0x13, 0x2, 0x24f, 0x250, 
			 0x7, 0x56, 0x2, 0x2, 0x250, 0x251, 0x5, 0x5e, 0x30, 0x2, 0x251, 0x252, 
			 0x7, 0x57, 0x2, 0x2, 0x252, 0x259, 0x3, 0x2, 0x2, 0x2, 0x253, 0x254, 
			 0x5, 0x24, 0x13, 0x2, 0x254, 0x255, 0x7, 0x56, 0x2, 0x2, 0x255, 0x256, 
			 0x5, 0x104, 0x83, 0x2, 0x256, 0x257, 0x7, 0x57, 0x2, 0x2, 0x257, 0x259, 
			 0x3, 0x2, 0x2, 0x2, 0x258, 0x218, 0x3, 0x2, 0x2, 0x2, 0x258, 0x21a, 
			 0x3, 0x2, 0x2, 0x2, 0x258, 0x221, 0x3, 0x2, 0x2, 0x2, 0x258, 0x228, 
			 0x3, 0x2, 0x2, 0x2, 0x258, 0x22b, 0x3, 0x2, 0x2, 0x2, 0x258, 0x22e, 
			 0x3, 0x2, 0x2, 0x2, 0x258, 0x236, 0x3, 0x2, 0x2, 0x2, 0x258, 0x23e, 
			 0x3, 0x2, 0x2, 0x2, 0x258, 0x246, 0x3, 0x2, 0x2, 0x2, 0x258, 0x24e, 
			 0x3, 0x2, 0x2, 0x2, 0x258, 0x253, 0x3, 0x2, 0x2, 0x2, 0x259, 0x282, 
			 0x3, 0x2, 0x2, 0x2, 0x25a, 0x25b, 0xc, 0x15, 0x2, 0x2, 0x25b, 0x25c, 
			 0x7, 0x58, 0x2, 0x2, 0x25c, 0x25d, 0x5, 0x5e, 0x30, 0x2, 0x25d, 0x25e, 
			 0x7, 0x59, 0x2, 0x2, 0x25e, 0x281, 0x3, 0x2, 0x2, 0x2, 0x25f, 0x260, 
			 0xc, 0x14, 0x2, 0x2, 0x260, 0x261, 0x7, 0x58, 0x2, 0x2, 0x261, 0x262, 
			 0x5, 0x122, 0x92, 0x2, 0x262, 0x263, 0x7, 0x59, 0x2, 0x2, 0x263, 0x281, 
			 0x3, 0x2, 0x2, 0x2, 0x264, 0x265, 0xc, 0x13, 0x2, 0x2, 0x265, 0x267, 
			 0x7, 0x56, 0x2, 0x2, 0x266, 0x268, 0x5, 0x26, 0x14, 0x2, 0x267, 0x266, 
			 0x3, 0x2, 0x2, 0x2, 0x267, 0x268, 0x3, 0x2, 0x2, 0x2, 0x268, 0x269, 
			 0x3, 0x2, 0x2, 0x2, 0x269, 0x281, 0x7, 0x57, 0x2, 0x2, 0x26a, 0x26b, 
			 0xc, 0xe, 0x2, 0x2, 0x26b, 0x26d, 0x7, 0x84, 0x2, 0x2, 0x26c, 0x26e, 
			 0x7, 0x45, 0x2, 0x2, 0x26d, 0x26c, 0x3, 0x2, 0x2, 0x2, 0x26d, 0x26e, 
			 0x3, 0x2, 0x2, 0x2, 0x26e, 0x26f, 0x3, 0x2, 0x2, 0x2, 0x26f, 0x281, 
			 0x5, 0x6, 0x4, 0x2, 0x270, 0x271, 0xc, 0xd, 0x2, 0x2, 0x271, 0x273, 
			 0x7, 0x7f, 0x2, 0x2, 0x272, 0x274, 0x7, 0x45, 0x2, 0x2, 0x273, 0x272, 
			 0x3, 0x2, 0x2, 0x2, 0x273, 0x274, 0x3, 0x2, 0x2, 0x2, 0x274, 0x275, 
			 0x3, 0x2, 0x2, 0x2, 0x275, 0x281, 0x5, 0x6, 0x4, 0x2, 0x276, 0x277, 
			 0xc, 0xc, 0x2, 0x2, 0x277, 0x278, 0x7, 0x84, 0x2, 0x2, 0x278, 0x281, 
			 0x5, 0x28, 0x15, 0x2, 0x279, 0x27a, 0xc, 0xb, 0x2, 0x2, 0x27a, 0x27b, 
			 0x7, 0x7f, 0x2, 0x2, 0x27b, 0x281, 0x5, 0x28, 0x15, 0x2, 0x27c, 0x27d, 
			 0xc, 0xa, 0x2, 0x2, 0x27d, 0x281, 0x7, 0x7b, 0x2, 0x2, 0x27e, 0x27f, 
			 0xc, 0x9, 0x2, 0x2, 0x27f, 0x281, 0x7, 0x7c, 0x2, 0x2, 0x280, 0x25a, 
			 0x3, 0x2, 0x2, 0x2, 0x280, 0x25f, 0x3, 0x2, 0x2, 0x2, 0x280, 0x264, 
			 0x3, 0x2, 0x2, 0x2, 0x280, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x280, 0x270, 
			 0x3, 0x2, 0x2, 0x2, 0x280, 0x276, 0x3, 0x2, 0x2, 0x2, 0x280, 0x279, 
			 0x3, 0x2, 0x2, 0x2, 0x280, 0x27c, 0x3, 0x2, 0x2, 0x2, 0x280, 0x27e, 
			 0x3, 0x2, 0x2, 0x2, 0x281, 0x284, 0x3, 0x2, 0x2, 0x2, 0x282, 0x280, 
			 0x3, 0x2, 0x2, 0x2, 0x282, 0x283, 0x3, 0x2, 0x2, 0x2, 0x283, 0x21, 0x3, 
			 0x2, 0x2, 0x2, 0x284, 0x282, 0x3, 0x2, 0x2, 0x2, 0x285, 0x286, 0x7, 
			 0x4c, 0x2, 0x2, 0x286, 0x23, 0x3, 0x2, 0x2, 0x2, 0x287, 0x288, 0x7, 
			 0x4c, 0x2, 0x2, 0x288, 0x25, 0x3, 0x2, 0x2, 0x2, 0x289, 0x28a, 0x5, 
			 0x120, 0x91, 0x2, 0x28a, 0x27, 0x3, 0x2, 0x2, 0x2, 0x28b, 0x28d, 0x5, 
			 0xc, 0x7, 0x2, 0x28c, 0x28b, 0x3, 0x2, 0x2, 0x2, 0x28c, 0x28d, 0x3, 
			 0x2, 0x2, 0x2, 0x28d, 0x28e, 0x3, 0x2, 0x2, 0x2, 0x28e, 0x28f, 0x5, 
			 0xa0, 0x51, 0x2, 0x28f, 0x290, 0x7, 0x82, 0x2, 0x2, 0x290, 0x291, 0x7, 
			 0x64, 0x2, 0x2, 0x291, 0x292, 0x5, 0xa0, 0x51, 0x2, 0x292, 0x2a2, 0x3, 
			 0x2, 0x2, 0x2, 0x293, 0x294, 0x5, 0xc, 0x7, 0x2, 0x294, 0x295, 0x7, 
			 0x45, 0x2, 0x2, 0x295, 0x296, 0x5, 0x164, 0xb3, 0x2, 0x296, 0x297, 0x7, 
			 0x82, 0x2, 0x2, 0x297, 0x298, 0x7, 0x64, 0x2, 0x2, 0x298, 0x299, 0x5, 
			 0xa0, 0x51, 0x2, 0x299, 0x2a2, 0x3, 0x2, 0x2, 0x2, 0x29a, 0x29c, 0x5, 
			 0xc, 0x7, 0x2, 0x29b, 0x29a, 0x3, 0x2, 0x2, 0x2, 0x29b, 0x29c, 0x3, 
			 0x2, 0x2, 0x2, 0x29c, 0x29d, 0x3, 0x2, 0x2, 0x2, 0x29d, 0x29e, 0x7, 
			 0x64, 0x2, 0x2, 0x29e, 0x2a2, 0x5, 0xa0, 0x51, 0x2, 0x29f, 0x2a0, 0x7, 
			 0x64, 0x2, 0x2, 0x2a0, 0x2a2, 0x5, 0xa2, 0x52, 0x2, 0x2a1, 0x28c, 0x3, 
			 0x2, 0x2, 0x2, 0x2a1, 0x293, 0x3, 0x2, 0x2, 0x2, 0x2a1, 0x29b, 0x3, 
			 0x2, 0x2, 0x2, 0x2a1, 0x29f, 0x3, 0x2, 0x2, 0x2, 0x2a2, 0x29, 0x3, 0x2, 
			 0x2, 0x2, 0x2a3, 0x2c0, 0x5, 0x20, 0x11, 0x2, 0x2a4, 0x2a5, 0x7, 0x7b, 
			 0x2, 0x2, 0x2a5, 0x2c0, 0x5, 0x3e, 0x20, 0x2, 0x2a6, 0x2a7, 0x7, 0x7c, 
			 0x2, 0x2, 0x2a7, 0x2c0, 0x5, 0x3e, 0x20, 0x2, 0x2a8, 0x2a9, 0x5, 0x2c, 
			 0x17, 0x2, 0x2a9, 0x2aa, 0x5, 0x3e, 0x20, 0x2, 0x2aa, 0x2c0, 0x3, 0x2, 
			 0x2, 0x2, 0x2ab, 0x2ac, 0x7, 0x3f, 0x2, 0x2, 0x2ac, 0x2c0, 0x5, 0x2a, 
			 0x16, 0x2, 0x2ad, 0x2ae, 0x7, 0x3f, 0x2, 0x2, 0x2ae, 0x2af, 0x7, 0x56, 
			 0x2, 0x2, 0x2af, 0x2b0, 0x5, 0x104, 0x83, 0x2, 0x2b0, 0x2b1, 0x7, 0x57, 
			 0x2, 0x2, 0x2b1, 0x2c0, 0x3, 0x2, 0x2, 0x2, 0x2b2, 0x2b3, 0x7, 0x3f, 
			 0x2, 0x2, 0x2b3, 0x2b4, 0x7, 0x86, 0x2, 0x2, 0x2b4, 0x2b5, 0x7, 0x56, 
			 0x2, 0x2, 0x2b5, 0x2b6, 0x7, 0x87, 0x2, 0x2, 0x2b6, 0x2c0, 0x7, 0x57, 
			 0x2, 0x2, 0x2b7, 0x2b8, 0x7, 0xc, 0x2, 0x2, 0x2b8, 0x2b9, 0x7, 0x56, 
			 0x2, 0x2, 0x2b9, 0x2ba, 0x5, 0x104, 0x83, 0x2, 0x2ba, 0x2bb, 0x7, 0x57, 
			 0x2, 0x2, 0x2bb, 0x2c0, 0x3, 0x2, 0x2, 0x2, 0x2bc, 0x2c0, 0x5, 0x3c, 
			 0x1f, 0x2, 0x2bd, 0x2c0, 0x5, 0x2e, 0x18, 0x2, 0x2be, 0x2c0, 0x5, 0x3a, 
			 0x1e, 0x2, 0x2bf, 0x2a3, 0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2a4, 0x3, 0x2, 
			 0x2, 0x2, 0x2bf, 0x2a6, 0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2a8, 0x3, 0x2, 
			 0x2, 0x2, 0x2bf, 0x2ab, 0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2ad, 0x3, 0x2, 
			 0x2, 0x2, 0x2bf, 0x2b2, 0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2b7, 0x3, 0x2, 
			 0x2, 0x2, 0x2bf, 0x2bc, 0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2bd, 0x3, 0x2, 
			 0x2, 0x2, 0x2bf, 0x2be, 0x3, 0x2, 0x2, 0x2, 0x2c0, 0x2b, 0x3, 0x2, 0x2, 
			 0x2, 0x2c1, 0x2c2, 0x9, 0x3, 0x2, 0x2, 0x2c2, 0x2d, 0x3, 0x2, 0x2, 0x2, 
			 0x2c3, 0x2c5, 0x7, 0x82, 0x2, 0x2, 0x2c4, 0x2c3, 0x3, 0x2, 0x2, 0x2, 
			 0x2c4, 0x2c5, 0x3, 0x2, 0x2, 0x2, 0x2c5, 0x2c6, 0x3, 0x2, 0x2, 0x2, 
			 0x2c6, 0x2c8, 0x7, 0x32, 0x2, 0x2, 0x2c7, 0x2c9, 0x5, 0x30, 0x19, 0x2, 
			 0x2c8, 0x2c7, 0x3, 0x2, 0x2, 0x2, 0x2c8, 0x2c9, 0x3, 0x2, 0x2, 0x2, 
			 0x2c9, 0x2ca, 0x3, 0x2, 0x2, 0x2, 0x2ca, 0x2cc, 0x5, 0x32, 0x1a, 0x2, 
			 0x2cb, 0x2cd, 0x5, 0x38, 0x1d, 0x2, 0x2cc, 0x2cb, 0x3, 0x2, 0x2, 0x2, 
			 0x2cc, 0x2cd, 0x3, 0x2, 0x2, 0x2, 0x2cd, 0x2dc, 0x3, 0x2, 0x2, 0x2, 
			 0x2ce, 0x2d0, 0x7, 0x82, 0x2, 0x2, 0x2cf, 0x2ce, 0x3, 0x2, 0x2, 0x2, 
			 0x2cf, 0x2d0, 0x3, 0x2, 0x2, 0x2, 0x2d0, 0x2d1, 0x3, 0x2, 0x2, 0x2, 
			 0x2d1, 0x2d3, 0x7, 0x32, 0x2, 0x2, 0x2d2, 0x2d4, 0x5, 0x30, 0x19, 0x2, 
			 0x2d3, 0x2d2, 0x3, 0x2, 0x2, 0x2, 0x2d3, 0x2d4, 0x3, 0x2, 0x2, 0x2, 
			 0x2d4, 0x2d5, 0x3, 0x2, 0x2, 0x2, 0x2d5, 0x2d6, 0x7, 0x56, 0x2, 0x2, 
			 0x2d6, 0x2d7, 0x5, 0x104, 0x83, 0x2, 0x2d7, 0x2d9, 0x7, 0x57, 0x2, 0x2, 
			 0x2d8, 0x2da, 0x5, 0x38, 0x1d, 0x2, 0x2d9, 0x2d8, 0x3, 0x2, 0x2, 0x2, 
			 0x2d9, 0x2da, 0x3, 0x2, 0x2, 0x2, 0x2da, 0x2dc, 0x3, 0x2, 0x2, 0x2, 
			 0x2db, 0x2c4, 0x3, 0x2, 0x2, 0x2, 0x2db, 0x2cf, 0x3, 0x2, 0x2, 0x2, 
			 0x2dc, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x2dd, 0x2de, 0x7, 0x56, 0x2, 0x2, 
			 0x2de, 0x2df, 0x5, 0x26, 0x14, 0x2, 0x2df, 0x2e0, 0x7, 0x57, 0x2, 0x2, 
			 0x2e0, 0x31, 0x3, 0x2, 0x2, 0x2, 0x2e1, 0x2e3, 0x5, 0x9a, 0x4e, 0x2, 
			 0x2e2, 0x2e4, 0x5, 0x34, 0x1b, 0x2, 0x2e3, 0x2e2, 0x3, 0x2, 0x2, 0x2, 
			 0x2e3, 0x2e4, 0x3, 0x2, 0x2, 0x2, 0x2e4, 0x33, 0x3, 0x2, 0x2, 0x2, 0x2e5, 
			 0x2e7, 0x5, 0xfa, 0x7e, 0x2, 0x2e6, 0x2e8, 0x5, 0x34, 0x1b, 0x2, 0x2e7, 
			 0x2e6, 0x3, 0x2, 0x2, 0x2, 0x2e7, 0x2e8, 0x3, 0x2, 0x2, 0x2, 0x2e8, 
			 0x2eb, 0x3, 0x2, 0x2, 0x2, 0x2e9, 0x2eb, 0x5, 0x36, 0x1c, 0x2, 0x2ea, 
			 0x2e5, 0x3, 0x2, 0x2, 0x2, 0x2ea, 0x2e9, 0x3, 0x2, 0x2, 0x2, 0x2eb, 
			 0x35, 0x3, 0x2, 0x2, 0x2, 0x2ec, 0x2ed, 0x8, 0x1c, 0x1, 0x2, 0x2ed, 
			 0x2ee, 0x7, 0x58, 0x2, 0x2, 0x2ee, 0x2ef, 0x5, 0x5e, 0x30, 0x2, 0x2ef, 
			 0x2f1, 0x7, 0x59, 0x2, 0x2, 0x2f0, 0x2f2, 0x5, 0xd6, 0x6c, 0x2, 0x2f1, 
			 0x2f0, 0x3, 0x2, 0x2, 0x2, 0x2f1, 0x2f2, 0x3, 0x2, 0x2, 0x2, 0x2f2, 
			 0x2fc, 0x3, 0x2, 0x2, 0x2, 0x2f3, 0x2f4, 0xc, 0x3, 0x2, 0x2, 0x2f4, 
			 0x2f5, 0x7, 0x58, 0x2, 0x2, 0x2f5, 0x2f6, 0x5, 0x60, 0x31, 0x2, 0x2f6, 
			 0x2f8, 0x7, 0x59, 0x2, 0x2, 0x2f7, 0x2f9, 0x5, 0xd6, 0x6c, 0x2, 0x2f8, 
			 0x2f7, 0x3, 0x2, 0x2, 0x2, 0x2f8, 0x2f9, 0x3, 0x2, 0x2, 0x2, 0x2f9, 
			 0x2fb, 0x3, 0x2, 0x2, 0x2, 0x2fa, 0x2f3, 0x3, 0x2, 0x2, 0x2, 0x2fb, 
			 0x2fe, 0x3, 0x2, 0x2, 0x2, 0x2fc, 0x2fa, 0x3, 0x2, 0x2, 0x2, 0x2fc, 
			 0x2fd, 0x3, 0x2, 0x2, 0x2, 0x2fd, 0x37, 0x3, 0x2, 0x2, 0x2, 0x2fe, 0x2fc, 
			 0x3, 0x2, 0x2, 0x2, 0x2ff, 0x301, 0x7, 0x56, 0x2, 0x2, 0x300, 0x302, 
			 0x5, 0x26, 0x14, 0x2, 0x301, 0x300, 0x3, 0x2, 0x2, 0x2, 0x301, 0x302, 
			 0x3, 0x2, 0x2, 0x2, 0x302, 0x303, 0x3, 0x2, 0x2, 0x2, 0x303, 0x306, 
			 0x7, 0x57, 0x2, 0x2, 0x304, 0x306, 0x5, 0x122, 0x92, 0x2, 0x305, 0x2ff, 
			 0x3, 0x2, 0x2, 0x2, 0x305, 0x304, 0x3, 0x2, 0x2, 0x2, 0x306, 0x39, 0x3, 
			 0x2, 0x2, 0x2, 0x307, 0x309, 0x7, 0x82, 0x2, 0x2, 0x308, 0x307, 0x3, 
			 0x2, 0x2, 0x2, 0x308, 0x309, 0x3, 0x2, 0x2, 0x2, 0x309, 0x30a, 0x3, 
			 0x2, 0x2, 0x2, 0x30a, 0x30b, 0x7, 0x1d, 0x2, 0x2, 0x30b, 0x314, 0x5, 
			 0x3e, 0x20, 0x2, 0x30c, 0x30e, 0x7, 0x82, 0x2, 0x2, 0x30d, 0x30c, 0x3, 
			 0x2, 0x2, 0x2, 0x30d, 0x30e, 0x3, 0x2, 0x2, 0x2, 0x30e, 0x30f, 0x3, 
			 0x2, 0x2, 0x2, 0x30f, 0x310, 0x7, 0x1d, 0x2, 0x2, 0x310, 0x311, 0x7, 
			 0x58, 0x2, 0x2, 0x311, 0x312, 0x7, 0x59, 0x2, 0x2, 0x312, 0x314, 0x5, 
			 0x3e, 0x20, 0x2, 0x313, 0x308, 0x3, 0x2, 0x2, 0x2, 0x313, 0x30d, 0x3, 
			 0x2, 0x2, 0x2, 0x314, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x315, 0x316, 0x7, 0x33, 
			 0x2, 0x2, 0x316, 0x317, 0x7, 0x56, 0x2, 0x2, 0x317, 0x318, 0x5, 0x5e, 
			 0x30, 0x2, 0x318, 0x319, 0x7, 0x57, 0x2, 0x2, 0x319, 0x3d, 0x3, 0x2, 
			 0x2, 0x2, 0x31a, 0x321, 0x5, 0x2a, 0x16, 0x2, 0x31b, 0x31c, 0x7, 0x56, 
			 0x2, 0x2, 0x31c, 0x31d, 0x5, 0x104, 0x83, 0x2, 0x31d, 0x31e, 0x7, 0x57, 
			 0x2, 0x2, 0x31e, 0x31f, 0x5, 0x3e, 0x20, 0x2, 0x31f, 0x321, 0x3, 0x2, 
			 0x2, 0x2, 0x320, 0x31a, 0x3, 0x2, 0x2, 0x2, 0x320, 0x31b, 0x3, 0x2, 
			 0x2, 0x2, 0x321, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x322, 0x323, 0x8, 0x21, 
			 0x1, 0x2, 0x323, 0x324, 0x5, 0x3e, 0x20, 0x2, 0x324, 0x32d, 0x3, 0x2, 
			 0x2, 0x2, 0x325, 0x326, 0xc, 0x4, 0x2, 0x2, 0x326, 0x327, 0x7, 0x85, 
			 0x2, 0x2, 0x327, 0x32c, 0x5, 0x3e, 0x20, 0x2, 0x328, 0x329, 0xc, 0x3, 
			 0x2, 0x2, 0x329, 0x32a, 0x7, 0x7e, 0x2, 0x2, 0x32a, 0x32c, 0x5, 0x3e, 
			 0x20, 0x2, 0x32b, 0x325, 0x3, 0x2, 0x2, 0x2, 0x32b, 0x328, 0x3, 0x2, 
			 0x2, 0x2, 0x32c, 0x32f, 0x3, 0x2, 0x2, 0x2, 0x32d, 0x32b, 0x3, 0x2, 
			 0x2, 0x2, 0x32d, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x32e, 0x41, 0x3, 0x2, 0x2, 
			 0x2, 0x32f, 0x32d, 0x3, 0x2, 0x2, 0x2, 0x330, 0x331, 0x8, 0x22, 0x1, 
			 0x2, 0x331, 0x332, 0x5, 0x40, 0x21, 0x2, 0x332, 0x33e, 0x3, 0x2, 0x2, 
			 0x2, 0x333, 0x334, 0xc, 0x5, 0x2, 0x2, 0x334, 0x335, 0x7, 0x5e, 0x2, 
			 0x2, 0x335, 0x33d, 0x5, 0x40, 0x21, 0x2, 0x336, 0x337, 0xc, 0x4, 0x2, 
			 0x2, 0x337, 0x338, 0x7, 0x5f, 0x2, 0x2, 0x338, 0x33d, 0x5, 0x40, 0x21, 
			 0x2, 0x339, 0x33a, 0xc, 0x3, 0x2, 0x2, 0x33a, 0x33b, 0x7, 0x60, 0x2, 
			 0x2, 0x33b, 0x33d, 0x5, 0x40, 0x21, 0x2, 0x33c, 0x333, 0x3, 0x2, 0x2, 
			 0x2, 0x33c, 0x336, 0x3, 0x2, 0x2, 0x2, 0x33c, 0x339, 0x3, 0x2, 0x2, 
			 0x2, 0x33d, 0x340, 0x3, 0x2, 0x2, 0x2, 0x33e, 0x33c, 0x3, 0x2, 0x2, 
			 0x2, 0x33e, 0x33f, 0x3, 0x2, 0x2, 0x2, 0x33f, 0x43, 0x3, 0x2, 0x2, 0x2, 
			 0x340, 0x33e, 0x3, 0x2, 0x2, 0x2, 0x341, 0x342, 0x8, 0x23, 0x1, 0x2, 
			 0x342, 0x343, 0x5, 0x42, 0x22, 0x2, 0x343, 0x34c, 0x3, 0x2, 0x2, 0x2, 
			 0x344, 0x345, 0xc, 0x4, 0x2, 0x2, 0x345, 0x346, 0x7, 0x5c, 0x2, 0x2, 
			 0x346, 0x34b, 0x5, 0x42, 0x22, 0x2, 0x347, 0x348, 0xc, 0x3, 0x2, 0x2, 
			 0x348, 0x349, 0x7, 0x5d, 0x2, 0x2, 0x349, 0x34b, 0x5, 0x42, 0x22, 0x2, 
			 0x34a, 0x344, 0x3, 0x2, 0x2, 0x2, 0x34a, 0x347, 0x3, 0x2, 0x2, 0x2, 
			 0x34b, 0x34e, 0x3, 0x2, 0x2, 0x2, 0x34c, 0x34a, 0x3, 0x2, 0x2, 0x2, 
			 0x34c, 0x34d, 0x3, 0x2, 0x2, 0x2, 0x34d, 0x45, 0x3, 0x2, 0x2, 0x2, 0x34e, 
			 0x34c, 0x3, 0x2, 0x2, 0x2, 0x34f, 0x350, 0x8, 0x24, 0x1, 0x2, 0x350, 
			 0x351, 0x5, 0x44, 0x23, 0x2, 0x351, 0x358, 0x3, 0x2, 0x2, 0x2, 0x352, 
			 0x353, 0xc, 0x3, 0x2, 0x2, 0x353, 0x354, 0x5, 0x48, 0x25, 0x2, 0x354, 
			 0x355, 0x5, 0x44, 0x23, 0x2, 0x355, 0x357, 0x3, 0x2, 0x2, 0x2, 0x356, 
			 0x352, 0x3, 0x2, 0x2, 0x2, 0x357, 0x35a, 0x3, 0x2, 0x2, 0x2, 0x358, 
			 0x356, 0x3, 0x2, 0x2, 0x2, 0x358, 0x359, 0x3, 0x2, 0x2, 0x2, 0x359, 
			 0x47, 0x3, 0x2, 0x2, 0x2, 0x35a, 0x358, 0x3, 0x2, 0x2, 0x2, 0x35b, 0x35c, 
			 0x9, 0x4, 0x2, 0x2, 0x35c, 0x49, 0x3, 0x2, 0x2, 0x2, 0x35d, 0x35e, 0x8, 
			 0x26, 0x1, 0x2, 0x35e, 0x35f, 0x5, 0x46, 0x24, 0x2, 0x35f, 0x36e, 0x3, 
			 0x2, 0x2, 0x2, 0x360, 0x361, 0xc, 0x6, 0x2, 0x2, 0x361, 0x362, 0x7, 
			 0x67, 0x2, 0x2, 0x362, 0x36d, 0x5, 0x46, 0x24, 0x2, 0x363, 0x364, 0xc, 
			 0x5, 0x2, 0x2, 0x364, 0x365, 0x7, 0x68, 0x2, 0x2, 0x365, 0x36d, 0x5, 
			 0x46, 0x24, 0x2, 0x366, 0x367, 0xc, 0x4, 0x2, 0x2, 0x367, 0x368, 0x7, 
			 0x77, 0x2, 0x2, 0x368, 0x36d, 0x5, 0x46, 0x24, 0x2, 0x369, 0x36a, 0xc, 
			 0x3, 0x2, 0x2, 0x36a, 0x36b, 0x7, 0x78, 0x2, 0x2, 0x36b, 0x36d, 0x5, 
			 0x46, 0x24, 0x2, 0x36c, 0x360, 0x3, 0x2, 0x2, 0x2, 0x36c, 0x363, 0x3, 
			 0x2, 0x2, 0x2, 0x36c, 0x366, 0x3, 0x2, 0x2, 0x2, 0x36c, 0x369, 0x3, 
			 0x2, 0x2, 0x2, 0x36d, 0x370, 0x3, 0x2, 0x2, 0x2, 0x36e, 0x36c, 0x3, 
			 0x2, 0x2, 0x2, 0x36e, 0x36f, 0x3, 0x2, 0x2, 0x2, 0x36f, 0x4b, 0x3, 0x2, 
			 0x2, 0x2, 0x370, 0x36e, 0x3, 0x2, 0x2, 0x2, 0x371, 0x372, 0x8, 0x27, 
			 0x1, 0x2, 0x372, 0x373, 0x5, 0x4a, 0x26, 0x2, 0x373, 0x37c, 0x3, 0x2, 
			 0x2, 0x2, 0x374, 0x375, 0xc, 0x4, 0x2, 0x2, 0x375, 0x376, 0x7, 0x75, 
			 0x2, 0x2, 0x376, 0x37b, 0x5, 0x4a, 0x26, 0x2, 0x377, 0x378, 0xc, 0x3, 
			 0x2, 0x2, 0x378, 0x379, 0x7, 0x76, 0x2, 0x2, 0x379, 0x37b, 0x5, 0x4a, 
			 0x26, 0x2, 0x37a, 0x374, 0x3, 0x2, 0x2, 0x2, 0x37a, 0x377, 0x3, 0x2, 
			 0x2, 0x2, 0x37b, 0x37e, 0x3, 0x2, 0x2, 0x2, 0x37c, 0x37a, 0x3, 0x2, 
			 0x2, 0x2, 0x37c, 0x37d, 0x3, 0x2, 0x2, 0x2, 0x37d, 0x4d, 0x3, 0x2, 0x2, 
			 0x2, 0x37e, 0x37c, 0x3, 0x2, 0x2, 0x2, 0x37f, 0x380, 0x8, 0x28, 0x1, 
			 0x2, 0x380, 0x381, 0x5, 0x4c, 0x27, 0x2, 0x381, 0x387, 0x3, 0x2, 0x2, 
			 0x2, 0x382, 0x383, 0xc, 0x3, 0x2, 0x2, 0x383, 0x384, 0x7, 0x62, 0x2, 
			 0x2, 0x384, 0x386, 0x5, 0x4c, 0x27, 0x2, 0x385, 0x382, 0x3, 0x2, 0x2, 
			 0x2, 0x386, 0x389, 0x3, 0x2, 0x2, 0x2, 0x387, 0x385, 0x3, 0x2, 0x2, 
			 0x2, 0x387, 0x388, 0x3, 0x2, 0x2, 0x2, 0x388, 0x4f, 0x3, 0x2, 0x2, 0x2, 
			 0x389, 0x387, 0x3, 0x2, 0x2, 0x2, 0x38a, 0x38b, 0x8, 0x29, 0x1, 0x2, 
			 0x38b, 0x38c, 0x5, 0x4e, 0x28, 0x2, 0x38c, 0x392, 0x3, 0x2, 0x2, 0x2, 
			 0x38d, 0x38e, 0xc, 0x3, 0x2, 0x2, 0x38e, 0x38f, 0x7, 0x61, 0x2, 0x2, 
			 0x38f, 0x391, 0x5, 0x4e, 0x28, 0x2, 0x390, 0x38d, 0x3, 0x2, 0x2, 0x2, 
			 0x391, 0x394, 0x3, 0x2, 0x2, 0x2, 0x392, 0x390, 0x3, 0x2, 0x2, 0x2, 
			 0x392, 0x393, 0x3, 0x2, 0x2, 0x2, 0x393, 0x51, 0x3, 0x2, 0x2, 0x2, 0x394, 
			 0x392, 0x3, 0x2, 0x2, 0x2, 0x395, 0x396, 0x8, 0x2a, 0x1, 0x2, 0x396, 
			 0x397, 0x5, 0x50, 0x29, 0x2, 0x397, 0x39d, 0x3, 0x2, 0x2, 0x2, 0x398, 
			 0x399, 0xc, 0x3, 0x2, 0x2, 0x399, 0x39a, 0x7, 0x63, 0x2, 0x2, 0x39a, 
			 0x39c, 0x5, 0x50, 0x29, 0x2, 0x39b, 0x398, 0x3, 0x2, 0x2, 0x2, 0x39c, 
			 0x39f, 0x3, 0x2, 0x2, 0x2, 0x39d, 0x39b, 0x3, 0x2, 0x2, 0x2, 0x39d, 
			 0x39e, 0x3, 0x2, 0x2, 0x2, 0x39e, 0x53, 0x3, 0x2, 0x2, 0x2, 0x39f, 0x39d, 
			 0x3, 0x2, 0x2, 0x2, 0x3a0, 0x3a1, 0x8, 0x2b, 0x1, 0x2, 0x3a1, 0x3a2, 
			 0x5, 0x52, 0x2a, 0x2, 0x3a2, 0x3ab, 0x3, 0x2, 0x2, 0x2, 0x3a3, 0x3a4, 
			 0xc, 0x4, 0x2, 0x2, 0x3a4, 0x3a5, 0x7, 0x5, 0x2, 0x2, 0x3a5, 0x3aa, 
			 0x5, 0x52, 0x2a, 0x2, 0x3a6, 0x3a7, 0xc, 0x3, 0x2, 0x2, 0x3a7, 0x3a8, 
			 0x7, 0x6, 0x2, 0x2, 0x3a8, 0x3aa, 0x5, 0x52, 0x2a, 0x2, 0x3a9, 0x3a3, 
			 0x3, 0x2, 0x2, 0x2, 0x3a9, 0x3a6, 0x3, 0x2, 0x2, 0x2, 0x3aa, 0x3ad, 
			 0x3, 0x2, 0x2, 0x2, 0x3ab, 0x3a9, 0x3, 0x2, 0x2, 0x2, 0x3ab, 0x3ac, 
			 0x3, 0x2, 0x2, 0x2, 0x3ac, 0x55, 0x3, 0x2, 0x2, 0x2, 0x3ad, 0x3ab, 0x3, 
			 0x2, 0x2, 0x2, 0x3ae, 0x3af, 0x8, 0x2c, 0x1, 0x2, 0x3af, 0x3b0, 0x5, 
			 0x54, 0x2b, 0x2, 0x3b0, 0x3b9, 0x3, 0x2, 0x2, 0x2, 0x3b1, 0x3b2, 0xc, 
			 0x4, 0x2, 0x2, 0x3b2, 0x3b3, 0x7, 0x7, 0x2, 0x2, 0x3b3, 0x3b8, 0x5, 
			 0x54, 0x2b, 0x2, 0x3b4, 0x3b5, 0xc, 0x3, 0x2, 0x2, 0x3b5, 0x3b6, 0x7, 
			 0x8, 0x2, 0x2, 0x3b6, 0x3b8, 0x5, 0x54, 0x2b, 0x2, 0x3b7, 0x3b1, 0x3, 
			 0x2, 0x2, 0x2, 0x3b7, 0x3b4, 0x3, 0x2, 0x2, 0x2, 0x3b8, 0x3bb, 0x3, 
			 0x2, 0x2, 0x2, 0x3b9, 0x3b7, 0x3, 0x2, 0x2, 0x2, 0x3b9, 0x3ba, 0x3, 
			 0x2, 0x2, 0x2, 0x3ba, 0x57, 0x3, 0x2, 0x2, 0x2, 0x3bb, 0x3b9, 0x3, 0x2, 
			 0x2, 0x2, 0x3bc, 0x3c4, 0x5, 0x56, 0x2c, 0x2, 0x3bd, 0x3be, 0x5, 0x56, 
			 0x2c, 0x2, 0x3be, 0x3bf, 0x7, 0x80, 0x2, 0x2, 0x3bf, 0x3c0, 0x5, 0x5e, 
			 0x30, 0x2, 0x3c0, 0x3c1, 0x7, 0x81, 0x2, 0x2, 0x3c1, 0x3c2, 0x5, 0x5a, 
			 0x2e, 0x2, 0x3c2, 0x3c4, 0x3, 0x2, 0x2, 0x2, 0x3c3, 0x3bc, 0x3, 0x2, 
			 0x2, 0x2, 0x3c3, 0x3bd, 0x3, 0x2, 0x2, 0x2, 0x3c4, 0x59, 0x3, 0x2, 0x2, 
			 0x2, 0x3c5, 0x3cc, 0x5, 0x58, 0x2d, 0x2, 0x3c6, 0x3c7, 0x5, 0x56, 0x2c, 
			 0x2, 0x3c7, 0x3c8, 0x5, 0x5c, 0x2f, 0x2, 0x3c8, 0x3c9, 0x5, 0x11e, 0x90, 
			 0x2, 0x3c9, 0x3cc, 0x3, 0x2, 0x2, 0x2, 0x3ca, 0x3cc, 0x5, 0x17e, 0xc0, 
			 0x2, 0x3cb, 0x3c5, 0x3, 0x2, 0x2, 0x2, 0x3cb, 0x3c6, 0x3, 0x2, 0x2, 
			 0x2, 0x3cb, 0x3ca, 0x3, 0x2, 0x2, 0x2, 0x3cc, 0x5b, 0x3, 0x2, 0x2, 0x2, 
			 0x3cd, 0x3ce, 0x9, 0x5, 0x2, 0x2, 0x3ce, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x3cf, 
			 0x3d0, 0x8, 0x30, 0x1, 0x2, 0x3d0, 0x3d1, 0x5, 0x5a, 0x2e, 0x2, 0x3d1, 
			 0x3d7, 0x3, 0x2, 0x2, 0x2, 0x3d2, 0x3d3, 0xc, 0x3, 0x2, 0x2, 0x3d3, 
			 0x3d4, 0x7, 0x7d, 0x2, 0x2, 0x3d4, 0x3d6, 0x5, 0x5a, 0x2e, 0x2, 0x3d5, 
			 0x3d2, 0x3, 0x2, 0x2, 0x2, 0x3d6, 0x3d9, 0x3, 0x2, 0x2, 0x2, 0x3d7, 
			 0x3d5, 0x3, 0x2, 0x2, 0x2, 0x3d7, 0x3d8, 0x3, 0x2, 0x2, 0x2, 0x3d8, 
			 0x5f, 0x3, 0x2, 0x2, 0x2, 0x3d9, 0x3d7, 0x3, 0x2, 0x2, 0x2, 0x3da, 0x3db, 
			 0x5, 0x58, 0x2d, 0x2, 0x3db, 0x61, 0x3, 0x2, 0x2, 0x2, 0x3dc, 0x3f7, 
			 0x5, 0x64, 0x33, 0x2, 0x3dd, 0x3df, 0x5, 0xd6, 0x6c, 0x2, 0x3de, 0x3dd, 
			 0x3, 0x2, 0x2, 0x2, 0x3de, 0x3df, 0x3, 0x2, 0x2, 0x2, 0x3df, 0x3e0, 
			 0x3, 0x2, 0x2, 0x2, 0x3e0, 0x3f7, 0x5, 0x66, 0x34, 0x2, 0x3e1, 0x3e3, 
			 0x5, 0xd6, 0x6c, 0x2, 0x3e2, 0x3e1, 0x3, 0x2, 0x2, 0x2, 0x3e2, 0x3e3, 
			 0x3, 0x2, 0x2, 0x2, 0x3e3, 0x3e4, 0x3, 0x2, 0x2, 0x2, 0x3e4, 0x3f7, 
			 0x5, 0x68, 0x35, 0x2, 0x3e5, 0x3e7, 0x5, 0xd6, 0x6c, 0x2, 0x3e6, 0x3e5, 
			 0x3, 0x2, 0x2, 0x2, 0x3e6, 0x3e7, 0x3, 0x2, 0x2, 0x2, 0x3e7, 0x3e8, 
			 0x3, 0x2, 0x2, 0x2, 0x3e8, 0x3f7, 0x5, 0x6c, 0x37, 0x2, 0x3e9, 0x3eb, 
			 0x5, 0xd6, 0x6c, 0x2, 0x3ea, 0x3e9, 0x3, 0x2, 0x2, 0x2, 0x3ea, 0x3eb, 
			 0x3, 0x2, 0x2, 0x2, 0x3eb, 0x3ec, 0x3, 0x2, 0x2, 0x2, 0x3ec, 0x3f7, 
			 0x5, 0x70, 0x39, 0x2, 0x3ed, 0x3ef, 0x5, 0xd6, 0x6c, 0x2, 0x3ee, 0x3ed, 
			 0x3, 0x2, 0x2, 0x2, 0x3ee, 0x3ef, 0x3, 0x2, 0x2, 0x2, 0x3ef, 0x3f0, 
			 0x3, 0x2, 0x2, 0x2, 0x3f0, 0x3f7, 0x5, 0x78, 0x3d, 0x2, 0x3f1, 0x3f7, 
			 0x5, 0x7a, 0x3e, 0x2, 0x3f2, 0x3f4, 0x5, 0xd6, 0x6c, 0x2, 0x3f3, 0x3f2, 
			 0x3, 0x2, 0x2, 0x2, 0x3f3, 0x3f4, 0x3, 0x2, 0x2, 0x2, 0x3f4, 0x3f5, 
			 0x3, 0x2, 0x2, 0x2, 0x3f5, 0x3f7, 0x5, 0x174, 0xbb, 0x2, 0x3f6, 0x3dc, 
			 0x3, 0x2, 0x2, 0x2, 0x3f6, 0x3de, 0x3, 0x2, 0x2, 0x2, 0x3f6, 0x3e2, 
			 0x3, 0x2, 0x2, 0x2, 0x3f6, 0x3e6, 0x3, 0x2, 0x2, 0x2, 0x3f6, 0x3ea, 
			 0x3, 0x2, 0x2, 0x2, 0x3f6, 0x3ee, 0x3, 0x2, 0x2, 0x2, 0x3f6, 0x3f1, 
			 0x3, 0x2, 0x2, 0x2, 0x3f6, 0x3f3, 0x3, 0x2, 0x2, 0x2, 0x3f7, 0x63, 0x3, 
			 0x2, 0x2, 0x2, 0x3f8, 0x3fa, 0x5, 0xd6, 0x6c, 0x2, 0x3f9, 0x3f8, 0x3, 
			 0x2, 0x2, 0x2, 0x3f9, 0x3fa, 0x3, 0x2, 0x2, 0x2, 0x3fa, 0x3fb, 0x3, 
			 0x2, 0x2, 0x2, 0x3fb, 0x3fc, 0x7, 0x87, 0x2, 0x2, 0x3fc, 0x3fd, 0x7, 
			 0x81, 0x2, 0x2, 0x3fd, 0x40d, 0x5, 0x62, 0x32, 0x2, 0x3fe, 0x400, 0x5, 
			 0xd6, 0x6c, 0x2, 0x3ff, 0x3fe, 0x3, 0x2, 0x2, 0x2, 0x3ff, 0x400, 0x3, 
			 0x2, 0x2, 0x2, 0x400, 0x401, 0x3, 0x2, 0x2, 0x2, 0x401, 0x402, 0x7, 
			 0x11, 0x2, 0x2, 0x402, 0x403, 0x5, 0x60, 0x31, 0x2, 0x403, 0x404, 0x7, 
			 0x81, 0x2, 0x2, 0x404, 0x405, 0x5, 0x62, 0x32, 0x2, 0x405, 0x40d, 0x3, 
			 0x2, 0x2, 0x2, 0x406, 0x408, 0x5, 0xd6, 0x6c, 0x2, 0x407, 0x406, 0x3, 
			 0x2, 0x2, 0x2, 0x407, 0x408, 0x3, 0x2, 0x2, 0x2, 0x408, 0x409, 0x3, 
			 0x2, 0x2, 0x2, 0x409, 0x40a, 0x7, 0x1c, 0x2, 0x2, 0x40a, 0x40b, 0x7, 
			 0x81, 0x2, 0x2, 0x40b, 0x40d, 0x5, 0x62, 0x32, 0x2, 0x40c, 0x3f9, 0x3, 
			 0x2, 0x2, 0x2, 0x40c, 0x3ff, 0x3, 0x2, 0x2, 0x2, 0x40c, 0x407, 0x3, 
			 0x2, 0x2, 0x2, 0x40d, 0x65, 0x3, 0x2, 0x2, 0x2, 0x40e, 0x410, 0x5, 0x5e, 
			 0x30, 0x2, 0x40f, 0x40e, 0x3, 0x2, 0x2, 0x2, 0x40f, 0x410, 0x3, 0x2, 
			 0x2, 0x2, 0x410, 0x411, 0x3, 0x2, 0x2, 0x2, 0x411, 0x412, 0x7, 0x83, 
			 0x2, 0x2, 0x412, 0x67, 0x3, 0x2, 0x2, 0x2, 0x413, 0x415, 0x7, 0x5a, 
			 0x2, 0x2, 0x414, 0x416, 0x5, 0x6a, 0x36, 0x2, 0x415, 0x414, 0x3, 0x2, 
			 0x2, 0x2, 0x415, 0x416, 0x3, 0x2, 0x2, 0x2, 0x416, 0x417, 0x3, 0x2, 
			 0x2, 0x2, 0x417, 0x418, 0x7, 0x5b, 0x2, 0x2, 0x418, 0x69, 0x3, 0x2, 
			 0x2, 0x2, 0x419, 0x41a, 0x8, 0x36, 0x1, 0x2, 0x41a, 0x41b, 0x5, 0x62, 
			 0x32, 0x2, 0x41b, 0x420, 0x3, 0x2, 0x2, 0x2, 0x41c, 0x41d, 0xc, 0x3, 
			 0x2, 0x2, 0x41d, 0x41f, 0x5, 0x62, 0x32, 0x2, 0x41e, 0x41c, 0x3, 0x2, 
			 0x2, 0x2, 0x41f, 0x422, 0x3, 0x2, 0x2, 0x2, 0x420, 0x41e, 0x3, 0x2, 
			 0x2, 0x2, 0x420, 0x421, 0x3, 0x2, 0x2, 0x2, 0x421, 0x6b, 0x3, 0x2, 0x2, 
			 0x2, 0x422, 0x420, 0x3, 0x2, 0x2, 0x2, 0x423, 0x424, 0x7, 0x2c, 0x2, 
			 0x2, 0x424, 0x425, 0x7, 0x56, 0x2, 0x2, 0x425, 0x426, 0x5, 0x6e, 0x38, 
			 0x2, 0x426, 0x427, 0x7, 0x57, 0x2, 0x2, 0x427, 0x428, 0x5, 0x62, 0x32, 
			 0x2, 0x428, 0x438, 0x3, 0x2, 0x2, 0x2, 0x429, 0x42a, 0x7, 0x2c, 0x2, 
			 0x2, 0x42a, 0x42b, 0x7, 0x56, 0x2, 0x2, 0x42b, 0x42c, 0x5, 0x6e, 0x38, 
			 0x2, 0x42c, 0x42d, 0x7, 0x57, 0x2, 0x2, 0x42d, 0x42e, 0x5, 0x62, 0x32, 
			 0x2, 0x42e, 0x42f, 0x7, 0x21, 0x2, 0x2, 0x42f, 0x430, 0x5, 0x62, 0x32, 
			 0x2, 0x430, 0x438, 0x3, 0x2, 0x2, 0x2, 0x431, 0x432, 0x7, 0x44, 0x2, 
			 0x2, 0x432, 0x433, 0x7, 0x56, 0x2, 0x2, 0x433, 0x434, 0x5, 0x6e, 0x38, 
			 0x2, 0x434, 0x435, 0x7, 0x57, 0x2, 0x2, 0x435, 0x436, 0x5, 0x62, 0x32, 
			 0x2, 0x436, 0x438, 0x3, 0x2, 0x2, 0x2, 0x437, 0x423, 0x3, 0x2, 0x2, 
			 0x2, 0x437, 0x429, 0x3, 0x2, 0x2, 0x2, 0x437, 0x431, 0x3, 0x2, 0x2, 
			 0x2, 0x438, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x439, 0x44a, 0x5, 0x5e, 0x30, 
			 0x2, 0x43a, 0x43c, 0x5, 0xd6, 0x6c, 0x2, 0x43b, 0x43a, 0x3, 0x2, 0x2, 
			 0x2, 0x43b, 0x43c, 0x3, 0x2, 0x2, 0x2, 0x43c, 0x43d, 0x3, 0x2, 0x2, 
			 0x2, 0x43d, 0x43e, 0x5, 0x8e, 0x48, 0x2, 0x43e, 0x43f, 0x5, 0xf0, 0x79, 
			 0x2, 0x43f, 0x440, 0x7, 0x66, 0x2, 0x2, 0x440, 0x441, 0x5, 0x11e, 0x90, 
			 0x2, 0x441, 0x44a, 0x3, 0x2, 0x2, 0x2, 0x442, 0x444, 0x5, 0xd6, 0x6c, 
			 0x2, 0x443, 0x442, 0x3, 0x2, 0x2, 0x2, 0x443, 0x444, 0x3, 0x2, 0x2, 
			 0x2, 0x444, 0x445, 0x3, 0x2, 0x2, 0x2, 0x445, 0x446, 0x5, 0x8e, 0x48, 
			 0x2, 0x446, 0x447, 0x5, 0xf0, 0x79, 0x2, 0x447, 0x448, 0x5, 0x122, 0x92, 
			 0x2, 0x448, 0x44a, 0x3, 0x2, 0x2, 0x2, 0x449, 0x439, 0x3, 0x2, 0x2, 
			 0x2, 0x449, 0x43b, 0x3, 0x2, 0x2, 0x2, 0x449, 0x443, 0x3, 0x2, 0x2, 
			 0x2, 0x44a, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x44b, 0x44c, 0x7, 0x55, 0x2, 
			 0x2, 0x44c, 0x44d, 0x7, 0x56, 0x2, 0x2, 0x44d, 0x44e, 0x5, 0x6e, 0x38, 
			 0x2, 0x44e, 0x44f, 0x7, 0x57, 0x2, 0x2, 0x44f, 0x450, 0x5, 0x62, 0x32, 
			 0x2, 0x450, 0x46f, 0x3, 0x2, 0x2, 0x2, 0x451, 0x452, 0x7, 0x1e, 0x2, 
			 0x2, 0x452, 0x453, 0x5, 0x62, 0x32, 0x2, 0x453, 0x454, 0x7, 0x55, 0x2, 
			 0x2, 0x454, 0x455, 0x7, 0x56, 0x2, 0x2, 0x455, 0x456, 0x5, 0x5e, 0x30, 
			 0x2, 0x456, 0x457, 0x7, 0x57, 0x2, 0x2, 0x457, 0x458, 0x7, 0x83, 0x2, 
			 0x2, 0x458, 0x46f, 0x3, 0x2, 0x2, 0x2, 0x459, 0x45a, 0x7, 0x29, 0x2, 
			 0x2, 0x45a, 0x45b, 0x7, 0x56, 0x2, 0x2, 0x45b, 0x45d, 0x5, 0x72, 0x3a, 
			 0x2, 0x45c, 0x45e, 0x5, 0x6e, 0x38, 0x2, 0x45d, 0x45c, 0x3, 0x2, 0x2, 
			 0x2, 0x45d, 0x45e, 0x3, 0x2, 0x2, 0x2, 0x45e, 0x45f, 0x3, 0x2, 0x2, 
			 0x2, 0x45f, 0x461, 0x7, 0x83, 0x2, 0x2, 0x460, 0x462, 0x5, 0x5e, 0x30, 
			 0x2, 0x461, 0x460, 0x3, 0x2, 0x2, 0x2, 0x461, 0x462, 0x3, 0x2, 0x2, 
			 0x2, 0x462, 0x463, 0x3, 0x2, 0x2, 0x2, 0x463, 0x464, 0x7, 0x57, 0x2, 
			 0x2, 0x464, 0x465, 0x5, 0x62, 0x32, 0x2, 0x465, 0x46f, 0x3, 0x2, 0x2, 
			 0x2, 0x466, 0x467, 0x7, 0x29, 0x2, 0x2, 0x467, 0x468, 0x7, 0x56, 0x2, 
			 0x2, 0x468, 0x469, 0x5, 0x74, 0x3b, 0x2, 0x469, 0x46a, 0x7, 0x81, 0x2, 
			 0x2, 0x46a, 0x46b, 0x5, 0x76, 0x3c, 0x2, 0x46b, 0x46c, 0x7, 0x57, 0x2, 
			 0x2, 0x46c, 0x46d, 0x5, 0x62, 0x32, 0x2, 0x46d, 0x46f, 0x3, 0x2, 0x2, 
			 0x2, 0x46e, 0x44b, 0x3, 0x2, 0x2, 0x2, 0x46e, 0x451, 0x3, 0x2, 0x2, 
			 0x2, 0x46e, 0x459, 0x3, 0x2, 0x2, 0x2, 0x46e, 0x466, 0x3, 0x2, 0x2, 
			 0x2, 0x46f, 0x71, 0x3, 0x2, 0x2, 0x2, 0x470, 0x473, 0x5, 0x66, 0x34, 
			 0x2, 0x471, 0x473, 0x5, 0x84, 0x43, 0x2, 0x472, 0x470, 0x3, 0x2, 0x2, 
			 0x2, 0x472, 0x471, 0x3, 0x2, 0x2, 0x2, 0x473, 0x73, 0x3, 0x2, 0x2, 0x2, 
			 0x474, 0x476, 0x5, 0xd6, 0x6c, 0x2, 0x475, 0x474, 0x3, 0x2, 0x2, 0x2, 
			 0x475, 0x476, 0x3, 0x2, 0x2, 0x2, 0x476, 0x477, 0x3, 0x2, 0x2, 0x2, 
			 0x477, 0x478, 0x5, 0x8e, 0x48, 0x2, 0x478, 0x479, 0x5, 0xf0, 0x79, 0x2, 
			 0x479, 0x75, 0x3, 0x2, 0x2, 0x2, 0x47a, 0x47d, 0x5, 0x5e, 0x30, 0x2, 
			 0x47b, 0x47d, 0x5, 0x122, 0x92, 0x2, 0x47c, 0x47a, 0x3, 0x2, 0x2, 0x2, 
			 0x47c, 0x47b, 0x3, 0x2, 0x2, 0x2, 0x47d, 0x77, 0x3, 0x2, 0x2, 0x2, 0x47e, 
			 0x47f, 0x7, 0x10, 0x2, 0x2, 0x47f, 0x48f, 0x7, 0x83, 0x2, 0x2, 0x480, 
			 0x481, 0x7, 0x1a, 0x2, 0x2, 0x481, 0x48f, 0x7, 0x83, 0x2, 0x2, 0x482, 
			 0x484, 0x7, 0x3c, 0x2, 0x2, 0x483, 0x485, 0x5, 0x5e, 0x30, 0x2, 0x484, 
			 0x483, 0x3, 0x2, 0x2, 0x2, 0x484, 0x485, 0x3, 0x2, 0x2, 0x2, 0x485, 
			 0x486, 0x3, 0x2, 0x2, 0x2, 0x486, 0x48f, 0x7, 0x83, 0x2, 0x2, 0x487, 
			 0x488, 0x7, 0x3c, 0x2, 0x2, 0x488, 0x489, 0x5, 0x122, 0x92, 0x2, 0x489, 
			 0x48a, 0x7, 0x83, 0x2, 0x2, 0x48a, 0x48f, 0x3, 0x2, 0x2, 0x2, 0x48b, 
			 0x48c, 0x7, 0x2b, 0x2, 0x2, 0x48c, 0x48d, 0x7, 0x87, 0x2, 0x2, 0x48d, 
			 0x48f, 0x7, 0x83, 0x2, 0x2, 0x48e, 0x47e, 0x3, 0x2, 0x2, 0x2, 0x48e, 
			 0x480, 0x3, 0x2, 0x2, 0x2, 0x48e, 0x482, 0x3, 0x2, 0x2, 0x2, 0x48e, 
			 0x487, 0x3, 0x2, 0x2, 0x2, 0x48e, 0x48b, 0x3, 0x2, 0x2, 0x2, 0x48f, 
			 0x79, 0x3, 0x2, 0x2, 0x2, 0x490, 0x491, 0x5, 0x80, 0x41, 0x2, 0x491, 
			 0x7b, 0x3, 0x2, 0x2, 0x2, 0x492, 0x493, 0x8, 0x3f, 0x1, 0x2, 0x493, 
			 0x494, 0x5, 0x7e, 0x40, 0x2, 0x494, 0x499, 0x3, 0x2, 0x2, 0x2, 0x495, 
			 0x496, 0xc, 0x3, 0x2, 0x2, 0x496, 0x498, 0x5, 0x7e, 0x40, 0x2, 0x497, 
			 0x495, 0x3, 0x2, 0x2, 0x2, 0x498, 0x49b, 0x3, 0x2, 0x2, 0x2, 0x499, 
			 0x497, 0x3, 0x2, 0x2, 0x2, 0x499, 0x49a, 0x3, 0x2, 0x2, 0x2, 0x49a, 
			 0x7d, 0x3, 0x2, 0x2, 0x2, 0x49b, 0x499, 0x3, 0x2, 0x2, 0x2, 0x49c, 0x4a6, 
			 0x5, 0x80, 0x41, 0x2, 0x49d, 0x4a6, 0x5, 0x116, 0x8c, 0x2, 0x49e, 0x4a6, 
			 0x5, 0x15c, 0xaf, 0x2, 0x49f, 0x4a6, 0x5, 0x170, 0xb9, 0x2, 0x4a0, 0x4a6, 
			 0x5, 0x172, 0xba, 0x2, 0x4a1, 0x4a6, 0x5, 0xd4, 0x6b, 0x2, 0x4a2, 0x4a6, 
			 0x5, 0xbc, 0x5f, 0x2, 0x4a3, 0x4a6, 0x5, 0x88, 0x45, 0x2, 0x4a4, 0x4a6, 
			 0x5, 0x8a, 0x46, 0x2, 0x4a5, 0x49c, 0x3, 0x2, 0x2, 0x2, 0x4a5, 0x49d, 
			 0x3, 0x2, 0x2, 0x2, 0x4a5, 0x49e, 0x3, 0x2, 0x2, 0x2, 0x4a5, 0x49f, 
			 0x3, 0x2, 0x2, 0x2, 0x4a5, 0x4a0, 0x3, 0x2, 0x2, 0x2, 0x4a5, 0x4a1, 
			 0x3, 0x2, 0x2, 0x2, 0x4a5, 0x4a2, 0x3, 0x2, 0x2, 0x2, 0x4a5, 0x4a3, 
			 0x3, 0x2, 0x2, 0x2, 0x4a5, 0x4a4, 0x3, 0x2, 0x2, 0x2, 0x4a6, 0x7f, 0x3, 
			 0x2, 0x2, 0x2, 0x4a7, 0x4b0, 0x5, 0x84, 0x43, 0x2, 0x4a8, 0x4b0, 0x5, 
			 0xd2, 0x6a, 0x2, 0x4a9, 0x4b0, 0x5, 0xca, 0x66, 0x2, 0x4aa, 0x4b0, 0x5, 
			 0xce, 0x68, 0x2, 0x4ab, 0x4b0, 0x5, 0xd0, 0x69, 0x2, 0x4ac, 0x4b0, 0x5, 
			 0x86, 0x44, 0x2, 0x4ad, 0x4b0, 0x5, 0x82, 0x42, 0x2, 0x4ae, 0x4b0, 0x5, 
			 0xac, 0x57, 0x2, 0x4af, 0x4a7, 0x3, 0x2, 0x2, 0x2, 0x4af, 0x4a8, 0x3, 
			 0x2, 0x2, 0x2, 0x4af, 0x4a9, 0x3, 0x2, 0x2, 0x2, 0x4af, 0x4aa, 0x3, 
			 0x2, 0x2, 0x2, 0x4af, 0x4ab, 0x3, 0x2, 0x2, 0x2, 0x4af, 0x4ac, 0x3, 
			 0x2, 0x2, 0x2, 0x4af, 0x4ad, 0x3, 0x2, 0x2, 0x2, 0x4af, 0x4ae, 0x3, 
			 0x2, 0x2, 0x2, 0x4b0, 0x81, 0x3, 0x2, 0x2, 0x2, 0x4b1, 0x4b2, 0x7, 0x50, 
			 0x2, 0x2, 0x4b2, 0x4b4, 0x7, 0x87, 0x2, 0x2, 0x4b3, 0x4b5, 0x5, 0xd6, 
			 0x6c, 0x2, 0x4b4, 0x4b3, 0x3, 0x2, 0x2, 0x2, 0x4b4, 0x4b5, 0x3, 0x2, 
			 0x2, 0x2, 0x4b5, 0x4b6, 0x3, 0x2, 0x2, 0x2, 0x4b6, 0x4b7, 0x7, 0x66, 
			 0x2, 0x2, 0x4b7, 0x4b8, 0x5, 0x104, 0x83, 0x2, 0x4b8, 0x4b9, 0x7, 0x83, 
			 0x2, 0x2, 0x4b9, 0x83, 0x3, 0x2, 0x2, 0x2, 0x4ba, 0x4bc, 0x5, 0x8e, 
			 0x48, 0x2, 0x4bb, 0x4ba, 0x3, 0x2, 0x2, 0x2, 0x4bb, 0x4bc, 0x3, 0x2, 
			 0x2, 0x2, 0x4bc, 0x4be, 0x3, 0x2, 0x2, 0x2, 0x4bd, 0x4bf, 0x5, 0xec, 
			 0x77, 0x2, 0x4be, 0x4bd, 0x3, 0x2, 0x2, 0x2, 0x4be, 0x4bf, 0x3, 0x2, 
			 0x2, 0x2, 0x4bf, 0x4c0, 0x3, 0x2, 0x2, 0x2, 0x4c0, 0x4c9, 0x7, 0x83, 
			 0x2, 0x2, 0x4c1, 0x4c3, 0x5, 0xd6, 0x6c, 0x2, 0x4c2, 0x4c4, 0x5, 0x8e, 
			 0x48, 0x2, 0x4c3, 0x4c2, 0x3, 0x2, 0x2, 0x2, 0x4c3, 0x4c4, 0x3, 0x2, 
			 0x2, 0x2, 0x4c4, 0x4c5, 0x3, 0x2, 0x2, 0x2, 0x4c5, 0x4c6, 0x5, 0xec, 
			 0x77, 0x2, 0x4c6, 0x4c7, 0x7, 0x83, 0x2, 0x2, 0x4c7, 0x4c9, 0x3, 0x2, 
			 0x2, 0x2, 0x4c8, 0x4bb, 0x3, 0x2, 0x2, 0x2, 0x4c8, 0x4c1, 0x3, 0x2, 
			 0x2, 0x2, 0x4c9, 0x85, 0x3, 0x2, 0x2, 0x2, 0x4ca, 0x4cb, 0x7, 0x41, 
			 0x2, 0x2, 0x4cb, 0x4cc, 0x7, 0x56, 0x2, 0x2, 0x4cc, 0x4cd, 0x5, 0x60, 
			 0x31, 0x2, 0x4cd, 0x4ce, 0x7, 0x7d, 0x2, 0x2, 0x4ce, 0x4cf, 0x7, 0x90, 
			 0x2, 0x2, 0x4cf, 0x4d0, 0x7, 0x57, 0x2, 0x2, 0x4d0, 0x4d1, 0x7, 0x83, 
			 0x2, 0x2, 0x4d1, 0x87, 0x3, 0x2, 0x2, 0x2, 0x4d2, 0x4d3, 0x7, 0x83, 
			 0x2, 0x2, 0x4d3, 0x89, 0x3, 0x2, 0x2, 0x2, 0x4d4, 0x4d5, 0x5, 0xd6, 
			 0x6c, 0x2, 0x4d5, 0x4d6, 0x7, 0x83, 0x2, 0x2, 0x4d6, 0x8b, 0x3, 0x2, 
			 0x2, 0x2, 0x4d7, 0x4de, 0x5, 0x90, 0x49, 0x2, 0x4d8, 0x4de, 0x5, 0x96, 
			 0x4c, 0x2, 0x4d9, 0x4de, 0x5, 0x92, 0x4a, 0x2, 0x4da, 0x4de, 0x7, 0x2a, 
			 0x2, 0x2, 0x4db, 0x4de, 0x7, 0x4b, 0x2, 0x2, 0x4dc, 0x4de, 0x7, 0x18, 
			 0x2, 0x2, 0x4dd, 0x4d7, 0x3, 0x2, 0x2, 0x2, 0x4dd, 0x4d8, 0x3, 0x2, 
			 0x2, 0x2, 0x4dd, 0x4d9, 0x3, 0x2, 0x2, 0x2, 0x4dd, 0x4da, 0x3, 0x2, 
			 0x2, 0x2, 0x4dd, 0x4db, 0x3, 0x2, 0x2, 0x2, 0x4dd, 0x4dc, 0x3, 0x2, 
			 0x2, 0x2, 0x4de, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x4df, 0x4e1, 0x5, 0x8c, 
			 0x47, 0x2, 0x4e0, 0x4e2, 0x5, 0xd6, 0x6c, 0x2, 0x4e1, 0x4e0, 0x3, 0x2, 
			 0x2, 0x2, 0x4e1, 0x4e2, 0x3, 0x2, 0x2, 0x2, 0x4e2, 0x4e7, 0x3, 0x2, 
			 0x2, 0x2, 0x4e3, 0x4e4, 0x5, 0x8c, 0x47, 0x2, 0x4e4, 0x4e5, 0x5, 0x8e, 
			 0x48, 0x2, 0x4e5, 0x4e7, 0x3, 0x2, 0x2, 0x2, 0x4e6, 0x4df, 0x3, 0x2, 
			 0x2, 0x2, 0x4e6, 0x4e3, 0x3, 0x2, 0x2, 0x2, 0x4e7, 0x8f, 0x3, 0x2, 0x2, 
			 0x2, 0x4e8, 0x4e9, 0x9, 0x6, 0x2, 0x2, 0x4e9, 0x91, 0x3, 0x2, 0x2, 0x2, 
			 0x4ea, 0x4eb, 0x9, 0x7, 0x2, 0x2, 0x4eb, 0x93, 0x3, 0x2, 0x2, 0x2, 0x4ec, 
			 0x4ed, 0x7, 0x87, 0x2, 0x2, 0x4ed, 0x95, 0x3, 0x2, 0x2, 0x2, 0x4ee, 
			 0x4f2, 0x5, 0x98, 0x4d, 0x2, 0x4ef, 0x4f2, 0x5, 0x126, 0x94, 0x2, 0x4f0, 
			 0x4f2, 0x5, 0xa8, 0x55, 0x2, 0x4f1, 0x4ee, 0x3, 0x2, 0x2, 0x2, 0x4f1, 
			 0x4ef, 0x3, 0x2, 0x2, 0x2, 0x4f1, 0x4f0, 0x3, 0x2, 0x2, 0x2, 0x4f2, 
			 0x97, 0x3, 0x2, 0x2, 0x2, 0x4f3, 0x4f8, 0x5, 0x9e, 0x50, 0x2, 0x4f4, 
			 0x4f8, 0x5, 0xa4, 0x53, 0x2, 0x4f5, 0x4f8, 0x5, 0x16e, 0xb8, 0x2, 0x4f6, 
			 0x4f8, 0x5, 0xfe, 0x80, 0x2, 0x4f7, 0x4f3, 0x3, 0x2, 0x2, 0x2, 0x4f7, 
			 0x4f4, 0x3, 0x2, 0x2, 0x2, 0x4f7, 0x4f5, 0x3, 0x2, 0x2, 0x2, 0x4f7, 
			 0x4f6, 0x3, 0x2, 0x2, 0x2, 0x4f8, 0x99, 0x3, 0x2, 0x2, 0x2, 0x4f9, 0x4fb, 
			 0x5, 0x96, 0x4c, 0x2, 0x4fa, 0x4fc, 0x5, 0xd6, 0x6c, 0x2, 0x4fb, 0x4fa, 
			 0x3, 0x2, 0x2, 0x2, 0x4fb, 0x4fc, 0x3, 0x2, 0x2, 0x2, 0x4fc, 0x501, 
			 0x3, 0x2, 0x2, 0x2, 0x4fd, 0x4fe, 0x5, 0x96, 0x4c, 0x2, 0x4fe, 0x4ff, 
			 0x5, 0x9a, 0x4e, 0x2, 0x4ff, 0x501, 0x3, 0x2, 0x2, 0x2, 0x500, 0x4f9, 
			 0x3, 0x2, 0x2, 0x2, 0x500, 0x4fd, 0x3, 0x2, 0x2, 0x2, 0x501, 0x9b, 0x3, 
			 0x2, 0x2, 0x2, 0x502, 0x504, 0x5, 0x98, 0x4d, 0x2, 0x503, 0x505, 0x5, 
			 0xd6, 0x6c, 0x2, 0x504, 0x503, 0x3, 0x2, 0x2, 0x2, 0x504, 0x505, 0x3, 
			 0x2, 0x2, 0x2, 0x505, 0x50a, 0x3, 0x2, 0x2, 0x2, 0x506, 0x507, 0x5, 
			 0x98, 0x4d, 0x2, 0x507, 0x508, 0x5, 0x9c, 0x4f, 0x2, 0x508, 0x50a, 0x3, 
			 0x2, 0x2, 0x2, 0x509, 0x502, 0x3, 0x2, 0x2, 0x2, 0x509, 0x506, 0x3, 
			 0x2, 0x2, 0x2, 0x50a, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x50b, 0x50d, 0x5, 0xc, 
			 0x7, 0x2, 0x50c, 0x50b, 0x3, 0x2, 0x2, 0x2, 0x50c, 0x50d, 0x3, 0x2, 
			 0x2, 0x2, 0x50d, 0x50e, 0x3, 0x2, 0x2, 0x2, 0x50e, 0x523, 0x5, 0xa0, 
			 0x51, 0x2, 0x50f, 0x510, 0x5, 0xc, 0x7, 0x2, 0x510, 0x511, 0x7, 0x45, 
			 0x2, 0x2, 0x511, 0x512, 0x5, 0x164, 0xb3, 0x2, 0x512, 0x523, 0x3, 0x2, 
			 0x2, 0x2, 0x513, 0x523, 0x7, 0x13, 0x2, 0x2, 0x514, 0x523, 0x7, 0x14, 
			 0x2, 0x2, 0x515, 0x523, 0x7, 0x15, 0x2, 0x2, 0x516, 0x523, 0x7, 0x54, 
			 0x2, 0x2, 0x517, 0x523, 0x7, 0xf, 0x2, 0x2, 0x518, 0x523, 0x7, 0x3d, 
			 0x2, 0x2, 0x519, 0x523, 0x7, 0x2e, 0x2, 0x2, 0x51a, 0x523, 0x7, 0x2f, 
			 0x2, 0x2, 0x51b, 0x523, 0x7, 0x3e, 0x2, 0x2, 0x51c, 0x523, 0x7, 0x4f, 
			 0x2, 0x2, 0x51d, 0x523, 0x7, 0x28, 0x2, 0x2, 0x51e, 0x523, 0x7, 0x1f, 
			 0x2, 0x2, 0x51f, 0x523, 0x7, 0x52, 0x2, 0x2, 0x520, 0x523, 0x7, 0xe, 
			 0x2, 0x2, 0x521, 0x523, 0x5, 0xa2, 0x52, 0x2, 0x522, 0x50c, 0x3, 0x2, 
			 0x2, 0x2, 0x522, 0x50f, 0x3, 0x2, 0x2, 0x2, 0x522, 0x513, 0x3, 0x2, 
			 0x2, 0x2, 0x522, 0x514, 0x3, 0x2, 0x2, 0x2, 0x522, 0x515, 0x3, 0x2, 
			 0x2, 0x2, 0x522, 0x516, 0x3, 0x2, 0x2, 0x2, 0x522, 0x517, 0x3, 0x2, 
			 0x2, 0x2, 0x522, 0x518, 0x3, 0x2, 0x2, 0x2, 0x522, 0x519, 0x3, 0x2, 
			 0x2, 0x2, 0x522, 0x51a, 0x3, 0x2, 0x2, 0x2, 0x522, 0x51b, 0x3, 0x2, 
			 0x2, 0x2, 0x522, 0x51c, 0x3, 0x2, 0x2, 0x2, 0x522, 0x51d, 0x3, 0x2, 
			 0x2, 0x2, 0x522, 0x51e, 0x3, 0x2, 0x2, 0x2, 0x522, 0x51f, 0x3, 0x2, 
			 0x2, 0x2, 0x522, 0x520, 0x3, 0x2, 0x2, 0x2, 0x522, 0x521, 0x3, 0x2, 
			 0x2, 0x2, 0x523, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x524, 0x529, 0x5, 0x124, 
			 0x93, 0x2, 0x525, 0x529, 0x5, 0xa6, 0x54, 0x2, 0x526, 0x529, 0x5, 0x94, 
			 0x4b, 0x2, 0x527, 0x529, 0x5, 0x164, 0xb3, 0x2, 0x528, 0x524, 0x3, 0x2, 
			 0x2, 0x2, 0x528, 0x525, 0x3, 0x2, 0x2, 0x2, 0x528, 0x526, 0x3, 0x2, 
			 0x2, 0x2, 0x528, 0x527, 0x3, 0x2, 0x2, 0x2, 0x529, 0xa1, 0x3, 0x2, 0x2, 
			 0x2, 0x52a, 0x52b, 0x7, 0x1b, 0x2, 0x2, 0x52b, 0x52c, 0x7, 0x56, 0x2, 
			 0x2, 0x52c, 0x52d, 0x5, 0x5e, 0x30, 0x2, 0x52d, 0x52e, 0x7, 0x57, 0x2, 
			 0x2, 0x52e, 0x534, 0x3, 0x2, 0x2, 0x2, 0x52f, 0x530, 0x7, 0x1b, 0x2, 
			 0x2, 0x530, 0x531, 0x7, 0x56, 0x2, 0x2, 0x531, 0x532, 0x7, 0xe, 0x2, 
			 0x2, 0x532, 0x534, 0x7, 0x57, 0x2, 0x2, 0x533, 0x52a, 0x3, 0x2, 0x2, 
			 0x2, 0x533, 0x52f, 0x3, 0x2, 0x2, 0x2, 0x534, 0xa3, 0x3, 0x2, 0x2, 0x2, 
			 0x535, 0x537, 0x5, 0x12e, 0x98, 0x2, 0x536, 0x538, 0x5, 0xd6, 0x6c, 
			 0x2, 0x537, 0x536, 0x3, 0x2, 0x2, 0x2, 0x537, 0x538, 0x3, 0x2, 0x2, 
			 0x2, 0x538, 0x53a, 0x3, 0x2, 0x2, 0x2, 0x539, 0x53b, 0x5, 0xc, 0x7, 
			 0x2, 0x53a, 0x539, 0x3, 0x2, 0x2, 0x2, 0x53a, 0x53b, 0x3, 0x2, 0x2, 
			 0x2, 0x53b, 0x53c, 0x3, 0x2, 0x2, 0x2, 0x53c, 0x53d, 0x7, 0x87, 0x2, 
			 0x2, 0x53d, 0x54e, 0x3, 0x2, 0x2, 0x2, 0x53e, 0x53f, 0x5, 0x12e, 0x98, 
			 0x2, 0x53f, 0x540, 0x5, 0x164, 0xb3, 0x2, 0x540, 0x54e, 0x3, 0x2, 0x2, 
			 0x2, 0x541, 0x542, 0x5, 0x12e, 0x98, 0x2, 0x542, 0x544, 0x5, 0xc, 0x7, 
			 0x2, 0x543, 0x545, 0x7, 0x45, 0x2, 0x2, 0x544, 0x543, 0x3, 0x2, 0x2, 
			 0x2, 0x544, 0x545, 0x3, 0x2, 0x2, 0x2, 0x545, 0x546, 0x3, 0x2, 0x2, 
			 0x2, 0x546, 0x547, 0x5, 0x164, 0xb3, 0x2, 0x547, 0x54e, 0x3, 0x2, 0x2, 
			 0x2, 0x548, 0x54a, 0x7, 0x22, 0x2, 0x2, 0x549, 0x54b, 0x5, 0xc, 0x7, 
			 0x2, 0x54a, 0x549, 0x3, 0x2, 0x2, 0x2, 0x54a, 0x54b, 0x3, 0x2, 0x2, 
			 0x2, 0x54b, 0x54c, 0x3, 0x2, 0x2, 0x2, 0x54c, 0x54e, 0x7, 0x87, 0x2, 
			 0x2, 0x54d, 0x535, 0x3, 0x2, 0x2, 0x2, 0x54d, 0x53e, 0x3, 0x2, 0x2, 
			 0x2, 0x54d, 0x541, 0x3, 0x2, 0x2, 0x2, 0x54d, 0x548, 0x3, 0x2, 0x2, 
			 0x2, 0x54e, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x54f, 0x550, 0x7, 0x87, 0x2, 
			 0x2, 0x550, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x551, 0x552, 0x5, 0xaa, 0x56, 
			 0x2, 0x552, 0x554, 0x7, 0x5a, 0x2, 0x2, 0x553, 0x555, 0x5, 0xb2, 0x5a, 
			 0x2, 0x554, 0x553, 0x3, 0x2, 0x2, 0x2, 0x554, 0x555, 0x3, 0x2, 0x2, 
			 0x2, 0x555, 0x556, 0x3, 0x2, 0x2, 0x2, 0x556, 0x557, 0x7, 0x5b, 0x2, 
			 0x2, 0x557, 0x55f, 0x3, 0x2, 0x2, 0x2, 0x558, 0x559, 0x5, 0xaa, 0x56, 
			 0x2, 0x559, 0x55a, 0x7, 0x5a, 0x2, 0x2, 0x55a, 0x55b, 0x5, 0xb2, 0x5a, 
			 0x2, 0x55b, 0x55c, 0x7, 0x7d, 0x2, 0x2, 0x55c, 0x55d, 0x7, 0x5b, 0x2, 
			 0x2, 0x55d, 0x55f, 0x3, 0x2, 0x2, 0x2, 0x55e, 0x551, 0x3, 0x2, 0x2, 
			 0x2, 0x55e, 0x558, 0x3, 0x2, 0x2, 0x2, 0x55f, 0xa9, 0x3, 0x2, 0x2, 0x2, 
			 0x560, 0x562, 0x5, 0xae, 0x58, 0x2, 0x561, 0x563, 0x5, 0xd6, 0x6c, 0x2, 
			 0x562, 0x561, 0x3, 0x2, 0x2, 0x2, 0x562, 0x563, 0x3, 0x2, 0x2, 0x2, 
			 0x563, 0x565, 0x3, 0x2, 0x2, 0x2, 0x564, 0x566, 0x7, 0x87, 0x2, 0x2, 
			 0x565, 0x564, 0x3, 0x2, 0x2, 0x2, 0x565, 0x566, 0x3, 0x2, 0x2, 0x2, 
			 0x566, 0x568, 0x3, 0x2, 0x2, 0x2, 0x567, 0x569, 0x5, 0xb0, 0x59, 0x2, 
			 0x568, 0x567, 0x3, 0x2, 0x2, 0x2, 0x568, 0x569, 0x3, 0x2, 0x2, 0x2, 
			 0x569, 0x574, 0x3, 0x2, 0x2, 0x2, 0x56a, 0x56c, 0x5, 0xae, 0x58, 0x2, 
			 0x56b, 0x56d, 0x5, 0xd6, 0x6c, 0x2, 0x56c, 0x56b, 0x3, 0x2, 0x2, 0x2, 
			 0x56c, 0x56d, 0x3, 0x2, 0x2, 0x2, 0x56d, 0x56e, 0x3, 0x2, 0x2, 0x2, 
			 0x56e, 0x56f, 0x5, 0xc, 0x7, 0x2, 0x56f, 0x571, 0x7, 0x87, 0x2, 0x2, 
			 0x570, 0x572, 0x5, 0xb0, 0x59, 0x2, 0x571, 0x570, 0x3, 0x2, 0x2, 0x2, 
			 0x571, 0x572, 0x3, 0x2, 0x2, 0x2, 0x572, 0x574, 0x3, 0x2, 0x2, 0x2, 
			 0x573, 0x560, 0x3, 0x2, 0x2, 0x2, 0x573, 0x56a, 0x3, 0x2, 0x2, 0x2, 
			 0x574, 0xab, 0x3, 0x2, 0x2, 0x2, 0x575, 0x577, 0x5, 0xae, 0x58, 0x2, 
			 0x576, 0x578, 0x5, 0xd6, 0x6c, 0x2, 0x577, 0x576, 0x3, 0x2, 0x2, 0x2, 
			 0x577, 0x578, 0x3, 0x2, 0x2, 0x2, 0x578, 0x579, 0x3, 0x2, 0x2, 0x2, 
			 0x579, 0x57b, 0x7, 0x87, 0x2, 0x2, 0x57a, 0x57c, 0x5, 0xb0, 0x59, 0x2, 
			 0x57b, 0x57a, 0x3, 0x2, 0x2, 0x2, 0x57b, 0x57c, 0x3, 0x2, 0x2, 0x2, 
			 0x57c, 0x57d, 0x3, 0x2, 0x2, 0x2, 0x57d, 0x57e, 0x7, 0x83, 0x2, 0x2, 
			 0x57e, 0xad, 0x3, 0x2, 0x2, 0x2, 0x57f, 0x585, 0x7, 0x22, 0x2, 0x2, 
			 0x580, 0x581, 0x7, 0x22, 0x2, 0x2, 0x581, 0x585, 0x7, 0x16, 0x2, 0x2, 
			 0x582, 0x583, 0x7, 0x22, 0x2, 0x2, 0x583, 0x585, 0x7, 0x43, 0x2, 0x2, 
			 0x584, 0x57f, 0x3, 0x2, 0x2, 0x2, 0x584, 0x580, 0x3, 0x2, 0x2, 0x2, 
			 0x584, 0x582, 0x3, 0x2, 0x2, 0x2, 0x585, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x586, 
			 0x587, 0x7, 0x81, 0x2, 0x2, 0x587, 0x588, 0x5, 0x9a, 0x4e, 0x2, 0x588, 
			 0xb1, 0x3, 0x2, 0x2, 0x2, 0x589, 0x58a, 0x8, 0x5a, 0x1, 0x2, 0x58a, 
			 0x58b, 0x5, 0xb4, 0x5b, 0x2, 0x58b, 0x591, 0x3, 0x2, 0x2, 0x2, 0x58c, 
			 0x58d, 0xc, 0x3, 0x2, 0x2, 0x58d, 0x58e, 0x7, 0x7d, 0x2, 0x2, 0x58e, 
			 0x590, 0x5, 0xb4, 0x5b, 0x2, 0x58f, 0x58c, 0x3, 0x2, 0x2, 0x2, 0x590, 
			 0x593, 0x3, 0x2, 0x2, 0x2, 0x591, 0x58f, 0x3, 0x2, 0x2, 0x2, 0x591, 
			 0x592, 0x3, 0x2, 0x2, 0x2, 0x592, 0xb3, 0x3, 0x2, 0x2, 0x2, 0x593, 0x591, 
			 0x3, 0x2, 0x2, 0x2, 0x594, 0x59a, 0x5, 0xb6, 0x5c, 0x2, 0x595, 0x596, 
			 0x5, 0xb6, 0x5c, 0x2, 0x596, 0x597, 0x7, 0x66, 0x2, 0x2, 0x597, 0x598, 
			 0x5, 0x60, 0x31, 0x2, 0x598, 0x59a, 0x3, 0x2, 0x2, 0x2, 0x599, 0x594, 
			 0x3, 0x2, 0x2, 0x2, 0x599, 0x595, 0x3, 0x2, 0x2, 0x2, 0x59a, 0xb5, 0x3, 
			 0x2, 0x2, 0x2, 0x59b, 0x59c, 0x7, 0x87, 0x2, 0x2, 0x59c, 0xb7, 0x3, 
			 0x2, 0x2, 0x2, 0x59d, 0x5a0, 0x5, 0xba, 0x5e, 0x2, 0x59e, 0x5a0, 0x5, 
			 0xc8, 0x65, 0x2, 0x59f, 0x59d, 0x3, 0x2, 0x2, 0x2, 0x59f, 0x59e, 0x3, 
			 0x2, 0x2, 0x2, 0x5a0, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x5a1, 0x5a2, 0x7, 0x87, 
			 0x2, 0x2, 0x5a2, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x5a3, 0x5a6, 0x5, 0xbe, 
			 0x60, 0x2, 0x5a4, 0x5a6, 0x5, 0xc4, 0x63, 0x2, 0x5a5, 0x5a3, 0x3, 0x2, 
			 0x2, 0x2, 0x5a5, 0x5a4, 0x3, 0x2, 0x2, 0x2, 0x5a6, 0xbd, 0x3, 0x2, 0x2, 
			 0x2, 0x5a7, 0x5aa, 0x5, 0xc0, 0x61, 0x2, 0x5a8, 0x5aa, 0x5, 0xc2, 0x62, 
			 0x2, 0x5a9, 0x5a7, 0x3, 0x2, 0x2, 0x2, 0x5a9, 0x5a8, 0x3, 0x2, 0x2, 
			 0x2, 0x5aa, 0xbf, 0x3, 0x2, 0x2, 0x2, 0x5ab, 0x5ad, 0x7, 0x2d, 0x2, 
			 0x2, 0x5ac, 0x5ab, 0x3, 0x2, 0x2, 0x2, 0x5ac, 0x5ad, 0x3, 0x2, 0x2, 
			 0x2, 0x5ad, 0x5ae, 0x3, 0x2, 0x2, 0x2, 0x5ae, 0x5af, 0x7, 0x31, 0x2, 
			 0x2, 0x5af, 0x5b0, 0x7, 0x87, 0x2, 0x2, 0x5b0, 0x5b1, 0x7, 0x5a, 0x2, 
			 0x2, 0x5b1, 0x5b2, 0x5, 0xc6, 0x64, 0x2, 0x5b2, 0x5b3, 0x7, 0x5b, 0x2, 
			 0x2, 0x5b3, 0xc1, 0x3, 0x2, 0x2, 0x2, 0x5b4, 0x5b6, 0x7, 0x2d, 0x2, 
			 0x2, 0x5b5, 0x5b4, 0x3, 0x2, 0x2, 0x2, 0x5b5, 0x5b6, 0x3, 0x2, 0x2, 
			 0x2, 0x5b6, 0x5b7, 0x3, 0x2, 0x2, 0x2, 0x5b7, 0x5b8, 0x7, 0x31, 0x2, 
			 0x2, 0x5b8, 0x5b9, 0x5, 0xba, 0x5e, 0x2, 0x5b9, 0x5ba, 0x7, 0x5a, 0x2, 
			 0x2, 0x5ba, 0x5bb, 0x5, 0xc6, 0x64, 0x2, 0x5bb, 0x5bc, 0x7, 0x5b, 0x2, 
			 0x2, 0x5bc, 0xc3, 0x3, 0x2, 0x2, 0x2, 0x5bd, 0x5bf, 0x7, 0x2d, 0x2, 
			 0x2, 0x5be, 0x5bd, 0x3, 0x2, 0x2, 0x2, 0x5be, 0x5bf, 0x3, 0x2, 0x2, 
			 0x2, 0x5bf, 0x5c0, 0x3, 0x2, 0x2, 0x2, 0x5c0, 0x5c1, 0x7, 0x31, 0x2, 
			 0x2, 0x5c1, 0x5c2, 0x7, 0x5a, 0x2, 0x2, 0x5c2, 0x5c3, 0x5, 0xc6, 0x64, 
			 0x2, 0x5c3, 0x5c4, 0x7, 0x5b, 0x2, 0x2, 0x5c4, 0xc5, 0x3, 0x2, 0x2, 
			 0x2, 0x5c5, 0x5c7, 0x5, 0x7c, 0x3f, 0x2, 0x5c6, 0x5c5, 0x3, 0x2, 0x2, 
			 0x2, 0x5c6, 0x5c7, 0x3, 0x2, 0x2, 0x2, 0x5c7, 0xc7, 0x3, 0x2, 0x2, 0x2, 
			 0x5c8, 0x5c9, 0x7, 0x87, 0x2, 0x2, 0x5c9, 0xc9, 0x3, 0x2, 0x2, 0x2, 
			 0x5ca, 0x5cb, 0x7, 0x31, 0x2, 0x2, 0x5cb, 0x5cc, 0x7, 0x87, 0x2, 0x2, 
			 0x5cc, 0x5cd, 0x7, 0x66, 0x2, 0x2, 0x5cd, 0x5ce, 0x5, 0xcc, 0x67, 0x2, 
			 0x5ce, 0x5cf, 0x7, 0x83, 0x2, 0x2, 0x5cf, 0xcb, 0x3, 0x2, 0x2, 0x2, 
			 0x5d0, 0x5d2, 0x5, 0xc, 0x7, 0x2, 0x5d1, 0x5d0, 0x3, 0x2, 0x2, 0x2, 
			 0x5d1, 0x5d2, 0x3, 0x2, 0x2, 0x2, 0x5d2, 0x5d3, 0x3, 0x2, 0x2, 0x2, 
			 0x5d3, 0x5d4, 0x5, 0xb8, 0x5d, 0x2, 0x5d4, 0xcd, 0x3, 0x2, 0x2, 0x2, 
			 0x5d5, 0x5d7, 0x7, 0x50, 0x2, 0x2, 0x5d6, 0x5d8, 0x7, 0x4d, 0x2, 0x2, 
			 0x5d7, 0x5d6, 0x3, 0x2, 0x2, 0x2, 0x5d7, 0x5d8, 0x3, 0x2, 0x2, 0x2, 
			 0x5d8, 0x5d9, 0x3, 0x2, 0x2, 0x2, 0x5d9, 0x5da, 0x5, 0xc, 0x7, 0x2, 
			 0x5da, 0x5db, 0x5, 0x8, 0x5, 0x2, 0x5db, 0x5dc, 0x7, 0x83, 0x2, 0x2, 
			 0x5dc, 0x5e3, 0x3, 0x2, 0x2, 0x2, 0x5dd, 0x5de, 0x7, 0x50, 0x2, 0x2, 
			 0x5de, 0x5df, 0x7, 0x82, 0x2, 0x2, 0x5df, 0x5e0, 0x5, 0x8, 0x5, 0x2, 
			 0x5e0, 0x5e1, 0x7, 0x83, 0x2, 0x2, 0x5e1, 0x5e3, 0x3, 0x2, 0x2, 0x2, 
			 0x5e2, 0x5d5, 0x3, 0x2, 0x2, 0x2, 0x5e2, 0x5dd, 0x3, 0x2, 0x2, 0x2, 
			 0x5e3, 0xcf, 0x3, 0x2, 0x2, 0x2, 0x5e4, 0x5e6, 0x5, 0xd6, 0x6c, 0x2, 
			 0x5e5, 0x5e4, 0x3, 0x2, 0x2, 0x2, 0x5e5, 0x5e6, 0x3, 0x2, 0x2, 0x2, 
			 0x5e6, 0x5e7, 0x3, 0x2, 0x2, 0x2, 0x5e7, 0x5e8, 0x7, 0x50, 0x2, 0x2, 
			 0x5e8, 0x5ea, 0x7, 0x31, 0x2, 0x2, 0x5e9, 0x5eb, 0x5, 0xc, 0x7, 0x2, 
			 0x5ea, 0x5e9, 0x3, 0x2, 0x2, 0x2, 0x5ea, 0x5eb, 0x3, 0x2, 0x2, 0x2, 
			 0x5eb, 0x5ec, 0x3, 0x2, 0x2, 0x2, 0x5ec, 0x5ed, 0x5, 0xb8, 0x5d, 0x2, 
			 0x5ed, 0x5ee, 0x7, 0x83, 0x2, 0x2, 0x5ee, 0xd1, 0x3, 0x2, 0x2, 0x2, 
			 0x5ef, 0x5f0, 0x7, 0xd, 0x2, 0x2, 0x5f0, 0x5f1, 0x7, 0x56, 0x2, 0x2, 
			 0x5f1, 0x5f2, 0x7, 0x90, 0x2, 0x2, 0x5f2, 0x5f3, 0x7, 0x57, 0x2, 0x2, 
			 0x5f3, 0x5f4, 0x7, 0x83, 0x2, 0x2, 0x5f4, 0xd3, 0x3, 0x2, 0x2, 0x2, 
			 0x5f5, 0x5f6, 0x7, 0x25, 0x2, 0x2, 0x5f6, 0x5f7, 0x7, 0x90, 0x2, 0x2, 
			 0x5f7, 0x5f9, 0x7, 0x5a, 0x2, 0x2, 0x5f8, 0x5fa, 0x5, 0x7c, 0x3f, 0x2, 
			 0x5f9, 0x5f8, 0x3, 0x2, 0x2, 0x2, 0x5f9, 0x5fa, 0x3, 0x2, 0x2, 0x2, 
			 0x5fa, 0x5fb, 0x3, 0x2, 0x2, 0x2, 0x5fb, 0x600, 0x7, 0x5b, 0x2, 0x2, 
			 0x5fc, 0x5fd, 0x7, 0x25, 0x2, 0x2, 0x5fd, 0x5fe, 0x7, 0x90, 0x2, 0x2, 
			 0x5fe, 0x600, 0x5, 0x7e, 0x40, 0x2, 0x5ff, 0x5f5, 0x3, 0x2, 0x2, 0x2, 
			 0x5ff, 0x5fc, 0x3, 0x2, 0x2, 0x2, 0x600, 0xd5, 0x3, 0x2, 0x2, 0x2, 0x601, 
			 0x602, 0x8, 0x6c, 0x1, 0x2, 0x602, 0x603, 0x5, 0xd8, 0x6d, 0x2, 0x603, 
			 0x608, 0x3, 0x2, 0x2, 0x2, 0x604, 0x605, 0xc, 0x3, 0x2, 0x2, 0x605, 
			 0x607, 0x5, 0xd8, 0x6d, 0x2, 0x606, 0x604, 0x3, 0x2, 0x2, 0x2, 0x607, 
			 0x60a, 0x3, 0x2, 0x2, 0x2, 0x608, 0x606, 0x3, 0x2, 0x2, 0x2, 0x608, 
			 0x609, 0x3, 0x2, 0x2, 0x2, 0x609, 0xd7, 0x3, 0x2, 0x2, 0x2, 0x60a, 0x608, 
			 0x3, 0x2, 0x2, 0x2, 0x60b, 0x60c, 0x7, 0x58, 0x2, 0x2, 0x60c, 0x60d, 
			 0x7, 0x58, 0x2, 0x2, 0x60d, 0x60e, 0x5, 0xdc, 0x6f, 0x2, 0x60e, 0x60f, 
			 0x7, 0x59, 0x2, 0x2, 0x60f, 0x610, 0x7, 0x59, 0x2, 0x2, 0x610, 0x613, 
			 0x3, 0x2, 0x2, 0x2, 0x611, 0x613, 0x5, 0xda, 0x6e, 0x2, 0x612, 0x60b, 
			 0x3, 0x2, 0x2, 0x2, 0x612, 0x611, 0x3, 0x2, 0x2, 0x2, 0x613, 0xd9, 0x3, 
			 0x2, 0x2, 0x2, 0x614, 0x615, 0x7, 0xb, 0x2, 0x2, 0x615, 0x616, 0x7, 
			 0x56, 0x2, 0x2, 0x616, 0x618, 0x5, 0x104, 0x83, 0x2, 0x617, 0x619, 0x7, 
			 0x86, 0x2, 0x2, 0x618, 0x617, 0x3, 0x2, 0x2, 0x2, 0x618, 0x619, 0x3, 
			 0x2, 0x2, 0x2, 0x619, 0x61a, 0x3, 0x2, 0x2, 0x2, 0x61a, 0x61b, 0x7, 
			 0x57, 0x2, 0x2, 0x61b, 0x625, 0x3, 0x2, 0x2, 0x2, 0x61c, 0x61d, 0x7, 
			 0xb, 0x2, 0x2, 0x61d, 0x61e, 0x7, 0x56, 0x2, 0x2, 0x61e, 0x620, 0x5, 
			 0x60, 0x31, 0x2, 0x61f, 0x621, 0x7, 0x86, 0x2, 0x2, 0x620, 0x61f, 0x3, 
			 0x2, 0x2, 0x2, 0x620, 0x621, 0x3, 0x2, 0x2, 0x2, 0x621, 0x622, 0x3, 
			 0x2, 0x2, 0x2, 0x622, 0x623, 0x7, 0x57, 0x2, 0x2, 0x623, 0x625, 0x3, 
			 0x2, 0x2, 0x2, 0x624, 0x614, 0x3, 0x2, 0x2, 0x2, 0x624, 0x61c, 0x3, 
			 0x2, 0x2, 0x2, 0x625, 0xdb, 0x3, 0x2, 0x2, 0x2, 0x626, 0x628, 0x8, 0x6f, 
			 0x1, 0x2, 0x627, 0x629, 0x5, 0xde, 0x70, 0x2, 0x628, 0x627, 0x3, 0x2, 
			 0x2, 0x2, 0x628, 0x629, 0x3, 0x2, 0x2, 0x2, 0x629, 0x62e, 0x3, 0x2, 
			 0x2, 0x2, 0x62a, 0x62b, 0x5, 0xde, 0x70, 0x2, 0x62b, 0x62c, 0x7, 0x86, 
			 0x2, 0x2, 0x62c, 0x62e, 0x3, 0x2, 0x2, 0x2, 0x62d, 0x626, 0x3, 0x2, 
			 0x2, 0x2, 0x62d, 0x62a, 0x3, 0x2, 0x2, 0x2, 0x62e, 0x63b, 0x3, 0x2, 
			 0x2, 0x2, 0x62f, 0x630, 0xc, 0x5, 0x2, 0x2, 0x630, 0x632, 0x7, 0x7d, 
			 0x2, 0x2, 0x631, 0x633, 0x5, 0xde, 0x70, 0x2, 0x632, 0x631, 0x3, 0x2, 
			 0x2, 0x2, 0x632, 0x633, 0x3, 0x2, 0x2, 0x2, 0x633, 0x63a, 0x3, 0x2, 
			 0x2, 0x2, 0x634, 0x635, 0xc, 0x3, 0x2, 0x2, 0x635, 0x636, 0x7, 0x7d, 
			 0x2, 0x2, 0x636, 0x637, 0x5, 0xde, 0x70, 0x2, 0x637, 0x638, 0x7, 0x86, 
			 0x2, 0x2, 0x638, 0x63a, 0x3, 0x2, 0x2, 0x2, 0x639, 0x62f, 0x3, 0x2, 
			 0x2, 0x2, 0x639, 0x634, 0x3, 0x2, 0x2, 0x2, 0x63a, 0x63d, 0x3, 0x2, 
			 0x2, 0x2, 0x63b, 0x639, 0x3, 0x2, 0x2, 0x2, 0x63b, 0x63c, 0x3, 0x2, 
			 0x2, 0x2, 0x63c, 0xdd, 0x3, 0x2, 0x2, 0x2, 0x63d, 0x63b, 0x3, 0x2, 0x2, 
			 0x2, 0x63e, 0x640, 0x5, 0xe0, 0x71, 0x2, 0x63f, 0x641, 0x5, 0xe6, 0x74, 
			 0x2, 0x640, 0x63f, 0x3, 0x2, 0x2, 0x2, 0x640, 0x641, 0x3, 0x2, 0x2, 
			 0x2, 0x641, 0xdf, 0x3, 0x2, 0x2, 0x2, 0x642, 0x645, 0x7, 0x87, 0x2, 
			 0x2, 0x643, 0x645, 0x5, 0xe2, 0x72, 0x2, 0x644, 0x642, 0x3, 0x2, 0x2, 
			 0x2, 0x644, 0x643, 0x3, 0x2, 0x2, 0x2, 0x645, 0xe1, 0x3, 0x2, 0x2, 0x2, 
			 0x646, 0x647, 0x5, 0xe4, 0x73, 0x2, 0x647, 0x648, 0x7, 0x82, 0x2, 0x2, 
			 0x648, 0x649, 0x7, 0x87, 0x2, 0x2, 0x649, 0xe3, 0x3, 0x2, 0x2, 0x2, 
			 0x64a, 0x64b, 0x7, 0x87, 0x2, 0x2, 0x64b, 0xe5, 0x3, 0x2, 0x2, 0x2, 
			 0x64c, 0x64d, 0x7, 0x56, 0x2, 0x2, 0x64d, 0x64e, 0x5, 0xe8, 0x75, 0x2, 
			 0x64e, 0x64f, 0x7, 0x57, 0x2, 0x2, 0x64f, 0xe7, 0x3, 0x2, 0x2, 0x2, 
			 0x650, 0x652, 0x8, 0x75, 0x1, 0x2, 0x651, 0x653, 0x5, 0xea, 0x76, 0x2, 
			 0x652, 0x651, 0x3, 0x2, 0x2, 0x2, 0x652, 0x653, 0x3, 0x2, 0x2, 0x2, 
			 0x653, 0x658, 0x3, 0x2, 0x2, 0x2, 0x654, 0x655, 0xc, 0x3, 0x2, 0x2, 
			 0x655, 0x657, 0x5, 0xea, 0x76, 0x2, 0x656, 0x654, 0x3, 0x2, 0x2, 0x2, 
			 0x657, 0x65a, 0x3, 0x2, 0x2, 0x2, 0x658, 0x656, 0x3, 0x2, 0x2, 0x2, 
			 0x658, 0x659, 0x3, 0x2, 0x2, 0x2, 0x659, 0xe9, 0x3, 0x2, 0x2, 0x2, 0x65a, 
			 0x658, 0x3, 0x2, 0x2, 0x2, 0x65b, 0x65c, 0x7, 0x56, 0x2, 0x2, 0x65c, 
			 0x65d, 0x5, 0xe8, 0x75, 0x2, 0x65d, 0x65e, 0x7, 0x57, 0x2, 0x2, 0x65e, 
			 0x66d, 0x3, 0x2, 0x2, 0x2, 0x65f, 0x660, 0x7, 0x58, 0x2, 0x2, 0x660, 
			 0x661, 0x5, 0xe8, 0x75, 0x2, 0x661, 0x662, 0x7, 0x59, 0x2, 0x2, 0x662, 
			 0x66d, 0x3, 0x2, 0x2, 0x2, 0x663, 0x664, 0x7, 0x5a, 0x2, 0x2, 0x664, 
			 0x665, 0x5, 0xe8, 0x75, 0x2, 0x665, 0x666, 0x7, 0x5b, 0x2, 0x2, 0x666, 
			 0x66d, 0x3, 0x2, 0x2, 0x2, 0x667, 0x669, 0xa, 0x8, 0x2, 0x2, 0x668, 
			 0x667, 0x3, 0x2, 0x2, 0x2, 0x669, 0x66a, 0x3, 0x2, 0x2, 0x2, 0x66a, 
			 0x668, 0x3, 0x2, 0x2, 0x2, 0x66a, 0x66b, 0x3, 0x2, 0x2, 0x2, 0x66b, 
			 0x66d, 0x3, 0x2, 0x2, 0x2, 0x66c, 0x65b, 0x3, 0x2, 0x2, 0x2, 0x66c, 
			 0x65f, 0x3, 0x2, 0x2, 0x2, 0x66c, 0x663, 0x3, 0x2, 0x2, 0x2, 0x66c, 
			 0x668, 0x3, 0x2, 0x2, 0x2, 0x66d, 0xeb, 0x3, 0x2, 0x2, 0x2, 0x66e, 0x66f, 
			 0x8, 0x77, 0x1, 0x2, 0x66f, 0x670, 0x5, 0xee, 0x78, 0x2, 0x670, 0x676, 
			 0x3, 0x2, 0x2, 0x2, 0x671, 0x672, 0xc, 0x3, 0x2, 0x2, 0x672, 0x673, 
			 0x7, 0x7d, 0x2, 0x2, 0x673, 0x675, 0x5, 0xee, 0x78, 0x2, 0x674, 0x671, 
			 0x3, 0x2, 0x2, 0x2, 0x675, 0x678, 0x3, 0x2, 0x2, 0x2, 0x676, 0x674, 
			 0x3, 0x2, 0x2, 0x2, 0x676, 0x677, 0x3, 0x2, 0x2, 0x2, 0x677, 0xed, 0x3, 
			 0x2, 0x2, 0x2, 0x678, 0x676, 0x3, 0x2, 0x2, 0x2, 0x679, 0x67b, 0x5, 
			 0xf0, 0x79, 0x2, 0x67a, 0x67c, 0x5, 0x11a, 0x8e, 0x2, 0x67b, 0x67a, 
			 0x3, 0x2, 0x2, 0x2, 0x67b, 0x67c, 0x3, 0x2, 0x2, 0x2, 0x67c, 0xef, 0x3, 
			 0x2, 0x2, 0x2, 0x67d, 0x683, 0x5, 0xf2, 0x7a, 0x2, 0x67e, 0x67f, 0x5, 
			 0xf4, 0x7b, 0x2, 0x67f, 0x680, 0x5, 0xf6, 0x7c, 0x2, 0x680, 0x681, 0x5, 
			 0xf8, 0x7d, 0x2, 0x681, 0x683, 0x3, 0x2, 0x2, 0x2, 0x682, 0x67d, 0x3, 
			 0x2, 0x2, 0x2, 0x682, 0x67e, 0x3, 0x2, 0x2, 0x2, 0x683, 0xf1, 0x3, 0x2, 
			 0x2, 0x2, 0x684, 0x689, 0x5, 0xf4, 0x7b, 0x2, 0x685, 0x686, 0x5, 0xfa, 
			 0x7e, 0x2, 0x686, 0x687, 0x5, 0xf2, 0x7a, 0x2, 0x687, 0x689, 0x3, 0x2, 
			 0x2, 0x2, 0x688, 0x684, 0x3, 0x2, 0x2, 0x2, 0x688, 0x685, 0x3, 0x2, 
			 0x2, 0x2, 0x689, 0xf3, 0x3, 0x2, 0x2, 0x2, 0x68a, 0x68b, 0x8, 0x7b, 
			 0x1, 0x2, 0x68b, 0x68d, 0x5, 0x102, 0x82, 0x2, 0x68c, 0x68e, 0x5, 0xd6, 
			 0x6c, 0x2, 0x68d, 0x68c, 0x3, 0x2, 0x2, 0x2, 0x68d, 0x68e, 0x3, 0x2, 
			 0x2, 0x2, 0x68e, 0x694, 0x3, 0x2, 0x2, 0x2, 0x68f, 0x690, 0x7, 0x56, 
			 0x2, 0x2, 0x690, 0x691, 0x5, 0xf2, 0x7a, 0x2, 0x691, 0x692, 0x7, 0x57, 
			 0x2, 0x2, 0x692, 0x694, 0x3, 0x2, 0x2, 0x2, 0x693, 0x68a, 0x3, 0x2, 
			 0x2, 0x2, 0x693, 0x68f, 0x3, 0x2, 0x2, 0x2, 0x694, 0x6a2, 0x3, 0x2, 
			 0x2, 0x2, 0x695, 0x696, 0xc, 0x5, 0x2, 0x2, 0x696, 0x6a1, 0x5, 0xf6, 
			 0x7c, 0x2, 0x697, 0x698, 0xc, 0x4, 0x2, 0x2, 0x698, 0x69a, 0x7, 0x58, 
			 0x2, 0x2, 0x699, 0x69b, 0x5, 0x60, 0x31, 0x2, 0x69a, 0x699, 0x3, 0x2, 
			 0x2, 0x2, 0x69a, 0x69b, 0x3, 0x2, 0x2, 0x2, 0x69b, 0x69c, 0x3, 0x2, 
			 0x2, 0x2, 0x69c, 0x69e, 0x7, 0x59, 0x2, 0x2, 0x69d, 0x69f, 0x5, 0xd6, 
			 0x6c, 0x2, 0x69e, 0x69d, 0x3, 0x2, 0x2, 0x2, 0x69e, 0x69f, 0x3, 0x2, 
			 0x2, 0x2, 0x69f, 0x6a1, 0x3, 0x2, 0x2, 0x2, 0x6a0, 0x695, 0x3, 0x2, 
			 0x2, 0x2, 0x6a0, 0x697, 0x3, 0x2, 0x2, 0x2, 0x6a1, 0x6a4, 0x3, 0x2, 
			 0x2, 0x2, 0x6a2, 0x6a0, 0x3, 0x2, 0x2, 0x2, 0x6a2, 0x6a3, 0x3, 0x2, 
			 0x2, 0x2, 0x6a3, 0xf5, 0x3, 0x2, 0x2, 0x2, 0x6a4, 0x6a2, 0x3, 0x2, 0x2, 
			 0x2, 0x6a5, 0x6a6, 0x7, 0x56, 0x2, 0x2, 0x6a6, 0x6a7, 0x5, 0x110, 0x89, 
			 0x2, 0x6a7, 0x6a9, 0x7, 0x57, 0x2, 0x2, 0x6a8, 0x6aa, 0x5, 0xfc, 0x7f, 
			 0x2, 0x6a9, 0x6a8, 0x3, 0x2, 0x2, 0x2, 0x6a9, 0x6aa, 0x3, 0x2, 0x2, 
			 0x2, 0x6aa, 0x6ac, 0x3, 0x2, 0x2, 0x2, 0x6ab, 0x6ad, 0x5, 0x100, 0x81, 
			 0x2, 0x6ac, 0x6ab, 0x3, 0x2, 0x2, 0x2, 0x6ac, 0x6ad, 0x3, 0x2, 0x2, 
			 0x2, 0x6ad, 0x6af, 0x3, 0x2, 0x2, 0x2, 0x6ae, 0x6b0, 0x5, 0x180, 0xc1, 
			 0x2, 0x6af, 0x6ae, 0x3, 0x2, 0x2, 0x2, 0x6af, 0x6b0, 0x3, 0x2, 0x2, 
			 0x2, 0x6b0, 0x6b2, 0x3, 0x2, 0x2, 0x2, 0x6b1, 0x6b3, 0x5, 0xd6, 0x6c, 
			 0x2, 0x6b2, 0x6b1, 0x3, 0x2, 0x2, 0x2, 0x6b2, 0x6b3, 0x3, 0x2, 0x2, 
			 0x2, 0x6b3, 0xf7, 0x3, 0x2, 0x2, 0x2, 0x6b4, 0x6b5, 0x7, 0x7f, 0x2, 
			 0x2, 0x6b5, 0x6b7, 0x5, 0x9c, 0x4f, 0x2, 0x6b6, 0x6b8, 0x5, 0x106, 0x84, 
			 0x2, 0x6b7, 0x6b6, 0x3, 0x2, 0x2, 0x2, 0x6b7, 0x6b8, 0x3, 0x2, 0x2, 
			 0x2, 0x6b8, 0xf9, 0x3, 0x2, 0x2, 0x2, 0x6b9, 0x6bb, 0x7, 0x5e, 0x2, 
			 0x2, 0x6ba, 0x6bc, 0x5, 0xd6, 0x6c, 0x2, 0x6bb, 0x6ba, 0x3, 0x2, 0x2, 
			 0x2, 0x6bb, 0x6bc, 0x3, 0x2, 0x2, 0x2, 0x6bc, 0x6be, 0x3, 0x2, 0x2, 
			 0x2, 0x6bd, 0x6bf, 0x5, 0xfc, 0x7f, 0x2, 0x6be, 0x6bd, 0x3, 0x2, 0x2, 
			 0x2, 0x6be, 0x6bf, 0x3, 0x2, 0x2, 0x2, 0x6bf, 0x6d1, 0x3, 0x2, 0x2, 
			 0x2, 0x6c0, 0x6c2, 0x7, 0x62, 0x2, 0x2, 0x6c1, 0x6c3, 0x5, 0xd6, 0x6c, 
			 0x2, 0x6c2, 0x6c1, 0x3, 0x2, 0x2, 0x2, 0x6c2, 0x6c3, 0x3, 0x2, 0x2, 
			 0x2, 0x6c3, 0x6d1, 0x3, 0x2, 0x2, 0x2, 0x6c4, 0x6c6, 0x7, 0x5, 0x2, 
			 0x2, 0x6c5, 0x6c7, 0x5, 0xd6, 0x6c, 0x2, 0x6c6, 0x6c5, 0x3, 0x2, 0x2, 
			 0x2, 0x6c6, 0x6c7, 0x3, 0x2, 0x2, 0x2, 0x6c7, 0x6d1, 0x3, 0x2, 0x2, 
			 0x2, 0x6c8, 0x6c9, 0x5, 0xc, 0x7, 0x2, 0x6c9, 0x6cb, 0x7, 0x5e, 0x2, 
			 0x2, 0x6ca, 0x6cc, 0x5, 0xd6, 0x6c, 0x2, 0x6cb, 0x6ca, 0x3, 0x2, 0x2, 
			 0x2, 0x6cb, 0x6cc, 0x3, 0x2, 0x2, 0x2, 0x6cc, 0x6ce, 0x3, 0x2, 0x2, 
			 0x2, 0x6cd, 0x6cf, 0x5, 0xfc, 0x7f, 0x2, 0x6ce, 0x6cd, 0x3, 0x2, 0x2, 
			 0x2, 0x6ce, 0x6cf, 0x3, 0x2, 0x2, 0x2, 0x6cf, 0x6d1, 0x3, 0x2, 0x2, 
			 0x2, 0x6d0, 0x6b9, 0x3, 0x2, 0x2, 0x2, 0x6d0, 0x6c0, 0x3, 0x2, 0x2, 
			 0x2, 0x6d0, 0x6c4, 0x3, 0x2, 0x2, 0x2, 0x6d0, 0x6c8, 0x3, 0x2, 0x2, 
			 0x2, 0x6d1, 0xfb, 0x3, 0x2, 0x2, 0x2, 0x6d2, 0x6d4, 0x5, 0xfe, 0x80, 
			 0x2, 0x6d3, 0x6d5, 0x5, 0xfc, 0x7f, 0x2, 0x6d4, 0x6d3, 0x3, 0x2, 0x2, 
			 0x2, 0x6d4, 0x6d5, 0x3, 0x2, 0x2, 0x2, 0x6d5, 0xfd, 0x3, 0x2, 0x2, 0x2, 
			 0x6d6, 0x6d7, 0x9, 0x9, 0x2, 0x2, 0x6d7, 0xff, 0x3, 0x2, 0x2, 0x2, 0x6d8, 
			 0x6d9, 0x9, 0xa, 0x2, 0x2, 0x6d9, 0x101, 0x3, 0x2, 0x2, 0x2, 0x6da, 
			 0x6dc, 0x7, 0x86, 0x2, 0x2, 0x6db, 0x6da, 0x3, 0x2, 0x2, 0x2, 0x6db, 
			 0x6dc, 0x3, 0x2, 0x2, 0x2, 0x6dc, 0x6dd, 0x3, 0x2, 0x2, 0x2, 0x6dd, 
			 0x6de, 0x5, 0x6, 0x4, 0x2, 0x6de, 0x103, 0x3, 0x2, 0x2, 0x2, 0x6df, 
			 0x6e1, 0x5, 0x9a, 0x4e, 0x2, 0x6e0, 0x6e2, 0x5, 0x106, 0x84, 0x2, 0x6e1, 
			 0x6e0, 0x3, 0x2, 0x2, 0x2, 0x6e1, 0x6e2, 0x3, 0x2, 0x2, 0x2, 0x6e2, 
			 0x105, 0x3, 0x2, 0x2, 0x2, 0x6e3, 0x6ec, 0x5, 0x108, 0x85, 0x2, 0x6e4, 
			 0x6e6, 0x5, 0x10a, 0x86, 0x2, 0x6e5, 0x6e4, 0x3, 0x2, 0x2, 0x2, 0x6e5, 
			 0x6e6, 0x3, 0x2, 0x2, 0x2, 0x6e6, 0x6e7, 0x3, 0x2, 0x2, 0x2, 0x6e7, 
			 0x6e8, 0x5, 0xf6, 0x7c, 0x2, 0x6e8, 0x6e9, 0x5, 0xf8, 0x7d, 0x2, 0x6e9, 
			 0x6ec, 0x3, 0x2, 0x2, 0x2, 0x6ea, 0x6ec, 0x5, 0x10c, 0x87, 0x2, 0x6eb, 
			 0x6e3, 0x3, 0x2, 0x2, 0x2, 0x6eb, 0x6e5, 0x3, 0x2, 0x2, 0x2, 0x6eb, 
			 0x6ea, 0x3, 0x2, 0x2, 0x2, 0x6ec, 0x107, 0x3, 0x2, 0x2, 0x2, 0x6ed, 
			 0x6f3, 0x5, 0x10a, 0x86, 0x2, 0x6ee, 0x6f0, 0x5, 0xfa, 0x7e, 0x2, 0x6ef, 
			 0x6f1, 0x5, 0x108, 0x85, 0x2, 0x6f0, 0x6ef, 0x3, 0x2, 0x2, 0x2, 0x6f0, 
			 0x6f1, 0x3, 0x2, 0x2, 0x2, 0x6f1, 0x6f3, 0x3, 0x2, 0x2, 0x2, 0x6f2, 
			 0x6ed, 0x3, 0x2, 0x2, 0x2, 0x6f2, 0x6ee, 0x3, 0x2, 0x2, 0x2, 0x6f3, 
			 0x109, 0x3, 0x2, 0x2, 0x2, 0x6f4, 0x6f5, 0x8, 0x86, 0x1, 0x2, 0x6f5, 
			 0x703, 0x5, 0xf6, 0x7c, 0x2, 0x6f6, 0x6f8, 0x7, 0x58, 0x2, 0x2, 0x6f7, 
			 0x6f9, 0x5, 0x60, 0x31, 0x2, 0x6f8, 0x6f7, 0x3, 0x2, 0x2, 0x2, 0x6f8, 
			 0x6f9, 0x3, 0x2, 0x2, 0x2, 0x6f9, 0x6fa, 0x3, 0x2, 0x2, 0x2, 0x6fa, 
			 0x6fc, 0x7, 0x59, 0x2, 0x2, 0x6fb, 0x6fd, 0x5, 0xd6, 0x6c, 0x2, 0x6fc, 
			 0x6fb, 0x3, 0x2, 0x2, 0x2, 0x6fc, 0x6fd, 0x3, 0x2, 0x2, 0x2, 0x6fd, 
			 0x703, 0x3, 0x2, 0x2, 0x2, 0x6fe, 0x6ff, 0x7, 0x56, 0x2, 0x2, 0x6ff, 
			 0x700, 0x5, 0x108, 0x85, 0x2, 0x700, 0x701, 0x7, 0x57, 0x2, 0x2, 0x701, 
			 0x703, 0x3, 0x2, 0x2, 0x2, 0x702, 0x6f4, 0x3, 0x2, 0x2, 0x2, 0x702, 
			 0x6f6, 0x3, 0x2, 0x2, 0x2, 0x702, 0x6fe, 0x3, 0x2, 0x2, 0x2, 0x703, 
			 0x711, 0x3, 0x2, 0x2, 0x2, 0x704, 0x705, 0xc, 0x7, 0x2, 0x2, 0x705, 
			 0x710, 0x5, 0xf6, 0x7c, 0x2, 0x706, 0x707, 0xc, 0x5, 0x2, 0x2, 0x707, 
			 0x709, 0x7, 0x58, 0x2, 0x2, 0x708, 0x70a, 0x5, 0x60, 0x31, 0x2, 0x709, 
			 0x708, 0x3, 0x2, 0x2, 0x2, 0x709, 0x70a, 0x3, 0x2, 0x2, 0x2, 0x70a, 
			 0x70b, 0x3, 0x2, 0x2, 0x2, 0x70b, 0x70d, 0x7, 0x59, 0x2, 0x2, 0x70c, 
			 0x70e, 0x5, 0xd6, 0x6c, 0x2, 0x70d, 0x70c, 0x3, 0x2, 0x2, 0x2, 0x70d, 
			 0x70e, 0x3, 0x2, 0x2, 0x2, 0x70e, 0x710, 0x3, 0x2, 0x2, 0x2, 0x70f, 
			 0x704, 0x3, 0x2, 0x2, 0x2, 0x70f, 0x706, 0x3, 0x2, 0x2, 0x2, 0x710, 
			 0x713, 0x3, 0x2, 0x2, 0x2, 0x711, 0x70f, 0x3, 0x2, 0x2, 0x2, 0x711, 
			 0x712, 0x3, 0x2, 0x2, 0x2, 0x712, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x713, 
			 0x711, 0x3, 0x2, 0x2, 0x2, 0x714, 0x719, 0x5, 0x10e, 0x88, 0x2, 0x715, 
			 0x716, 0x5, 0xfa, 0x7e, 0x2, 0x716, 0x717, 0x5, 0x10c, 0x87, 0x2, 0x717, 
			 0x719, 0x3, 0x2, 0x2, 0x2, 0x718, 0x714, 0x3, 0x2, 0x2, 0x2, 0x718, 
			 0x715, 0x3, 0x2, 0x2, 0x2, 0x719, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x71a, 
			 0x71b, 0x8, 0x88, 0x1, 0x2, 0x71b, 0x71c, 0x7, 0x86, 0x2, 0x2, 0x71c, 
			 0x72a, 0x3, 0x2, 0x2, 0x2, 0x71d, 0x71e, 0xc, 0x5, 0x2, 0x2, 0x71e, 
			 0x729, 0x5, 0xf6, 0x7c, 0x2, 0x71f, 0x720, 0xc, 0x4, 0x2, 0x2, 0x720, 
			 0x722, 0x7, 0x58, 0x2, 0x2, 0x721, 0x723, 0x5, 0x60, 0x31, 0x2, 0x722, 
			 0x721, 0x3, 0x2, 0x2, 0x2, 0x722, 0x723, 0x3, 0x2, 0x2, 0x2, 0x723, 
			 0x724, 0x3, 0x2, 0x2, 0x2, 0x724, 0x726, 0x7, 0x59, 0x2, 0x2, 0x725, 
			 0x727, 0x5, 0xd6, 0x6c, 0x2, 0x726, 0x725, 0x3, 0x2, 0x2, 0x2, 0x726, 
			 0x727, 0x3, 0x2, 0x2, 0x2, 0x727, 0x729, 0x3, 0x2, 0x2, 0x2, 0x728, 
			 0x71d, 0x3, 0x2, 0x2, 0x2, 0x728, 0x71f, 0x3, 0x2, 0x2, 0x2, 0x729, 
			 0x72c, 0x3, 0x2, 0x2, 0x2, 0x72a, 0x728, 0x3, 0x2, 0x2, 0x2, 0x72a, 
			 0x72b, 0x3, 0x2, 0x2, 0x2, 0x72b, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x72c, 
			 0x72a, 0x3, 0x2, 0x2, 0x2, 0x72d, 0x72f, 0x5, 0x112, 0x8a, 0x2, 0x72e, 
			 0x72d, 0x3, 0x2, 0x2, 0x2, 0x72e, 0x72f, 0x3, 0x2, 0x2, 0x2, 0x72f, 
			 0x731, 0x3, 0x2, 0x2, 0x2, 0x730, 0x732, 0x7, 0x86, 0x2, 0x2, 0x731, 
			 0x730, 0x3, 0x2, 0x2, 0x2, 0x731, 0x732, 0x3, 0x2, 0x2, 0x2, 0x732, 
			 0x738, 0x3, 0x2, 0x2, 0x2, 0x733, 0x734, 0x5, 0x112, 0x8a, 0x2, 0x734, 
			 0x735, 0x7, 0x7d, 0x2, 0x2, 0x735, 0x736, 0x7, 0x86, 0x2, 0x2, 0x736, 
			 0x738, 0x3, 0x2, 0x2, 0x2, 0x737, 0x72e, 0x3, 0x2, 0x2, 0x2, 0x737, 
			 0x733, 0x3, 0x2, 0x2, 0x2, 0x738, 0x111, 0x3, 0x2, 0x2, 0x2, 0x739, 
			 0x73a, 0x8, 0x8a, 0x1, 0x2, 0x73a, 0x73b, 0x5, 0x114, 0x8b, 0x2, 0x73b, 
			 0x741, 0x3, 0x2, 0x2, 0x2, 0x73c, 0x73d, 0xc, 0x3, 0x2, 0x2, 0x73d, 
			 0x73e, 0x7, 0x7d, 0x2, 0x2, 0x73e, 0x740, 0x5, 0x114, 0x8b, 0x2, 0x73f, 
			 0x73c, 0x3, 0x2, 0x2, 0x2, 0x740, 0x743, 0x3, 0x2, 0x2, 0x2, 0x741, 
			 0x73f, 0x3, 0x2, 0x2, 0x2, 0x741, 0x742, 0x3, 0x2, 0x2, 0x2, 0x742, 
			 0x113, 0x3, 0x2, 0x2, 0x2, 0x743, 0x741, 0x3, 0x2, 0x2, 0x2, 0x744, 
			 0x746, 0x5, 0xd6, 0x6c, 0x2, 0x745, 0x744, 0x3, 0x2, 0x2, 0x2, 0x745, 
			 0x746, 0x3, 0x2, 0x2, 0x2, 0x746, 0x747, 0x3, 0x2, 0x2, 0x2, 0x747, 
			 0x748, 0x5, 0x8e, 0x48, 0x2, 0x748, 0x749, 0x5, 0xf0, 0x79, 0x2, 0x749, 
			 0x764, 0x3, 0x2, 0x2, 0x2, 0x74a, 0x74c, 0x5, 0xd6, 0x6c, 0x2, 0x74b, 
			 0x74a, 0x3, 0x2, 0x2, 0x2, 0x74b, 0x74c, 0x3, 0x2, 0x2, 0x2, 0x74c, 
			 0x74d, 0x3, 0x2, 0x2, 0x2, 0x74d, 0x74e, 0x5, 0x8e, 0x48, 0x2, 0x74e, 
			 0x74f, 0x5, 0xf0, 0x79, 0x2, 0x74f, 0x750, 0x7, 0x66, 0x2, 0x2, 0x750, 
			 0x751, 0x5, 0x11e, 0x90, 0x2, 0x751, 0x764, 0x3, 0x2, 0x2, 0x2, 0x752, 
			 0x754, 0x5, 0xd6, 0x6c, 0x2, 0x753, 0x752, 0x3, 0x2, 0x2, 0x2, 0x753, 
			 0x754, 0x3, 0x2, 0x2, 0x2, 0x754, 0x755, 0x3, 0x2, 0x2, 0x2, 0x755, 
			 0x757, 0x5, 0x8e, 0x48, 0x2, 0x756, 0x758, 0x5, 0x106, 0x84, 0x2, 0x757, 
			 0x756, 0x3, 0x2, 0x2, 0x2, 0x757, 0x758, 0x3, 0x2, 0x2, 0x2, 0x758, 
			 0x764, 0x3, 0x2, 0x2, 0x2, 0x759, 0x75b, 0x5, 0xd6, 0x6c, 0x2, 0x75a, 
			 0x759, 0x3, 0x2, 0x2, 0x2, 0x75a, 0x75b, 0x3, 0x2, 0x2, 0x2, 0x75b, 
			 0x75c, 0x3, 0x2, 0x2, 0x2, 0x75c, 0x75e, 0x5, 0x8e, 0x48, 0x2, 0x75d, 
			 0x75f, 0x5, 0x106, 0x84, 0x2, 0x75e, 0x75d, 0x3, 0x2, 0x2, 0x2, 0x75e, 
			 0x75f, 0x3, 0x2, 0x2, 0x2, 0x75f, 0x760, 0x3, 0x2, 0x2, 0x2, 0x760, 
			 0x761, 0x7, 0x66, 0x2, 0x2, 0x761, 0x762, 0x5, 0x11e, 0x90, 0x2, 0x762, 
			 0x764, 0x3, 0x2, 0x2, 0x2, 0x763, 0x745, 0x3, 0x2, 0x2, 0x2, 0x763, 
			 0x74b, 0x3, 0x2, 0x2, 0x2, 0x763, 0x753, 0x3, 0x2, 0x2, 0x2, 0x763, 
			 0x75a, 0x3, 0x2, 0x2, 0x2, 0x764, 0x115, 0x3, 0x2, 0x2, 0x2, 0x765, 
			 0x767, 0x5, 0xd6, 0x6c, 0x2, 0x766, 0x765, 0x3, 0x2, 0x2, 0x2, 0x766, 
			 0x767, 0x3, 0x2, 0x2, 0x2, 0x767, 0x769, 0x3, 0x2, 0x2, 0x2, 0x768, 
			 0x76a, 0x5, 0x8e, 0x48, 0x2, 0x769, 0x768, 0x3, 0x2, 0x2, 0x2, 0x769, 
			 0x76a, 0x3, 0x2, 0x2, 0x2, 0x76a, 0x76b, 0x3, 0x2, 0x2, 0x2, 0x76b, 
			 0x76d, 0x5, 0xf0, 0x79, 0x2, 0x76c, 0x76e, 0x5, 0x138, 0x9d, 0x2, 0x76d, 
			 0x76c, 0x3, 0x2, 0x2, 0x2, 0x76d, 0x76e, 0x3, 0x2, 0x2, 0x2, 0x76e, 
			 0x76f, 0x3, 0x2, 0x2, 0x2, 0x76f, 0x770, 0x5, 0x118, 0x8d, 0x2, 0x770, 
			 0x117, 0x3, 0x2, 0x2, 0x2, 0x771, 0x773, 0x5, 0x150, 0xa9, 0x2, 0x772, 
			 0x771, 0x3, 0x2, 0x2, 0x2, 0x772, 0x773, 0x3, 0x2, 0x2, 0x2, 0x773, 
			 0x774, 0x3, 0x2, 0x2, 0x2, 0x774, 0x77d, 0x5, 0x68, 0x35, 0x2, 0x775, 
			 0x77d, 0x5, 0x176, 0xbc, 0x2, 0x776, 0x777, 0x7, 0x66, 0x2, 0x2, 0x777, 
			 0x778, 0x7, 0x1c, 0x2, 0x2, 0x778, 0x77d, 0x7, 0x83, 0x2, 0x2, 0x779, 
			 0x77a, 0x7, 0x66, 0x2, 0x2, 0x77a, 0x77b, 0x7, 0x1d, 0x2, 0x2, 0x77b, 
			 0x77d, 0x7, 0x83, 0x2, 0x2, 0x77c, 0x772, 0x3, 0x2, 0x2, 0x2, 0x77c, 
			 0x775, 0x3, 0x2, 0x2, 0x2, 0x77c, 0x776, 0x3, 0x2, 0x2, 0x2, 0x77c, 
			 0x779, 0x3, 0x2, 0x2, 0x2, 0x77d, 0x119, 0x3, 0x2, 0x2, 0x2, 0x77e, 
			 0x784, 0x5, 0x11c, 0x8f, 0x2, 0x77f, 0x780, 0x7, 0x56, 0x2, 0x2, 0x780, 
			 0x781, 0x5, 0x26, 0x14, 0x2, 0x781, 0x782, 0x7, 0x57, 0x2, 0x2, 0x782, 
			 0x784, 0x3, 0x2, 0x2, 0x2, 0x783, 0x77e, 0x3, 0x2, 0x2, 0x2, 0x783, 
			 0x77f, 0x3, 0x2, 0x2, 0x2, 0x784, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x785, 
			 0x786, 0x7, 0x66, 0x2, 0x2, 0x786, 0x789, 0x5, 0x11e, 0x90, 0x2, 0x787, 
			 0x789, 0x5, 0x122, 0x92, 0x2, 0x788, 0x785, 0x3, 0x2, 0x2, 0x2, 0x788, 
			 0x787, 0x3, 0x2, 0x2, 0x2, 0x789, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x78a, 
			 0x78d, 0x5, 0x5a, 0x2e, 0x2, 0x78b, 0x78d, 0x5, 0x122, 0x92, 0x2, 0x78c, 
			 0x78a, 0x3, 0x2, 0x2, 0x2, 0x78c, 0x78b, 0x3, 0x2, 0x2, 0x2, 0x78d, 
			 0x11f, 0x3, 0x2, 0x2, 0x2, 0x78e, 0x78f, 0x8, 0x91, 0x1, 0x2, 0x78f, 
			 0x791, 0x5, 0x11e, 0x90, 0x2, 0x790, 0x792, 0x7, 0x86, 0x2, 0x2, 0x791, 
			 0x790, 0x3, 0x2, 0x2, 0x2, 0x791, 0x792, 0x3, 0x2, 0x2, 0x2, 0x792, 
			 0x79b, 0x3, 0x2, 0x2, 0x2, 0x793, 0x794, 0xc, 0x3, 0x2, 0x2, 0x794, 
			 0x795, 0x7, 0x7d, 0x2, 0x2, 0x795, 0x797, 0x5, 0x11e, 0x90, 0x2, 0x796, 
			 0x798, 0x7, 0x86, 0x2, 0x2, 0x797, 0x796, 0x3, 0x2, 0x2, 0x2, 0x797, 
			 0x798, 0x3, 0x2, 0x2, 0x2, 0x798, 0x79a, 0x3, 0x2, 0x2, 0x2, 0x799, 
			 0x793, 0x3, 0x2, 0x2, 0x2, 0x79a, 0x79d, 0x3, 0x2, 0x2, 0x2, 0x79b, 
			 0x799, 0x3, 0x2, 0x2, 0x2, 0x79b, 0x79c, 0x3, 0x2, 0x2, 0x2, 0x79c, 
			 0x121, 0x3, 0x2, 0x2, 0x2, 0x79d, 0x79b, 0x3, 0x2, 0x2, 0x2, 0x79e, 
			 0x79f, 0x7, 0x5a, 0x2, 0x2, 0x79f, 0x7a1, 0x5, 0x120, 0x91, 0x2, 0x7a0, 
			 0x7a2, 0x7, 0x7d, 0x2, 0x2, 0x7a1, 0x7a0, 0x3, 0x2, 0x2, 0x2, 0x7a1, 
			 0x7a2, 0x3, 0x2, 0x2, 0x2, 0x7a2, 0x7a3, 0x3, 0x2, 0x2, 0x2, 0x7a3, 
			 0x7a4, 0x7, 0x5b, 0x2, 0x2, 0x7a4, 0x7a8, 0x3, 0x2, 0x2, 0x2, 0x7a5, 
			 0x7a6, 0x7, 0x5a, 0x2, 0x2, 0x7a6, 0x7a8, 0x7, 0x5b, 0x2, 0x2, 0x7a7, 
			 0x79e, 0x3, 0x2, 0x2, 0x2, 0x7a7, 0x7a5, 0x3, 0x2, 0x2, 0x2, 0x7a8, 
			 0x123, 0x3, 0x2, 0x2, 0x2, 0x7a9, 0x7ac, 0x7, 0x87, 0x2, 0x2, 0x7aa, 
			 0x7ac, 0x5, 0x164, 0xb3, 0x2, 0x7ab, 0x7a9, 0x3, 0x2, 0x2, 0x2, 0x7ab, 
			 0x7aa, 0x3, 0x2, 0x2, 0x2, 0x7ac, 0x125, 0x3, 0x2, 0x2, 0x2, 0x7ad, 
			 0x7ae, 0x5, 0x128, 0x95, 0x2, 0x7ae, 0x7b0, 0x7, 0x5a, 0x2, 0x2, 0x7af, 
			 0x7b1, 0x5, 0x130, 0x99, 0x2, 0x7b0, 0x7af, 0x3, 0x2, 0x2, 0x2, 0x7b0, 
			 0x7b1, 0x3, 0x2, 0x2, 0x2, 0x7b1, 0x7b2, 0x3, 0x2, 0x2, 0x2, 0x7b2, 
			 0x7b3, 0x7, 0x5b, 0x2, 0x2, 0x7b3, 0x127, 0x3, 0x2, 0x2, 0x2, 0x7b4, 
			 0x7b6, 0x5, 0x12e, 0x98, 0x2, 0x7b5, 0x7b7, 0x5, 0xd6, 0x6c, 0x2, 0x7b6, 
			 0x7b5, 0x3, 0x2, 0x2, 0x2, 0x7b6, 0x7b7, 0x3, 0x2, 0x2, 0x2, 0x7b7, 
			 0x7b8, 0x3, 0x2, 0x2, 0x2, 0x7b8, 0x7ba, 0x5, 0x12a, 0x96, 0x2, 0x7b9, 
			 0x7bb, 0x5, 0x12c, 0x97, 0x2, 0x7ba, 0x7b9, 0x3, 0x2, 0x2, 0x2, 0x7ba, 
			 0x7bb, 0x3, 0x2, 0x2, 0x2, 0x7bb, 0x7bd, 0x3, 0x2, 0x2, 0x2, 0x7bc, 
			 0x7be, 0x5, 0x13e, 0xa0, 0x2, 0x7bd, 0x7bc, 0x3, 0x2, 0x2, 0x2, 0x7bd, 
			 0x7be, 0x3, 0x2, 0x2, 0x2, 0x7be, 0x7c7, 0x3, 0x2, 0x2, 0x2, 0x7bf, 
			 0x7c1, 0x5, 0x12e, 0x98, 0x2, 0x7c0, 0x7c2, 0x5, 0xd6, 0x6c, 0x2, 0x7c1, 
			 0x7c0, 0x3, 0x2, 0x2, 0x2, 0x7c1, 0x7c2, 0x3, 0x2, 0x2, 0x2, 0x7c2, 
			 0x7c4, 0x3, 0x2, 0x2, 0x2, 0x7c3, 0x7c5, 0x5, 0x13e, 0xa0, 0x2, 0x7c4, 
			 0x7c3, 0x3, 0x2, 0x2, 0x2, 0x7c4, 0x7c5, 0x3, 0x2, 0x2, 0x2, 0x7c5, 
			 0x7c7, 0x3, 0x2, 0x2, 0x2, 0x7c6, 0x7b4, 0x3, 0x2, 0x2, 0x2, 0x7c6, 
			 0x7bf, 0x3, 0x2, 0x2, 0x2, 0x7c7, 0x129, 0x3, 0x2, 0x2, 0x2, 0x7c8, 
			 0x7ca, 0x5, 0xc, 0x7, 0x2, 0x7c9, 0x7c8, 0x3, 0x2, 0x2, 0x2, 0x7c9, 
			 0x7ca, 0x3, 0x2, 0x2, 0x2, 0x7ca, 0x7cb, 0x3, 0x2, 0x2, 0x2, 0x7cb, 
			 0x7cc, 0x5, 0x124, 0x93, 0x2, 0x7cc, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x7cd, 
			 0x7ce, 0x7, 0x27, 0x2, 0x2, 0x7ce, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x7cf, 
			 0x7d0, 0x9, 0xb, 0x2, 0x2, 0x7d0, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x7d1, 
			 0x7d3, 0x5, 0x132, 0x9a, 0x2, 0x7d2, 0x7d4, 0x5, 0x130, 0x99, 0x2, 0x7d3, 
			 0x7d2, 0x3, 0x2, 0x2, 0x2, 0x7d3, 0x7d4, 0x3, 0x2, 0x2, 0x2, 0x7d4, 
			 0x7db, 0x3, 0x2, 0x2, 0x2, 0x7d5, 0x7d6, 0x5, 0x148, 0xa5, 0x2, 0x7d6, 
			 0x7d8, 0x7, 0x81, 0x2, 0x2, 0x7d7, 0x7d9, 0x5, 0x130, 0x99, 0x2, 0x7d8, 
			 0x7d7, 0x3, 0x2, 0x2, 0x2, 0x7d8, 0x7d9, 0x3, 0x2, 0x2, 0x2, 0x7d9, 
			 0x7db, 0x3, 0x2, 0x2, 0x2, 0x7da, 0x7d1, 0x3, 0x2, 0x2, 0x2, 0x7da, 
			 0x7d5, 0x3, 0x2, 0x2, 0x2, 0x7db, 0x131, 0x3, 0x2, 0x2, 0x2, 0x7dc, 
			 0x7de, 0x5, 0xd6, 0x6c, 0x2, 0x7dd, 0x7dc, 0x3, 0x2, 0x2, 0x2, 0x7dd, 
			 0x7de, 0x3, 0x2, 0x2, 0x2, 0x7de, 0x7e0, 0x3, 0x2, 0x2, 0x2, 0x7df, 
			 0x7e1, 0x5, 0x8e, 0x48, 0x2, 0x7e0, 0x7df, 0x3, 0x2, 0x2, 0x2, 0x7e0, 
			 0x7e1, 0x3, 0x2, 0x2, 0x2, 0x7e1, 0x7e3, 0x3, 0x2, 0x2, 0x2, 0x7e2, 
			 0x7e4, 0x5, 0x134, 0x9b, 0x2, 0x7e3, 0x7e2, 0x3, 0x2, 0x2, 0x2, 0x7e3, 
			 0x7e4, 0x3, 0x2, 0x2, 0x2, 0x7e4, 0x7e5, 0x3, 0x2, 0x2, 0x2, 0x7e5, 
			 0x7ed, 0x7, 0x83, 0x2, 0x2, 0x7e6, 0x7ed, 0x5, 0x116, 0x8c, 0x2, 0x7e7, 
			 0x7ed, 0x5, 0xce, 0x68, 0x2, 0x7e8, 0x7ed, 0x5, 0x86, 0x44, 0x2, 0x7e9, 
			 0x7ed, 0x5, 0x15c, 0xaf, 0x2, 0x7ea, 0x7ed, 0x5, 0x82, 0x42, 0x2, 0x7eb, 
			 0x7ed, 0x5, 0x88, 0x45, 0x2, 0x7ec, 0x7dd, 0x3, 0x2, 0x2, 0x2, 0x7ec, 
			 0x7e6, 0x3, 0x2, 0x2, 0x2, 0x7ec, 0x7e7, 0x3, 0x2, 0x2, 0x2, 0x7ec, 
			 0x7e8, 0x3, 0x2, 0x2, 0x2, 0x7ec, 0x7e9, 0x3, 0x2, 0x2, 0x2, 0x7ec, 
			 0x7ea, 0x3, 0x2, 0x2, 0x2, 0x7ec, 0x7eb, 0x3, 0x2, 0x2, 0x2, 0x7ed, 
			 0x133, 0x3, 0x2, 0x2, 0x2, 0x7ee, 0x7ef, 0x8, 0x9b, 0x1, 0x2, 0x7ef, 
			 0x7f0, 0x5, 0x136, 0x9c, 0x2, 0x7f0, 0x7f6, 0x3, 0x2, 0x2, 0x2, 0x7f1, 
			 0x7f2, 0xc, 0x3, 0x2, 0x2, 0x7f2, 0x7f3, 0x7, 0x7d, 0x2, 0x2, 0x7f3, 
			 0x7f5, 0x5, 0x136, 0x9c, 0x2, 0x7f4, 0x7f1, 0x3, 0x2, 0x2, 0x2, 0x7f5, 
			 0x7f8, 0x3, 0x2, 0x2, 0x2, 0x7f6, 0x7f4, 0x3, 0x2, 0x2, 0x2, 0x7f6, 
			 0x7f7, 0x3, 0x2, 0x2, 0x2, 0x7f7, 0x135, 0x3, 0x2, 0x2, 0x2, 0x7f8, 
			 0x7f6, 0x3, 0x2, 0x2, 0x2, 0x7f9, 0x7fb, 0x5, 0xf0, 0x79, 0x2, 0x7fa, 
			 0x7fc, 0x5, 0x138, 0x9d, 0x2, 0x7fb, 0x7fa, 0x3, 0x2, 0x2, 0x2, 0x7fb, 
			 0x7fc, 0x3, 0x2, 0x2, 0x2, 0x7fc, 0x7fe, 0x3, 0x2, 0x2, 0x2, 0x7fd, 
			 0x7ff, 0x5, 0x13c, 0x9f, 0x2, 0x7fe, 0x7fd, 0x3, 0x2, 0x2, 0x2, 0x7fe, 
			 0x7ff, 0x3, 0x2, 0x2, 0x2, 0x7ff, 0x80d, 0x3, 0x2, 0x2, 0x2, 0x800, 
			 0x802, 0x5, 0xf0, 0x79, 0x2, 0x801, 0x803, 0x5, 0x11c, 0x8f, 0x2, 0x802, 
			 0x801, 0x3, 0x2, 0x2, 0x2, 0x802, 0x803, 0x3, 0x2, 0x2, 0x2, 0x803, 
			 0x80d, 0x3, 0x2, 0x2, 0x2, 0x804, 0x806, 0x7, 0x87, 0x2, 0x2, 0x805, 
			 0x804, 0x3, 0x2, 0x2, 0x2, 0x805, 0x806, 0x3, 0x2, 0x2, 0x2, 0x806, 
			 0x808, 0x3, 0x2, 0x2, 0x2, 0x807, 0x809, 0x5, 0xd6, 0x6c, 0x2, 0x808, 
			 0x807, 0x3, 0x2, 0x2, 0x2, 0x808, 0x809, 0x3, 0x2, 0x2, 0x2, 0x809, 
			 0x80a, 0x3, 0x2, 0x2, 0x2, 0x80a, 0x80b, 0x7, 0x81, 0x2, 0x2, 0x80b, 
			 0x80d, 0x5, 0x60, 0x31, 0x2, 0x80c, 0x7f9, 0x3, 0x2, 0x2, 0x2, 0x80c, 
			 0x800, 0x3, 0x2, 0x2, 0x2, 0x80c, 0x805, 0x3, 0x2, 0x2, 0x2, 0x80d, 
			 0x137, 0x3, 0x2, 0x2, 0x2, 0x80e, 0x80f, 0x8, 0x9d, 0x1, 0x2, 0x80f, 
			 0x810, 0x5, 0x13a, 0x9e, 0x2, 0x810, 0x815, 0x3, 0x2, 0x2, 0x2, 0x811, 
			 0x812, 0xc, 0x3, 0x2, 0x2, 0x812, 0x814, 0x5, 0x13a, 0x9e, 0x2, 0x813, 
			 0x811, 0x3, 0x2, 0x2, 0x2, 0x814, 0x817, 0x3, 0x2, 0x2, 0x2, 0x815, 
			 0x813, 0x3, 0x2, 0x2, 0x2, 0x815, 0x816, 0x3, 0x2, 0x2, 0x2, 0x816, 
			 0x139, 0x3, 0x2, 0x2, 0x2, 0x817, 0x815, 0x3, 0x2, 0x2, 0x2, 0x818, 
			 0x819, 0x9, 0xc, 0x2, 0x2, 0x819, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x81a, 
			 0x81b, 0x7, 0x66, 0x2, 0x2, 0x81b, 0x81c, 0x7, 0x8a, 0x2, 0x2, 0x81c, 
			 0x13d, 0x3, 0x2, 0x2, 0x2, 0x81d, 0x81e, 0x7, 0x81, 0x2, 0x2, 0x81e, 
			 0x81f, 0x5, 0x140, 0xa1, 0x2, 0x81f, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x820, 
			 0x821, 0x8, 0xa1, 0x1, 0x2, 0x821, 0x823, 0x5, 0x142, 0xa2, 0x2, 0x822, 
			 0x824, 0x7, 0x86, 0x2, 0x2, 0x823, 0x822, 0x3, 0x2, 0x2, 0x2, 0x823, 
			 0x824, 0x3, 0x2, 0x2, 0x2, 0x824, 0x82d, 0x3, 0x2, 0x2, 0x2, 0x825, 
			 0x826, 0xc, 0x3, 0x2, 0x2, 0x826, 0x827, 0x7, 0x7d, 0x2, 0x2, 0x827, 
			 0x829, 0x5, 0x142, 0xa2, 0x2, 0x828, 0x82a, 0x7, 0x86, 0x2, 0x2, 0x829, 
			 0x828, 0x3, 0x2, 0x2, 0x2, 0x829, 0x82a, 0x3, 0x2, 0x2, 0x2, 0x82a, 
			 0x82c, 0x3, 0x2, 0x2, 0x2, 0x82b, 0x825, 0x3, 0x2, 0x2, 0x2, 0x82c, 
			 0x82f, 0x3, 0x2, 0x2, 0x2, 0x82d, 0x82b, 0x3, 0x2, 0x2, 0x2, 0x82d, 
			 0x82e, 0x3, 0x2, 0x2, 0x2, 0x82e, 0x141, 0x3, 0x2, 0x2, 0x2, 0x82f, 
			 0x82d, 0x3, 0x2, 0x2, 0x2, 0x830, 0x832, 0x5, 0xd6, 0x6c, 0x2, 0x831, 
			 0x830, 0x3, 0x2, 0x2, 0x2, 0x831, 0x832, 0x3, 0x2, 0x2, 0x2, 0x832, 
			 0x833, 0x3, 0x2, 0x2, 0x2, 0x833, 0x846, 0x5, 0x146, 0xa4, 0x2, 0x834, 
			 0x836, 0x5, 0xd6, 0x6c, 0x2, 0x835, 0x834, 0x3, 0x2, 0x2, 0x2, 0x835, 
			 0x836, 0x3, 0x2, 0x2, 0x2, 0x836, 0x837, 0x3, 0x2, 0x2, 0x2, 0x837, 
			 0x839, 0x7, 0x51, 0x2, 0x2, 0x838, 0x83a, 0x5, 0x148, 0xa5, 0x2, 0x839, 
			 0x838, 0x3, 0x2, 0x2, 0x2, 0x839, 0x83a, 0x3, 0x2, 0x2, 0x2, 0x83a, 
			 0x83b, 0x3, 0x2, 0x2, 0x2, 0x83b, 0x846, 0x5, 0x146, 0xa4, 0x2, 0x83c, 
			 0x83e, 0x5, 0xd6, 0x6c, 0x2, 0x83d, 0x83c, 0x3, 0x2, 0x2, 0x2, 0x83d, 
			 0x83e, 0x3, 0x2, 0x2, 0x2, 0x83e, 0x83f, 0x3, 0x2, 0x2, 0x2, 0x83f, 
			 0x841, 0x5, 0x148, 0xa5, 0x2, 0x840, 0x842, 0x7, 0x51, 0x2, 0x2, 0x841, 
			 0x840, 0x3, 0x2, 0x2, 0x2, 0x841, 0x842, 0x3, 0x2, 0x2, 0x2, 0x842, 
			 0x843, 0x3, 0x2, 0x2, 0x2, 0x843, 0x844, 0x5, 0x146, 0xa4, 0x2, 0x844, 
			 0x846, 0x3, 0x2, 0x2, 0x2, 0x845, 0x831, 0x3, 0x2, 0x2, 0x2, 0x845, 
			 0x835, 0x3, 0x2, 0x2, 0x2, 0x845, 0x83d, 0x3, 0x2, 0x2, 0x2, 0x846, 
			 0x143, 0x3, 0x2, 0x2, 0x2, 0x847, 0x849, 0x5, 0xc, 0x7, 0x2, 0x848, 
			 0x847, 0x3, 0x2, 0x2, 0x2, 0x848, 0x849, 0x3, 0x2, 0x2, 0x2, 0x849, 
			 0x84a, 0x3, 0x2, 0x2, 0x2, 0x84a, 0x84d, 0x5, 0x124, 0x93, 0x2, 0x84b, 
			 0x84d, 0x5, 0xa2, 0x52, 0x2, 0x84c, 0x848, 0x3, 0x2, 0x2, 0x2, 0x84c, 
			 0x84b, 0x3, 0x2, 0x2, 0x2, 0x84d, 0x145, 0x3, 0x2, 0x2, 0x2, 0x84e, 
			 0x84f, 0x5, 0x144, 0xa3, 0x2, 0x84f, 0x147, 0x3, 0x2, 0x2, 0x2, 0x850, 
			 0x851, 0x9, 0xd, 0x2, 0x2, 0x851, 0x149, 0x3, 0x2, 0x2, 0x2, 0x852, 
			 0x853, 0x7, 0x35, 0x2, 0x2, 0x853, 0x854, 0x5, 0x14c, 0xa7, 0x2, 0x854, 
			 0x14b, 0x3, 0x2, 0x2, 0x2, 0x855, 0x857, 0x5, 0x9a, 0x4e, 0x2, 0x856, 
			 0x858, 0x5, 0x14e, 0xa8, 0x2, 0x857, 0x856, 0x3, 0x2, 0x2, 0x2, 0x857, 
			 0x858, 0x3, 0x2, 0x2, 0x2, 0x858, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x859, 
			 0x85b, 0x5, 0xfa, 0x7e, 0x2, 0x85a, 0x85c, 0x5, 0x14e, 0xa8, 0x2, 0x85b, 
			 0x85a, 0x3, 0x2, 0x2, 0x2, 0x85b, 0x85c, 0x3, 0x2, 0x2, 0x2, 0x85c, 
			 0x14f, 0x3, 0x2, 0x2, 0x2, 0x85d, 0x85e, 0x7, 0x81, 0x2, 0x2, 0x85e, 
			 0x85f, 0x5, 0x152, 0xaa, 0x2, 0x85f, 0x151, 0x3, 0x2, 0x2, 0x2, 0x860, 
			 0x862, 0x5, 0x154, 0xab, 0x2, 0x861, 0x863, 0x7, 0x86, 0x2, 0x2, 0x862, 
			 0x861, 0x3, 0x2, 0x2, 0x2, 0x862, 0x863, 0x3, 0x2, 0x2, 0x2, 0x863, 
			 0x86c, 0x3, 0x2, 0x2, 0x2, 0x864, 0x866, 0x5, 0x154, 0xab, 0x2, 0x865, 
			 0x867, 0x7, 0x86, 0x2, 0x2, 0x866, 0x865, 0x3, 0x2, 0x2, 0x2, 0x866, 
			 0x867, 0x3, 0x2, 0x2, 0x2, 0x867, 0x868, 0x3, 0x2, 0x2, 0x2, 0x868, 
			 0x869, 0x7, 0x7d, 0x2, 0x2, 0x869, 0x86a, 0x5, 0x152, 0xaa, 0x2, 0x86a, 
			 0x86c, 0x3, 0x2, 0x2, 0x2, 0x86b, 0x860, 0x3, 0x2, 0x2, 0x2, 0x86b, 
			 0x864, 0x3, 0x2, 0x2, 0x2, 0x86c, 0x153, 0x3, 0x2, 0x2, 0x2, 0x86d, 
			 0x86e, 0x5, 0x156, 0xac, 0x2, 0x86e, 0x870, 0x7, 0x56, 0x2, 0x2, 0x86f, 
			 0x871, 0x5, 0x26, 0x14, 0x2, 0x870, 0x86f, 0x3, 0x2, 0x2, 0x2, 0x870, 
			 0x871, 0x3, 0x2, 0x2, 0x2, 0x871, 0x872, 0x3, 0x2, 0x2, 0x2, 0x872, 
			 0x873, 0x7, 0x57, 0x2, 0x2, 0x873, 0x878, 0x3, 0x2, 0x2, 0x2, 0x874, 
			 0x875, 0x5, 0x156, 0xac, 0x2, 0x875, 0x876, 0x5, 0x122, 0x92, 0x2, 0x876, 
			 0x878, 0x3, 0x2, 0x2, 0x2, 0x877, 0x86d, 0x3, 0x2, 0x2, 0x2, 0x877, 
			 0x874, 0x3, 0x2, 0x2, 0x2, 0x878, 0x155, 0x3, 0x2, 0x2, 0x2, 0x879, 
			 0x87c, 0x5, 0x144, 0xa3, 0x2, 0x87a, 0x87c, 0x7, 0x87, 0x2, 0x2, 0x87b, 
			 0x879, 0x3, 0x2, 0x2, 0x2, 0x87b, 0x87a, 0x3, 0x2, 0x2, 0x2, 0x87c, 
			 0x157, 0x3, 0x2, 0x2, 0x2, 0x87d, 0x87e, 0x7, 0x35, 0x2, 0x2, 0x87e, 
			 0x87f, 0x5, 0x188, 0xc5, 0x2, 0x87f, 0x159, 0x3, 0x2, 0x2, 0x2, 0x880, 
			 0x881, 0x7, 0x35, 0x2, 0x2, 0x881, 0x882, 0x7, 0x90, 0x2, 0x2, 0x882, 
			 0x886, 0x7, 0x87, 0x2, 0x2, 0x883, 0x884, 0x7, 0x35, 0x2, 0x2, 0x884, 
			 0x886, 0x7, 0x93, 0x2, 0x2, 0x885, 0x880, 0x3, 0x2, 0x2, 0x2, 0x885, 
			 0x883, 0x3, 0x2, 0x2, 0x2, 0x886, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x887, 
			 0x888, 0x7, 0x45, 0x2, 0x2, 0x888, 0x889, 0x7, 0x67, 0x2, 0x2, 0x889, 
			 0x88a, 0x5, 0x15e, 0xb0, 0x2, 0x88a, 0x88b, 0x7, 0x68, 0x2, 0x2, 0x88b, 
			 0x88c, 0x5, 0x7e, 0x40, 0x2, 0x88c, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x88d, 
			 0x88e, 0x8, 0xb0, 0x1, 0x2, 0x88e, 0x88f, 0x5, 0x160, 0xb1, 0x2, 0x88f, 
			 0x895, 0x3, 0x2, 0x2, 0x2, 0x890, 0x891, 0xc, 0x3, 0x2, 0x2, 0x891, 
			 0x892, 0x7, 0x7d, 0x2, 0x2, 0x892, 0x894, 0x5, 0x160, 0xb1, 0x2, 0x893, 
			 0x890, 0x3, 0x2, 0x2, 0x2, 0x894, 0x897, 0x3, 0x2, 0x2, 0x2, 0x895, 
			 0x893, 0x3, 0x2, 0x2, 0x2, 0x895, 0x896, 0x3, 0x2, 0x2, 0x2, 0x896, 
			 0x15f, 0x3, 0x2, 0x2, 0x2, 0x897, 0x895, 0x3, 0x2, 0x2, 0x2, 0x898, 
			 0x89b, 0x5, 0x162, 0xb2, 0x2, 0x899, 0x89b, 0x5, 0x114, 0x8b, 0x2, 0x89a, 
			 0x898, 0x3, 0x2, 0x2, 0x2, 0x89a, 0x899, 0x3, 0x2, 0x2, 0x2, 0x89b, 
			 0x161, 0x3, 0x2, 0x2, 0x2, 0x89c, 0x89e, 0x7, 0x16, 0x2, 0x2, 0x89d, 
			 0x89f, 0x7, 0x86, 0x2, 0x2, 0x89e, 0x89d, 0x3, 0x2, 0x2, 0x2, 0x89e, 
			 0x89f, 0x3, 0x2, 0x2, 0x2, 0x89f, 0x8a1, 0x3, 0x2, 0x2, 0x2, 0x8a0, 
			 0x8a2, 0x7, 0x87, 0x2, 0x2, 0x8a1, 0x8a0, 0x3, 0x2, 0x2, 0x2, 0x8a1, 
			 0x8a2, 0x3, 0x2, 0x2, 0x2, 0x8a2, 0x8cd, 0x3, 0x2, 0x2, 0x2, 0x8a3, 
			 0x8a5, 0x7, 0x16, 0x2, 0x2, 0x8a4, 0x8a6, 0x7, 0x87, 0x2, 0x2, 0x8a5, 
			 0x8a4, 0x3, 0x2, 0x2, 0x2, 0x8a5, 0x8a6, 0x3, 0x2, 0x2, 0x2, 0x8a6, 
			 0x8a7, 0x3, 0x2, 0x2, 0x2, 0x8a7, 0x8a8, 0x7, 0x66, 0x2, 0x2, 0x8a8, 
			 0x8cd, 0x5, 0x104, 0x83, 0x2, 0x8a9, 0x8ab, 0x7, 0x4d, 0x2, 0x2, 0x8aa, 
			 0x8ac, 0x7, 0x86, 0x2, 0x2, 0x8ab, 0x8aa, 0x3, 0x2, 0x2, 0x2, 0x8ab, 
			 0x8ac, 0x3, 0x2, 0x2, 0x2, 0x8ac, 0x8ae, 0x3, 0x2, 0x2, 0x2, 0x8ad, 
			 0x8af, 0x7, 0x87, 0x2, 0x2, 0x8ae, 0x8ad, 0x3, 0x2, 0x2, 0x2, 0x8ae, 
			 0x8af, 0x3, 0x2, 0x2, 0x2, 0x8af, 0x8cd, 0x3, 0x2, 0x2, 0x2, 0x8b0, 
			 0x8b2, 0x7, 0x4d, 0x2, 0x2, 0x8b1, 0x8b3, 0x7, 0x87, 0x2, 0x2, 0x8b2, 
			 0x8b1, 0x3, 0x2, 0x2, 0x2, 0x8b2, 0x8b3, 0x3, 0x2, 0x2, 0x2, 0x8b3, 
			 0x8b4, 0x3, 0x2, 0x2, 0x2, 0x8b4, 0x8b5, 0x7, 0x66, 0x2, 0x2, 0x8b5, 
			 0x8cd, 0x5, 0x104, 0x83, 0x2, 0x8b6, 0x8b7, 0x7, 0x45, 0x2, 0x2, 0x8b7, 
			 0x8b8, 0x7, 0x67, 0x2, 0x2, 0x8b8, 0x8b9, 0x5, 0x15e, 0xb0, 0x2, 0x8b9, 
			 0x8ba, 0x7, 0x68, 0x2, 0x2, 0x8ba, 0x8bc, 0x7, 0x16, 0x2, 0x2, 0x8bb, 
			 0x8bd, 0x7, 0x86, 0x2, 0x2, 0x8bc, 0x8bb, 0x3, 0x2, 0x2, 0x2, 0x8bc, 
			 0x8bd, 0x3, 0x2, 0x2, 0x2, 0x8bd, 0x8bf, 0x3, 0x2, 0x2, 0x2, 0x8be, 
			 0x8c0, 0x7, 0x87, 0x2, 0x2, 0x8bf, 0x8be, 0x3, 0x2, 0x2, 0x2, 0x8bf, 
			 0x8c0, 0x3, 0x2, 0x2, 0x2, 0x8c0, 0x8cd, 0x3, 0x2, 0x2, 0x2, 0x8c1, 
			 0x8c2, 0x7, 0x45, 0x2, 0x2, 0x8c2, 0x8c3, 0x7, 0x67, 0x2, 0x2, 0x8c3, 
			 0x8c4, 0x5, 0x15e, 0xb0, 0x2, 0x8c4, 0x8c5, 0x7, 0x68, 0x2, 0x2, 0x8c5, 
			 0x8c7, 0x7, 0x16, 0x2, 0x2, 0x8c6, 0x8c8, 0x7, 0x87, 0x2, 0x2, 0x8c7, 
			 0x8c6, 0x3, 0x2, 0x2, 0x2, 0x8c7, 0x8c8, 0x3, 0x2, 0x2, 0x2, 0x8c8, 
			 0x8c9, 0x3, 0x2, 0x2, 0x2, 0x8c9, 0x8ca, 0x7, 0x66, 0x2, 0x2, 0x8ca, 
			 0x8cb, 0x5, 0x6, 0x4, 0x2, 0x8cb, 0x8cd, 0x3, 0x2, 0x2, 0x2, 0x8cc, 
			 0x89c, 0x3, 0x2, 0x2, 0x2, 0x8cc, 0x8a3, 0x3, 0x2, 0x2, 0x2, 0x8cc, 
			 0x8a9, 0x3, 0x2, 0x2, 0x2, 0x8cc, 0x8b0, 0x3, 0x2, 0x2, 0x2, 0x8cc, 
			 0x8b6, 0x3, 0x2, 0x2, 0x2, 0x8cc, 0x8c1, 0x3, 0x2, 0x2, 0x2, 0x8cd, 
			 0x163, 0x3, 0x2, 0x2, 0x2, 0x8ce, 0x8cf, 0x5, 0x168, 0xb5, 0x2, 0x8cf, 
			 0x8d1, 0x7, 0x67, 0x2, 0x2, 0x8d0, 0x8d2, 0x5, 0x16a, 0xb6, 0x2, 0x8d1, 
			 0x8d0, 0x3, 0x2, 0x2, 0x2, 0x8d1, 0x8d2, 0x3, 0x2, 0x2, 0x2, 0x8d2, 
			 0x8d3, 0x3, 0x2, 0x2, 0x2, 0x8d3, 0x8d4, 0x7, 0x68, 0x2, 0x2, 0x8d4, 
			 0x165, 0x3, 0x2, 0x2, 0x2, 0x8d5, 0x8e5, 0x5, 0x164, 0xb3, 0x2, 0x8d6, 
			 0x8d7, 0x5, 0x158, 0xad, 0x2, 0x8d7, 0x8d9, 0x7, 0x67, 0x2, 0x2, 0x8d8, 
			 0x8da, 0x5, 0x16a, 0xb6, 0x2, 0x8d9, 0x8d8, 0x3, 0x2, 0x2, 0x2, 0x8d9, 
			 0x8da, 0x3, 0x2, 0x2, 0x2, 0x8da, 0x8db, 0x3, 0x2, 0x2, 0x2, 0x8db, 
			 0x8dc, 0x7, 0x68, 0x2, 0x2, 0x8dc, 0x8e5, 0x3, 0x2, 0x2, 0x2, 0x8dd, 
			 0x8de, 0x5, 0x15a, 0xae, 0x2, 0x8de, 0x8e0, 0x7, 0x67, 0x2, 0x2, 0x8df, 
			 0x8e1, 0x5, 0x16a, 0xb6, 0x2, 0x8e0, 0x8df, 0x3, 0x2, 0x2, 0x2, 0x8e0, 
			 0x8e1, 0x3, 0x2, 0x2, 0x2, 0x8e1, 0x8e2, 0x3, 0x2, 0x2, 0x2, 0x8e2, 
			 0x8e3, 0x7, 0x68, 0x2, 0x2, 0x8e3, 0x8e5, 0x3, 0x2, 0x2, 0x2, 0x8e4, 
			 0x8d5, 0x3, 0x2, 0x2, 0x2, 0x8e4, 0x8d6, 0x3, 0x2, 0x2, 0x2, 0x8e4, 
			 0x8dd, 0x3, 0x2, 0x2, 0x2, 0x8e5, 0x167, 0x3, 0x2, 0x2, 0x2, 0x8e6, 
			 0x8e7, 0x7, 0x87, 0x2, 0x2, 0x8e7, 0x169, 0x3, 0x2, 0x2, 0x2, 0x8e8, 
			 0x8e9, 0x8, 0xb6, 0x1, 0x2, 0x8e9, 0x8eb, 0x5, 0x16c, 0xb7, 0x2, 0x8ea, 
			 0x8ec, 0x7, 0x86, 0x2, 0x2, 0x8eb, 0x8ea, 0x3, 0x2, 0x2, 0x2, 0x8eb, 
			 0x8ec, 0x3, 0x2, 0x2, 0x2, 0x8ec, 0x8f5, 0x3, 0x2, 0x2, 0x2, 0x8ed, 
			 0x8ee, 0xc, 0x3, 0x2, 0x2, 0x8ee, 0x8ef, 0x7, 0x7d, 0x2, 0x2, 0x8ef, 
			 0x8f1, 0x5, 0x16c, 0xb7, 0x2, 0x8f0, 0x8f2, 0x7, 0x86, 0x2, 0x2, 0x8f1, 
			 0x8f0, 0x3, 0x2, 0x2, 0x2, 0x8f1, 0x8f2, 0x3, 0x2, 0x2, 0x2, 0x8f2, 
			 0x8f4, 0x3, 0x2, 0x2, 0x2, 0x8f3, 0x8ed, 0x3, 0x2, 0x2, 0x2, 0x8f4, 
			 0x8f7, 0x3, 0x2, 0x2, 0x2, 0x8f5, 0x8f3, 0x3, 0x2, 0x2, 0x2, 0x8f5, 
			 0x8f6, 0x3, 0x2, 0x2, 0x2, 0x8f6, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x8f7, 
			 0x8f5, 0x3, 0x2, 0x2, 0x2, 0x8f8, 0x8fc, 0x5, 0x104, 0x83, 0x2, 0x8f9, 
			 0x8fc, 0x5, 0x60, 0x31, 0x2, 0x8fa, 0x8fc, 0x5, 0x6, 0x4, 0x2, 0x8fb, 
			 0x8f8, 0x3, 0x2, 0x2, 0x2, 0x8fb, 0x8f9, 0x3, 0x2, 0x2, 0x2, 0x8fb, 
			 0x8fa, 0x3, 0x2, 0x2, 0x2, 0x8fc, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x8fd, 
			 0x8fe, 0x7, 0x4d, 0x2, 0x2, 0x8fe, 0x8ff, 0x5, 0xc, 0x7, 0x2, 0x8ff, 
			 0x900, 0x7, 0x87, 0x2, 0x2, 0x900, 0x909, 0x3, 0x2, 0x2, 0x2, 0x901, 
			 0x902, 0x7, 0x4d, 0x2, 0x2, 0x902, 0x904, 0x5, 0xc, 0x7, 0x2, 0x903, 
			 0x905, 0x7, 0x45, 0x2, 0x2, 0x904, 0x903, 0x3, 0x2, 0x2, 0x2, 0x904, 
			 0x905, 0x3, 0x2, 0x2, 0x2, 0x905, 0x906, 0x3, 0x2, 0x2, 0x2, 0x906, 
			 0x907, 0x5, 0x164, 0xb3, 0x2, 0x907, 0x909, 0x3, 0x2, 0x2, 0x2, 0x908, 
			 0x8fd, 0x3, 0x2, 0x2, 0x2, 0x908, 0x901, 0x3, 0x2, 0x2, 0x2, 0x909, 
			 0x16f, 0x3, 0x2, 0x2, 0x2, 0x90a, 0x90c, 0x7, 0x25, 0x2, 0x2, 0x90b, 
			 0x90a, 0x3, 0x2, 0x2, 0x2, 0x90b, 0x90c, 0x3, 0x2, 0x2, 0x2, 0x90c, 
			 0x90d, 0x3, 0x2, 0x2, 0x2, 0x90d, 0x90e, 0x7, 0x45, 0x2, 0x2, 0x90e, 
			 0x90f, 0x5, 0x7e, 0x40, 0x2, 0x90f, 0x171, 0x3, 0x2, 0x2, 0x2, 0x910, 
			 0x911, 0x7, 0x45, 0x2, 0x2, 0x911, 0x912, 0x7, 0x67, 0x2, 0x2, 0x912, 
			 0x913, 0x7, 0x68, 0x2, 0x2, 0x913, 0x914, 0x5, 0x7e, 0x40, 0x2, 0x914, 
			 0x173, 0x3, 0x2, 0x2, 0x2, 0x915, 0x916, 0x7, 0x4a, 0x2, 0x2, 0x916, 
			 0x917, 0x5, 0x68, 0x35, 0x2, 0x917, 0x918, 0x5, 0x178, 0xbd, 0x2, 0x918, 
			 0x175, 0x3, 0x2, 0x2, 0x2, 0x919, 0x91b, 0x7, 0x4a, 0x2, 0x2, 0x91a, 
			 0x91c, 0x5, 0x150, 0xa9, 0x2, 0x91b, 0x91a, 0x3, 0x2, 0x2, 0x2, 0x91b, 
			 0x91c, 0x3, 0x2, 0x2, 0x2, 0x91c, 0x91d, 0x3, 0x2, 0x2, 0x2, 0x91d, 
			 0x91e, 0x5, 0x68, 0x35, 0x2, 0x91e, 0x91f, 0x5, 0x178, 0xbd, 0x2, 0x91f, 
			 0x177, 0x3, 0x2, 0x2, 0x2, 0x920, 0x922, 0x5, 0x17a, 0xbe, 0x2, 0x921, 
			 0x923, 0x5, 0x178, 0xbd, 0x2, 0x922, 0x921, 0x3, 0x2, 0x2, 0x2, 0x922, 
			 0x923, 0x3, 0x2, 0x2, 0x2, 0x923, 0x179, 0x3, 0x2, 0x2, 0x2, 0x924, 
			 0x925, 0x7, 0x12, 0x2, 0x2, 0x925, 0x926, 0x7, 0x56, 0x2, 0x2, 0x926, 
			 0x927, 0x5, 0x17c, 0xbf, 0x2, 0x927, 0x928, 0x7, 0x57, 0x2, 0x2, 0x928, 
			 0x929, 0x5, 0x68, 0x35, 0x2, 0x929, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x92a, 
			 0x92c, 0x5, 0xd6, 0x6c, 0x2, 0x92b, 0x92a, 0x3, 0x2, 0x2, 0x2, 0x92b, 
			 0x92c, 0x3, 0x2, 0x2, 0x2, 0x92c, 0x92d, 0x3, 0x2, 0x2, 0x2, 0x92d, 
			 0x92e, 0x5, 0x9a, 0x4e, 0x2, 0x92e, 0x92f, 0x5, 0xf0, 0x79, 0x2, 0x92f, 
			 0x939, 0x3, 0x2, 0x2, 0x2, 0x930, 0x932, 0x5, 0xd6, 0x6c, 0x2, 0x931, 
			 0x930, 0x3, 0x2, 0x2, 0x2, 0x931, 0x932, 0x3, 0x2, 0x2, 0x2, 0x932, 
			 0x933, 0x3, 0x2, 0x2, 0x2, 0x933, 0x935, 0x5, 0x9a, 0x4e, 0x2, 0x934, 
			 0x936, 0x5, 0x106, 0x84, 0x2, 0x935, 0x934, 0x3, 0x2, 0x2, 0x2, 0x935, 
			 0x936, 0x3, 0x2, 0x2, 0x2, 0x936, 0x939, 0x3, 0x2, 0x2, 0x2, 0x937, 
			 0x939, 0x7, 0x86, 0x2, 0x2, 0x938, 0x92b, 0x3, 0x2, 0x2, 0x2, 0x938, 
			 0x931, 0x3, 0x2, 0x2, 0x2, 0x938, 0x937, 0x3, 0x2, 0x2, 0x2, 0x939, 
			 0x17d, 0x3, 0x2, 0x2, 0x2, 0x93a, 0x93c, 0x7, 0x48, 0x2, 0x2, 0x93b, 
			 0x93d, 0x5, 0x5a, 0x2e, 0x2, 0x93c, 0x93b, 0x3, 0x2, 0x2, 0x2, 0x93c, 
			 0x93d, 0x3, 0x2, 0x2, 0x2, 0x93d, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x93e, 
			 0x941, 0x5, 0x182, 0xc2, 0x2, 0x93f, 0x941, 0x5, 0x186, 0xc4, 0x2, 0x940, 
			 0x93e, 0x3, 0x2, 0x2, 0x2, 0x940, 0x93f, 0x3, 0x2, 0x2, 0x2, 0x941, 
			 0x181, 0x3, 0x2, 0x2, 0x2, 0x942, 0x943, 0x7, 0x48, 0x2, 0x2, 0x943, 
			 0x945, 0x7, 0x56, 0x2, 0x2, 0x944, 0x946, 0x5, 0x184, 0xc3, 0x2, 0x945, 
			 0x944, 0x3, 0x2, 0x2, 0x2, 0x945, 0x946, 0x3, 0x2, 0x2, 0x2, 0x946, 
			 0x947, 0x3, 0x2, 0x2, 0x2, 0x947, 0x948, 0x7, 0x57, 0x2, 0x2, 0x948, 
			 0x183, 0x3, 0x2, 0x2, 0x2, 0x949, 0x94a, 0x8, 0xc3, 0x1, 0x2, 0x94a, 
			 0x94c, 0x5, 0x104, 0x83, 0x2, 0x94b, 0x94d, 0x7, 0x86, 0x2, 0x2, 0x94c, 
			 0x94b, 0x3, 0x2, 0x2, 0x2, 0x94c, 0x94d, 0x3, 0x2, 0x2, 0x2, 0x94d, 
			 0x956, 0x3, 0x2, 0x2, 0x2, 0x94e, 0x94f, 0xc, 0x3, 0x2, 0x2, 0x94f, 
			 0x950, 0x7, 0x7d, 0x2, 0x2, 0x950, 0x952, 0x5, 0x104, 0x83, 0x2, 0x951, 
			 0x953, 0x7, 0x86, 0x2, 0x2, 0x952, 0x951, 0x3, 0x2, 0x2, 0x2, 0x952, 
			 0x953, 0x3, 0x2, 0x2, 0x2, 0x953, 0x955, 0x3, 0x2, 0x2, 0x2, 0x954, 
			 0x94e, 0x3, 0x2, 0x2, 0x2, 0x955, 0x958, 0x3, 0x2, 0x2, 0x2, 0x956, 
			 0x954, 0x3, 0x2, 0x2, 0x2, 0x956, 0x957, 0x3, 0x2, 0x2, 0x2, 0x957, 
			 0x185, 0x3, 0x2, 0x2, 0x2, 0x958, 0x956, 0x3, 0x2, 0x2, 0x2, 0x959, 
			 0x95a, 0x7, 0x33, 0x2, 0x2, 0x95a, 0x95b, 0x7, 0x56, 0x2, 0x2, 0x95b, 
			 0x95c, 0x5, 0x60, 0x31, 0x2, 0x95c, 0x95d, 0x7, 0x57, 0x2, 0x2, 0x95d, 
			 0x960, 0x3, 0x2, 0x2, 0x2, 0x95e, 0x960, 0x7, 0x33, 0x2, 0x2, 0x95f, 
			 0x959, 0x3, 0x2, 0x2, 0x2, 0x95f, 0x95e, 0x3, 0x2, 0x2, 0x2, 0x960, 
			 0x187, 0x3, 0x2, 0x2, 0x2, 0x961, 0x995, 0x7, 0x32, 0x2, 0x2, 0x962, 
			 0x995, 0x7, 0x1d, 0x2, 0x2, 0x963, 0x964, 0x7, 0x32, 0x2, 0x2, 0x964, 
			 0x965, 0x7, 0x58, 0x2, 0x2, 0x965, 0x995, 0x7, 0x59, 0x2, 0x2, 0x966, 
			 0x967, 0x7, 0x1d, 0x2, 0x2, 0x967, 0x968, 0x7, 0x58, 0x2, 0x2, 0x968, 
			 0x995, 0x7, 0x59, 0x2, 0x2, 0x969, 0x995, 0x7, 0x5c, 0x2, 0x2, 0x96a, 
			 0x995, 0x7, 0x5d, 0x2, 0x2, 0x96b, 0x995, 0x7, 0x5e, 0x2, 0x2, 0x96c, 
			 0x995, 0x7, 0x5f, 0x2, 0x2, 0x96d, 0x995, 0x7, 0x60, 0x2, 0x2, 0x96e, 
			 0x995, 0x7, 0x61, 0x2, 0x2, 0x96f, 0x995, 0x7, 0x62, 0x2, 0x2, 0x970, 
			 0x995, 0x7, 0x63, 0x2, 0x2, 0x971, 0x995, 0x7, 0x64, 0x2, 0x2, 0x972, 
			 0x995, 0x7, 0x3, 0x2, 0x2, 0x973, 0x995, 0x7, 0x4, 0x2, 0x2, 0x974, 
			 0x995, 0x7, 0x66, 0x2, 0x2, 0x975, 0x995, 0x7, 0x67, 0x2, 0x2, 0x976, 
			 0x995, 0x7, 0x68, 0x2, 0x2, 0x977, 0x995, 0x7, 0x69, 0x2, 0x2, 0x978, 
			 0x995, 0x7, 0x6a, 0x2, 0x2, 0x979, 0x995, 0x7, 0x6b, 0x2, 0x2, 0x97a, 
			 0x995, 0x7, 0x6c, 0x2, 0x2, 0x97b, 0x995, 0x7, 0x6d, 0x2, 0x2, 0x97c, 
			 0x995, 0x7, 0x6e, 0x2, 0x2, 0x97d, 0x995, 0x7, 0x6f, 0x2, 0x2, 0x97e, 
			 0x995, 0x7, 0x70, 0x2, 0x2, 0x97f, 0x995, 0x7, 0x71, 0x2, 0x2, 0x980, 
			 0x995, 0x7, 0x72, 0x2, 0x2, 0x981, 0x995, 0x7, 0x74, 0x2, 0x2, 0x982, 
			 0x995, 0x7, 0x73, 0x2, 0x2, 0x983, 0x995, 0x7, 0x75, 0x2, 0x2, 0x984, 
			 0x995, 0x7, 0x76, 0x2, 0x2, 0x985, 0x995, 0x7, 0x77, 0x2, 0x2, 0x986, 
			 0x995, 0x7, 0x78, 0x2, 0x2, 0x987, 0x995, 0x7, 0x5, 0x2, 0x2, 0x988, 
			 0x995, 0x7, 0x6, 0x2, 0x2, 0x989, 0x995, 0x7, 0x7, 0x2, 0x2, 0x98a, 
			 0x995, 0x7, 0x8, 0x2, 0x2, 0x98b, 0x995, 0x7, 0x7b, 0x2, 0x2, 0x98c, 
			 0x995, 0x7, 0x7c, 0x2, 0x2, 0x98d, 0x995, 0x7, 0x7d, 0x2, 0x2, 0x98e, 
			 0x995, 0x7, 0x7e, 0x2, 0x2, 0x98f, 0x995, 0x7, 0x7f, 0x2, 0x2, 0x990, 
			 0x991, 0x7, 0x56, 0x2, 0x2, 0x991, 0x995, 0x7, 0x57, 0x2, 0x2, 0x992, 
			 0x993, 0x7, 0x58, 0x2, 0x2, 0x993, 0x995, 0x7, 0x59, 0x2, 0x2, 0x994, 
			 0x961, 0x3, 0x2, 0x2, 0x2, 0x994, 0x962, 0x3, 0x2, 0x2, 0x2, 0x994, 
			 0x963, 0x3, 0x2, 0x2, 0x2, 0x994, 0x966, 0x3, 0x2, 0x2, 0x2, 0x994, 
			 0x969, 0x3, 0x2, 0x2, 0x2, 0x994, 0x96a, 0x3, 0x2, 0x2, 0x2, 0x994, 
			 0x96b, 0x3, 0x2, 0x2, 0x2, 0x994, 0x96c, 0x3, 0x2, 0x2, 0x2, 0x994, 
			 0x96d, 0x3, 0x2, 0x2, 0x2, 0x994, 0x96e, 0x3, 0x2, 0x2, 0x2, 0x994, 
			 0x96f, 0x3, 0x2, 0x2, 0x2, 0x994, 0x970, 0x3, 0x2, 0x2, 0x2, 0x994, 
			 0x971, 0x3, 0x2, 0x2, 0x2, 0x994, 0x972, 0x3, 0x2, 0x2, 0x2, 0x994, 
			 0x973, 0x3, 0x2, 0x2, 0x2, 0x994, 0x974, 0x3, 0x2, 0x2, 0x2, 0x994, 
			 0x975, 0x3, 0x2, 0x2, 0x2, 0x994, 0x976, 0x3, 0x2, 0x2, 0x2, 0x994, 
			 0x977, 0x3, 0x2, 0x2, 0x2, 0x994, 0x978, 0x3, 0x2, 
	};
	static uint16_t serializedATNSegment1[] =
	{
		0x2, 0x2, 0x994, 0x979, 0x3, 0x2, 0x2, 0x2, 0x994, 0x97a, 0x3, 0x2, 0x2, 
			 0x2, 0x994, 0x97b, 0x3, 0x2, 0x2, 0x2, 0x994, 0x97c, 0x3, 0x2, 0x2, 
			 0x2, 0x994, 0x97d, 0x3, 0x2, 0x2, 0x2, 0x994, 0x97e, 0x3, 0x2, 0x2, 
			 0x2, 0x994, 0x97f, 0x3, 0x2, 0x2, 0x2, 0x994, 0x980, 0x3, 0x2, 0x2, 
			 0x2, 0x994, 0x981, 0x3, 0x2, 0x2, 0x2, 0x994, 0x982, 0x3, 0x2, 0x2, 
			 0x2, 0x994, 0x983, 0x3, 0x2, 0x2, 0x2, 0x994, 0x984, 0x3, 0x2, 0x2, 
			 0x2, 0x994, 0x985, 0x3, 0x2, 0x2, 0x2, 0x994, 0x986, 0x3, 0x2, 0x2, 
			 0x2, 0x994, 0x987, 0x3, 0x2, 0x2, 0x2, 0x994, 0x988, 0x3, 0x2, 0x2, 
			 0x2, 0x994, 0x989, 0x3, 0x2, 0x2, 0x2, 0x994, 0x98a, 0x3, 0x2, 0x2, 
			 0x2, 0x994, 0x98b, 0x3, 0x2, 0x2, 0x2, 0x994, 0x98c, 0x3, 0x2, 0x2, 
			 0x2, 0x994, 0x98d, 0x3, 0x2, 0x2, 0x2, 0x994, 0x98e, 0x3, 0x2, 0x2, 
			 0x2, 0x994, 0x98f, 0x3, 0x2, 0x2, 0x2, 0x994, 0x990, 0x3, 0x2, 0x2, 
			 0x2, 0x994, 0x992, 0x3, 0x2, 0x2, 0x2, 0x995, 0x189, 0x3, 0x2, 0x2, 
			 0x2, 0x996, 0x99e, 0x7, 0x88, 0x2, 0x2, 0x997, 0x99e, 0x7, 0x8e, 0x2, 
			 0x2, 0x998, 0x99e, 0x7, 0x8f, 0x2, 0x2, 0x999, 0x99e, 0x7, 0x90, 0x2, 
			 0x2, 0x99a, 0x99e, 0x5, 0x18c, 0xc7, 0x2, 0x99b, 0x99e, 0x5, 0x18e, 
			 0xc8, 0x2, 0x99c, 0x99e, 0x5, 0x190, 0xc9, 0x2, 0x99d, 0x996, 0x3, 0x2, 
			 0x2, 0x2, 0x99d, 0x997, 0x3, 0x2, 0x2, 0x2, 0x99d, 0x998, 0x3, 0x2, 
			 0x2, 0x2, 0x99d, 0x999, 0x3, 0x2, 0x2, 0x2, 0x99d, 0x99a, 0x3, 0x2, 
			 0x2, 0x2, 0x99d, 0x99b, 0x3, 0x2, 0x2, 0x2, 0x99d, 0x99c, 0x3, 0x2, 
			 0x2, 0x2, 0x99e, 0x18b, 0x3, 0x2, 0x2, 0x2, 0x99f, 0x9a0, 0x9, 0xe, 
			 0x2, 0x2, 0x9a0, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x9a1, 0x9a2, 0x7, 0x34, 
			 0x2, 0x2, 0x9a2, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x9a3, 0x9a4, 0x9, 0xf, 
			 0x2, 0x2, 0x9a4, 0x191, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x193, 0x19f, 0x1a3, 
			 0x1ae, 0x1b2, 0x1c1, 0x1c8, 0x1cd, 0x1cf, 0x1d4, 0x1da, 0x1e4, 0x1eb, 
			 0x1f1, 0x1f5, 0x1fa, 0x200, 0x207, 0x20d, 0x210, 0x213, 0x216, 0x21d, 
			 0x224, 0x258, 0x267, 0x26d, 0x273, 0x280, 0x282, 0x28c, 0x29b, 0x2a1, 
			 0x2bf, 0x2c4, 0x2c8, 0x2cc, 0x2cf, 0x2d3, 0x2d9, 0x2db, 0x2e3, 0x2e7, 
			 0x2ea, 0x2f1, 0x2f8, 0x2fc, 0x301, 0x305, 0x308, 0x30d, 0x313, 0x320, 
			 0x32b, 0x32d, 0x33c, 0x33e, 0x34a, 0x34c, 0x358, 0x36c, 0x36e, 0x37a, 
			 0x37c, 0x387, 0x392, 0x39d, 0x3a9, 0x3ab, 0x3b7, 0x3b9, 0x3c3, 0x3cb, 
			 0x3d7, 0x3de, 0x3e2, 0x3e6, 0x3ea, 0x3ee, 0x3f3, 0x3f6, 0x3f9, 0x3ff, 
			 0x407, 0x40c, 0x40f, 0x415, 0x420, 0x437, 0x43b, 0x443, 0x449, 0x45d, 
			 0x461, 0x46e, 0x472, 0x475, 0x47c, 0x484, 0x48e, 0x499, 0x4a5, 0x4af, 
			 0x4b4, 0x4bb, 0x4be, 0x4c3, 0x4c8, 0x4dd, 0x4e1, 0x4e6, 0x4f1, 0x4f7, 
			 0x4fb, 0x500, 0x504, 0x509, 0x50c, 0x522, 0x528, 0x533, 0x537, 0x53a, 
			 0x544, 0x54a, 0x54d, 0x554, 0x55e, 0x562, 0x565, 0x568, 0x56c, 0x571, 
			 0x573, 0x577, 0x57b, 0x584, 0x591, 0x599, 0x59f, 0x5a5, 0x5a9, 0x5ac, 
			 0x5b5, 0x5be, 0x5c6, 0x5d1, 0x5d7, 0x5e2, 0x5e5, 0x5ea, 0x5f9, 0x5ff, 
			 0x608, 0x612, 0x618, 0x620, 0x624, 0x628, 0x62d, 0x632, 0x639, 0x63b, 
			 0x640, 0x644, 0x652, 0x658, 0x66a, 0x66c, 0x676, 0x67b, 0x682, 0x688, 
			 0x68d, 0x693, 0x69a, 0x69e, 0x6a0, 0x6a2, 0x6a9, 0x6ac, 0x6af, 0x6b2, 
			 0x6b7, 0x6bb, 0x6be, 0x6c2, 0x6c6, 0x6cb, 0x6ce, 0x6d0, 0x6d4, 0x6db, 
			 0x6e1, 0x6e5, 0x6eb, 0x6f0, 0x6f2, 0x6f8, 0x6fc, 0x702, 0x709, 0x70d, 
			 0x70f, 0x711, 0x718, 0x722, 0x726, 0x728, 0x72a, 0x72e, 0x731, 0x737, 
			 0x741, 0x745, 0x74b, 0x753, 0x757, 0x75a, 0x75e, 0x763, 0x766, 0x769, 
			 0x76d, 0x772, 0x77c, 0x783, 0x788, 0x78c, 0x791, 0x797, 0x79b, 0x7a1, 
			 0x7a7, 0x7ab, 0x7b0, 0x7b6, 0x7ba, 0x7bd, 0x7c1, 0x7c4, 0x7c6, 0x7c9, 
			 0x7d3, 0x7d8, 0x7da, 0x7dd, 0x7e0, 0x7e3, 0x7ec, 0x7f6, 0x7fb, 0x7fe, 
			 0x802, 0x805, 0x808, 0x80c, 0x815, 0x823, 0x829, 0x82d, 0x831, 0x835, 
			 0x839, 0x83d, 0x841, 0x845, 0x848, 0x84c, 0x857, 0x85b, 0x862, 0x866, 
			 0x86b, 0x870, 0x877, 0x87b, 0x885, 0x895, 0x89a, 0x89e, 0x8a1, 0x8a5, 
			 0x8ab, 0x8ae, 0x8b2, 0x8bc, 0x8bf, 0x8c7, 0x8cc, 0x8d1, 0x8d9, 0x8e0, 
			 0x8e4, 0x8eb, 0x8f1, 0x8f5, 0x8fb, 0x904, 0x908, 0x90b, 0x91b, 0x922, 
			 0x92b, 0x931, 0x935, 0x938, 0x93c, 0x940, 0x945, 0x94c, 0x952, 0x956, 
			 0x95f, 0x994, 0x99d, 
	};

	_serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
		serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));
	_serializedATN.insert(_serializedATN.end(), serializedATNSegment1,
		serializedATNSegment1 + sizeof(serializedATNSegment1) / sizeof(serializedATNSegment1[0]));


	atn::ATNDeserializer deserializer;
	_atn = deserializer.deserialize(_serializedATN);

	size_t count = _atn.getNumberOfDecisions();
	_decisionToDFA.reserve(count);
	for (size_t i = 0; i < count; i++)
	{ 
		_decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
	}
}

CPP14Parser::Initializer CPP14Parser::_init;
