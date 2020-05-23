
// Generated from D:\Programming\antlr4\RuntimeIntegrationTests\TreeCloning\CloningTestLib\CloningTest.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  CloningTestParser : public antlr4::Parser
{
public:
	enum
{
		T__0 = 1, T__1 = 2, T__2 = 3, DIGIT = 4
	};

	enum
{
		RuleExpression = 0, RuleMultiplication = 1, RuleNumber = 2
	};

	CloningTestParser(antlr4::TokenStream *input);

	std::string getGrammarFileName() const final;
	const antlr4::atn::ATN& getATN() const noexcept final
{ return _atn; };
	const std::vector<std::string_view>& getTokenNames() const final
{ return _tokenNames; }; // deprecated: use vocabulary instead.
	const std::vector<std::string_view>& getRuleNames() const final;
	antlr4::dfa::Vocabulary& getVocabulary() const final;


	class ExpressionContext;
	class MultiplicationContext;
	class NumberContext; 

	class  ExpressionContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		ExpressionContext() = default;
		void copyFrom(ExpressionContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		NumberContext *number();
		MultiplicationContext *multiplication();
		std::vector<ExpressionContext *> expression();
		ExpressionContext* expression(size_t i);

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ExpressionContext* expression();
	ExpressionContext* expression(int precedence, antlr4::ParserRuleContext *parent);
	std::unique_ptr<ExpressionContext> parseexpression();
	class  MultiplicationContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		MultiplicationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		MultiplicationContext() = default;
		void copyFrom(MultiplicationContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		NumberContext *number();
		ExpressionContext *expression();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	MultiplicationContext* multiplication(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<MultiplicationContext> parsemultiplication();

	class  NumberContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		NumberContext() = default;
		void copyFrom(NumberContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		std::vector<antlr4::tree::TerminalNode *> DIGIT();
		antlr4::tree::TerminalNode* DIGIT(size_t i);

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	NumberContext* number(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<NumberContext> parsenumber();


	bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) final;
	bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);

private:
	static std::vector<antlr4::dfa::DFA> _decisionToDFA;
	static antlr4::atn::PredictionContextCache _sharedContextCache;
	static std::vector<std::string_view> _ruleNames;
	static std::vector<std::string_view> _tokenNames;

	static std::vector<std::string_view> _literalNames;
	static std::vector<std::string_view> _symbolicNames;
	static antlr4::dfa::Vocabulary _vocabulary;
	static antlr4::atn::ATN _atn;
	static std::vector<uint16_t> _serializedATN;


	struct Initializer
{
		Initializer();
	};
	static Initializer _init;
};

