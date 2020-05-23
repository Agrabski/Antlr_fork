
// Generated from D:\Programming\antlr4\RuntimeIntegrationTests\CPPGrammar\CPPGrammarLib\CPP14.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "CPP14Parser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by CPP14Parser.
 */
class  CPP14Listener : public antlr4::tree::ParseTreeListener {
public:

	virtual void enter(not_null<CPP14Parser::TranslationunitContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::TranslationunitContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::PrimaryexpressionContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::PrimaryexpressionContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::IdexpressionContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::IdexpressionContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::UnqualifiedidContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::UnqualifiedidContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::QualifiedidContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::QualifiedidContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::NestednamespecifierContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::NestednamespecifierContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::LambdaexpressionContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::LambdaexpressionContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::LambdaintroducerContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::LambdaintroducerContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::LambdacaptureContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::LambdacaptureContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::CapturedefaultContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::CapturedefaultContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::CapturelistContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::CapturelistContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::CaptureContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::CaptureContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::SimplecaptureContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::SimplecaptureContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::InitcaptureContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::InitcaptureContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::LambdadeclaratorContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::LambdadeclaratorContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::PostfixexpressionContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::PostfixexpressionContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::TypeidofexprContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::TypeidofexprContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::TypeidofthetypeidContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::TypeidofthetypeidContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::ExpressionlistContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::ExpressionlistContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::PseudodestructornameContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::PseudodestructornameContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::UnaryexpressionContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::UnaryexpressionContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::UnaryoperatorContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::UnaryoperatorContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::NewexpressionContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::NewexpressionContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::NewplacementContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::NewplacementContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::NewtypeidContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::NewtypeidContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::NewdeclaratorContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::NewdeclaratorContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::NoptrnewdeclaratorContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::NoptrnewdeclaratorContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::NewinitializerContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::NewinitializerContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::DeleteexpressionContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::DeleteexpressionContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::NoexceptexpressionContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::NoexceptexpressionContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::CastexpressionContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::CastexpressionContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::PmexpressionContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::PmexpressionContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::MultiplicativeexpressionContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::MultiplicativeexpressionContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::AdditiveexpressionContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::AdditiveexpressionContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::ShiftexpressionContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::ShiftexpressionContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::ShiftoperatorContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::ShiftoperatorContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::RelationalexpressionContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::RelationalexpressionContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::EqualityexpressionContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::EqualityexpressionContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::AndexpressionContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::AndexpressionContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::ExclusiveorexpressionContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::ExclusiveorexpressionContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::InclusiveorexpressionContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::InclusiveorexpressionContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::LogicalandexpressionContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::LogicalandexpressionContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::LogicalorexpressionContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::LogicalorexpressionContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::ConditionalexpressionContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::ConditionalexpressionContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::AssignmentexpressionContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::AssignmentexpressionContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::AssignmentoperatorContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::AssignmentoperatorContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::ExpressionContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::ExpressionContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::ConstantexpressionContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::ConstantexpressionContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::StatementContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::StatementContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::LabeledstatementContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::LabeledstatementContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::ExpressionstatementContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::ExpressionstatementContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::CompoundstatementContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::CompoundstatementContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::StatementseqContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::StatementseqContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::SelectionstatementContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::SelectionstatementContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::ConditionContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::ConditionContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::IterationstatementContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::IterationstatementContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::ForinitstatementContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::ForinitstatementContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::ForrangedeclarationContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::ForrangedeclarationContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::ForrangeinitializerContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::ForrangeinitializerContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::JumpstatementContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::JumpstatementContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::DeclarationstatementContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::DeclarationstatementContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::DeclarationseqContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::DeclarationseqContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::DeclarationContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::DeclarationContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::PreprocessorDirectiveContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::PreprocessorDirectiveContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::BlockdeclarationContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::BlockdeclarationContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::AliasdeclarationContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::AliasdeclarationContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::SimpledeclarationContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::SimpledeclarationContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::Static_assertdeclarationContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::Static_assertdeclarationContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::EmptydeclarationContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::EmptydeclarationContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::AttributedeclarationContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::AttributedeclarationContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::DeclspecifierContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::DeclspecifierContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::DeclspecifierseqContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::DeclspecifierseqContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::StorageclassspecifierContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::StorageclassspecifierContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::FunctionspecifierContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::FunctionspecifierContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::TypedefnameContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::TypedefnameContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::TypespecifierContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::TypespecifierContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::TrailingtypespecifierContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::TrailingtypespecifierContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::TypespecifierseqContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::TypespecifierseqContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::TrailingtypespecifierseqContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::TrailingtypespecifierseqContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::SimpletypespecifierContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::SimpletypespecifierContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::ThetypenameContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::ThetypenameContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::DecltypespecifierContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::DecltypespecifierContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::ElaboratedtypespecifierContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::ElaboratedtypespecifierContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::EnumnameContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::EnumnameContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::EnumspecifierContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::EnumspecifierContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::EnumheadContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::EnumheadContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::OpaqueenumdeclarationContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::OpaqueenumdeclarationContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::EnumkeyContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::EnumkeyContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::EnumbaseContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::EnumbaseContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::EnumeratorlistContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::EnumeratorlistContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::EnumeratordefinitionContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::EnumeratordefinitionContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::EnumeratorContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::EnumeratorContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::NamespacenameContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::NamespacenameContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::OriginalnamespacenameContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::OriginalnamespacenameContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::NamespacedefinitionContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::NamespacedefinitionContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::NamednamespacedefinitionContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::NamednamespacedefinitionContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::OriginalnamespacedefinitionContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::OriginalnamespacedefinitionContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::ExtensionnamespacedefinitionContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::ExtensionnamespacedefinitionContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::UnnamednamespacedefinitionContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::UnnamednamespacedefinitionContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::NamespacebodyContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::NamespacebodyContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::NamespacealiasContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::NamespacealiasContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::NamespacealiasdefinitionContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::NamespacealiasdefinitionContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::QualifiednamespacespecifierContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::QualifiednamespacespecifierContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::UsingdeclarationContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::UsingdeclarationContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::UsingdirectiveContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::UsingdirectiveContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::AsmdefinitionContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::AsmdefinitionContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::LinkagespecificationContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::LinkagespecificationContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::AttributespecifierseqContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::AttributespecifierseqContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::AttributespecifierContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::AttributespecifierContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::AlignmentspecifierContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::AlignmentspecifierContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::AttributelistContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::AttributelistContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::AttributeContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::AttributeContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::AttributetokenContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::AttributetokenContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::AttributescopedtokenContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::AttributescopedtokenContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::AttributenamespaceContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::AttributenamespaceContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::AttributeargumentclauseContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::AttributeargumentclauseContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::BalancedtokenseqContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::BalancedtokenseqContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::BalancedtokenContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::BalancedtokenContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::InitdeclaratorlistContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::InitdeclaratorlistContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::InitdeclaratorContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::InitdeclaratorContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::DeclaratorContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::DeclaratorContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::PtrdeclaratorContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::PtrdeclaratorContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::NoptrdeclaratorContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::NoptrdeclaratorContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::ParametersandqualifiersContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::ParametersandqualifiersContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::TrailingreturntypeContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::TrailingreturntypeContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::PtroperatorContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::PtroperatorContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::CvqualifierseqContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::CvqualifierseqContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::CvqualifierContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::CvqualifierContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::RefqualifierContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::RefqualifierContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::DeclaratoridContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::DeclaratoridContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::ThetypeidContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::ThetypeidContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::AbstractdeclaratorContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::AbstractdeclaratorContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::PtrabstractdeclaratorContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::PtrabstractdeclaratorContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::NoptrabstractdeclaratorContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::NoptrabstractdeclaratorContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::AbstractpackdeclaratorContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::AbstractpackdeclaratorContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::NoptrabstractpackdeclaratorContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::NoptrabstractpackdeclaratorContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::ParameterdeclarationclauseContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::ParameterdeclarationclauseContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::ParameterdeclarationlistContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::ParameterdeclarationlistContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::ParameterdeclarationContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::ParameterdeclarationContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::FunctiondefinitionContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::FunctiondefinitionContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::FunctionbodyContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::FunctionbodyContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::InitializerContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::InitializerContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::BraceorequalinitializerContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::BraceorequalinitializerContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::InitializerclauseContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::InitializerclauseContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::InitializerlistContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::InitializerlistContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::BracedinitlistContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::BracedinitlistContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::ClassnameContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::ClassnameContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::ClassspecifierContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::ClassspecifierContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::ClassheadContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::ClassheadContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::ClassheadnameContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::ClassheadnameContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::ClassvirtspecifierContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::ClassvirtspecifierContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::ClasskeyContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::ClasskeyContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::MemberspecificationContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::MemberspecificationContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::MemberdeclarationContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::MemberdeclarationContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::MemberdeclaratorlistContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::MemberdeclaratorlistContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::MemberdeclaratorContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::MemberdeclaratorContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::VirtspecifierseqContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::VirtspecifierseqContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::VirtspecifierContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::VirtspecifierContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::PurespecifierContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::PurespecifierContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::BaseclauseContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::BaseclauseContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::BasespecifierlistContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::BasespecifierlistContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::BasespecifierContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::BasespecifierContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::ClassordecltypeContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::ClassordecltypeContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::BasetypespecifierContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::BasetypespecifierContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::AccessspecifierContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::AccessspecifierContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::ConversionfunctionidContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::ConversionfunctionidContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::ConversiontypeidContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::ConversiontypeidContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::ConversiondeclaratorContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::ConversiondeclaratorContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::CtorinitializerContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::CtorinitializerContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::MeminitializerlistContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::MeminitializerlistContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::MeminitializerContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::MeminitializerContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::MeminitializeridContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::MeminitializeridContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::OperatorfunctionidContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::OperatorfunctionidContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::LiteraloperatoridContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::LiteraloperatoridContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::TemplatedeclarationContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::TemplatedeclarationContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::TemplateparameterlistContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::TemplateparameterlistContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::TemplateparameterContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::TemplateparameterContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::TypeparameterContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::TypeparameterContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::SimpletemplateidContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::SimpletemplateidContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::TemplateidContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::TemplateidContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::TemplatenameContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::TemplatenameContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::TemplateargumentlistContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::TemplateargumentlistContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::TemplateargumentContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::TemplateargumentContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::TypenamespecifierContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::TypenamespecifierContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::ExplicitinstantiationContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::ExplicitinstantiationContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::ExplicitspecializationContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::ExplicitspecializationContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::TryblockContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::TryblockContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::FunctiontryblockContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::FunctiontryblockContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::HandlerseqContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::HandlerseqContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::HandlerContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::HandlerContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::ExceptiondeclarationContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::ExceptiondeclarationContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::ThrowexpressionContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::ThrowexpressionContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::ExceptionspecificationContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::ExceptionspecificationContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::DynamicexceptionspecificationContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::DynamicexceptionspecificationContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::TypeidlistContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::TypeidlistContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::NoexceptspecificationContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::NoexceptspecificationContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::RightShiftContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::RightShiftContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::RightShiftAssignContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::RightShiftAssignContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::TheoperatorContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::TheoperatorContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::LiteralContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::LiteralContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::BooleanliteralContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::BooleanliteralContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::PointerliteralContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::PointerliteralContext *>) = 0;

	virtual void enter(not_null<CPP14Parser::UserdefinedliteralContext *>) = 0;
	virtual void exit(not_null<CPP14Parser::UserdefinedliteralContext *>) = 0;


};

