
// Generated from D:\Programming\antlr4\RuntimeIntegrationTests\CPPGrammar\CPPGrammarLib\CPP14.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  CPP14Parser : public antlr4::Parser
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
		Not = 99, Assign = 100, Less = 101, Greater = 102, PlusAssign = 103, MinusAssign = 104, 
		StarAssign = 105, DivAssign = 106, ModAssign = 107, XorAssign = 108, AndAssign = 109, 
		OrAssign = 110, LeftShift = 111, RightShift = 112, LeftShiftAssign = 113, 
		RightShiftAssign = 114, Equal = 115, NotEqual = 116, LessEqual = 117, 
		GreaterEqual = 118, AndAnd = 119, OrOr = 120, PlusPlus = 121, MinusMinus = 122, 
		Comma = 123, ArrowStar = 124, Arrow = 125, Question = 126, Colon = 127, 
		Doublecolon = 128, Semi = 129, Dot = 130, DotStar = 131, Ellipsis = 132, 
		Identifier = 133, Integerliteral = 134, Decimalliteral = 135, Octalliteral = 136, 
		Hexadecimalliteral = 137, Binaryliteral = 138, Integersuffix = 139, Characterliteral = 140, 
		Floatingliteral = 141, Stringliteral = 142, Userdefinedintegerliteral = 143, 
		Userdefinedfloatingliteral = 144, Userdefinedstringliteral = 145, Userdefinedcharacterliteral = 146, 
		Whitespace = 147, Newline = 148, BlockComment = 149, LineComment = 150
	};

	enum
{
		RuleTranslationunit = 0, RulePrimaryexpression = 1, RuleIdexpression = 2, 
		RuleUnqualifiedid = 3, RuleQualifiedid = 4, RuleNestednamespecifier = 5, 
		RuleLambdaexpression = 6, RuleLambdaintroducer = 7, RuleLambdacapture = 8, 
		RuleCapturedefault = 9, RuleCapturelist = 10, RuleCapture = 11, RuleSimplecapture = 12, 
		RuleInitcapture = 13, RuleLambdadeclarator = 14, RulePostfixexpression = 15, 
		RuleTypeidofexpr = 16, RuleTypeidofthetypeid = 17, RuleExpressionlist = 18, 
		RulePseudodestructorname = 19, RuleUnaryexpression = 20, RuleUnaryoperator = 21, 
		RuleNewexpression = 22, RuleNewplacement = 23, RuleNewtypeid = 24, RuleNewdeclarator = 25, 
		RuleNoptrnewdeclarator = 26, RuleNewinitializer = 27, RuleDeleteexpression = 28, 
		RuleNoexceptexpression = 29, RuleCastexpression = 30, RulePmexpression = 31, 
		RuleMultiplicativeexpression = 32, RuleAdditiveexpression = 33, RuleShiftexpression = 34, 
		RuleShiftoperator = 35, RuleRelationalexpression = 36, RuleEqualityexpression = 37, 
		RuleAndexpression = 38, RuleExclusiveorexpression = 39, RuleInclusiveorexpression = 40, 
		RuleLogicalandexpression = 41, RuleLogicalorexpression = 42, RuleConditionalexpression = 43, 
		RuleAssignmentexpression = 44, RuleAssignmentoperator = 45, RuleExpression = 46, 
		RuleConstantexpression = 47, RuleStatement = 48, RuleLabeledstatement = 49, 
		RuleExpressionstatement = 50, RuleCompoundstatement = 51, RuleStatementseq = 52, 
		RuleSelectionstatement = 53, RuleCondition = 54, RuleIterationstatement = 55, 
		RuleForinitstatement = 56, RuleForrangedeclaration = 57, RuleForrangeinitializer = 58, 
		RuleJumpstatement = 59, RuleDeclarationstatement = 60, RuleDeclarationseq = 61, 
		RuleDeclaration = 62, RuleBlockdeclaration = 63, RuleAliasdeclaration = 64, 
		RuleSimpledeclaration = 65, RuleStatic_assertdeclaration = 66, RuleEmptydeclaration = 67, 
		RuleAttributedeclaration = 68, RuleDeclspecifier = 69, RuleDeclspecifierseq = 70, 
		RuleStorageclassspecifier = 71, RuleFunctionspecifier = 72, RuleTypedefname = 73, 
		RuleTypespecifier = 74, RuleTrailingtypespecifier = 75, RuleTypespecifierseq = 76, 
		RuleTrailingtypespecifierseq = 77, RuleSimpletypespecifier = 78, RuleThetypename = 79, 
		RuleDecltypespecifier = 80, RuleElaboratedtypespecifier = 81, RuleEnumname = 82, 
		RuleEnumspecifier = 83, RuleEnumhead = 84, RuleOpaqueenumdeclaration = 85, 
		RuleEnumkey = 86, RuleEnumbase = 87, RuleEnumeratorlist = 88, RuleEnumeratordefinition = 89, 
		RuleEnumerator = 90, RuleNamespacename = 91, RuleOriginalnamespacename = 92, 
		RuleNamespacedefinition = 93, RuleNamednamespacedefinition = 94, RuleOriginalnamespacedefinition = 95, 
		RuleExtensionnamespacedefinition = 96, RuleUnnamednamespacedefinition = 97, 
		RuleNamespacebody = 98, RuleNamespacealias = 99, RuleNamespacealiasdefinition = 100, 
		RuleQualifiednamespacespecifier = 101, RuleUsingdeclaration = 102, RuleUsingdirective = 103, 
		RuleAsmdefinition = 104, RuleLinkagespecification = 105, RuleAttributespecifierseq = 106, 
		RuleAttributespecifier = 107, RuleAlignmentspecifier = 108, RuleAttributelist = 109, 
		RuleAttribute = 110, RuleAttributetoken = 111, RuleAttributescopedtoken = 112, 
		RuleAttributenamespace = 113, RuleAttributeargumentclause = 114, RuleBalancedtokenseq = 115, 
		RuleBalancedtoken = 116, RuleInitdeclaratorlist = 117, RuleInitdeclarator = 118, 
		RuleDeclarator = 119, RulePtrdeclarator = 120, RuleNoptrdeclarator = 121, 
		RuleParametersandqualifiers = 122, RuleTrailingreturntype = 123, RulePtroperator = 124, 
		RuleCvqualifierseq = 125, RuleCvqualifier = 126, RuleRefqualifier = 127, 
		RuleDeclaratorid = 128, RuleThetypeid = 129, RuleAbstractdeclarator = 130, 
		RulePtrabstractdeclarator = 131, RuleNoptrabstractdeclarator = 132, RuleAbstractpackdeclarator = 133, 
		RuleNoptrabstractpackdeclarator = 134, RuleParameterdeclarationclause = 135, 
		RuleParameterdeclarationlist = 136, RuleParameterdeclaration = 137, RuleFunctiondefinition = 138, 
		RuleFunctionbody = 139, RuleInitializer = 140, RuleBraceorequalinitializer = 141, 
		RuleInitializerclause = 142, RuleInitializerlist = 143, RuleBracedinitlist = 144, 
		RuleClassname = 145, RuleClassspecifier = 146, RuleClasshead = 147, RuleClassheadname = 148, 
		RuleClassvirtspecifier = 149, RuleClasskey = 150, RuleMemberspecification = 151, 
		RuleMemberdeclaration = 152, RuleMemberdeclaratorlist = 153, RuleMemberdeclarator = 154, 
		RuleVirtspecifierseq = 155, RuleVirtspecifier = 156, RulePurespecifier = 157, 
		RuleBaseclause = 158, RuleBasespecifierlist = 159, RuleBasespecifier = 160, 
		RuleClassordecltype = 161, RuleBasetypespecifier = 162, RuleAccessspecifier = 163, 
		RuleConversionfunctionid = 164, RuleConversiontypeid = 165, RuleConversiondeclarator = 166, 
		RuleCtorinitializer = 167, RuleMeminitializerlist = 168, RuleMeminitializer = 169, 
		RuleMeminitializerid = 170, RuleOperatorfunctionid = 171, RuleLiteraloperatorid = 172, 
		RuleTemplatedeclaration = 173, RuleTemplateparameterlist = 174, RuleTemplateparameter = 175, 
		RuleTypeparameter = 176, RuleSimpletemplateid = 177, RuleTemplateid = 178, 
		RuleTemplatename = 179, RuleTemplateargumentlist = 180, RuleTemplateargument = 181, 
		RuleTypenamespecifier = 182, RuleExplicitinstantiation = 183, RuleExplicitspecialization = 184, 
		RuleTryblock = 185, RuleFunctiontryblock = 186, RuleHandlerseq = 187, 
		RuleHandler = 188, RuleExceptiondeclaration = 189, RuleThrowexpression = 190, 
		RuleExceptionspecification = 191, RuleDynamicexceptionspecification = 192, 
		RuleTypeidlist = 193, RuleNoexceptspecification = 194, RuleTheoperator = 195, 
		RuleLiteral = 196, RuleBooleanliteral = 197, RulePointerliteral = 198, 
		RuleUserdefinedliteral = 199
	};

	CPP14Parser(antlr4::TokenStream *input);

	std::string getGrammarFileName() const final;
	const antlr4::atn::ATN& getATN() const noexcept final
{ return _atn; };
	const std::vector<std::string_view>& getTokenNames() const final
{ return _tokenNames; }; // deprecated: use vocabulary instead.
	const std::vector<std::string_view>& getRuleNames() const final;
	antlr4::dfa::Vocabulary& getVocabulary() const final;


	class TranslationunitContext;
	class PrimaryexpressionContext;
	class IdexpressionContext;
	class UnqualifiedidContext;
	class QualifiedidContext;
	class NestednamespecifierContext;
	class LambdaexpressionContext;
	class LambdaintroducerContext;
	class LambdacaptureContext;
	class CapturedefaultContext;
	class CapturelistContext;
	class CaptureContext;
	class SimplecaptureContext;
	class InitcaptureContext;
	class LambdadeclaratorContext;
	class PostfixexpressionContext;
	class TypeidofexprContext;
	class TypeidofthetypeidContext;
	class ExpressionlistContext;
	class PseudodestructornameContext;
	class UnaryexpressionContext;
	class UnaryoperatorContext;
	class NewexpressionContext;
	class NewplacementContext;
	class NewtypeidContext;
	class NewdeclaratorContext;
	class NoptrnewdeclaratorContext;
	class NewinitializerContext;
	class DeleteexpressionContext;
	class NoexceptexpressionContext;
	class CastexpressionContext;
	class PmexpressionContext;
	class MultiplicativeexpressionContext;
	class AdditiveexpressionContext;
	class ShiftexpressionContext;
	class ShiftoperatorContext;
	class RelationalexpressionContext;
	class EqualityexpressionContext;
	class AndexpressionContext;
	class ExclusiveorexpressionContext;
	class InclusiveorexpressionContext;
	class LogicalandexpressionContext;
	class LogicalorexpressionContext;
	class ConditionalexpressionContext;
	class AssignmentexpressionContext;
	class AssignmentoperatorContext;
	class ExpressionContext;
	class ConstantexpressionContext;
	class StatementContext;
	class LabeledstatementContext;
	class ExpressionstatementContext;
	class CompoundstatementContext;
	class StatementseqContext;
	class SelectionstatementContext;
	class ConditionContext;
	class IterationstatementContext;
	class ForinitstatementContext;
	class ForrangedeclarationContext;
	class ForrangeinitializerContext;
	class JumpstatementContext;
	class DeclarationstatementContext;
	class DeclarationseqContext;
	class DeclarationContext;
	class BlockdeclarationContext;
	class AliasdeclarationContext;
	class SimpledeclarationContext;
	class Static_assertdeclarationContext;
	class EmptydeclarationContext;
	class AttributedeclarationContext;
	class DeclspecifierContext;
	class DeclspecifierseqContext;
	class StorageclassspecifierContext;
	class FunctionspecifierContext;
	class TypedefnameContext;
	class TypespecifierContext;
	class TrailingtypespecifierContext;
	class TypespecifierseqContext;
	class TrailingtypespecifierseqContext;
	class SimpletypespecifierContext;
	class ThetypenameContext;
	class DecltypespecifierContext;
	class ElaboratedtypespecifierContext;
	class EnumnameContext;
	class EnumspecifierContext;
	class EnumheadContext;
	class OpaqueenumdeclarationContext;
	class EnumkeyContext;
	class EnumbaseContext;
	class EnumeratorlistContext;
	class EnumeratordefinitionContext;
	class EnumeratorContext;
	class NamespacenameContext;
	class OriginalnamespacenameContext;
	class NamespacedefinitionContext;
	class NamednamespacedefinitionContext;
	class OriginalnamespacedefinitionContext;
	class ExtensionnamespacedefinitionContext;
	class UnnamednamespacedefinitionContext;
	class NamespacebodyContext;
	class NamespacealiasContext;
	class NamespacealiasdefinitionContext;
	class QualifiednamespacespecifierContext;
	class UsingdeclarationContext;
	class UsingdirectiveContext;
	class AsmdefinitionContext;
	class LinkagespecificationContext;
	class AttributespecifierseqContext;
	class AttributespecifierContext;
	class AlignmentspecifierContext;
	class AttributelistContext;
	class AttributeContext;
	class AttributetokenContext;
	class AttributescopedtokenContext;
	class AttributenamespaceContext;
	class AttributeargumentclauseContext;
	class BalancedtokenseqContext;
	class BalancedtokenContext;
	class InitdeclaratorlistContext;
	class InitdeclaratorContext;
	class DeclaratorContext;
	class PtrdeclaratorContext;
	class NoptrdeclaratorContext;
	class ParametersandqualifiersContext;
	class TrailingreturntypeContext;
	class PtroperatorContext;
	class CvqualifierseqContext;
	class CvqualifierContext;
	class RefqualifierContext;
	class DeclaratoridContext;
	class ThetypeidContext;
	class AbstractdeclaratorContext;
	class PtrabstractdeclaratorContext;
	class NoptrabstractdeclaratorContext;
	class AbstractpackdeclaratorContext;
	class NoptrabstractpackdeclaratorContext;
	class ParameterdeclarationclauseContext;
	class ParameterdeclarationlistContext;
	class ParameterdeclarationContext;
	class FunctiondefinitionContext;
	class FunctionbodyContext;
	class InitializerContext;
	class BraceorequalinitializerContext;
	class InitializerclauseContext;
	class InitializerlistContext;
	class BracedinitlistContext;
	class ClassnameContext;
	class ClassspecifierContext;
	class ClassheadContext;
	class ClassheadnameContext;
	class ClassvirtspecifierContext;
	class ClasskeyContext;
	class MemberspecificationContext;
	class MemberdeclarationContext;
	class MemberdeclaratorlistContext;
	class MemberdeclaratorContext;
	class VirtspecifierseqContext;
	class VirtspecifierContext;
	class PurespecifierContext;
	class BaseclauseContext;
	class BasespecifierlistContext;
	class BasespecifierContext;
	class ClassordecltypeContext;
	class BasetypespecifierContext;
	class AccessspecifierContext;
	class ConversionfunctionidContext;
	class ConversiontypeidContext;
	class ConversiondeclaratorContext;
	class CtorinitializerContext;
	class MeminitializerlistContext;
	class MeminitializerContext;
	class MeminitializeridContext;
	class OperatorfunctionidContext;
	class LiteraloperatoridContext;
	class TemplatedeclarationContext;
	class TemplateparameterlistContext;
	class TemplateparameterContext;
	class TypeparameterContext;
	class SimpletemplateidContext;
	class TemplateidContext;
	class TemplatenameContext;
	class TemplateargumentlistContext;
	class TemplateargumentContext;
	class TypenamespecifierContext;
	class ExplicitinstantiationContext;
	class ExplicitspecializationContext;
	class TryblockContext;
	class FunctiontryblockContext;
	class HandlerseqContext;
	class HandlerContext;
	class ExceptiondeclarationContext;
	class ThrowexpressionContext;
	class ExceptionspecificationContext;
	class DynamicexceptionspecificationContext;
	class TypeidlistContext;
	class NoexceptspecificationContext;
	class TheoperatorContext;
	class LiteralContext;
	class BooleanliteralContext;
	class PointerliteralContext;
	class UserdefinedliteralContext; 

	class  TranslationunitContext : public antlr4::ParserRuleContext
	{
	public:
		TranslationunitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *EOF();
		DeclarationseqContext *declarationseq();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	TranslationunitContext* translationunit(antlr4::ParserRuleContext *parent = nullptr);

	class  PrimaryexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		PrimaryexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		LiteralContext *literal();
		antlr4::tree::TerminalNode *This();
		antlr4::tree::TerminalNode *LeftParen();
		ExpressionContext *expression();
		antlr4::tree::TerminalNode *RightParen();
		IdexpressionContext *idexpression();
		LambdaexpressionContext *lambdaexpression();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	PrimaryexpressionContext* primaryexpression(antlr4::ParserRuleContext *parent = nullptr);

	class  IdexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		IdexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		UnqualifiedidContext *unqualifiedid();
		QualifiedidContext *qualifiedid();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	IdexpressionContext* idexpression(antlr4::ParserRuleContext *parent = nullptr);

	class  UnqualifiedidContext : public antlr4::ParserRuleContext
	{
	public:
		UnqualifiedidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Identifier();
		OperatorfunctionidContext *operatorfunctionid();
		ConversionfunctionidContext *conversionfunctionid();
		LiteraloperatoridContext *literaloperatorid();
		antlr4::tree::TerminalNode *Tilde();
		ClassnameContext *classname();
		DecltypespecifierContext *decltypespecifier();
		TemplateidContext *templateid();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	UnqualifiedidContext* unqualifiedid(antlr4::ParserRuleContext *parent = nullptr);

	class  QualifiedidContext : public antlr4::ParserRuleContext
	{
	public:
		QualifiedidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		NestednamespecifierContext *nestednamespecifier();
		UnqualifiedidContext *unqualifiedid();
		antlr4::tree::TerminalNode *Template();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	QualifiedidContext* qualifiedid(antlr4::ParserRuleContext *parent = nullptr);

	class  NestednamespecifierContext : public antlr4::ParserRuleContext
	{
	public:
		NestednamespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Doublecolon();
		ThetypenameContext *thetypename();
		NamespacenameContext *namespacename();
		DecltypespecifierContext *decltypespecifier();
		NestednamespecifierContext *nestednamespecifier();
		antlr4::tree::TerminalNode *Identifier();
		SimpletemplateidContext *simpletemplateid();
		antlr4::tree::TerminalNode *Template();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	NestednamespecifierContext* nestednamespecifier();
	NestednamespecifierContext* nestednamespecifier(int precedence, antlr4::ParserRuleContext *parent);
	class  LambdaexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		LambdaexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		LambdaintroducerContext *lambdaintroducer();
		CompoundstatementContext *compoundstatement();
		LambdadeclaratorContext *lambdadeclarator();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	LambdaexpressionContext* lambdaexpression(antlr4::ParserRuleContext *parent = nullptr);

	class  LambdaintroducerContext : public antlr4::ParserRuleContext
	{
	public:
		LambdaintroducerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *LeftBracket();
		antlr4::tree::TerminalNode *RightBracket();
		LambdacaptureContext *lambdacapture();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	LambdaintroducerContext* lambdaintroducer(antlr4::ParserRuleContext *parent = nullptr);

	class  LambdacaptureContext : public antlr4::ParserRuleContext
	{
	public:
		LambdacaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		CapturedefaultContext *capturedefault();
		CapturelistContext *capturelist();
		antlr4::tree::TerminalNode *Comma();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	LambdacaptureContext* lambdacapture(antlr4::ParserRuleContext *parent = nullptr);

	class  CapturedefaultContext : public antlr4::ParserRuleContext
	{
	public:
		CapturedefaultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *And();
		antlr4::tree::TerminalNode *Assign();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	CapturedefaultContext* capturedefault(antlr4::ParserRuleContext *parent = nullptr);

	class  CapturelistContext : public antlr4::ParserRuleContext
	{
	public:
		CapturelistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		CaptureContext *capture();
		antlr4::tree::TerminalNode *Ellipsis();
		CapturelistContext *capturelist();
		antlr4::tree::TerminalNode *Comma();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	CapturelistContext* capturelist();
	CapturelistContext* capturelist(int precedence, antlr4::ParserRuleContext *parent);
	class  CaptureContext : public antlr4::ParserRuleContext
	{
	public:
		CaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		SimplecaptureContext *simplecapture();
		InitcaptureContext *initcapture();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	CaptureContext* capture(antlr4::ParserRuleContext *parent = nullptr);

	class  SimplecaptureContext : public antlr4::ParserRuleContext
	{
	public:
		SimplecaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Identifier();
		antlr4::tree::TerminalNode *And();
		antlr4::tree::TerminalNode *This();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	SimplecaptureContext* simplecapture(antlr4::ParserRuleContext *parent = nullptr);

	class  InitcaptureContext : public antlr4::ParserRuleContext
	{
	public:
		InitcaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Identifier();
		InitializerContext *initializer();
		antlr4::tree::TerminalNode *And();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	InitcaptureContext* initcapture(antlr4::ParserRuleContext *parent = nullptr);

	class  LambdadeclaratorContext : public antlr4::ParserRuleContext
	{
	public:
		LambdadeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *LeftParen();
		ParameterdeclarationclauseContext *parameterdeclarationclause();
		antlr4::tree::TerminalNode *RightParen();
		antlr4::tree::TerminalNode *Mutable();
		ExceptionspecificationContext *exceptionspecification();
		AttributespecifierseqContext *attributespecifierseq();
		TrailingreturntypeContext *trailingreturntype();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	LambdadeclaratorContext* lambdadeclarator(antlr4::ParserRuleContext *parent = nullptr);

	class  PostfixexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		PostfixexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		PrimaryexpressionContext *primaryexpression();
		SimpletypespecifierContext *simpletypespecifier();
		antlr4::tree::TerminalNode *LeftParen();
		antlr4::tree::TerminalNode *RightParen();
		ExpressionlistContext *expressionlist();
		TypenamespecifierContext *typenamespecifier();
		BracedinitlistContext *bracedinitlist();
		antlr4::tree::TerminalNode *Dynamic_cast();
		antlr4::tree::TerminalNode *Less();
		ThetypeidContext *thetypeid();
		antlr4::tree::TerminalNode *Greater();
		ExpressionContext *expression();
		antlr4::tree::TerminalNode *Static_cast();
		antlr4::tree::TerminalNode *Reinterpret_cast();
		antlr4::tree::TerminalNode *Const_cast();
		TypeidofthetypeidContext *typeidofthetypeid();
		PostfixexpressionContext *postfixexpression();
		antlr4::tree::TerminalNode *LeftBracket();
		antlr4::tree::TerminalNode *RightBracket();
		antlr4::tree::TerminalNode *Dot();
		IdexpressionContext *idexpression();
		antlr4::tree::TerminalNode *Template();
		antlr4::tree::TerminalNode *Arrow();
		PseudodestructornameContext *pseudodestructorname();
		antlr4::tree::TerminalNode *PlusPlus();
		antlr4::tree::TerminalNode *MinusMinus();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	PostfixexpressionContext* postfixexpression();
	PostfixexpressionContext* postfixexpression(int precedence, antlr4::ParserRuleContext *parent);
	class  TypeidofexprContext : public antlr4::ParserRuleContext
	{
	public:
		TypeidofexprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Typeid_();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	TypeidofexprContext* typeidofexpr(antlr4::ParserRuleContext *parent = nullptr);

	class  TypeidofthetypeidContext : public antlr4::ParserRuleContext
	{
	public:
		TypeidofthetypeidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Typeid_();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	TypeidofthetypeidContext* typeidofthetypeid(antlr4::ParserRuleContext *parent = nullptr);

	class  ExpressionlistContext : public antlr4::ParserRuleContext
	{
	public:
		ExpressionlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		InitializerlistContext *initializerlist();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ExpressionlistContext* expressionlist(antlr4::ParserRuleContext *parent = nullptr);

	class  PseudodestructornameContext : public antlr4::ParserRuleContext
	{
	public:
		PseudodestructornameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		std::vector<ThetypenameContext *> thetypename();
		ThetypenameContext* thetypename(size_t i);
		antlr4::tree::TerminalNode *Doublecolon();
		antlr4::tree::TerminalNode *Tilde();
		NestednamespecifierContext *nestednamespecifier();
		antlr4::tree::TerminalNode *Template();
		SimpletemplateidContext *simpletemplateid();
		DecltypespecifierContext *decltypespecifier();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	PseudodestructornameContext* pseudodestructorname(antlr4::ParserRuleContext *parent = nullptr);

	class  UnaryexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		UnaryexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		PostfixexpressionContext *postfixexpression();
		antlr4::tree::TerminalNode *PlusPlus();
		CastexpressionContext *castexpression();
		antlr4::tree::TerminalNode *MinusMinus();
		UnaryoperatorContext *unaryoperator();
		antlr4::tree::TerminalNode *Sizeof();
		UnaryexpressionContext *unaryexpression();
		antlr4::tree::TerminalNode *LeftParen();
		ThetypeidContext *thetypeid();
		antlr4::tree::TerminalNode *RightParen();
		antlr4::tree::TerminalNode *Ellipsis();
		antlr4::tree::TerminalNode *Identifier();
		antlr4::tree::TerminalNode *Alignof();
		NoexceptexpressionContext *noexceptexpression();
		NewexpressionContext *newexpression();
		DeleteexpressionContext *deleteexpression();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	UnaryexpressionContext* unaryexpression(antlr4::ParserRuleContext *parent = nullptr);

	class  UnaryoperatorContext : public antlr4::ParserRuleContext
	{
	public:
		UnaryoperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Or();
		antlr4::tree::TerminalNode *Star();
		antlr4::tree::TerminalNode *And();
		antlr4::tree::TerminalNode *Plus();
		antlr4::tree::TerminalNode *Tilde();
		antlr4::tree::TerminalNode *Minus();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	UnaryoperatorContext* unaryoperator(antlr4::ParserRuleContext *parent = nullptr);

	class  NewexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		NewexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *New();
		NewtypeidContext *newtypeid();
		antlr4::tree::TerminalNode *Doublecolon();
		NewplacementContext *newplacement();
		NewinitializerContext *newinitializer();
		antlr4::tree::TerminalNode *LeftParen();
		ThetypeidContext *thetypeid();
		antlr4::tree::TerminalNode *RightParen();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	NewexpressionContext* newexpression(antlr4::ParserRuleContext *parent = nullptr);

	class  NewplacementContext : public antlr4::ParserRuleContext
	{
	public:
		NewplacementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *LeftParen();
		ExpressionlistContext *expressionlist();
		antlr4::tree::TerminalNode *RightParen();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	NewplacementContext* newplacement(antlr4::ParserRuleContext *parent = nullptr);

	class  NewtypeidContext : public antlr4::ParserRuleContext
	{
	public:
		NewtypeidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		TypespecifierseqContext *typespecifierseq();
		NewdeclaratorContext *newdeclarator();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	NewtypeidContext* newtypeid(antlr4::ParserRuleContext *parent = nullptr);

	class  NewdeclaratorContext : public antlr4::ParserRuleContext
	{
	public:
		NewdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		PtroperatorContext *ptroperator();
		NewdeclaratorContext *newdeclarator();
		NoptrnewdeclaratorContext *noptrnewdeclarator();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	NewdeclaratorContext* newdeclarator(antlr4::ParserRuleContext *parent = nullptr);

	class  NoptrnewdeclaratorContext : public antlr4::ParserRuleContext
	{
	public:
		NoptrnewdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *LeftBracket();
		ExpressionContext *expression();
		antlr4::tree::TerminalNode *RightBracket();
		AttributespecifierseqContext *attributespecifierseq();
		NoptrnewdeclaratorContext *noptrnewdeclarator();
		ConstantexpressionContext *constantexpression();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	NoptrnewdeclaratorContext* noptrnewdeclarator();
	NoptrnewdeclaratorContext* noptrnewdeclarator(int precedence, antlr4::ParserRuleContext *parent);
	class  NewinitializerContext : public antlr4::ParserRuleContext
	{
	public:
		NewinitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *LeftParen();
		antlr4::tree::TerminalNode *RightParen();
		ExpressionlistContext *expressionlist();
		BracedinitlistContext *bracedinitlist();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	NewinitializerContext* newinitializer(antlr4::ParserRuleContext *parent = nullptr);

	class  DeleteexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		DeleteexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Delete();
		CastexpressionContext *castexpression();
		antlr4::tree::TerminalNode *Doublecolon();
		antlr4::tree::TerminalNode *LeftBracket();
		antlr4::tree::TerminalNode *RightBracket();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	DeleteexpressionContext* deleteexpression(antlr4::ParserRuleContext *parent = nullptr);

	class  NoexceptexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		NoexceptexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Noexcept();
		antlr4::tree::TerminalNode *LeftParen();
		ExpressionContext *expression();
		antlr4::tree::TerminalNode *RightParen();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	NoexceptexpressionContext* noexceptexpression(antlr4::ParserRuleContext *parent = nullptr);

	class  CastexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		CastexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		UnaryexpressionContext *unaryexpression();
		antlr4::tree::TerminalNode *LeftParen();
		ThetypeidContext *thetypeid();
		antlr4::tree::TerminalNode *RightParen();
		CastexpressionContext *castexpression();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	CastexpressionContext* castexpression(antlr4::ParserRuleContext *parent = nullptr);

	class  PmexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		PmexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		CastexpressionContext *castexpression();
		PmexpressionContext *pmexpression();
		antlr4::tree::TerminalNode *DotStar();
		antlr4::tree::TerminalNode *ArrowStar();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	PmexpressionContext* pmexpression();
	PmexpressionContext* pmexpression(int precedence, antlr4::ParserRuleContext *parent);
	class  MultiplicativeexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		MultiplicativeexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		PmexpressionContext *pmexpression();
		MultiplicativeexpressionContext *multiplicativeexpression();
		antlr4::tree::TerminalNode *Star();
		antlr4::tree::TerminalNode *Div();
		antlr4::tree::TerminalNode *Mod();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	MultiplicativeexpressionContext* multiplicativeexpression();
	MultiplicativeexpressionContext* multiplicativeexpression(int precedence, antlr4::ParserRuleContext *parent);
	class  AdditiveexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		AdditiveexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		MultiplicativeexpressionContext *multiplicativeexpression();
		AdditiveexpressionContext *additiveexpression();
		antlr4::tree::TerminalNode *Plus();
		antlr4::tree::TerminalNode *Minus();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	AdditiveexpressionContext* additiveexpression();
	AdditiveexpressionContext* additiveexpression(int precedence, antlr4::ParserRuleContext *parent);
	class  ShiftexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		ShiftexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		AdditiveexpressionContext *additiveexpression();
		ShiftexpressionContext *shiftexpression();
		ShiftoperatorContext *shiftoperator();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ShiftexpressionContext* shiftexpression();
	ShiftexpressionContext* shiftexpression(int precedence, antlr4::ParserRuleContext *parent);
	class  ShiftoperatorContext : public antlr4::ParserRuleContext
	{
	public:
		ShiftoperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *RightShift();
		antlr4::tree::TerminalNode *LeftShift();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ShiftoperatorContext* shiftoperator(antlr4::ParserRuleContext *parent = nullptr);

	class  RelationalexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		RelationalexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		ShiftexpressionContext *shiftexpression();
		RelationalexpressionContext *relationalexpression();
		antlr4::tree::TerminalNode *Less();
		antlr4::tree::TerminalNode *Greater();
		antlr4::tree::TerminalNode *LessEqual();
		antlr4::tree::TerminalNode *GreaterEqual();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	RelationalexpressionContext* relationalexpression();
	RelationalexpressionContext* relationalexpression(int precedence, antlr4::ParserRuleContext *parent);
	class  EqualityexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		EqualityexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		RelationalexpressionContext *relationalexpression();
		EqualityexpressionContext *equalityexpression();
		antlr4::tree::TerminalNode *Equal();
		antlr4::tree::TerminalNode *NotEqual();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	EqualityexpressionContext* equalityexpression();
	EqualityexpressionContext* equalityexpression(int precedence, antlr4::ParserRuleContext *parent);
	class  AndexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		AndexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		EqualityexpressionContext *equalityexpression();
		AndexpressionContext *andexpression();
		antlr4::tree::TerminalNode *And();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	AndexpressionContext* andexpression();
	AndexpressionContext* andexpression(int precedence, antlr4::ParserRuleContext *parent);
	class  ExclusiveorexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		ExclusiveorexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		AndexpressionContext *andexpression();
		ExclusiveorexpressionContext *exclusiveorexpression();
		antlr4::tree::TerminalNode *Caret();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ExclusiveorexpressionContext* exclusiveorexpression();
	ExclusiveorexpressionContext* exclusiveorexpression(int precedence, antlr4::ParserRuleContext *parent);
	class  InclusiveorexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		InclusiveorexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		ExclusiveorexpressionContext *exclusiveorexpression();
		InclusiveorexpressionContext *inclusiveorexpression();
		antlr4::tree::TerminalNode *Or();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	InclusiveorexpressionContext* inclusiveorexpression();
	InclusiveorexpressionContext* inclusiveorexpression(int precedence, antlr4::ParserRuleContext *parent);
	class  LogicalandexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		LogicalandexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		InclusiveorexpressionContext *inclusiveorexpression();
		LogicalandexpressionContext *logicalandexpression();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	LogicalandexpressionContext* logicalandexpression();
	LogicalandexpressionContext* logicalandexpression(int precedence, antlr4::ParserRuleContext *parent);
	class  LogicalorexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		LogicalorexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		LogicalandexpressionContext *logicalandexpression();
		LogicalorexpressionContext *logicalorexpression();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	LogicalorexpressionContext* logicalorexpression();
	LogicalorexpressionContext* logicalorexpression(int precedence, antlr4::ParserRuleContext *parent);
	class  ConditionalexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		ConditionalexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		LogicalorexpressionContext *logicalorexpression();
		antlr4::tree::TerminalNode *Question();
		ExpressionContext *expression();
		antlr4::tree::TerminalNode *Colon();
		AssignmentexpressionContext *assignmentexpression();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ConditionalexpressionContext* conditionalexpression(antlr4::ParserRuleContext *parent = nullptr);

	class  AssignmentexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		AssignmentexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		ConditionalexpressionContext *conditionalexpression();
		LogicalorexpressionContext *logicalorexpression();
		AssignmentoperatorContext *assignmentoperator();
		InitializerclauseContext *initializerclause();
		ThrowexpressionContext *throwexpression();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	AssignmentexpressionContext* assignmentexpression(antlr4::ParserRuleContext *parent = nullptr);

	class  AssignmentoperatorContext : public antlr4::ParserRuleContext
	{
	public:
		AssignmentoperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Assign();
		antlr4::tree::TerminalNode *StarAssign();
		antlr4::tree::TerminalNode *DivAssign();
		antlr4::tree::TerminalNode *ModAssign();
		antlr4::tree::TerminalNode *PlusAssign();
		antlr4::tree::TerminalNode *MinusAssign();
		antlr4::tree::TerminalNode *RightShiftAssign();
		antlr4::tree::TerminalNode *LeftShiftAssign();
		antlr4::tree::TerminalNode *AndAssign();
		antlr4::tree::TerminalNode *XorAssign();
		antlr4::tree::TerminalNode *OrAssign();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	AssignmentoperatorContext* assignmentoperator(antlr4::ParserRuleContext *parent = nullptr);

	class  ExpressionContext : public antlr4::ParserRuleContext
	{
	public:
		ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		AssignmentexpressionContext *assignmentexpression();
		ExpressionContext *expression();
		antlr4::tree::TerminalNode *Comma();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ExpressionContext* expression();
	ExpressionContext* expression(int precedence, antlr4::ParserRuleContext *parent);
	class  ConstantexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		ConstantexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		ConditionalexpressionContext *conditionalexpression();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ConstantexpressionContext* constantexpression(antlr4::ParserRuleContext *parent = nullptr);

	class  StatementContext : public antlr4::ParserRuleContext
	{
	public:
		StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		LabeledstatementContext *labeledstatement();
		ExpressionstatementContext *expressionstatement();
		AttributespecifierseqContext *attributespecifierseq();
		CompoundstatementContext *compoundstatement();
		SelectionstatementContext *selectionstatement();
		IterationstatementContext *iterationstatement();
		JumpstatementContext *jumpstatement();
		DeclarationstatementContext *declarationstatement();
		TryblockContext *tryblock();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	StatementContext* statement(antlr4::ParserRuleContext *parent = nullptr);

	class  LabeledstatementContext : public antlr4::ParserRuleContext
	{
	public:
		LabeledstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Identifier();
		antlr4::tree::TerminalNode *Colon();
		StatementContext *statement();
		AttributespecifierseqContext *attributespecifierseq();
		antlr4::tree::TerminalNode *Case();
		ConstantexpressionContext *constantexpression();
		antlr4::tree::TerminalNode *Default();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	LabeledstatementContext* labeledstatement(antlr4::ParserRuleContext *parent = nullptr);

	class  ExpressionstatementContext : public antlr4::ParserRuleContext
	{
	public:
		ExpressionstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Semi();
		ExpressionContext *expression();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ExpressionstatementContext* expressionstatement(antlr4::ParserRuleContext *parent = nullptr);

	class  CompoundstatementContext : public antlr4::ParserRuleContext
	{
	public:
		CompoundstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *LeftBrace();
		antlr4::tree::TerminalNode *RightBrace();
		StatementseqContext *statementseq();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	CompoundstatementContext* compoundstatement(antlr4::ParserRuleContext *parent = nullptr);

	class  StatementseqContext : public antlr4::ParserRuleContext
	{
	public:
		StatementseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		StatementContext *statement();
		StatementseqContext *statementseq();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	StatementseqContext* statementseq();
	StatementseqContext* statementseq(int precedence, antlr4::ParserRuleContext *parent);
	class  SelectionstatementContext : public antlr4::ParserRuleContext
	{
	public:
		SelectionstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *If();
		antlr4::tree::TerminalNode *LeftParen();
		ConditionContext *condition();
		antlr4::tree::TerminalNode *RightParen();
		std::vector<StatementContext *> statement();
		StatementContext* statement(size_t i);
		antlr4::tree::TerminalNode *Else();
		antlr4::tree::TerminalNode *Switch();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	SelectionstatementContext* selectionstatement(antlr4::ParserRuleContext *parent = nullptr);

	class  ConditionContext : public antlr4::ParserRuleContext
	{
	public:
		ConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		ExpressionContext *expression();
		DeclspecifierseqContext *declspecifierseq();
		DeclaratorContext *declarator();
		antlr4::tree::TerminalNode *Assign();
		InitializerclauseContext *initializerclause();
		AttributespecifierseqContext *attributespecifierseq();
		BracedinitlistContext *bracedinitlist();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ConditionContext* condition(antlr4::ParserRuleContext *parent = nullptr);

	class  IterationstatementContext : public antlr4::ParserRuleContext
	{
	public:
		IterationstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *While();
		antlr4::tree::TerminalNode *LeftParen();
		ConditionContext *condition();
		antlr4::tree::TerminalNode *RightParen();
		StatementContext *statement();
		antlr4::tree::TerminalNode *Do();
		ExpressionContext *expression();
		antlr4::tree::TerminalNode *Semi();
		antlr4::tree::TerminalNode *For();
		ForinitstatementContext *forinitstatement();
		ForrangedeclarationContext *forrangedeclaration();
		antlr4::tree::TerminalNode *Colon();
		ForrangeinitializerContext *forrangeinitializer();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	IterationstatementContext* iterationstatement(antlr4::ParserRuleContext *parent = nullptr);

	class  ForinitstatementContext : public antlr4::ParserRuleContext
	{
	public:
		ForinitstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		ExpressionstatementContext *expressionstatement();
		SimpledeclarationContext *simpledeclaration();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ForinitstatementContext* forinitstatement(antlr4::ParserRuleContext *parent = nullptr);

	class  ForrangedeclarationContext : public antlr4::ParserRuleContext
	{
	public:
		ForrangedeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		DeclspecifierseqContext *declspecifierseq();
		DeclaratorContext *declarator();
		AttributespecifierseqContext *attributespecifierseq();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ForrangedeclarationContext* forrangedeclaration(antlr4::ParserRuleContext *parent = nullptr);

	class  ForrangeinitializerContext : public antlr4::ParserRuleContext
	{
	public:
		ForrangeinitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		ExpressionContext *expression();
		BracedinitlistContext *bracedinitlist();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ForrangeinitializerContext* forrangeinitializer(antlr4::ParserRuleContext *parent = nullptr);

	class  JumpstatementContext : public antlr4::ParserRuleContext
	{
	public:
		JumpstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Break();
		antlr4::tree::TerminalNode *Semi();
		antlr4::tree::TerminalNode *Continue();
		antlr4::tree::TerminalNode *Return();
		ExpressionContext *expression();
		BracedinitlistContext *bracedinitlist();
		antlr4::tree::TerminalNode *Goto();
		antlr4::tree::TerminalNode *Identifier();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	JumpstatementContext* jumpstatement(antlr4::ParserRuleContext *parent = nullptr);

	class  DeclarationstatementContext : public antlr4::ParserRuleContext
	{
	public:
		DeclarationstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		BlockdeclarationContext *blockdeclaration();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	DeclarationstatementContext* declarationstatement(antlr4::ParserRuleContext *parent = nullptr);

	class  DeclarationseqContext : public antlr4::ParserRuleContext
	{
	public:
		DeclarationseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		DeclarationContext *declaration();
		DeclarationseqContext *declarationseq();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	DeclarationseqContext* declarationseq();
	DeclarationseqContext* declarationseq(int precedence, antlr4::ParserRuleContext *parent);
	class  DeclarationContext : public antlr4::ParserRuleContext
	{
	public:
		DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		BlockdeclarationContext *blockdeclaration();
		FunctiondefinitionContext *functiondefinition();
		TemplatedeclarationContext *templatedeclaration();
		ExplicitinstantiationContext *explicitinstantiation();
		ExplicitspecializationContext *explicitspecialization();
		LinkagespecificationContext *linkagespecification();
		NamespacedefinitionContext *namespacedefinition();
		EmptydeclarationContext *emptydeclaration();
		AttributedeclarationContext *attributedeclaration();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	DeclarationContext* declaration(antlr4::ParserRuleContext *parent = nullptr);

	class  BlockdeclarationContext : public antlr4::ParserRuleContext
	{
	public:
		BlockdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		SimpledeclarationContext *simpledeclaration();
		AsmdefinitionContext *asmdefinition();
		NamespacealiasdefinitionContext *namespacealiasdefinition();
		UsingdeclarationContext *usingdeclaration();
		UsingdirectiveContext *usingdirective();
		Static_assertdeclarationContext *static_assertdeclaration();
		AliasdeclarationContext *aliasdeclaration();
		OpaqueenumdeclarationContext *opaqueenumdeclaration();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	BlockdeclarationContext* blockdeclaration(antlr4::ParserRuleContext *parent = nullptr);

	class  AliasdeclarationContext : public antlr4::ParserRuleContext
	{
	public:
		AliasdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Using();
		antlr4::tree::TerminalNode *Identifier();
		antlr4::tree::TerminalNode *Assign();
		ThetypeidContext *thetypeid();
		antlr4::tree::TerminalNode *Semi();
		AttributespecifierseqContext *attributespecifierseq();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	AliasdeclarationContext* aliasdeclaration(antlr4::ParserRuleContext *parent = nullptr);

	class  SimpledeclarationContext : public antlr4::ParserRuleContext
	{
	public:
		SimpledeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Semi();
		DeclspecifierseqContext *declspecifierseq();
		InitdeclaratorlistContext *initdeclaratorlist();
		AttributespecifierseqContext *attributespecifierseq();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	SimpledeclarationContext* simpledeclaration(antlr4::ParserRuleContext *parent = nullptr);

	class  Static_assertdeclarationContext : public antlr4::ParserRuleContext
	{
	public:
		Static_assertdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Static_assert();
		antlr4::tree::TerminalNode *LeftParen();
		ConstantexpressionContext *constantexpression();
		antlr4::tree::TerminalNode *Comma();
		antlr4::tree::TerminalNode *Stringliteral();
		antlr4::tree::TerminalNode *RightParen();
		antlr4::tree::TerminalNode *Semi();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	Static_assertdeclarationContext* static_assertdeclaration(antlr4::ParserRuleContext *parent = nullptr);

	class  EmptydeclarationContext : public antlr4::ParserRuleContext
	{
	public:
		EmptydeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Semi();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	EmptydeclarationContext* emptydeclaration(antlr4::ParserRuleContext *parent = nullptr);

	class  AttributedeclarationContext : public antlr4::ParserRuleContext
	{
	public:
		AttributedeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		AttributespecifierseqContext *attributespecifierseq();
		antlr4::tree::TerminalNode *Semi();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	AttributedeclarationContext* attributedeclaration(antlr4::ParserRuleContext *parent = nullptr);

	class  DeclspecifierContext : public antlr4::ParserRuleContext
	{
	public:
		DeclspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		StorageclassspecifierContext *storageclassspecifier();
		TypespecifierContext *typespecifier();
		FunctionspecifierContext *functionspecifier();
		antlr4::tree::TerminalNode *Friend();
		antlr4::tree::TerminalNode *Typedef();
		antlr4::tree::TerminalNode *Constexpr();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	DeclspecifierContext* declspecifier(antlr4::ParserRuleContext *parent = nullptr);

	class  DeclspecifierseqContext : public antlr4::ParserRuleContext
	{
	public:
		DeclspecifierseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		DeclspecifierContext *declspecifier();
		AttributespecifierseqContext *attributespecifierseq();
		DeclspecifierseqContext *declspecifierseq();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	DeclspecifierseqContext* declspecifierseq(antlr4::ParserRuleContext *parent = nullptr);

	class  StorageclassspecifierContext : public antlr4::ParserRuleContext
	{
	public:
		StorageclassspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Register();
		antlr4::tree::TerminalNode *Static();
		antlr4::tree::TerminalNode *Thread_local();
		antlr4::tree::TerminalNode *Extern();
		antlr4::tree::TerminalNode *Mutable();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	StorageclassspecifierContext* storageclassspecifier(antlr4::ParserRuleContext *parent = nullptr);

	class  FunctionspecifierContext : public antlr4::ParserRuleContext
	{
	public:
		FunctionspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Inline();
		antlr4::tree::TerminalNode *Virtual();
		antlr4::tree::TerminalNode *Explicit();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	FunctionspecifierContext* functionspecifier(antlr4::ParserRuleContext *parent = nullptr);

	class  TypedefnameContext : public antlr4::ParserRuleContext
	{
	public:
		TypedefnameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Identifier();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	TypedefnameContext* typedefname(antlr4::ParserRuleContext *parent = nullptr);

	class  TypespecifierContext : public antlr4::ParserRuleContext
	{
	public:
		TypespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		TrailingtypespecifierContext *trailingtypespecifier();
		ClassspecifierContext *classspecifier();
		EnumspecifierContext *enumspecifier();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	TypespecifierContext* typespecifier(antlr4::ParserRuleContext *parent = nullptr);

	class  TrailingtypespecifierContext : public antlr4::ParserRuleContext
	{
	public:
		TrailingtypespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		SimpletypespecifierContext *simpletypespecifier();
		ElaboratedtypespecifierContext *elaboratedtypespecifier();
		TypenamespecifierContext *typenamespecifier();
		CvqualifierContext *cvqualifier();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	TrailingtypespecifierContext* trailingtypespecifier(antlr4::ParserRuleContext *parent = nullptr);

	class  TypespecifierseqContext : public antlr4::ParserRuleContext
	{
	public:
		TypespecifierseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		TypespecifierContext *typespecifier();
		AttributespecifierseqContext *attributespecifierseq();
		TypespecifierseqContext *typespecifierseq();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	TypespecifierseqContext* typespecifierseq(antlr4::ParserRuleContext *parent = nullptr);

	class  TrailingtypespecifierseqContext : public antlr4::ParserRuleContext
	{
	public:
		TrailingtypespecifierseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		TrailingtypespecifierContext *trailingtypespecifier();
		AttributespecifierseqContext *attributespecifierseq();
		TrailingtypespecifierseqContext *trailingtypespecifierseq();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	TrailingtypespecifierseqContext* trailingtypespecifierseq(antlr4::ParserRuleContext *parent = nullptr);

	class  SimpletypespecifierContext : public antlr4::ParserRuleContext
	{
	public:
		SimpletypespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		ThetypenameContext *thetypename();
		NestednamespecifierContext *nestednamespecifier();
		antlr4::tree::TerminalNode *Template();
		SimpletemplateidContext *simpletemplateid();
		antlr4::tree::TerminalNode *Char();
		antlr4::tree::TerminalNode *Char16();
		antlr4::tree::TerminalNode *Char32();
		antlr4::tree::TerminalNode *Wchar();
		antlr4::tree::TerminalNode *Bool();
		antlr4::tree::TerminalNode *Short();
		antlr4::tree::TerminalNode *Int();
		antlr4::tree::TerminalNode *Long();
		antlr4::tree::TerminalNode *Signed();
		antlr4::tree::TerminalNode *Unsigned();
		antlr4::tree::TerminalNode *Float();
		antlr4::tree::TerminalNode *Double();
		antlr4::tree::TerminalNode *Void();
		antlr4::tree::TerminalNode *Auto();
		DecltypespecifierContext *decltypespecifier();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	SimpletypespecifierContext* simpletypespecifier(antlr4::ParserRuleContext *parent = nullptr);

	class  ThetypenameContext : public antlr4::ParserRuleContext
	{
	public:
		ThetypenameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		ClassnameContext *classname();
		EnumnameContext *enumname();
		TypedefnameContext *typedefname();
		SimpletemplateidContext *simpletemplateid();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ThetypenameContext* thetypename(antlr4::ParserRuleContext *parent = nullptr);

	class  DecltypespecifierContext : public antlr4::ParserRuleContext
	{
	public:
		DecltypespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Decltype();
		antlr4::tree::TerminalNode *LeftParen();
		ExpressionContext *expression();
		antlr4::tree::TerminalNode *RightParen();
		antlr4::tree::TerminalNode *Auto();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	DecltypespecifierContext* decltypespecifier(antlr4::ParserRuleContext *parent = nullptr);

	class  ElaboratedtypespecifierContext : public antlr4::ParserRuleContext
	{
	public:
		ElaboratedtypespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		ClasskeyContext *classkey();
		antlr4::tree::TerminalNode *Identifier();
		AttributespecifierseqContext *attributespecifierseq();
		NestednamespecifierContext *nestednamespecifier();
		SimpletemplateidContext *simpletemplateid();
		antlr4::tree::TerminalNode *Template();
		antlr4::tree::TerminalNode *Enum();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ElaboratedtypespecifierContext* elaboratedtypespecifier(antlr4::ParserRuleContext *parent = nullptr);

	class  EnumnameContext : public antlr4::ParserRuleContext
	{
	public:
		EnumnameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Identifier();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	EnumnameContext* enumname(antlr4::ParserRuleContext *parent = nullptr);

	class  EnumspecifierContext : public antlr4::ParserRuleContext
	{
	public:
		EnumspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		EnumheadContext *enumhead();
		antlr4::tree::TerminalNode *LeftBrace();
		antlr4::tree::TerminalNode *RightBrace();
		EnumeratorlistContext *enumeratorlist();
		antlr4::tree::TerminalNode *Comma();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	EnumspecifierContext* enumspecifier(antlr4::ParserRuleContext *parent = nullptr);

	class  EnumheadContext : public antlr4::ParserRuleContext
	{
	public:
		EnumheadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		EnumkeyContext *enumkey();
		AttributespecifierseqContext *attributespecifierseq();
		antlr4::tree::TerminalNode *Identifier();
		EnumbaseContext *enumbase();
		NestednamespecifierContext *nestednamespecifier();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	EnumheadContext* enumhead(antlr4::ParserRuleContext *parent = nullptr);

	class  OpaqueenumdeclarationContext : public antlr4::ParserRuleContext
	{
	public:
		OpaqueenumdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		EnumkeyContext *enumkey();
		antlr4::tree::TerminalNode *Identifier();
		antlr4::tree::TerminalNode *Semi();
		AttributespecifierseqContext *attributespecifierseq();
		EnumbaseContext *enumbase();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	OpaqueenumdeclarationContext* opaqueenumdeclaration(antlr4::ParserRuleContext *parent = nullptr);

	class  EnumkeyContext : public antlr4::ParserRuleContext
	{
	public:
		EnumkeyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Enum();
		antlr4::tree::TerminalNode *Class();
		antlr4::tree::TerminalNode *Struct();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	EnumkeyContext* enumkey(antlr4::ParserRuleContext *parent = nullptr);

	class  EnumbaseContext : public antlr4::ParserRuleContext
	{
	public:
		EnumbaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Colon();
		TypespecifierseqContext *typespecifierseq();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	EnumbaseContext* enumbase(antlr4::ParserRuleContext *parent = nullptr);

	class  EnumeratorlistContext : public antlr4::ParserRuleContext
	{
	public:
		EnumeratorlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		EnumeratordefinitionContext *enumeratordefinition();
		EnumeratorlistContext *enumeratorlist();
		antlr4::tree::TerminalNode *Comma();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	EnumeratorlistContext* enumeratorlist();
	EnumeratorlistContext* enumeratorlist(int precedence, antlr4::ParserRuleContext *parent);
	class  EnumeratordefinitionContext : public antlr4::ParserRuleContext
	{
	public:
		EnumeratordefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		EnumeratorContext *enumerator();
		antlr4::tree::TerminalNode *Assign();
		ConstantexpressionContext *constantexpression();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	EnumeratordefinitionContext* enumeratordefinition(antlr4::ParserRuleContext *parent = nullptr);

	class  EnumeratorContext : public antlr4::ParserRuleContext
	{
	public:
		EnumeratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Identifier();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	EnumeratorContext* enumerator(antlr4::ParserRuleContext *parent = nullptr);

	class  NamespacenameContext : public antlr4::ParserRuleContext
	{
	public:
		NamespacenameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		OriginalnamespacenameContext *originalnamespacename();
		NamespacealiasContext *namespacealias();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	NamespacenameContext* namespacename(antlr4::ParserRuleContext *parent = nullptr);

	class  OriginalnamespacenameContext : public antlr4::ParserRuleContext
	{
	public:
		OriginalnamespacenameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Identifier();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	OriginalnamespacenameContext* originalnamespacename(antlr4::ParserRuleContext *parent = nullptr);

	class  NamespacedefinitionContext : public antlr4::ParserRuleContext
	{
	public:
		NamespacedefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		NamednamespacedefinitionContext *namednamespacedefinition();
		UnnamednamespacedefinitionContext *unnamednamespacedefinition();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	NamespacedefinitionContext* namespacedefinition(antlr4::ParserRuleContext *parent = nullptr);

	class  NamednamespacedefinitionContext : public antlr4::ParserRuleContext
	{
	public:
		NamednamespacedefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		OriginalnamespacedefinitionContext *originalnamespacedefinition();
		ExtensionnamespacedefinitionContext *extensionnamespacedefinition();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	NamednamespacedefinitionContext* namednamespacedefinition(antlr4::ParserRuleContext *parent = nullptr);

	class  OriginalnamespacedefinitionContext : public antlr4::ParserRuleContext
	{
	public:
		OriginalnamespacedefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Namespace();
		antlr4::tree::TerminalNode *Identifier();
		antlr4::tree::TerminalNode *LeftBrace();
		NamespacebodyContext *namespacebody();
		antlr4::tree::TerminalNode *RightBrace();
		antlr4::tree::TerminalNode *Inline();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	OriginalnamespacedefinitionContext* originalnamespacedefinition(antlr4::ParserRuleContext *parent = nullptr);

	class  ExtensionnamespacedefinitionContext : public antlr4::ParserRuleContext
	{
	public:
		ExtensionnamespacedefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Namespace();
		OriginalnamespacenameContext *originalnamespacename();
		antlr4::tree::TerminalNode *LeftBrace();
		NamespacebodyContext *namespacebody();
		antlr4::tree::TerminalNode *RightBrace();
		antlr4::tree::TerminalNode *Inline();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ExtensionnamespacedefinitionContext* extensionnamespacedefinition(antlr4::ParserRuleContext *parent = nullptr);

	class  UnnamednamespacedefinitionContext : public antlr4::ParserRuleContext
	{
	public:
		UnnamednamespacedefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Namespace();
		antlr4::tree::TerminalNode *LeftBrace();
		NamespacebodyContext *namespacebody();
		antlr4::tree::TerminalNode *RightBrace();
		antlr4::tree::TerminalNode *Inline();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	UnnamednamespacedefinitionContext* unnamednamespacedefinition(antlr4::ParserRuleContext *parent = nullptr);

	class  NamespacebodyContext : public antlr4::ParserRuleContext
	{
	public:
		NamespacebodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		DeclarationseqContext *declarationseq();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	NamespacebodyContext* namespacebody(antlr4::ParserRuleContext *parent = nullptr);

	class  NamespacealiasContext : public antlr4::ParserRuleContext
	{
	public:
		NamespacealiasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Identifier();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	NamespacealiasContext* namespacealias(antlr4::ParserRuleContext *parent = nullptr);

	class  NamespacealiasdefinitionContext : public antlr4::ParserRuleContext
	{
	public:
		NamespacealiasdefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Namespace();
		antlr4::tree::TerminalNode *Identifier();
		antlr4::tree::TerminalNode *Assign();
		QualifiednamespacespecifierContext *qualifiednamespacespecifier();
		antlr4::tree::TerminalNode *Semi();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	NamespacealiasdefinitionContext* namespacealiasdefinition(antlr4::ParserRuleContext *parent = nullptr);

	class  QualifiednamespacespecifierContext : public antlr4::ParserRuleContext
	{
	public:
		QualifiednamespacespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		NamespacenameContext *namespacename();
		NestednamespecifierContext *nestednamespecifier();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	QualifiednamespacespecifierContext* qualifiednamespacespecifier(antlr4::ParserRuleContext *parent = nullptr);

	class  UsingdeclarationContext : public antlr4::ParserRuleContext
	{
	public:
		UsingdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Using();
		NestednamespecifierContext *nestednamespecifier();
		UnqualifiedidContext *unqualifiedid();
		antlr4::tree::TerminalNode *Semi();
		antlr4::tree::TerminalNode *Typename_();
		antlr4::tree::TerminalNode *Doublecolon();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	UsingdeclarationContext* usingdeclaration(antlr4::ParserRuleContext *parent = nullptr);

	class  UsingdirectiveContext : public antlr4::ParserRuleContext
	{
	public:
		UsingdirectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Using();
		antlr4::tree::TerminalNode *Namespace();
		NamespacenameContext *namespacename();
		antlr4::tree::TerminalNode *Semi();
		AttributespecifierseqContext *attributespecifierseq();
		NestednamespecifierContext *nestednamespecifier();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	UsingdirectiveContext* usingdirective(antlr4::ParserRuleContext *parent = nullptr);

	class  AsmdefinitionContext : public antlr4::ParserRuleContext
	{
	public:
		AsmdefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Asm();
		antlr4::tree::TerminalNode *LeftParen();
		antlr4::tree::TerminalNode *Stringliteral();
		antlr4::tree::TerminalNode *RightParen();
		antlr4::tree::TerminalNode *Semi();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	AsmdefinitionContext* asmdefinition(antlr4::ParserRuleContext *parent = nullptr);

	class  LinkagespecificationContext : public antlr4::ParserRuleContext
	{
	public:
		LinkagespecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Extern();
		antlr4::tree::TerminalNode *Stringliteral();
		antlr4::tree::TerminalNode *LeftBrace();
		antlr4::tree::TerminalNode *RightBrace();
		DeclarationseqContext *declarationseq();
		DeclarationContext *declaration();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	LinkagespecificationContext* linkagespecification(antlr4::ParserRuleContext *parent = nullptr);

	class  AttributespecifierseqContext : public antlr4::ParserRuleContext
	{
	public:
		AttributespecifierseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		AttributespecifierContext *attributespecifier();
		AttributespecifierseqContext *attributespecifierseq();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	AttributespecifierseqContext* attributespecifierseq();
	AttributespecifierseqContext* attributespecifierseq(int precedence, antlr4::ParserRuleContext *parent);
	class  AttributespecifierContext : public antlr4::ParserRuleContext
	{
	public:
		AttributespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		std::vector<antlr4::tree::TerminalNode *> LeftBracket();
		antlr4::tree::TerminalNode* LeftBracket(size_t i);
		AttributelistContext *attributelist();
		std::vector<antlr4::tree::TerminalNode *> RightBracket();
		antlr4::tree::TerminalNode* RightBracket(size_t i);
		AlignmentspecifierContext *alignmentspecifier();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	AttributespecifierContext* attributespecifier(antlr4::ParserRuleContext *parent = nullptr);

	class  AlignmentspecifierContext : public antlr4::ParserRuleContext
	{
	public:
		AlignmentspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Alignas();
		antlr4::tree::TerminalNode *LeftParen();
		ThetypeidContext *thetypeid();
		antlr4::tree::TerminalNode *RightParen();
		antlr4::tree::TerminalNode *Ellipsis();
		ConstantexpressionContext *constantexpression();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	AlignmentspecifierContext* alignmentspecifier(antlr4::ParserRuleContext *parent = nullptr);

	class  AttributelistContext : public antlr4::ParserRuleContext
	{
	public:
		AttributelistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		AttributeContext *attribute();
		antlr4::tree::TerminalNode *Ellipsis();
		AttributelistContext *attributelist();
		antlr4::tree::TerminalNode *Comma();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	AttributelistContext* attributelist();
	AttributelistContext* attributelist(int precedence, antlr4::ParserRuleContext *parent);
	class  AttributeContext : public antlr4::ParserRuleContext
	{
	public:
		AttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		AttributetokenContext *attributetoken();
		AttributeargumentclauseContext *attributeargumentclause();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	AttributeContext* attribute(antlr4::ParserRuleContext *parent = nullptr);

	class  AttributetokenContext : public antlr4::ParserRuleContext
	{
	public:
		AttributetokenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Identifier();
		AttributescopedtokenContext *attributescopedtoken();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	AttributetokenContext* attributetoken(antlr4::ParserRuleContext *parent = nullptr);

	class  AttributescopedtokenContext : public antlr4::ParserRuleContext
	{
	public:
		AttributescopedtokenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		AttributenamespaceContext *attributenamespace();
		antlr4::tree::TerminalNode *Doublecolon();
		antlr4::tree::TerminalNode *Identifier();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	AttributescopedtokenContext* attributescopedtoken(antlr4::ParserRuleContext *parent = nullptr);

	class  AttributenamespaceContext : public antlr4::ParserRuleContext
	{
	public:
		AttributenamespaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Identifier();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	AttributenamespaceContext* attributenamespace(antlr4::ParserRuleContext *parent = nullptr);

	class  AttributeargumentclauseContext : public antlr4::ParserRuleContext
	{
	public:
		AttributeargumentclauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *LeftParen();
		BalancedtokenseqContext *balancedtokenseq();
		antlr4::tree::TerminalNode *RightParen();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	AttributeargumentclauseContext* attributeargumentclause(antlr4::ParserRuleContext *parent = nullptr);

	class  BalancedtokenseqContext : public antlr4::ParserRuleContext
	{
	public:
		BalancedtokenseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		BalancedtokenContext *balancedtoken();
		BalancedtokenseqContext *balancedtokenseq();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	BalancedtokenseqContext* balancedtokenseq();
	BalancedtokenseqContext* balancedtokenseq(int precedence, antlr4::ParserRuleContext *parent);
	class  BalancedtokenContext : public antlr4::ParserRuleContext
	{
	public:
		BalancedtokenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		std::vector<antlr4::tree::TerminalNode *> LeftParen();
		antlr4::tree::TerminalNode* LeftParen(size_t i);
		BalancedtokenseqContext *balancedtokenseq();
		std::vector<antlr4::tree::TerminalNode *> RightParen();
		antlr4::tree::TerminalNode* RightParen(size_t i);
		std::vector<antlr4::tree::TerminalNode *> LeftBracket();
		antlr4::tree::TerminalNode* LeftBracket(size_t i);
		std::vector<antlr4::tree::TerminalNode *> RightBracket();
		antlr4::tree::TerminalNode* RightBracket(size_t i);
		std::vector<antlr4::tree::TerminalNode *> LeftBrace();
		antlr4::tree::TerminalNode* LeftBrace(size_t i);
		std::vector<antlr4::tree::TerminalNode *> RightBrace();
		antlr4::tree::TerminalNode* RightBrace(size_t i);

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	BalancedtokenContext* balancedtoken(antlr4::ParserRuleContext *parent = nullptr);

	class  InitdeclaratorlistContext : public antlr4::ParserRuleContext
	{
	public:
		InitdeclaratorlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		InitdeclaratorContext *initdeclarator();
		InitdeclaratorlistContext *initdeclaratorlist();
		antlr4::tree::TerminalNode *Comma();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	InitdeclaratorlistContext* initdeclaratorlist();
	InitdeclaratorlistContext* initdeclaratorlist(int precedence, antlr4::ParserRuleContext *parent);
	class  InitdeclaratorContext : public antlr4::ParserRuleContext
	{
	public:
		InitdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		DeclaratorContext *declarator();
		InitializerContext *initializer();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	InitdeclaratorContext* initdeclarator(antlr4::ParserRuleContext *parent = nullptr);

	class  DeclaratorContext : public antlr4::ParserRuleContext
	{
	public:
		DeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		PtrdeclaratorContext *ptrdeclarator();
		NoptrdeclaratorContext *noptrdeclarator();
		ParametersandqualifiersContext *parametersandqualifiers();
		TrailingreturntypeContext *trailingreturntype();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	DeclaratorContext* declarator(antlr4::ParserRuleContext *parent = nullptr);

	class  PtrdeclaratorContext : public antlr4::ParserRuleContext
	{
	public:
		PtrdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		NoptrdeclaratorContext *noptrdeclarator();
		PtroperatorContext *ptroperator();
		PtrdeclaratorContext *ptrdeclarator();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	PtrdeclaratorContext* ptrdeclarator(antlr4::ParserRuleContext *parent = nullptr);

	class  NoptrdeclaratorContext : public antlr4::ParserRuleContext
	{
	public:
		NoptrdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		DeclaratoridContext *declaratorid();
		AttributespecifierseqContext *attributespecifierseq();
		antlr4::tree::TerminalNode *LeftParen();
		PtrdeclaratorContext *ptrdeclarator();
		antlr4::tree::TerminalNode *RightParen();
		NoptrdeclaratorContext *noptrdeclarator();
		ParametersandqualifiersContext *parametersandqualifiers();
		antlr4::tree::TerminalNode *LeftBracket();
		antlr4::tree::TerminalNode *RightBracket();
		ConstantexpressionContext *constantexpression();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	NoptrdeclaratorContext* noptrdeclarator();
	NoptrdeclaratorContext* noptrdeclarator(int precedence, antlr4::ParserRuleContext *parent);
	class  ParametersandqualifiersContext : public antlr4::ParserRuleContext
	{
	public:
		ParametersandqualifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *LeftParen();
		ParameterdeclarationclauseContext *parameterdeclarationclause();
		antlr4::tree::TerminalNode *RightParen();
		CvqualifierseqContext *cvqualifierseq();
		RefqualifierContext *refqualifier();
		ExceptionspecificationContext *exceptionspecification();
		AttributespecifierseqContext *attributespecifierseq();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ParametersandqualifiersContext* parametersandqualifiers(antlr4::ParserRuleContext *parent = nullptr);

	class  TrailingreturntypeContext : public antlr4::ParserRuleContext
	{
	public:
		TrailingreturntypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Arrow();
		TrailingtypespecifierseqContext *trailingtypespecifierseq();
		AbstractdeclaratorContext *abstractdeclarator();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	TrailingreturntypeContext* trailingreturntype(antlr4::ParserRuleContext *parent = nullptr);

	class  PtroperatorContext : public antlr4::ParserRuleContext
	{
	public:
		PtroperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Star();
		AttributespecifierseqContext *attributespecifierseq();
		CvqualifierseqContext *cvqualifierseq();
		antlr4::tree::TerminalNode *And();
		NestednamespecifierContext *nestednamespecifier();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	PtroperatorContext* ptroperator(antlr4::ParserRuleContext *parent = nullptr);

	class  CvqualifierseqContext : public antlr4::ParserRuleContext
	{
	public:
		CvqualifierseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		CvqualifierContext *cvqualifier();
		CvqualifierseqContext *cvqualifierseq();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	CvqualifierseqContext* cvqualifierseq(antlr4::ParserRuleContext *parent = nullptr);

	class  CvqualifierContext : public antlr4::ParserRuleContext
	{
	public:
		CvqualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Const();
		antlr4::tree::TerminalNode *Volatile();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	CvqualifierContext* cvqualifier(antlr4::ParserRuleContext *parent = nullptr);

	class  RefqualifierContext : public antlr4::ParserRuleContext
	{
	public:
		RefqualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *And();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	RefqualifierContext* refqualifier(antlr4::ParserRuleContext *parent = nullptr);

	class  DeclaratoridContext : public antlr4::ParserRuleContext
	{
	public:
		DeclaratoridContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		IdexpressionContext *idexpression();
		antlr4::tree::TerminalNode *Ellipsis();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	DeclaratoridContext* declaratorid(antlr4::ParserRuleContext *parent = nullptr);

	class  ThetypeidContext : public antlr4::ParserRuleContext
	{
	public:
		ThetypeidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		TypespecifierseqContext *typespecifierseq();
		AbstractdeclaratorContext *abstractdeclarator();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ThetypeidContext* thetypeid(antlr4::ParserRuleContext *parent = nullptr);

	class  AbstractdeclaratorContext : public antlr4::ParserRuleContext
	{
	public:
		AbstractdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		PtrabstractdeclaratorContext *ptrabstractdeclarator();
		ParametersandqualifiersContext *parametersandqualifiers();
		TrailingreturntypeContext *trailingreturntype();
		NoptrabstractdeclaratorContext *noptrabstractdeclarator();
		AbstractpackdeclaratorContext *abstractpackdeclarator();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	AbstractdeclaratorContext* abstractdeclarator(antlr4::ParserRuleContext *parent = nullptr);

	class  PtrabstractdeclaratorContext : public antlr4::ParserRuleContext
	{
	public:
		PtrabstractdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		NoptrabstractdeclaratorContext *noptrabstractdeclarator();
		PtroperatorContext *ptroperator();
		PtrabstractdeclaratorContext *ptrabstractdeclarator();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	PtrabstractdeclaratorContext* ptrabstractdeclarator(antlr4::ParserRuleContext *parent = nullptr);

	class  NoptrabstractdeclaratorContext : public antlr4::ParserRuleContext
	{
	public:
		NoptrabstractdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		ParametersandqualifiersContext *parametersandqualifiers();
		antlr4::tree::TerminalNode *LeftBracket();
		antlr4::tree::TerminalNode *RightBracket();
		ConstantexpressionContext *constantexpression();
		AttributespecifierseqContext *attributespecifierseq();
		antlr4::tree::TerminalNode *LeftParen();
		PtrabstractdeclaratorContext *ptrabstractdeclarator();
		antlr4::tree::TerminalNode *RightParen();
		NoptrabstractdeclaratorContext *noptrabstractdeclarator();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	NoptrabstractdeclaratorContext* noptrabstractdeclarator();
	NoptrabstractdeclaratorContext* noptrabstractdeclarator(int precedence, antlr4::ParserRuleContext *parent);
	class  AbstractpackdeclaratorContext : public antlr4::ParserRuleContext
	{
	public:
		AbstractpackdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		NoptrabstractpackdeclaratorContext *noptrabstractpackdeclarator();
		PtroperatorContext *ptroperator();
		AbstractpackdeclaratorContext *abstractpackdeclarator();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	AbstractpackdeclaratorContext* abstractpackdeclarator(antlr4::ParserRuleContext *parent = nullptr);

	class  NoptrabstractpackdeclaratorContext : public antlr4::ParserRuleContext
	{
	public:
		NoptrabstractpackdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Ellipsis();
		NoptrabstractpackdeclaratorContext *noptrabstractpackdeclarator();
		ParametersandqualifiersContext *parametersandqualifiers();
		antlr4::tree::TerminalNode *LeftBracket();
		antlr4::tree::TerminalNode *RightBracket();
		ConstantexpressionContext *constantexpression();
		AttributespecifierseqContext *attributespecifierseq();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	NoptrabstractpackdeclaratorContext* noptrabstractpackdeclarator();
	NoptrabstractpackdeclaratorContext* noptrabstractpackdeclarator(int precedence, antlr4::ParserRuleContext *parent);
	class  ParameterdeclarationclauseContext : public antlr4::ParserRuleContext
	{
	public:
		ParameterdeclarationclauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		ParameterdeclarationlistContext *parameterdeclarationlist();
		antlr4::tree::TerminalNode *Ellipsis();
		antlr4::tree::TerminalNode *Comma();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ParameterdeclarationclauseContext* parameterdeclarationclause(antlr4::ParserRuleContext *parent = nullptr);

	class  ParameterdeclarationlistContext : public antlr4::ParserRuleContext
	{
	public:
		ParameterdeclarationlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		ParameterdeclarationContext *parameterdeclaration();
		ParameterdeclarationlistContext *parameterdeclarationlist();
		antlr4::tree::TerminalNode *Comma();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ParameterdeclarationlistContext* parameterdeclarationlist();
	ParameterdeclarationlistContext* parameterdeclarationlist(int precedence, antlr4::ParserRuleContext *parent);
	class  ParameterdeclarationContext : public antlr4::ParserRuleContext
	{
	public:
		ParameterdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		DeclspecifierseqContext *declspecifierseq();
		DeclaratorContext *declarator();
		AttributespecifierseqContext *attributespecifierseq();
		antlr4::tree::TerminalNode *Assign();
		InitializerclauseContext *initializerclause();
		AbstractdeclaratorContext *abstractdeclarator();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ParameterdeclarationContext* parameterdeclaration(antlr4::ParserRuleContext *parent = nullptr);

	class  FunctiondefinitionContext : public antlr4::ParserRuleContext
	{
	public:
		FunctiondefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		DeclaratorContext *declarator();
		FunctionbodyContext *functionbody();
		AttributespecifierseqContext *attributespecifierseq();
		DeclspecifierseqContext *declspecifierseq();
		VirtspecifierseqContext *virtspecifierseq();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	FunctiondefinitionContext* functiondefinition(antlr4::ParserRuleContext *parent = nullptr);

	class  FunctionbodyContext : public antlr4::ParserRuleContext
	{
	public:
		FunctionbodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		CompoundstatementContext *compoundstatement();
		CtorinitializerContext *ctorinitializer();
		FunctiontryblockContext *functiontryblock();
		antlr4::tree::TerminalNode *Assign();
		antlr4::tree::TerminalNode *Default();
		antlr4::tree::TerminalNode *Semi();
		antlr4::tree::TerminalNode *Delete();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	FunctionbodyContext* functionbody(antlr4::ParserRuleContext *parent = nullptr);

	class  InitializerContext : public antlr4::ParserRuleContext
	{
	public:
		InitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		BraceorequalinitializerContext *braceorequalinitializer();
		antlr4::tree::TerminalNode *LeftParen();
		ExpressionlistContext *expressionlist();
		antlr4::tree::TerminalNode *RightParen();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	InitializerContext* initializer(antlr4::ParserRuleContext *parent = nullptr);

	class  BraceorequalinitializerContext : public antlr4::ParserRuleContext
	{
	public:
		BraceorequalinitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Assign();
		InitializerclauseContext *initializerclause();
		BracedinitlistContext *bracedinitlist();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	BraceorequalinitializerContext* braceorequalinitializer(antlr4::ParserRuleContext *parent = nullptr);

	class  InitializerclauseContext : public antlr4::ParserRuleContext
	{
	public:
		InitializerclauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		AssignmentexpressionContext *assignmentexpression();
		BracedinitlistContext *bracedinitlist();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	InitializerclauseContext* initializerclause(antlr4::ParserRuleContext *parent = nullptr);

	class  InitializerlistContext : public antlr4::ParserRuleContext
	{
	public:
		InitializerlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		InitializerclauseContext *initializerclause();
		antlr4::tree::TerminalNode *Ellipsis();
		InitializerlistContext *initializerlist();
		antlr4::tree::TerminalNode *Comma();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	InitializerlistContext* initializerlist();
	InitializerlistContext* initializerlist(int precedence, antlr4::ParserRuleContext *parent);
	class  BracedinitlistContext : public antlr4::ParserRuleContext
	{
	public:
		BracedinitlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *LeftBrace();
		InitializerlistContext *initializerlist();
		antlr4::tree::TerminalNode *RightBrace();
		antlr4::tree::TerminalNode *Comma();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	BracedinitlistContext* bracedinitlist(antlr4::ParserRuleContext *parent = nullptr);

	class  ClassnameContext : public antlr4::ParserRuleContext
	{
	public:
		ClassnameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Identifier();
		SimpletemplateidContext *simpletemplateid();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ClassnameContext* classname(antlr4::ParserRuleContext *parent = nullptr);

	class  ClassspecifierContext : public antlr4::ParserRuleContext
	{
	public:
		ClassspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		ClassheadContext *classhead();
		antlr4::tree::TerminalNode *LeftBrace();
		antlr4::tree::TerminalNode *RightBrace();
		MemberspecificationContext *memberspecification();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ClassspecifierContext* classspecifier(antlr4::ParserRuleContext *parent = nullptr);

	class  ClassheadContext : public antlr4::ParserRuleContext
	{
	public:
		ClassheadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		ClasskeyContext *classkey();
		ClassheadnameContext *classheadname();
		AttributespecifierseqContext *attributespecifierseq();
		ClassvirtspecifierContext *classvirtspecifier();
		BaseclauseContext *baseclause();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ClassheadContext* classhead(antlr4::ParserRuleContext *parent = nullptr);

	class  ClassheadnameContext : public antlr4::ParserRuleContext
	{
	public:
		ClassheadnameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		ClassnameContext *classname();
		NestednamespecifierContext *nestednamespecifier();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ClassheadnameContext* classheadname(antlr4::ParserRuleContext *parent = nullptr);

	class  ClassvirtspecifierContext : public antlr4::ParserRuleContext
	{
	public:
		ClassvirtspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Final();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ClassvirtspecifierContext* classvirtspecifier(antlr4::ParserRuleContext *parent = nullptr);

	class  ClasskeyContext : public antlr4::ParserRuleContext
	{
	public:
		ClasskeyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Class();
		antlr4::tree::TerminalNode *Struct();
		antlr4::tree::TerminalNode *Union();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ClasskeyContext* classkey(antlr4::ParserRuleContext *parent = nullptr);

	class  MemberspecificationContext : public antlr4::ParserRuleContext
	{
	public:
		MemberspecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		MemberdeclarationContext *memberdeclaration();
		MemberspecificationContext *memberspecification();
		AccessspecifierContext *accessspecifier();
		antlr4::tree::TerminalNode *Colon();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	MemberspecificationContext* memberspecification(antlr4::ParserRuleContext *parent = nullptr);

	class  MemberdeclarationContext : public antlr4::ParserRuleContext
	{
	public:
		MemberdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Semi();
		AttributespecifierseqContext *attributespecifierseq();
		DeclspecifierseqContext *declspecifierseq();
		MemberdeclaratorlistContext *memberdeclaratorlist();
		FunctiondefinitionContext *functiondefinition();
		UsingdeclarationContext *usingdeclaration();
		Static_assertdeclarationContext *static_assertdeclaration();
		TemplatedeclarationContext *templatedeclaration();
		AliasdeclarationContext *aliasdeclaration();
		EmptydeclarationContext *emptydeclaration();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	MemberdeclarationContext* memberdeclaration(antlr4::ParserRuleContext *parent = nullptr);

	class  MemberdeclaratorlistContext : public antlr4::ParserRuleContext
	{
	public:
		MemberdeclaratorlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		MemberdeclaratorContext *memberdeclarator();
		MemberdeclaratorlistContext *memberdeclaratorlist();
		antlr4::tree::TerminalNode *Comma();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	MemberdeclaratorlistContext* memberdeclaratorlist();
	MemberdeclaratorlistContext* memberdeclaratorlist(int precedence, antlr4::ParserRuleContext *parent);
	class  MemberdeclaratorContext : public antlr4::ParserRuleContext
	{
	public:
		MemberdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		DeclaratorContext *declarator();
		VirtspecifierseqContext *virtspecifierseq();
		PurespecifierContext *purespecifier();
		BraceorequalinitializerContext *braceorequalinitializer();
		antlr4::tree::TerminalNode *Colon();
		ConstantexpressionContext *constantexpression();
		antlr4::tree::TerminalNode *Identifier();
		AttributespecifierseqContext *attributespecifierseq();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	MemberdeclaratorContext* memberdeclarator(antlr4::ParserRuleContext *parent = nullptr);

	class  VirtspecifierseqContext : public antlr4::ParserRuleContext
	{
	public:
		VirtspecifierseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		VirtspecifierContext *virtspecifier();
		VirtspecifierseqContext *virtspecifierseq();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	VirtspecifierseqContext* virtspecifierseq();
	VirtspecifierseqContext* virtspecifierseq(int precedence, antlr4::ParserRuleContext *parent);
	class  VirtspecifierContext : public antlr4::ParserRuleContext
	{
	public:
		VirtspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Override();
		antlr4::tree::TerminalNode *Final();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	VirtspecifierContext* virtspecifier(antlr4::ParserRuleContext *parent = nullptr);

	class  PurespecifierContext : public antlr4::ParserRuleContext
	{
	public:
		antlr4::Token *val = nullptr;;
		PurespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Assign();
		antlr4::tree::TerminalNode *Octalliteral();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	PurespecifierContext* purespecifier(antlr4::ParserRuleContext *parent = nullptr);

	class  BaseclauseContext : public antlr4::ParserRuleContext
	{
	public:
		BaseclauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Colon();
		BasespecifierlistContext *basespecifierlist();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	BaseclauseContext* baseclause(antlr4::ParserRuleContext *parent = nullptr);

	class  BasespecifierlistContext : public antlr4::ParserRuleContext
	{
	public:
		BasespecifierlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		BasespecifierContext *basespecifier();
		antlr4::tree::TerminalNode *Ellipsis();
		BasespecifierlistContext *basespecifierlist();
		antlr4::tree::TerminalNode *Comma();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	BasespecifierlistContext* basespecifierlist();
	BasespecifierlistContext* basespecifierlist(int precedence, antlr4::ParserRuleContext *parent);
	class  BasespecifierContext : public antlr4::ParserRuleContext
	{
	public:
		BasespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		BasetypespecifierContext *basetypespecifier();
		AttributespecifierseqContext *attributespecifierseq();
		antlr4::tree::TerminalNode *Virtual();
		AccessspecifierContext *accessspecifier();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	BasespecifierContext* basespecifier(antlr4::ParserRuleContext *parent = nullptr);

	class  ClassordecltypeContext : public antlr4::ParserRuleContext
	{
	public:
		ClassordecltypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		ClassnameContext *classname();
		NestednamespecifierContext *nestednamespecifier();
		DecltypespecifierContext *decltypespecifier();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ClassordecltypeContext* classordecltype(antlr4::ParserRuleContext *parent = nullptr);

	class  BasetypespecifierContext : public antlr4::ParserRuleContext
	{
	public:
		BasetypespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		ClassordecltypeContext *classordecltype();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	BasetypespecifierContext* basetypespecifier(antlr4::ParserRuleContext *parent = nullptr);

	class  AccessspecifierContext : public antlr4::ParserRuleContext
	{
	public:
		AccessspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Private();
		antlr4::tree::TerminalNode *Protected();
		antlr4::tree::TerminalNode *Public();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	AccessspecifierContext* accessspecifier(antlr4::ParserRuleContext *parent = nullptr);

	class  ConversionfunctionidContext : public antlr4::ParserRuleContext
	{
	public:
		ConversionfunctionidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Operator();
		ConversiontypeidContext *conversiontypeid();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ConversionfunctionidContext* conversionfunctionid(antlr4::ParserRuleContext *parent = nullptr);

	class  ConversiontypeidContext : public antlr4::ParserRuleContext
	{
	public:
		ConversiontypeidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		TypespecifierseqContext *typespecifierseq();
		ConversiondeclaratorContext *conversiondeclarator();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ConversiontypeidContext* conversiontypeid(antlr4::ParserRuleContext *parent = nullptr);

	class  ConversiondeclaratorContext : public antlr4::ParserRuleContext
	{
	public:
		ConversiondeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		PtroperatorContext *ptroperator();
		ConversiondeclaratorContext *conversiondeclarator();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ConversiondeclaratorContext* conversiondeclarator(antlr4::ParserRuleContext *parent = nullptr);

	class  CtorinitializerContext : public antlr4::ParserRuleContext
	{
	public:
		CtorinitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Colon();
		MeminitializerlistContext *meminitializerlist();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	CtorinitializerContext* ctorinitializer(antlr4::ParserRuleContext *parent = nullptr);

	class  MeminitializerlistContext : public antlr4::ParserRuleContext
	{
	public:
		MeminitializerlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		MeminitializerContext *meminitializer();
		antlr4::tree::TerminalNode *Ellipsis();
		antlr4::tree::TerminalNode *Comma();
		MeminitializerlistContext *meminitializerlist();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	MeminitializerlistContext* meminitializerlist(antlr4::ParserRuleContext *parent = nullptr);

	class  MeminitializerContext : public antlr4::ParserRuleContext
	{
	public:
		MeminitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		MeminitializeridContext *meminitializerid();
		antlr4::tree::TerminalNode *LeftParen();
		antlr4::tree::TerminalNode *RightParen();
		ExpressionlistContext *expressionlist();
		BracedinitlistContext *bracedinitlist();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	MeminitializerContext* meminitializer(antlr4::ParserRuleContext *parent = nullptr);

	class  MeminitializeridContext : public antlr4::ParserRuleContext
	{
	public:
		MeminitializeridContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		ClassordecltypeContext *classordecltype();
		antlr4::tree::TerminalNode *Identifier();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	MeminitializeridContext* meminitializerid(antlr4::ParserRuleContext *parent = nullptr);

	class  OperatorfunctionidContext : public antlr4::ParserRuleContext
	{
	public:
		OperatorfunctionidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Operator();
		TheoperatorContext *theoperator();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	OperatorfunctionidContext* operatorfunctionid(antlr4::ParserRuleContext *parent = nullptr);

	class  LiteraloperatoridContext : public antlr4::ParserRuleContext
	{
	public:
		LiteraloperatoridContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Operator();
		antlr4::tree::TerminalNode *Stringliteral();
		antlr4::tree::TerminalNode *Identifier();
		antlr4::tree::TerminalNode *Userdefinedstringliteral();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	LiteraloperatoridContext* literaloperatorid(antlr4::ParserRuleContext *parent = nullptr);

	class  TemplatedeclarationContext : public antlr4::ParserRuleContext
	{
	public:
		TemplatedeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Template();
		antlr4::tree::TerminalNode *Less();
		TemplateparameterlistContext *templateparameterlist();
		antlr4::tree::TerminalNode *Greater();
		DeclarationContext *declaration();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	TemplatedeclarationContext* templatedeclaration(antlr4::ParserRuleContext *parent = nullptr);

	class  TemplateparameterlistContext : public antlr4::ParserRuleContext
	{
	public:
		TemplateparameterlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		TemplateparameterContext *templateparameter();
		TemplateparameterlistContext *templateparameterlist();
		antlr4::tree::TerminalNode *Comma();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	TemplateparameterlistContext* templateparameterlist();
	TemplateparameterlistContext* templateparameterlist(int precedence, antlr4::ParserRuleContext *parent);
	class  TemplateparameterContext : public antlr4::ParserRuleContext
	{
	public:
		TemplateparameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		TypeparameterContext *typeparameter();
		ParameterdeclarationContext *parameterdeclaration();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	TemplateparameterContext* templateparameter(antlr4::ParserRuleContext *parent = nullptr);

	class  TypeparameterContext : public antlr4::ParserRuleContext
	{
	public:
		TypeparameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Class();
		antlr4::tree::TerminalNode *Ellipsis();
		antlr4::tree::TerminalNode *Identifier();
		antlr4::tree::TerminalNode *Assign();
		ThetypeidContext *thetypeid();
		antlr4::tree::TerminalNode *Typename_();
		antlr4::tree::TerminalNode *Template();
		antlr4::tree::TerminalNode *Less();
		TemplateparameterlistContext *templateparameterlist();
		antlr4::tree::TerminalNode *Greater();
		IdexpressionContext *idexpression();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	TypeparameterContext* typeparameter(antlr4::ParserRuleContext *parent = nullptr);

	class  SimpletemplateidContext : public antlr4::ParserRuleContext
	{
	public:
		SimpletemplateidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		TemplatenameContext *templatename();
		antlr4::tree::TerminalNode *Less();
		antlr4::tree::TerminalNode *Greater();
		TemplateargumentlistContext *templateargumentlist();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	SimpletemplateidContext* simpletemplateid(antlr4::ParserRuleContext *parent = nullptr);

	class  TemplateidContext : public antlr4::ParserRuleContext
	{
	public:
		TemplateidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		SimpletemplateidContext *simpletemplateid();
		OperatorfunctionidContext *operatorfunctionid();
		antlr4::tree::TerminalNode *Less();
		antlr4::tree::TerminalNode *Greater();
		TemplateargumentlistContext *templateargumentlist();
		LiteraloperatoridContext *literaloperatorid();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	TemplateidContext* templateid(antlr4::ParserRuleContext *parent = nullptr);

	class  TemplatenameContext : public antlr4::ParserRuleContext
	{
	public:
		TemplatenameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Identifier();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	TemplatenameContext* templatename(antlr4::ParserRuleContext *parent = nullptr);

	class  TemplateargumentlistContext : public antlr4::ParserRuleContext
	{
	public:
		TemplateargumentlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		TemplateargumentContext *templateargument();
		antlr4::tree::TerminalNode *Ellipsis();
		TemplateargumentlistContext *templateargumentlist();
		antlr4::tree::TerminalNode *Comma();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	TemplateargumentlistContext* templateargumentlist();
	TemplateargumentlistContext* templateargumentlist(int precedence, antlr4::ParserRuleContext *parent);
	class  TemplateargumentContext : public antlr4::ParserRuleContext
	{
	public:
		TemplateargumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		ThetypeidContext *thetypeid();
		ConstantexpressionContext *constantexpression();
		IdexpressionContext *idexpression();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	TemplateargumentContext* templateargument(antlr4::ParserRuleContext *parent = nullptr);

	class  TypenamespecifierContext : public antlr4::ParserRuleContext
	{
	public:
		TypenamespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Typename_();
		NestednamespecifierContext *nestednamespecifier();
		antlr4::tree::TerminalNode *Identifier();
		SimpletemplateidContext *simpletemplateid();
		antlr4::tree::TerminalNode *Template();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	TypenamespecifierContext* typenamespecifier(antlr4::ParserRuleContext *parent = nullptr);

	class  ExplicitinstantiationContext : public antlr4::ParserRuleContext
	{
	public:
		ExplicitinstantiationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Template();
		DeclarationContext *declaration();
		antlr4::tree::TerminalNode *Extern();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ExplicitinstantiationContext* explicitinstantiation(antlr4::ParserRuleContext *parent = nullptr);

	class  ExplicitspecializationContext : public antlr4::ParserRuleContext
	{
	public:
		ExplicitspecializationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Template();
		antlr4::tree::TerminalNode *Less();
		antlr4::tree::TerminalNode *Greater();
		DeclarationContext *declaration();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ExplicitspecializationContext* explicitspecialization(antlr4::ParserRuleContext *parent = nullptr);

	class  TryblockContext : public antlr4::ParserRuleContext
	{
	public:
		TryblockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Try();
		CompoundstatementContext *compoundstatement();
		HandlerseqContext *handlerseq();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	TryblockContext* tryblock(antlr4::ParserRuleContext *parent = nullptr);

	class  FunctiontryblockContext : public antlr4::ParserRuleContext
	{
	public:
		FunctiontryblockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Try();
		CompoundstatementContext *compoundstatement();
		HandlerseqContext *handlerseq();
		CtorinitializerContext *ctorinitializer();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	FunctiontryblockContext* functiontryblock(antlr4::ParserRuleContext *parent = nullptr);

	class  HandlerseqContext : public antlr4::ParserRuleContext
	{
	public:
		HandlerseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		HandlerContext *handler();
		HandlerseqContext *handlerseq();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	HandlerseqContext* handlerseq(antlr4::ParserRuleContext *parent = nullptr);

	class  HandlerContext : public antlr4::ParserRuleContext
	{
	public:
		HandlerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Catch();
		antlr4::tree::TerminalNode *LeftParen();
		ExceptiondeclarationContext *exceptiondeclaration();
		antlr4::tree::TerminalNode *RightParen();
		CompoundstatementContext *compoundstatement();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	HandlerContext* handler(antlr4::ParserRuleContext *parent = nullptr);

	class  ExceptiondeclarationContext : public antlr4::ParserRuleContext
	{
	public:
		ExceptiondeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		TypespecifierseqContext *typespecifierseq();
		DeclaratorContext *declarator();
		AttributespecifierseqContext *attributespecifierseq();
		AbstractdeclaratorContext *abstractdeclarator();
		antlr4::tree::TerminalNode *Ellipsis();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ExceptiondeclarationContext* exceptiondeclaration(antlr4::ParserRuleContext *parent = nullptr);

	class  ThrowexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		ThrowexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Throw();
		AssignmentexpressionContext *assignmentexpression();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ThrowexpressionContext* throwexpression(antlr4::ParserRuleContext *parent = nullptr);

	class  ExceptionspecificationContext : public antlr4::ParserRuleContext
	{
	public:
		ExceptionspecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		DynamicexceptionspecificationContext *dynamicexceptionspecification();
		NoexceptspecificationContext *noexceptspecification();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ExceptionspecificationContext* exceptionspecification(antlr4::ParserRuleContext *parent = nullptr);

	class  DynamicexceptionspecificationContext : public antlr4::ParserRuleContext
	{
	public:
		DynamicexceptionspecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Throw();
		antlr4::tree::TerminalNode *LeftParen();
		antlr4::tree::TerminalNode *RightParen();
		TypeidlistContext *typeidlist();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	DynamicexceptionspecificationContext* dynamicexceptionspecification(antlr4::ParserRuleContext *parent = nullptr);

	class  TypeidlistContext : public antlr4::ParserRuleContext
	{
	public:
		TypeidlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		ThetypeidContext *thetypeid();
		antlr4::tree::TerminalNode *Ellipsis();
		TypeidlistContext *typeidlist();
		antlr4::tree::TerminalNode *Comma();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	TypeidlistContext* typeidlist();
	TypeidlistContext* typeidlist(int precedence, antlr4::ParserRuleContext *parent);
	class  NoexceptspecificationContext : public antlr4::ParserRuleContext
	{
	public:
		NoexceptspecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Noexcept();
		antlr4::tree::TerminalNode *LeftParen();
		ConstantexpressionContext *constantexpression();
		antlr4::tree::TerminalNode *RightParen();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	NoexceptspecificationContext* noexceptspecification(antlr4::ParserRuleContext *parent = nullptr);

	class  TheoperatorContext : public antlr4::ParserRuleContext
	{
	public:
		TheoperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *New();
		antlr4::tree::TerminalNode *Delete();
		antlr4::tree::TerminalNode *LeftBracket();
		antlr4::tree::TerminalNode *RightBracket();
		antlr4::tree::TerminalNode *Plus();
		antlr4::tree::TerminalNode *Minus();
		antlr4::tree::TerminalNode *Star();
		antlr4::tree::TerminalNode *Div();
		antlr4::tree::TerminalNode *Mod();
		antlr4::tree::TerminalNode *Caret();
		antlr4::tree::TerminalNode *And();
		antlr4::tree::TerminalNode *Or();
		antlr4::tree::TerminalNode *Tilde();
		antlr4::tree::TerminalNode *Assign();
		antlr4::tree::TerminalNode *Less();
		antlr4::tree::TerminalNode *Greater();
		antlr4::tree::TerminalNode *PlusAssign();
		antlr4::tree::TerminalNode *MinusAssign();
		antlr4::tree::TerminalNode *StarAssign();
		antlr4::tree::TerminalNode *DivAssign();
		antlr4::tree::TerminalNode *ModAssign();
		antlr4::tree::TerminalNode *XorAssign();
		antlr4::tree::TerminalNode *AndAssign();
		antlr4::tree::TerminalNode *OrAssign();
		antlr4::tree::TerminalNode *LeftShift();
		antlr4::tree::TerminalNode *RightShift();
		antlr4::tree::TerminalNode *RightShiftAssign();
		antlr4::tree::TerminalNode *LeftShiftAssign();
		antlr4::tree::TerminalNode *Equal();
		antlr4::tree::TerminalNode *NotEqual();
		antlr4::tree::TerminalNode *LessEqual();
		antlr4::tree::TerminalNode *GreaterEqual();
		antlr4::tree::TerminalNode *PlusPlus();
		antlr4::tree::TerminalNode *MinusMinus();
		antlr4::tree::TerminalNode *Comma();
		antlr4::tree::TerminalNode *ArrowStar();
		antlr4::tree::TerminalNode *Arrow();
		antlr4::tree::TerminalNode *LeftParen();
		antlr4::tree::TerminalNode *RightParen();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	TheoperatorContext* theoperator(antlr4::ParserRuleContext *parent = nullptr);

	class  LiteralContext : public antlr4::ParserRuleContext
	{
	public:
		LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Integerliteral();
		antlr4::tree::TerminalNode *Characterliteral();
		antlr4::tree::TerminalNode *Floatingliteral();
		antlr4::tree::TerminalNode *Stringliteral();
		BooleanliteralContext *booleanliteral();
		PointerliteralContext *pointerliteral();
		UserdefinedliteralContext *userdefinedliteral();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	LiteralContext* literal(antlr4::ParserRuleContext *parent = nullptr);

	class  BooleanliteralContext : public antlr4::ParserRuleContext
	{
	public:
		BooleanliteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *False();
		antlr4::tree::TerminalNode *True();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	BooleanliteralContext* booleanliteral(antlr4::ParserRuleContext *parent = nullptr);

	class  PointerliteralContext : public antlr4::ParserRuleContext
	{
	public:
		PointerliteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Nullptr();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	PointerliteralContext* pointerliteral(antlr4::ParserRuleContext *parent = nullptr);

	class  UserdefinedliteralContext : public antlr4::ParserRuleContext
	{
	public:
		UserdefinedliteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Userdefinedintegerliteral();
		antlr4::tree::TerminalNode *Userdefinedfloatingliteral();
		antlr4::tree::TerminalNode *Userdefinedstringliteral();
		antlr4::tree::TerminalNode *Userdefinedcharacterliteral();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	UserdefinedliteralContext* userdefinedliteral(antlr4::ParserRuleContext *parent = nullptr);


	bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) final;
	bool nestednamespecifierSempred(NestednamespecifierContext *_localctx, size_t predicateIndex);
	bool capturelistSempred(CapturelistContext *_localctx, size_t predicateIndex);
	bool postfixexpressionSempred(PostfixexpressionContext *_localctx, size_t predicateIndex);
	bool noptrnewdeclaratorSempred(NoptrnewdeclaratorContext *_localctx, size_t predicateIndex);
	bool pmexpressionSempred(PmexpressionContext *_localctx, size_t predicateIndex);
	bool multiplicativeexpressionSempred(MultiplicativeexpressionContext *_localctx, size_t predicateIndex);
	bool additiveexpressionSempred(AdditiveexpressionContext *_localctx, size_t predicateIndex);
	bool shiftexpressionSempred(ShiftexpressionContext *_localctx, size_t predicateIndex);
	bool relationalexpressionSempred(RelationalexpressionContext *_localctx, size_t predicateIndex);
	bool equalityexpressionSempred(EqualityexpressionContext *_localctx, size_t predicateIndex);
	bool andexpressionSempred(AndexpressionContext *_localctx, size_t predicateIndex);
	bool exclusiveorexpressionSempred(ExclusiveorexpressionContext *_localctx, size_t predicateIndex);
	bool inclusiveorexpressionSempred(InclusiveorexpressionContext *_localctx, size_t predicateIndex);
	bool logicalandexpressionSempred(LogicalandexpressionContext *_localctx, size_t predicateIndex);
	bool logicalorexpressionSempred(LogicalorexpressionContext *_localctx, size_t predicateIndex);
	bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);
	bool statementseqSempred(StatementseqContext *_localctx, size_t predicateIndex);
	bool declarationseqSempred(DeclarationseqContext *_localctx, size_t predicateIndex);
	bool enumeratorlistSempred(EnumeratorlistContext *_localctx, size_t predicateIndex);
	bool attributespecifierseqSempred(AttributespecifierseqContext *_localctx, size_t predicateIndex);
	bool attributelistSempred(AttributelistContext *_localctx, size_t predicateIndex);
	bool balancedtokenseqSempred(BalancedtokenseqContext *_localctx, size_t predicateIndex);
	bool initdeclaratorlistSempred(InitdeclaratorlistContext *_localctx, size_t predicateIndex);
	bool noptrdeclaratorSempred(NoptrdeclaratorContext *_localctx, size_t predicateIndex);
	bool noptrabstractdeclaratorSempred(NoptrabstractdeclaratorContext *_localctx, size_t predicateIndex);
	bool noptrabstractpackdeclaratorSempred(NoptrabstractpackdeclaratorContext *_localctx, size_t predicateIndex);
	bool parameterdeclarationlistSempred(ParameterdeclarationlistContext *_localctx, size_t predicateIndex);
	bool initializerlistSempred(InitializerlistContext *_localctx, size_t predicateIndex);
	bool memberdeclaratorlistSempred(MemberdeclaratorlistContext *_localctx, size_t predicateIndex);
	bool virtspecifierseqSempred(VirtspecifierseqContext *_localctx, size_t predicateIndex);
	bool basespecifierlistSempred(BasespecifierlistContext *_localctx, size_t predicateIndex);
	bool templateparameterlistSempred(TemplateparameterlistContext *_localctx, size_t predicateIndex);
	bool templateargumentlistSempred(TemplateargumentlistContext *_localctx, size_t predicateIndex);
	bool typeidlistSempred(TypeidlistContext *_localctx, size_t predicateIndex);

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

