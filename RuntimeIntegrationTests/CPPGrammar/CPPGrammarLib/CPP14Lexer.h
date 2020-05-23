
// Generated from D:\Programming\antlr4\RuntimeIntegrationTests\CPPGrammar\CPPGrammarLib\CPP14.g4 by ANTLR 4.7.2

#pragma once
#include <iostream>


#include "antlr4-runtime.h"




class  CPP14Lexer : public antlr4::Lexer
{
public:
	enum
{
		T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, MultiLineMacro = 7, 
		Directive = 8, Alignas = 9, Alignof = 10, Asm = 11, Auto = 12, Bool = 13, 
		Break = 14, Case = 15, Catch = 16, Char = 17, Char16 = 18, Char32 = 19, 
		Class = 20, Const = 21, Constexpr = 22, Const_cast = 23, Continue = 24, 
		Decltype = 25, Default = 26, Delete = 27, Do = 28, Double = 29, Dynamic_cast = 30, 
		Else = 31, Enum = 32, Explicit = 33, Export = 34, Extern = 35, False = 36, 
		Final = 37, Float = 38, For = 39, Friend = 40, Goto = 41, If = 42, Inline = 43, 
		Int = 44, Long = 45, Mutable = 46, Namespace = 47, New = 48, Noexcept = 49, 
		Nullptr = 50, Operator = 51, Override = 52, Private = 53, Protected = 54, 
		Public = 55, Register = 56, Reinterpret_cast = 57, Return = 58, Short = 59, 
		Signed = 60, Sizeof = 61, Static = 62, Static_assert = 63, Static_cast = 64, 
		Struct = 65, Switch = 66, Template = 67, This = 68, Thread_local = 69, 
		Throw = 70, True = 71, Try = 72, Typedef = 73, Typeid_ = 74, Typename_ = 75, 
		Union = 76, Unsigned = 77, Using = 78, Virtual = 79, Void = 80, Volatile = 81, 
		Wchar = 82, While = 83, LeftParen = 84, RightParen = 85, LeftBracket = 86, 
		RightBracket = 87, LeftBrace = 88, RightBrace = 89, Plus = 90, Minus = 91, 
		Star = 92, Div = 93, Mod = 94, Caret = 95, And = 96, Or = 97, Tilde = 98, 
		Not = 99, Assign = 100, Less = 101, PlusAssign = 102, MinusAssign = 103, 
		StarAssign = 104, DivAssign = 105, ModAssign = 106, XorAssign = 107, AndAssign = 108, 
		OrAssign = 109, LeftShift = 110, LeftShiftAssign = 111, Equal = 112, NotEqual = 113, 
		LessEqual = 114, GreaterEqual = 115, AndAnd = 116, OrOr = 117, PlusPlus = 118, 
		MinusMinus = 119, Comma = 120, ArrowStar = 121, Arrow = 122, Question = 123, 
		Colon = 124, Doublecolon = 125, Semi = 126, Dot = 127, DotStar = 128, 
		Ellipsis = 129, Identifier = 130, Integerliteral = 131, Decimalliteral = 132, 
		Octalliteral = 133, Hexadecimalliteral = 134, Binaryliteral = 135, Integersuffix = 136, 
		Characterliteral = 137, Floatingliteral = 138, Stringliteral = 139, Userdefinedintegerliteral = 140, 
		Userdefinedfloatingliteral = 141, Userdefinedstringliteral = 142, Userdefinedcharacterliteral = 143, 
		Whitespace = 144, Newline = 145, BlockComment = 146, LineComment = 147, 
		GreaterThan = 148
	};

	CPP14Lexer(antlr4::CharStream *input);

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

