
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
		RuleDeclaration = 62, RulePreprocessorDirective = 63, RuleBlockdeclaration = 64, 
		RuleAliasdeclaration = 65, RuleSimpledeclaration = 66, RuleStatic_assertdeclaration = 67, 
		RuleEmptydeclaration = 68, RuleAttributedeclaration = 69, RuleDeclspecifier = 70, 
		RuleDeclspecifierseq = 71, RuleStorageclassspecifier = 72, RuleFunctionspecifier = 73, 
		RuleTypedefname = 74, RuleTypespecifier = 75, RuleTrailingtypespecifier = 76, 
		RuleTypespecifierseq = 77, RuleTrailingtypespecifierseq = 78, RuleSimpletypespecifier = 79, 
		RuleThetypename = 80, RuleDecltypespecifier = 81, RuleElaboratedtypespecifier = 82, 
		RuleEnumname = 83, RuleEnumspecifier = 84, RuleEnumhead = 85, RuleOpaqueenumdeclaration = 86, 
		RuleEnumkey = 87, RuleEnumbase = 88, RuleEnumeratorlist = 89, RuleEnumeratordefinition = 90, 
		RuleEnumerator = 91, RuleNamespacename = 92, RuleOriginalnamespacename = 93, 
		RuleNamespacedefinition = 94, RuleNamednamespacedefinition = 95, RuleOriginalnamespacedefinition = 96, 
		RuleExtensionnamespacedefinition = 97, RuleUnnamednamespacedefinition = 98, 
		RuleNamespacebody = 99, RuleNamespacealias = 100, RuleNamespacealiasdefinition = 101, 
		RuleQualifiednamespacespecifier = 102, RuleUsingdeclaration = 103, RuleUsingdirective = 104, 
		RuleAsmdefinition = 105, RuleLinkagespecification = 106, RuleAttributespecifierseq = 107, 
		RuleAttributespecifier = 108, RuleAlignmentspecifier = 109, RuleAttributelist = 110, 
		RuleAttribute = 111, RuleAttributetoken = 112, RuleAttributescopedtoken = 113, 
		RuleAttributenamespace = 114, RuleAttributeargumentclause = 115, RuleBalancedtokenseq = 116, 
		RuleBalancedtoken = 117, RuleInitdeclaratorlist = 118, RuleInitdeclarator = 119, 
		RuleDeclarator = 120, RulePtrdeclarator = 121, RuleNoptrdeclarator = 122, 
		RuleParametersandqualifiers = 123, RuleTrailingreturntype = 124, RulePtroperator = 125, 
		RuleCvqualifierseq = 126, RuleCvqualifier = 127, RuleRefqualifier = 128, 
		RuleDeclaratorid = 129, RuleThetypeid = 130, RuleAbstractdeclarator = 131, 
		RulePtrabstractdeclarator = 132, RuleNoptrabstractdeclarator = 133, RuleAbstractpackdeclarator = 134, 
		RuleNoptrabstractpackdeclarator = 135, RuleParameterdeclarationclause = 136, 
		RuleParameterdeclarationlist = 137, RuleParameterdeclaration = 138, RuleFunctiondefinition = 139, 
		RuleFunctionbody = 140, RuleInitializer = 141, RuleBraceorequalinitializer = 142, 
		RuleInitializerclause = 143, RuleInitializerlist = 144, RuleBracedinitlist = 145, 
		RuleClassname = 146, RuleClassspecifier = 147, RuleClasshead = 148, RuleClassheadname = 149, 
		RuleClassvirtspecifier = 150, RuleClasskey = 151, RuleMemberspecification = 152, 
		RuleMemberdeclaration = 153, RuleMemberdeclaratorlist = 154, RuleMemberdeclarator = 155, 
		RuleVirtspecifierseq = 156, RuleVirtspecifier = 157, RulePurespecifier = 158, 
		RuleBaseclause = 159, RuleBasespecifierlist = 160, RuleBasespecifier = 161, 
		RuleClassordecltype = 162, RuleBasetypespecifier = 163, RuleAccessspecifier = 164, 
		RuleConversionfunctionid = 165, RuleConversiontypeid = 166, RuleConversiondeclarator = 167, 
		RuleCtorinitializer = 168, RuleMeminitializerlist = 169, RuleMeminitializer = 170, 
		RuleMeminitializerid = 171, RuleOperatorfunctionid = 172, RuleLiteraloperatorid = 173, 
		RuleTemplatedeclaration = 174, RuleTemplateparameterlist = 175, RuleTemplateparameter = 176, 
		RuleTypeparameter = 177, RuleSimpletemplateid = 178, RuleTemplateid = 179, 
		RuleTemplatename = 180, RuleTemplateargumentlist = 181, RuleTemplateargument = 182, 
		RuleTypenamespecifier = 183, RuleExplicitinstantiation = 184, RuleExplicitspecialization = 185, 
		RuleTryblock = 186, RuleFunctiontryblock = 187, RuleHandlerseq = 188, 
		RuleHandler = 189, RuleExceptiondeclaration = 190, RuleThrowexpression = 191, 
		RuleExceptionspecification = 192, RuleDynamicexceptionspecification = 193, 
		RuleTypeidlist = 194, RuleNoexceptspecification = 195, RuleRightShift = 196, 
		RuleRightShiftAssign = 197, RuleTheoperator = 198, RuleLiteral = 199, 
		RuleBooleanliteral = 200, RulePointerliteral = 201, RuleUserdefinedliteral = 202
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
	class PreprocessorDirectiveContext;
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
	class RightShiftContext;
	class RightShiftAssignContext;
	class TheoperatorContext;
	class LiteralContext;
	class BooleanliteralContext;
	class PointerliteralContext;
	class UserdefinedliteralContext; 

	class  TranslationunitContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		TranslationunitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		TranslationunitContext() = default;
		void copyFrom(TranslationunitContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *EOF();
		DeclarationseqContext *declarationseq();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	TranslationunitContext* translationunit(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<TranslationunitContext> parsetranslationunit();

	class  PrimaryexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		PrimaryexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		PrimaryexpressionContext() = default;
		void copyFrom(PrimaryexpressionContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<PrimaryexpressionContext> parseprimaryexpression();

	class  IdexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		IdexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		IdexpressionContext() = default;
		void copyFrom(IdexpressionContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		UnqualifiedidContext *unqualifiedid();
		QualifiedidContext *qualifiedid();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	IdexpressionContext* idexpression(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<IdexpressionContext> parseidexpression();

	class  UnqualifiedidContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		UnqualifiedidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		UnqualifiedidContext() = default;
		void copyFrom(UnqualifiedidContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<UnqualifiedidContext> parseunqualifiedid();

	class  QualifiedidContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		QualifiedidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		QualifiedidContext() = default;
		void copyFrom(QualifiedidContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		NestednamespecifierContext *nestednamespecifier();
		UnqualifiedidContext *unqualifiedid();
		antlr4::tree::TerminalNode *Template();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	QualifiedidContext* qualifiedid(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<QualifiedidContext> parsequalifiedid();

	class  NestednamespecifierContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		NestednamespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		NestednamespecifierContext() = default;
		void copyFrom(NestednamespecifierContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<NestednamespecifierContext> parsenestednamespecifier();
	class  LambdaexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		LambdaexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		LambdaexpressionContext() = default;
		void copyFrom(LambdaexpressionContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		LambdaintroducerContext *lambdaintroducer();
		CompoundstatementContext *compoundstatement();
		LambdadeclaratorContext *lambdadeclarator();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	LambdaexpressionContext* lambdaexpression(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<LambdaexpressionContext> parselambdaexpression();

	class  LambdaintroducerContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		LambdaintroducerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		LambdaintroducerContext() = default;
		void copyFrom(LambdaintroducerContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *LeftBracket();
		antlr4::tree::TerminalNode *RightBracket();
		LambdacaptureContext *lambdacapture();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	LambdaintroducerContext* lambdaintroducer(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<LambdaintroducerContext> parselambdaintroducer();

	class  LambdacaptureContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		LambdacaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		LambdacaptureContext() = default;
		void copyFrom(LambdacaptureContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		CapturedefaultContext *capturedefault();
		CapturelistContext *capturelist();
		antlr4::tree::TerminalNode *Comma();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	LambdacaptureContext* lambdacapture(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<LambdacaptureContext> parselambdacapture();

	class  CapturedefaultContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		CapturedefaultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		CapturedefaultContext() = default;
		void copyFrom(CapturedefaultContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *And();
		antlr4::tree::TerminalNode *Assign();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	CapturedefaultContext* capturedefault(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<CapturedefaultContext> parsecapturedefault();

	class  CapturelistContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		CapturelistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		CapturelistContext() = default;
		void copyFrom(CapturelistContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<CapturelistContext> parsecapturelist();
	class  CaptureContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		CaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		CaptureContext() = default;
		void copyFrom(CaptureContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		SimplecaptureContext *simplecapture();
		InitcaptureContext *initcapture();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	CaptureContext* capture(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<CaptureContext> parsecapture();

	class  SimplecaptureContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		SimplecaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		SimplecaptureContext() = default;
		void copyFrom(SimplecaptureContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Identifier();
		antlr4::tree::TerminalNode *And();
		antlr4::tree::TerminalNode *This();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	SimplecaptureContext* simplecapture(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<SimplecaptureContext> parsesimplecapture();

	class  InitcaptureContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		InitcaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		InitcaptureContext() = default;
		void copyFrom(InitcaptureContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Identifier();
		InitializerContext *initializer();
		antlr4::tree::TerminalNode *And();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	InitcaptureContext* initcapture(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<InitcaptureContext> parseinitcapture();

	class  LambdadeclaratorContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		LambdadeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		LambdadeclaratorContext() = default;
		void copyFrom(LambdadeclaratorContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<LambdadeclaratorContext> parselambdadeclarator();

	class  PostfixexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		PostfixexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		PostfixexpressionContext() = default;
		void copyFrom(PostfixexpressionContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
		antlr4::tree::TerminalNode *GreaterThan();
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
	std::unique_ptr<PostfixexpressionContext> parsepostfixexpression();
	class  TypeidofexprContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		TypeidofexprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		TypeidofexprContext() = default;
		void copyFrom(TypeidofexprContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Typeid_();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	TypeidofexprContext* typeidofexpr(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<TypeidofexprContext> parsetypeidofexpr();

	class  TypeidofthetypeidContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		TypeidofthetypeidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		TypeidofthetypeidContext() = default;
		void copyFrom(TypeidofthetypeidContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Typeid_();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	TypeidofthetypeidContext* typeidofthetypeid(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<TypeidofthetypeidContext> parsetypeidofthetypeid();

	class  ExpressionlistContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		ExpressionlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		ExpressionlistContext() = default;
		void copyFrom(ExpressionlistContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		InitializerlistContext *initializerlist();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ExpressionlistContext* expressionlist(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<ExpressionlistContext> parseexpressionlist();

	class  PseudodestructornameContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		PseudodestructornameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		PseudodestructornameContext() = default;
		void copyFrom(PseudodestructornameContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<PseudodestructornameContext> parsepseudodestructorname();

	class  UnaryexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		UnaryexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		UnaryexpressionContext() = default;
		void copyFrom(UnaryexpressionContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<UnaryexpressionContext> parseunaryexpression();

	class  UnaryoperatorContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		UnaryoperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		UnaryoperatorContext() = default;
		void copyFrom(UnaryoperatorContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<UnaryoperatorContext> parseunaryoperator();

	class  NewexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		NewexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		NewexpressionContext() = default;
		void copyFrom(NewexpressionContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<NewexpressionContext> parsenewexpression();

	class  NewplacementContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		NewplacementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		NewplacementContext() = default;
		void copyFrom(NewplacementContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *LeftParen();
		ExpressionlistContext *expressionlist();
		antlr4::tree::TerminalNode *RightParen();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	NewplacementContext* newplacement(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<NewplacementContext> parsenewplacement();

	class  NewtypeidContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		NewtypeidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		NewtypeidContext() = default;
		void copyFrom(NewtypeidContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		TypespecifierseqContext *typespecifierseq();
		NewdeclaratorContext *newdeclarator();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	NewtypeidContext* newtypeid(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<NewtypeidContext> parsenewtypeid();

	class  NewdeclaratorContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		NewdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		NewdeclaratorContext() = default;
		void copyFrom(NewdeclaratorContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		PtroperatorContext *ptroperator();
		NewdeclaratorContext *newdeclarator();
		NoptrnewdeclaratorContext *noptrnewdeclarator();
		AbstractdeclaratorContext *abstractdeclarator();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	NewdeclaratorContext* newdeclarator(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<NewdeclaratorContext> parsenewdeclarator();

	class  NoptrnewdeclaratorContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		NoptrnewdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		NoptrnewdeclaratorContext() = default;
		void copyFrom(NoptrnewdeclaratorContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<NoptrnewdeclaratorContext> parsenoptrnewdeclarator();
	class  NewinitializerContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		NewinitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		NewinitializerContext() = default;
		void copyFrom(NewinitializerContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<NewinitializerContext> parsenewinitializer();

	class  DeleteexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		DeleteexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		DeleteexpressionContext() = default;
		void copyFrom(DeleteexpressionContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<DeleteexpressionContext> parsedeleteexpression();

	class  NoexceptexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		NoexceptexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		NoexceptexpressionContext() = default;
		void copyFrom(NoexceptexpressionContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<NoexceptexpressionContext> parsenoexceptexpression();

	class  CastexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		CastexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		CastexpressionContext() = default;
		void copyFrom(CastexpressionContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<CastexpressionContext> parsecastexpression();

	class  PmexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		PmexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		PmexpressionContext() = default;
		void copyFrom(PmexpressionContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<PmexpressionContext> parsepmexpression();
	class  MultiplicativeexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		MultiplicativeexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		MultiplicativeexpressionContext() = default;
		void copyFrom(MultiplicativeexpressionContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<MultiplicativeexpressionContext> parsemultiplicativeexpression();
	class  AdditiveexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		AdditiveexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		AdditiveexpressionContext() = default;
		void copyFrom(AdditiveexpressionContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<AdditiveexpressionContext> parseadditiveexpression();
	class  ShiftexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		ShiftexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		ShiftexpressionContext() = default;
		void copyFrom(ShiftexpressionContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<ShiftexpressionContext> parseshiftexpression();
	class  ShiftoperatorContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		ShiftoperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		ShiftoperatorContext() = default;
		void copyFrom(ShiftoperatorContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		RightShiftContext *rightShift();
		antlr4::tree::TerminalNode *LeftShift();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ShiftoperatorContext* shiftoperator(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<ShiftoperatorContext> parseshiftoperator();

	class  RelationalexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		RelationalexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		RelationalexpressionContext() = default;
		void copyFrom(RelationalexpressionContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		ShiftexpressionContext *shiftexpression();
		RelationalexpressionContext *relationalexpression();
		antlr4::tree::TerminalNode *Less();
		antlr4::tree::TerminalNode *GreaterThan();
		antlr4::tree::TerminalNode *LessEqual();
		antlr4::tree::TerminalNode *GreaterEqual();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	RelationalexpressionContext* relationalexpression();
	RelationalexpressionContext* relationalexpression(int precedence, antlr4::ParserRuleContext *parent);
	std::unique_ptr<RelationalexpressionContext> parserelationalexpression();
	class  EqualityexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		EqualityexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		EqualityexpressionContext() = default;
		void copyFrom(EqualityexpressionContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<EqualityexpressionContext> parseequalityexpression();
	class  AndexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		AndexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		AndexpressionContext() = default;
		void copyFrom(AndexpressionContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<AndexpressionContext> parseandexpression();
	class  ExclusiveorexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		ExclusiveorexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		ExclusiveorexpressionContext() = default;
		void copyFrom(ExclusiveorexpressionContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<ExclusiveorexpressionContext> parseexclusiveorexpression();
	class  InclusiveorexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		InclusiveorexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		InclusiveorexpressionContext() = default;
		void copyFrom(InclusiveorexpressionContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<InclusiveorexpressionContext> parseinclusiveorexpression();
	class  LogicalandexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		LogicalandexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		LogicalandexpressionContext() = default;
		void copyFrom(LogicalandexpressionContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		InclusiveorexpressionContext *inclusiveorexpression();
		LogicalandexpressionContext *logicalandexpression();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	LogicalandexpressionContext* logicalandexpression();
	LogicalandexpressionContext* logicalandexpression(int precedence, antlr4::ParserRuleContext *parent);
	std::unique_ptr<LogicalandexpressionContext> parselogicalandexpression();
	class  LogicalorexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		LogicalorexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		LogicalorexpressionContext() = default;
		void copyFrom(LogicalorexpressionContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		LogicalandexpressionContext *logicalandexpression();
		LogicalorexpressionContext *logicalorexpression();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	LogicalorexpressionContext* logicalorexpression();
	LogicalorexpressionContext* logicalorexpression(int precedence, antlr4::ParserRuleContext *parent);
	std::unique_ptr<LogicalorexpressionContext> parselogicalorexpression();
	class  ConditionalexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		ConditionalexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		ConditionalexpressionContext() = default;
		void copyFrom(ConditionalexpressionContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<ConditionalexpressionContext> parseconditionalexpression();

	class  AssignmentexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		AssignmentexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		AssignmentexpressionContext() = default;
		void copyFrom(AssignmentexpressionContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<AssignmentexpressionContext> parseassignmentexpression();

	class  AssignmentoperatorContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		AssignmentoperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		AssignmentoperatorContext() = default;
		void copyFrom(AssignmentoperatorContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Assign();
		antlr4::tree::TerminalNode *StarAssign();
		antlr4::tree::TerminalNode *DivAssign();
		antlr4::tree::TerminalNode *ModAssign();
		antlr4::tree::TerminalNode *PlusAssign();
		antlr4::tree::TerminalNode *MinusAssign();
		RightShiftAssignContext *rightShiftAssign();
		antlr4::tree::TerminalNode *LeftShiftAssign();
		antlr4::tree::TerminalNode *AndAssign();
		antlr4::tree::TerminalNode *XorAssign();
		antlr4::tree::TerminalNode *OrAssign();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	AssignmentoperatorContext* assignmentoperator(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<AssignmentoperatorContext> parseassignmentoperator();

	class  ExpressionContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		ExpressionContext() = default;
		void copyFrom(ExpressionContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<ExpressionContext> parseexpression();
	class  ConstantexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		ConstantexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		ConstantexpressionContext() = default;
		void copyFrom(ConstantexpressionContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		ConditionalexpressionContext *conditionalexpression();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ConstantexpressionContext* constantexpression(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<ConstantexpressionContext> parseconstantexpression();

	class  StatementContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		StatementContext() = default;
		void copyFrom(StatementContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<StatementContext> parsestatement();

	class  LabeledstatementContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		LabeledstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		LabeledstatementContext() = default;
		void copyFrom(LabeledstatementContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<LabeledstatementContext> parselabeledstatement();

	class  ExpressionstatementContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		ExpressionstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		ExpressionstatementContext() = default;
		void copyFrom(ExpressionstatementContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Semi();
		ExpressionContext *expression();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ExpressionstatementContext* expressionstatement(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<ExpressionstatementContext> parseexpressionstatement();

	class  CompoundstatementContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		CompoundstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		CompoundstatementContext() = default;
		void copyFrom(CompoundstatementContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *LeftBrace();
		antlr4::tree::TerminalNode *RightBrace();
		StatementseqContext *statementseq();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	CompoundstatementContext* compoundstatement(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<CompoundstatementContext> parsecompoundstatement();

	class  StatementseqContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		StatementseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		StatementseqContext() = default;
		void copyFrom(StatementseqContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		StatementContext *statement();
		StatementseqContext *statementseq();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	StatementseqContext* statementseq();
	StatementseqContext* statementseq(int precedence, antlr4::ParserRuleContext *parent);
	std::unique_ptr<StatementseqContext> parsestatementseq();
	class  SelectionstatementContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		SelectionstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		SelectionstatementContext() = default;
		void copyFrom(SelectionstatementContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<SelectionstatementContext> parseselectionstatement();

	class  ConditionContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		ConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		ConditionContext() = default;
		void copyFrom(ConditionContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<ConditionContext> parsecondition();

	class  IterationstatementContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		IterationstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		IterationstatementContext() = default;
		void copyFrom(IterationstatementContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<IterationstatementContext> parseiterationstatement();

	class  ForinitstatementContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		ForinitstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		ForinitstatementContext() = default;
		void copyFrom(ForinitstatementContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		ExpressionstatementContext *expressionstatement();
		SimpledeclarationContext *simpledeclaration();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ForinitstatementContext* forinitstatement(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<ForinitstatementContext> parseforinitstatement();

	class  ForrangedeclarationContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		ForrangedeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		ForrangedeclarationContext() = default;
		void copyFrom(ForrangedeclarationContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		DeclspecifierseqContext *declspecifierseq();
		DeclaratorContext *declarator();
		AttributespecifierseqContext *attributespecifierseq();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ForrangedeclarationContext* forrangedeclaration(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<ForrangedeclarationContext> parseforrangedeclaration();

	class  ForrangeinitializerContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		ForrangeinitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		ForrangeinitializerContext() = default;
		void copyFrom(ForrangeinitializerContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		ExpressionContext *expression();
		BracedinitlistContext *bracedinitlist();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ForrangeinitializerContext* forrangeinitializer(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<ForrangeinitializerContext> parseforrangeinitializer();

	class  JumpstatementContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		JumpstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		JumpstatementContext() = default;
		void copyFrom(JumpstatementContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<JumpstatementContext> parsejumpstatement();

	class  DeclarationstatementContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		DeclarationstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		DeclarationstatementContext() = default;
		void copyFrom(DeclarationstatementContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		BlockdeclarationContext *blockdeclaration();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	DeclarationstatementContext* declarationstatement(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<DeclarationstatementContext> parsedeclarationstatement();

	class  DeclarationseqContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		DeclarationseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		DeclarationseqContext() = default;
		void copyFrom(DeclarationseqContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		std::vector<DeclarationContext *> declaration();
		DeclarationContext* declaration(size_t i);

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	DeclarationseqContext* declarationseq(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<DeclarationseqContext> parsedeclarationseq();

	class  DeclarationContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		DeclarationContext() = default;
		void copyFrom(DeclarationContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
		PreprocessorDirectiveContext *preprocessorDirective();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	DeclarationContext* declaration(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<DeclarationContext> parsedeclaration();

	class  PreprocessorDirectiveContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		PreprocessorDirectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		PreprocessorDirectiveContext() = default;
		void copyFrom(PreprocessorDirectiveContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *MultiLineMacro();
		antlr4::tree::TerminalNode *Directive();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	PreprocessorDirectiveContext* preprocessorDirective(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<PreprocessorDirectiveContext> parsepreprocessorDirective();

	class  BlockdeclarationContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		BlockdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		BlockdeclarationContext() = default;
		void copyFrom(BlockdeclarationContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<BlockdeclarationContext> parseblockdeclaration();

	class  AliasdeclarationContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		AliasdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		AliasdeclarationContext() = default;
		void copyFrom(AliasdeclarationContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<AliasdeclarationContext> parsealiasdeclaration();

	class  SimpledeclarationContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		SimpledeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		SimpledeclarationContext() = default;
		void copyFrom(SimpledeclarationContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<SimpledeclarationContext> parsesimpledeclaration();

	class  Static_assertdeclarationContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		Static_assertdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		Static_assertdeclarationContext() = default;
		void copyFrom(Static_assertdeclarationContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<Static_assertdeclarationContext> parsestatic_assertdeclaration();

	class  EmptydeclarationContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		EmptydeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		EmptydeclarationContext() = default;
		void copyFrom(EmptydeclarationContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Semi();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	EmptydeclarationContext* emptydeclaration(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<EmptydeclarationContext> parseemptydeclaration();

	class  AttributedeclarationContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		AttributedeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		AttributedeclarationContext() = default;
		void copyFrom(AttributedeclarationContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		AttributespecifierseqContext *attributespecifierseq();
		antlr4::tree::TerminalNode *Semi();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	AttributedeclarationContext* attributedeclaration(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<AttributedeclarationContext> parseattributedeclaration();

	class  DeclspecifierContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		DeclspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		DeclspecifierContext() = default;
		void copyFrom(DeclspecifierContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<DeclspecifierContext> parsedeclspecifier();

	class  DeclspecifierseqContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		DeclspecifierseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		DeclspecifierseqContext() = default;
		void copyFrom(DeclspecifierseqContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		DeclspecifierContext *declspecifier();
		AttributespecifierseqContext *attributespecifierseq();
		DeclspecifierseqContext *declspecifierseq();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	DeclspecifierseqContext* declspecifierseq(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<DeclspecifierseqContext> parsedeclspecifierseq();

	class  StorageclassspecifierContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		StorageclassspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		StorageclassspecifierContext() = default;
		void copyFrom(StorageclassspecifierContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<StorageclassspecifierContext> parsestorageclassspecifier();

	class  FunctionspecifierContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		FunctionspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		FunctionspecifierContext() = default;
		void copyFrom(FunctionspecifierContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Inline();
		antlr4::tree::TerminalNode *Virtual();
		antlr4::tree::TerminalNode *Explicit();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	FunctionspecifierContext* functionspecifier(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<FunctionspecifierContext> parsefunctionspecifier();

	class  TypedefnameContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		TypedefnameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		TypedefnameContext() = default;
		void copyFrom(TypedefnameContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Identifier();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	TypedefnameContext* typedefname(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<TypedefnameContext> parsetypedefname();

	class  TypespecifierContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		TypespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		TypespecifierContext() = default;
		void copyFrom(TypespecifierContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		TrailingtypespecifierContext *trailingtypespecifier();
		ClassspecifierContext *classspecifier();
		EnumspecifierContext *enumspecifier();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	TypespecifierContext* typespecifier(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<TypespecifierContext> parsetypespecifier();

	class  TrailingtypespecifierContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		TrailingtypespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		TrailingtypespecifierContext() = default;
		void copyFrom(TrailingtypespecifierContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<TrailingtypespecifierContext> parsetrailingtypespecifier();

	class  TypespecifierseqContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		TypespecifierseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		TypespecifierseqContext() = default;
		void copyFrom(TypespecifierseqContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		TypespecifierContext *typespecifier();
		AttributespecifierseqContext *attributespecifierseq();
		TypespecifierseqContext *typespecifierseq();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	TypespecifierseqContext* typespecifierseq(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<TypespecifierseqContext> parsetypespecifierseq();

	class  TrailingtypespecifierseqContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		TrailingtypespecifierseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		TrailingtypespecifierseqContext() = default;
		void copyFrom(TrailingtypespecifierseqContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		TrailingtypespecifierContext *trailingtypespecifier();
		AttributespecifierseqContext *attributespecifierseq();
		TrailingtypespecifierseqContext *trailingtypespecifierseq();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	TrailingtypespecifierseqContext* trailingtypespecifierseq(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<TrailingtypespecifierseqContext> parsetrailingtypespecifierseq();

	class  SimpletypespecifierContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		SimpletypespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		SimpletypespecifierContext() = default;
		void copyFrom(SimpletypespecifierContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<SimpletypespecifierContext> parsesimpletypespecifier();

	class  ThetypenameContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		ThetypenameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		ThetypenameContext() = default;
		void copyFrom(ThetypenameContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<ThetypenameContext> parsethetypename();

	class  DecltypespecifierContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		DecltypespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		DecltypespecifierContext() = default;
		void copyFrom(DecltypespecifierContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<DecltypespecifierContext> parsedecltypespecifier();

	class  ElaboratedtypespecifierContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		ElaboratedtypespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		ElaboratedtypespecifierContext() = default;
		void copyFrom(ElaboratedtypespecifierContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<ElaboratedtypespecifierContext> parseelaboratedtypespecifier();

	class  EnumnameContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		EnumnameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		EnumnameContext() = default;
		void copyFrom(EnumnameContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Identifier();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	EnumnameContext* enumname(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<EnumnameContext> parseenumname();

	class  EnumspecifierContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		EnumspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		EnumspecifierContext() = default;
		void copyFrom(EnumspecifierContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<EnumspecifierContext> parseenumspecifier();

	class  EnumheadContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		EnumheadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		EnumheadContext() = default;
		void copyFrom(EnumheadContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<EnumheadContext> parseenumhead();

	class  OpaqueenumdeclarationContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		OpaqueenumdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		OpaqueenumdeclarationContext() = default;
		void copyFrom(OpaqueenumdeclarationContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<OpaqueenumdeclarationContext> parseopaqueenumdeclaration();

	class  EnumkeyContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		EnumkeyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		EnumkeyContext() = default;
		void copyFrom(EnumkeyContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Enum();
		antlr4::tree::TerminalNode *Class();
		antlr4::tree::TerminalNode *Struct();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	EnumkeyContext* enumkey(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<EnumkeyContext> parseenumkey();

	class  EnumbaseContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		EnumbaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		EnumbaseContext() = default;
		void copyFrom(EnumbaseContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Colon();
		TypespecifierseqContext *typespecifierseq();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	EnumbaseContext* enumbase(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<EnumbaseContext> parseenumbase();

	class  EnumeratorlistContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		EnumeratorlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		EnumeratorlistContext() = default;
		void copyFrom(EnumeratorlistContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<EnumeratorlistContext> parseenumeratorlist();
	class  EnumeratordefinitionContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		EnumeratordefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		EnumeratordefinitionContext() = default;
		void copyFrom(EnumeratordefinitionContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		EnumeratorContext *enumerator();
		antlr4::tree::TerminalNode *Assign();
		ConstantexpressionContext *constantexpression();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	EnumeratordefinitionContext* enumeratordefinition(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<EnumeratordefinitionContext> parseenumeratordefinition();

	class  EnumeratorContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		EnumeratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		EnumeratorContext() = default;
		void copyFrom(EnumeratorContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Identifier();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	EnumeratorContext* enumerator(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<EnumeratorContext> parseenumerator();

	class  NamespacenameContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		NamespacenameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		NamespacenameContext() = default;
		void copyFrom(NamespacenameContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		OriginalnamespacenameContext *originalnamespacename();
		NamespacealiasContext *namespacealias();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	NamespacenameContext* namespacename(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<NamespacenameContext> parsenamespacename();

	class  OriginalnamespacenameContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		OriginalnamespacenameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		OriginalnamespacenameContext() = default;
		void copyFrom(OriginalnamespacenameContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Identifier();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	OriginalnamespacenameContext* originalnamespacename(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<OriginalnamespacenameContext> parseoriginalnamespacename();

	class  NamespacedefinitionContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		NamespacedefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		NamespacedefinitionContext() = default;
		void copyFrom(NamespacedefinitionContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		NamednamespacedefinitionContext *namednamespacedefinition();
		UnnamednamespacedefinitionContext *unnamednamespacedefinition();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	NamespacedefinitionContext* namespacedefinition(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<NamespacedefinitionContext> parsenamespacedefinition();

	class  NamednamespacedefinitionContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		NamednamespacedefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		NamednamespacedefinitionContext() = default;
		void copyFrom(NamednamespacedefinitionContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		OriginalnamespacedefinitionContext *originalnamespacedefinition();
		ExtensionnamespacedefinitionContext *extensionnamespacedefinition();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	NamednamespacedefinitionContext* namednamespacedefinition(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<NamednamespacedefinitionContext> parsenamednamespacedefinition();

	class  OriginalnamespacedefinitionContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		OriginalnamespacedefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		OriginalnamespacedefinitionContext() = default;
		void copyFrom(OriginalnamespacedefinitionContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<OriginalnamespacedefinitionContext> parseoriginalnamespacedefinition();

	class  ExtensionnamespacedefinitionContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		ExtensionnamespacedefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		ExtensionnamespacedefinitionContext() = default;
		void copyFrom(ExtensionnamespacedefinitionContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<ExtensionnamespacedefinitionContext> parseextensionnamespacedefinition();

	class  UnnamednamespacedefinitionContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		UnnamednamespacedefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		UnnamednamespacedefinitionContext() = default;
		void copyFrom(UnnamednamespacedefinitionContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<UnnamednamespacedefinitionContext> parseunnamednamespacedefinition();

	class  NamespacebodyContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		NamespacebodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		NamespacebodyContext() = default;
		void copyFrom(NamespacebodyContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		DeclarationseqContext *declarationseq();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	NamespacebodyContext* namespacebody(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<NamespacebodyContext> parsenamespacebody();

	class  NamespacealiasContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		NamespacealiasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		NamespacealiasContext() = default;
		void copyFrom(NamespacealiasContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Identifier();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	NamespacealiasContext* namespacealias(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<NamespacealiasContext> parsenamespacealias();

	class  NamespacealiasdefinitionContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		NamespacealiasdefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		NamespacealiasdefinitionContext() = default;
		void copyFrom(NamespacealiasdefinitionContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<NamespacealiasdefinitionContext> parsenamespacealiasdefinition();

	class  QualifiednamespacespecifierContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		QualifiednamespacespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		QualifiednamespacespecifierContext() = default;
		void copyFrom(QualifiednamespacespecifierContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		NamespacenameContext *namespacename();
		NestednamespecifierContext *nestednamespecifier();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	QualifiednamespacespecifierContext* qualifiednamespacespecifier(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<QualifiednamespacespecifierContext> parsequalifiednamespacespecifier();

	class  UsingdeclarationContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		UsingdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		UsingdeclarationContext() = default;
		void copyFrom(UsingdeclarationContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<UsingdeclarationContext> parseusingdeclaration();

	class  UsingdirectiveContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		UsingdirectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		UsingdirectiveContext() = default;
		void copyFrom(UsingdirectiveContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<UsingdirectiveContext> parseusingdirective();

	class  AsmdefinitionContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		AsmdefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		AsmdefinitionContext() = default;
		void copyFrom(AsmdefinitionContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<AsmdefinitionContext> parseasmdefinition();

	class  LinkagespecificationContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		LinkagespecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		LinkagespecificationContext() = default;
		void copyFrom(LinkagespecificationContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<LinkagespecificationContext> parselinkagespecification();

	class  AttributespecifierseqContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		AttributespecifierseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		AttributespecifierseqContext() = default;
		void copyFrom(AttributespecifierseqContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		AttributespecifierContext *attributespecifier();
		AttributespecifierseqContext *attributespecifierseq();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	AttributespecifierseqContext* attributespecifierseq();
	AttributespecifierseqContext* attributespecifierseq(int precedence, antlr4::ParserRuleContext *parent);
	std::unique_ptr<AttributespecifierseqContext> parseattributespecifierseq();
	class  AttributespecifierContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		AttributespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		AttributespecifierContext() = default;
		void copyFrom(AttributespecifierContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<AttributespecifierContext> parseattributespecifier();

	class  AlignmentspecifierContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		AlignmentspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		AlignmentspecifierContext() = default;
		void copyFrom(AlignmentspecifierContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<AlignmentspecifierContext> parsealignmentspecifier();

	class  AttributelistContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		AttributelistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		AttributelistContext() = default;
		void copyFrom(AttributelistContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<AttributelistContext> parseattributelist();
	class  AttributeContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		AttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		AttributeContext() = default;
		void copyFrom(AttributeContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		AttributetokenContext *attributetoken();
		AttributeargumentclauseContext *attributeargumentclause();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	AttributeContext* attribute(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<AttributeContext> parseattribute();

	class  AttributetokenContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		AttributetokenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		AttributetokenContext() = default;
		void copyFrom(AttributetokenContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Identifier();
		AttributescopedtokenContext *attributescopedtoken();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	AttributetokenContext* attributetoken(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<AttributetokenContext> parseattributetoken();

	class  AttributescopedtokenContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		AttributescopedtokenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		AttributescopedtokenContext() = default;
		void copyFrom(AttributescopedtokenContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		AttributenamespaceContext *attributenamespace();
		antlr4::tree::TerminalNode *Doublecolon();
		antlr4::tree::TerminalNode *Identifier();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	AttributescopedtokenContext* attributescopedtoken(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<AttributescopedtokenContext> parseattributescopedtoken();

	class  AttributenamespaceContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		AttributenamespaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		AttributenamespaceContext() = default;
		void copyFrom(AttributenamespaceContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Identifier();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	AttributenamespaceContext* attributenamespace(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<AttributenamespaceContext> parseattributenamespace();

	class  AttributeargumentclauseContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		AttributeargumentclauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		AttributeargumentclauseContext() = default;
		void copyFrom(AttributeargumentclauseContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *LeftParen();
		BalancedtokenseqContext *balancedtokenseq();
		antlr4::tree::TerminalNode *RightParen();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	AttributeargumentclauseContext* attributeargumentclause(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<AttributeargumentclauseContext> parseattributeargumentclause();

	class  BalancedtokenseqContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		BalancedtokenseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		BalancedtokenseqContext() = default;
		void copyFrom(BalancedtokenseqContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		BalancedtokenContext *balancedtoken();
		BalancedtokenseqContext *balancedtokenseq();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	BalancedtokenseqContext* balancedtokenseq();
	BalancedtokenseqContext* balancedtokenseq(int precedence, antlr4::ParserRuleContext *parent);
	std::unique_ptr<BalancedtokenseqContext> parsebalancedtokenseq();
	class  BalancedtokenContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		BalancedtokenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		BalancedtokenContext() = default;
		void copyFrom(BalancedtokenContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<BalancedtokenContext> parsebalancedtoken();

	class  InitdeclaratorlistContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		InitdeclaratorlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		InitdeclaratorlistContext() = default;
		void copyFrom(InitdeclaratorlistContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<InitdeclaratorlistContext> parseinitdeclaratorlist();
	class  InitdeclaratorContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		InitdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		InitdeclaratorContext() = default;
		void copyFrom(InitdeclaratorContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		DeclaratorContext *declarator();
		InitializerContext *initializer();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	InitdeclaratorContext* initdeclarator(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<InitdeclaratorContext> parseinitdeclarator();

	class  DeclaratorContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		DeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		DeclaratorContext() = default;
		void copyFrom(DeclaratorContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<DeclaratorContext> parsedeclarator();

	class  PtrdeclaratorContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		PtrdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		PtrdeclaratorContext() = default;
		void copyFrom(PtrdeclaratorContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		NoptrdeclaratorContext *noptrdeclarator();
		PtroperatorContext *ptroperator();
		PtrdeclaratorContext *ptrdeclarator();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	PtrdeclaratorContext* ptrdeclarator(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<PtrdeclaratorContext> parseptrdeclarator();

	class  NoptrdeclaratorContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		NoptrdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		NoptrdeclaratorContext() = default;
		void copyFrom(NoptrdeclaratorContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<NoptrdeclaratorContext> parsenoptrdeclarator();
	class  ParametersandqualifiersContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		ParametersandqualifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		ParametersandqualifiersContext() = default;
		void copyFrom(ParametersandqualifiersContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<ParametersandqualifiersContext> parseparametersandqualifiers();

	class  TrailingreturntypeContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		TrailingreturntypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		TrailingreturntypeContext() = default;
		void copyFrom(TrailingreturntypeContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Arrow();
		TrailingtypespecifierseqContext *trailingtypespecifierseq();
		AbstractdeclaratorContext *abstractdeclarator();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	TrailingreturntypeContext* trailingreturntype(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<TrailingreturntypeContext> parsetrailingreturntype();

	class  PtroperatorContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		PtroperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		PtroperatorContext() = default;
		void copyFrom(PtroperatorContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<PtroperatorContext> parseptroperator();

	class  CvqualifierseqContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		CvqualifierseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		CvqualifierseqContext() = default;
		void copyFrom(CvqualifierseqContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		CvqualifierContext *cvqualifier();
		CvqualifierseqContext *cvqualifierseq();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	CvqualifierseqContext* cvqualifierseq(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<CvqualifierseqContext> parsecvqualifierseq();

	class  CvqualifierContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		CvqualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		CvqualifierContext() = default;
		void copyFrom(CvqualifierContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Const();
		antlr4::tree::TerminalNode *Volatile();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	CvqualifierContext* cvqualifier(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<CvqualifierContext> parsecvqualifier();

	class  RefqualifierContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		RefqualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		RefqualifierContext() = default;
		void copyFrom(RefqualifierContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *And();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	RefqualifierContext* refqualifier(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<RefqualifierContext> parserefqualifier();

	class  DeclaratoridContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		DeclaratoridContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		DeclaratoridContext() = default;
		void copyFrom(DeclaratoridContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		IdexpressionContext *idexpression();
		antlr4::tree::TerminalNode *Ellipsis();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	DeclaratoridContext* declaratorid(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<DeclaratoridContext> parsedeclaratorid();

	class  ThetypeidContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		ThetypeidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		ThetypeidContext() = default;
		void copyFrom(ThetypeidContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		TypespecifierseqContext *typespecifierseq();
		AbstractdeclaratorContext *abstractdeclarator();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ThetypeidContext* thetypeid(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<ThetypeidContext> parsethetypeid();

	class  AbstractdeclaratorContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		AbstractdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		AbstractdeclaratorContext() = default;
		void copyFrom(AbstractdeclaratorContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<AbstractdeclaratorContext> parseabstractdeclarator();

	class  PtrabstractdeclaratorContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		PtrabstractdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		PtrabstractdeclaratorContext() = default;
		void copyFrom(PtrabstractdeclaratorContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		NoptrabstractdeclaratorContext *noptrabstractdeclarator();
		PtroperatorContext *ptroperator();
		PtrabstractdeclaratorContext *ptrabstractdeclarator();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	PtrabstractdeclaratorContext* ptrabstractdeclarator(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<PtrabstractdeclaratorContext> parseptrabstractdeclarator();

	class  NoptrabstractdeclaratorContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		NoptrabstractdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		NoptrabstractdeclaratorContext() = default;
		void copyFrom(NoptrabstractdeclaratorContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<NoptrabstractdeclaratorContext> parsenoptrabstractdeclarator();
	class  AbstractpackdeclaratorContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		AbstractpackdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		AbstractpackdeclaratorContext() = default;
		void copyFrom(AbstractpackdeclaratorContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		NoptrabstractpackdeclaratorContext *noptrabstractpackdeclarator();
		PtroperatorContext *ptroperator();
		AbstractpackdeclaratorContext *abstractpackdeclarator();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	AbstractpackdeclaratorContext* abstractpackdeclarator(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<AbstractpackdeclaratorContext> parseabstractpackdeclarator();

	class  NoptrabstractpackdeclaratorContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		NoptrabstractpackdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		NoptrabstractpackdeclaratorContext() = default;
		void copyFrom(NoptrabstractpackdeclaratorContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<NoptrabstractpackdeclaratorContext> parsenoptrabstractpackdeclarator();
	class  ParameterdeclarationclauseContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		ParameterdeclarationclauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		ParameterdeclarationclauseContext() = default;
		void copyFrom(ParameterdeclarationclauseContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		ParameterdeclarationlistContext *parameterdeclarationlist();
		antlr4::tree::TerminalNode *Ellipsis();
		antlr4::tree::TerminalNode *Comma();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ParameterdeclarationclauseContext* parameterdeclarationclause(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<ParameterdeclarationclauseContext> parseparameterdeclarationclause();

	class  ParameterdeclarationlistContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		ParameterdeclarationlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		ParameterdeclarationlistContext() = default;
		void copyFrom(ParameterdeclarationlistContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<ParameterdeclarationlistContext> parseparameterdeclarationlist();
	class  ParameterdeclarationContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		ParameterdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		ParameterdeclarationContext() = default;
		void copyFrom(ParameterdeclarationContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		DeclspecifierseqContext *declspecifierseq();
		DeclaratorContext *declarator();
		AttributespecifierseqContext *attributespecifierseq();
		UnqualifiedidContext *unqualifiedid();
		antlr4::tree::TerminalNode *Assign();
		InitializerclauseContext *initializerclause();
		AbstractdeclaratorContext *abstractdeclarator();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ParameterdeclarationContext* parameterdeclaration(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<ParameterdeclarationContext> parseparameterdeclaration();

	class  FunctiondefinitionContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		FunctiondefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		FunctiondefinitionContext() = default;
		void copyFrom(FunctiondefinitionContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<FunctiondefinitionContext> parsefunctiondefinition();

	class  FunctionbodyContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		FunctionbodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		FunctionbodyContext() = default;
		void copyFrom(FunctionbodyContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<FunctionbodyContext> parsefunctionbody();

	class  InitializerContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		InitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		InitializerContext() = default;
		void copyFrom(InitializerContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<InitializerContext> parseinitializer();

	class  BraceorequalinitializerContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		BraceorequalinitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		BraceorequalinitializerContext() = default;
		void copyFrom(BraceorequalinitializerContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Assign();
		InitializerclauseContext *initializerclause();
		BracedinitlistContext *bracedinitlist();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	BraceorequalinitializerContext* braceorequalinitializer(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<BraceorequalinitializerContext> parsebraceorequalinitializer();

	class  InitializerclauseContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		InitializerclauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		InitializerclauseContext() = default;
		void copyFrom(InitializerclauseContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		AssignmentexpressionContext *assignmentexpression();
		BracedinitlistContext *bracedinitlist();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	InitializerclauseContext* initializerclause(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<InitializerclauseContext> parseinitializerclause();

	class  InitializerlistContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		InitializerlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		InitializerlistContext() = default;
		void copyFrom(InitializerlistContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<InitializerlistContext> parseinitializerlist();
	class  BracedinitlistContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		BracedinitlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		BracedinitlistContext() = default;
		void copyFrom(BracedinitlistContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<BracedinitlistContext> parsebracedinitlist();

	class  ClassnameContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		ClassnameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		ClassnameContext() = default;
		void copyFrom(ClassnameContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Identifier();
		SimpletemplateidContext *simpletemplateid();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ClassnameContext* classname(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<ClassnameContext> parseclassname();

	class  ClassspecifierContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		ClassspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		ClassspecifierContext() = default;
		void copyFrom(ClassspecifierContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<ClassspecifierContext> parseclassspecifier();

	class  ClassheadContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		ClassheadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		ClassheadContext() = default;
		void copyFrom(ClassheadContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<ClassheadContext> parseclasshead();

	class  ClassheadnameContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		ClassheadnameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		ClassheadnameContext() = default;
		void copyFrom(ClassheadnameContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		ClassnameContext *classname();
		NestednamespecifierContext *nestednamespecifier();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ClassheadnameContext* classheadname(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<ClassheadnameContext> parseclassheadname();

	class  ClassvirtspecifierContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		ClassvirtspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		ClassvirtspecifierContext() = default;
		void copyFrom(ClassvirtspecifierContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Final();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ClassvirtspecifierContext* classvirtspecifier(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<ClassvirtspecifierContext> parseclassvirtspecifier();

	class  ClasskeyContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		ClasskeyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		ClasskeyContext() = default;
		void copyFrom(ClasskeyContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Class();
		antlr4::tree::TerminalNode *Struct();
		antlr4::tree::TerminalNode *Union();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ClasskeyContext* classkey(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<ClasskeyContext> parseclasskey();

	class  MemberspecificationContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		MemberspecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		MemberspecificationContext() = default;
		void copyFrom(MemberspecificationContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<MemberspecificationContext> parsememberspecification();

	class  MemberdeclarationContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		MemberdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		MemberdeclarationContext() = default;
		void copyFrom(MemberdeclarationContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<MemberdeclarationContext> parsememberdeclaration();

	class  MemberdeclaratorlistContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		MemberdeclaratorlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		MemberdeclaratorlistContext() = default;
		void copyFrom(MemberdeclaratorlistContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<MemberdeclaratorlistContext> parsememberdeclaratorlist();
	class  MemberdeclaratorContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		MemberdeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		MemberdeclaratorContext() = default;
		void copyFrom(MemberdeclaratorContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<MemberdeclaratorContext> parsememberdeclarator();

	class  VirtspecifierseqContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		VirtspecifierseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		VirtspecifierseqContext() = default;
		void copyFrom(VirtspecifierseqContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		VirtspecifierContext *virtspecifier();
		VirtspecifierseqContext *virtspecifierseq();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	VirtspecifierseqContext* virtspecifierseq();
	VirtspecifierseqContext* virtspecifierseq(int precedence, antlr4::ParserRuleContext *parent);
	std::unique_ptr<VirtspecifierseqContext> parsevirtspecifierseq();
	class  VirtspecifierContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		VirtspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		VirtspecifierContext() = default;
		void copyFrom(VirtspecifierContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Override();
		antlr4::tree::TerminalNode *Final();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	VirtspecifierContext* virtspecifier(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<VirtspecifierContext> parsevirtspecifier();

	class  PurespecifierContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		antlr4::Token *val = nullptr;;
		PurespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		PurespecifierContext() = default;
		void copyFrom(PurespecifierContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Assign();
		antlr4::tree::TerminalNode *Octalliteral();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	PurespecifierContext* purespecifier(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<PurespecifierContext> parsepurespecifier();

	class  BaseclauseContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		BaseclauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		BaseclauseContext() = default;
		void copyFrom(BaseclauseContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Colon();
		BasespecifierlistContext *basespecifierlist();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	BaseclauseContext* baseclause(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<BaseclauseContext> parsebaseclause();

	class  BasespecifierlistContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		BasespecifierlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		BasespecifierlistContext() = default;
		void copyFrom(BasespecifierlistContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<BasespecifierlistContext> parsebasespecifierlist();
	class  BasespecifierContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		BasespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		BasespecifierContext() = default;
		void copyFrom(BasespecifierContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<BasespecifierContext> parsebasespecifier();

	class  ClassordecltypeContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		ClassordecltypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		ClassordecltypeContext() = default;
		void copyFrom(ClassordecltypeContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		ClassnameContext *classname();
		NestednamespecifierContext *nestednamespecifier();
		DecltypespecifierContext *decltypespecifier();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ClassordecltypeContext* classordecltype(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<ClassordecltypeContext> parseclassordecltype();

	class  BasetypespecifierContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		BasetypespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		BasetypespecifierContext() = default;
		void copyFrom(BasetypespecifierContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		ClassordecltypeContext *classordecltype();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	BasetypespecifierContext* basetypespecifier(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<BasetypespecifierContext> parsebasetypespecifier();

	class  AccessspecifierContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		AccessspecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		AccessspecifierContext() = default;
		void copyFrom(AccessspecifierContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Private();
		antlr4::tree::TerminalNode *Protected();
		antlr4::tree::TerminalNode *Public();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	AccessspecifierContext* accessspecifier(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<AccessspecifierContext> parseaccessspecifier();

	class  ConversionfunctionidContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		ConversionfunctionidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		ConversionfunctionidContext() = default;
		void copyFrom(ConversionfunctionidContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Operator();
		ConversiontypeidContext *conversiontypeid();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ConversionfunctionidContext* conversionfunctionid(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<ConversionfunctionidContext> parseconversionfunctionid();

	class  ConversiontypeidContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		ConversiontypeidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		ConversiontypeidContext() = default;
		void copyFrom(ConversiontypeidContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		TypespecifierseqContext *typespecifierseq();
		ConversiondeclaratorContext *conversiondeclarator();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ConversiontypeidContext* conversiontypeid(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<ConversiontypeidContext> parseconversiontypeid();

	class  ConversiondeclaratorContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		ConversiondeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		ConversiondeclaratorContext() = default;
		void copyFrom(ConversiondeclaratorContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		PtroperatorContext *ptroperator();
		ConversiondeclaratorContext *conversiondeclarator();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ConversiondeclaratorContext* conversiondeclarator(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<ConversiondeclaratorContext> parseconversiondeclarator();

	class  CtorinitializerContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		CtorinitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		CtorinitializerContext() = default;
		void copyFrom(CtorinitializerContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Colon();
		MeminitializerlistContext *meminitializerlist();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	CtorinitializerContext* ctorinitializer(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<CtorinitializerContext> parsectorinitializer();

	class  MeminitializerlistContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		MeminitializerlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		MeminitializerlistContext() = default;
		void copyFrom(MeminitializerlistContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<MeminitializerlistContext> parsememinitializerlist();

	class  MeminitializerContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		MeminitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		MeminitializerContext() = default;
		void copyFrom(MeminitializerContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<MeminitializerContext> parsememinitializer();

	class  MeminitializeridContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		MeminitializeridContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		MeminitializeridContext() = default;
		void copyFrom(MeminitializeridContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		ClassordecltypeContext *classordecltype();
		antlr4::tree::TerminalNode *Identifier();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	MeminitializeridContext* meminitializerid(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<MeminitializeridContext> parsememinitializerid();

	class  OperatorfunctionidContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		OperatorfunctionidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		OperatorfunctionidContext() = default;
		void copyFrom(OperatorfunctionidContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Operator();
		TheoperatorContext *theoperator();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	OperatorfunctionidContext* operatorfunctionid(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<OperatorfunctionidContext> parseoperatorfunctionid();

	class  LiteraloperatoridContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		LiteraloperatoridContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		LiteraloperatoridContext() = default;
		void copyFrom(LiteraloperatoridContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<LiteraloperatoridContext> parseliteraloperatorid();

	class  TemplatedeclarationContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		TemplatedeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		TemplatedeclarationContext() = default;
		void copyFrom(TemplatedeclarationContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Template();
		antlr4::tree::TerminalNode *Less();
		TemplateparameterlistContext *templateparameterlist();
		antlr4::tree::TerminalNode *GreaterThan();
		DeclarationContext *declaration();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	TemplatedeclarationContext* templatedeclaration(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<TemplatedeclarationContext> parsetemplatedeclaration();

	class  TemplateparameterlistContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		TemplateparameterlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		TemplateparameterlistContext() = default;
		void copyFrom(TemplateparameterlistContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<TemplateparameterlistContext> parsetemplateparameterlist();
	class  TemplateparameterContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		TemplateparameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		TemplateparameterContext() = default;
		void copyFrom(TemplateparameterContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		TypeparameterContext *typeparameter();
		ParameterdeclarationContext *parameterdeclaration();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	TemplateparameterContext* templateparameter(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<TemplateparameterContext> parsetemplateparameter();

	class  TypeparameterContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		TypeparameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		TypeparameterContext() = default;
		void copyFrom(TypeparameterContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
		antlr4::tree::TerminalNode *GreaterThan();
		IdexpressionContext *idexpression();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	TypeparameterContext* typeparameter(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<TypeparameterContext> parsetypeparameter();

	class  SimpletemplateidContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		SimpletemplateidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		SimpletemplateidContext() = default;
		void copyFrom(SimpletemplateidContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		TemplatenameContext *templatename();
		antlr4::tree::TerminalNode *Less();
		antlr4::tree::TerminalNode *GreaterThan();
		TemplateargumentlistContext *templateargumentlist();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	SimpletemplateidContext* simpletemplateid(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<SimpletemplateidContext> parsesimpletemplateid();

	class  TemplateidContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		TemplateidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		TemplateidContext() = default;
		void copyFrom(TemplateidContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		SimpletemplateidContext *simpletemplateid();
		OperatorfunctionidContext *operatorfunctionid();
		antlr4::tree::TerminalNode *Less();
		antlr4::tree::TerminalNode *GreaterThan();
		TemplateargumentlistContext *templateargumentlist();
		LiteraloperatoridContext *literaloperatorid();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	TemplateidContext* templateid(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<TemplateidContext> parsetemplateid();

	class  TemplatenameContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		TemplatenameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		TemplatenameContext() = default;
		void copyFrom(TemplatenameContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Identifier();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	TemplatenameContext* templatename(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<TemplatenameContext> parsetemplatename();

	class  TemplateargumentlistContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		TemplateargumentlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		TemplateargumentlistContext() = default;
		void copyFrom(TemplateargumentlistContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<TemplateargumentlistContext> parsetemplateargumentlist();
	class  TemplateargumentContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		TemplateargumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		TemplateargumentContext() = default;
		void copyFrom(TemplateargumentContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		SimpletemplateidContext *simpletemplateid();
		ThetypeidContext *thetypeid();
		ConstantexpressionContext *constantexpression();
		IdexpressionContext *idexpression();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	TemplateargumentContext* templateargument(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<TemplateargumentContext> parsetemplateargument();

	class  TypenamespecifierContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		TypenamespecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		TypenamespecifierContext() = default;
		void copyFrom(TypenamespecifierContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<TypenamespecifierContext> parsetypenamespecifier();

	class  ExplicitinstantiationContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		ExplicitinstantiationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		ExplicitinstantiationContext() = default;
		void copyFrom(ExplicitinstantiationContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Template();
		DeclarationContext *declaration();
		antlr4::tree::TerminalNode *Extern();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ExplicitinstantiationContext* explicitinstantiation(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<ExplicitinstantiationContext> parseexplicitinstantiation();

	class  ExplicitspecializationContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		ExplicitspecializationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		ExplicitspecializationContext() = default;
		void copyFrom(ExplicitspecializationContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Template();
		antlr4::tree::TerminalNode *Less();
		antlr4::tree::TerminalNode *GreaterThan();
		DeclarationContext *declaration();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ExplicitspecializationContext* explicitspecialization(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<ExplicitspecializationContext> parseexplicitspecialization();

	class  TryblockContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		TryblockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		TryblockContext() = default;
		void copyFrom(TryblockContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Try();
		CompoundstatementContext *compoundstatement();
		HandlerseqContext *handlerseq();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	TryblockContext* tryblock(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<TryblockContext> parsetryblock();

	class  FunctiontryblockContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		FunctiontryblockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		FunctiontryblockContext() = default;
		void copyFrom(FunctiontryblockContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<FunctiontryblockContext> parsefunctiontryblock();

	class  HandlerseqContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		HandlerseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		HandlerseqContext() = default;
		void copyFrom(HandlerseqContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		HandlerContext *handler();
		HandlerseqContext *handlerseq();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	HandlerseqContext* handlerseq(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<HandlerseqContext> parsehandlerseq();

	class  HandlerContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		HandlerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		HandlerContext() = default;
		void copyFrom(HandlerContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<HandlerContext> parsehandler();

	class  ExceptiondeclarationContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		ExceptiondeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		ExceptiondeclarationContext() = default;
		void copyFrom(ExceptiondeclarationContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<ExceptiondeclarationContext> parseexceptiondeclaration();

	class  ThrowexpressionContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		ThrowexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		ThrowexpressionContext() = default;
		void copyFrom(ThrowexpressionContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Throw();
		AssignmentexpressionContext *assignmentexpression();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ThrowexpressionContext* throwexpression(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<ThrowexpressionContext> parsethrowexpression();

	class  ExceptionspecificationContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		ExceptionspecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		ExceptionspecificationContext() = default;
		void copyFrom(ExceptionspecificationContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		DynamicexceptionspecificationContext *dynamicexceptionspecification();
		NoexceptspecificationContext *noexceptspecification();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	ExceptionspecificationContext* exceptionspecification(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<ExceptionspecificationContext> parseexceptionspecification();

	class  DynamicexceptionspecificationContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		DynamicexceptionspecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		DynamicexceptionspecificationContext() = default;
		void copyFrom(DynamicexceptionspecificationContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<DynamicexceptionspecificationContext> parsedynamicexceptionspecification();

	class  TypeidlistContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		TypeidlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		TypeidlistContext() = default;
		void copyFrom(TypeidlistContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<TypeidlistContext> parsetypeidlist();
	class  NoexceptspecificationContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		NoexceptspecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		NoexceptspecificationContext() = default;
		void copyFrom(NoexceptspecificationContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<NoexceptspecificationContext> parsenoexceptspecification();

	class  RightShiftContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		RightShiftContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		RightShiftContext() = default;
		void copyFrom(RightShiftContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		std::vector<antlr4::tree::TerminalNode *> GreaterThan();
		antlr4::tree::TerminalNode* GreaterThan(size_t i);

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	RightShiftContext* rightShift(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<RightShiftContext> parserightShift();

	class  RightShiftAssignContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		RightShiftAssignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		RightShiftAssignContext() = default;
		void copyFrom(RightShiftAssignContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		std::vector<antlr4::tree::TerminalNode *> GreaterThan();
		antlr4::tree::TerminalNode* GreaterThan(size_t i);
		antlr4::tree::TerminalNode *Assign();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	RightShiftAssignContext* rightShiftAssign(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<RightShiftAssignContext> parserightShiftAssign();

	class  TheoperatorContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		TheoperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		TheoperatorContext() = default;
		void copyFrom(TheoperatorContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
		antlr4::tree::TerminalNode *GreaterThan();
		antlr4::tree::TerminalNode *PlusAssign();
		antlr4::tree::TerminalNode *MinusAssign();
		antlr4::tree::TerminalNode *StarAssign();
		antlr4::tree::TerminalNode *DivAssign();
		antlr4::tree::TerminalNode *ModAssign();
		antlr4::tree::TerminalNode *XorAssign();
		antlr4::tree::TerminalNode *AndAssign();
		antlr4::tree::TerminalNode *OrAssign();
		antlr4::tree::TerminalNode *LeftShift();
		RightShiftContext *rightShift();
		RightShiftAssignContext *rightShiftAssign();
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
	std::unique_ptr<TheoperatorContext> parsetheoperator();

	class  LiteralContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		LiteralContext() = default;
		void copyFrom(LiteralContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<LiteralContext> parseliteral();

	class  BooleanliteralContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		BooleanliteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		BooleanliteralContext() = default;
		void copyFrom(BooleanliteralContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *False();
		antlr4::tree::TerminalNode *True();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	BooleanliteralContext* booleanliteral(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<BooleanliteralContext> parsebooleanliteral();

	class  PointerliteralContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		PointerliteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		PointerliteralContext() = default;
		void copyFrom(PointerliteralContext *context);
		using antlr4::ParserRuleContext::copyFrom;

		size_t getRuleIndex() const final;
		antlr4::tree::TerminalNode *Nullptr();

		void enterRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;
		void exitRule(not_null<antlr4::tree::ParseTreeListener*> listener) final;

		antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) final;
	 
	};

	PointerliteralContext* pointerliteral(antlr4::ParserRuleContext *parent = nullptr);
	std::unique_ptr<PointerliteralContext> parsepointerliteral();

	class  UserdefinedliteralContext : public antlr4::ParserRuleContext
	{
	public:
		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;
		UserdefinedliteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		UserdefinedliteralContext() = default;
		void copyFrom(UserdefinedliteralContext *context);
		using antlr4::ParserRuleContext::copyFrom;

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
	std::unique_ptr<UserdefinedliteralContext> parseuserdefinedliteral();


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

