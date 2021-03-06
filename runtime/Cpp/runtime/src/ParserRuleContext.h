﻿/* Copyright (c) 2012-2017 The ANTLR Project. All rights reserved.
 * Use of this file is governed by the BSD 3-clause license that
 * can be found in the LICENSE.txt file in the project root.
 */

#pragma once

#include "RuleContext.h"
#include "support/CPPUtils.h"

namespace antlr4 {

	/// <summary>
	/// A rule invocation record for parsing.
	///
	///  Contains all of the information about the current rule not stored in the
	///  RuleContext. It handles parse tree children list, Any ATN state
	///  tracing, and the default values available for rule invocatons:
	///  start, stop, rule index, current alt number.
	///
	///  Subclasses made for each rule and grammar track the parameters,
	///  return values, locals, and labels specific to that rule. These
	///  are the objects that are returned from rules.
	///
	///  Note text is not an actual field of a rule return value; it is computed
	///  from start and stop using the input stream's toString() method.  I
	///  could add a ctor to this so that we can pass in and store the input
	///  stream, but I'm not sure we want to do that.  It would seem to be undefined
	///  to get the .text property anyway if the rule matches tokens from multiple
	///  input streams.
	///
	///  I do not use getters for fields of objects that are used simply to
	///  group values such as this aggregate.  The getters/setters are there to
	///  satisfy the superclass interface.
	/// </summary>
	class ANTLR4CPP_PUBLIC ParserRuleContext : public RuleContext {
	public:
		static ParserRuleContext EMPTY;

		/// <summary>
		/// For debugging/tracing purposes, we want to track all of the nodes in
		///  the ATN traversed by the parser for a particular rule.
		///  This list indicates the sequence of ATN nodes used to match
		///  the elements of the children list. This list does not include
		///  ATN nodes and other rules used to match rule invocations. It
		///  traces the rule invocation node itself but nothing inside that
		///  other rule's ATN submachine.
		///
		///  There is NOT a one-to-one correspondence between the children and
		///  states list. There are typically many nodes in the ATN traversed
		///  for each element in the children list. For example, for a rule
		///  invocation there is the invoking state and the following state.
		///
		///  The parser setState() method updates field s and adds it to this list
		///  if we are debugging/tracing.
		///
		///  This does not trace states visited during prediction.
		/// </summary>
		//	public List<Integer> states;

		Token* start;
		Token* stop;

		/// The exception that forced this rule to return. If the rule successfully
		/// completed, this is "null exception pointer".
		std::exception_ptr exception;

		ParserRuleContext();
		virtual ~ParserRuleContext()
		{

		}
		ParserRuleContext(ParserRuleContext* parent, size_t invokingStateNumber);

		virtual void copyFrom(ParserRuleContext const* ctx);


		// Double dispatch methods for listeners

		virtual void enterRule(not_null<tree::ParseTreeListener*> listener) {}
		virtual void exitRule(not_null<tree::ParseTreeListener*> listener) {}

		/** Add a token leaf node child and force its parent to be this node. */
		tree::TerminalNode* addChild(std::unique_ptr<tree::TerminalNode>&& t);
		RuleContext* addChild(std::unique_ptr<RuleContext>&& ruleInvocation);

		/// Used by enterOuterAlt to toss out a RuleContext previously added as
		/// we entered a rule. If we have # label, we will need to remove
		/// generic ruleContext object.
		virtual void removeLastChild();

		virtual tree::TerminalNode* getToken(size_t ttype, std::size_t i);

		virtual std::vector<tree::TerminalNode*> getTokens(size_t ttype);

		template<typename T>
		T* getRuleContext(size_t i) {
			if (children.empty()) {
				return nullptr;
			}

			size_t j = 0; // what element have we found with ctxType?
			for (auto& child : children) {
				if (antlrcpp::is<T*>(child.get())) {
					if (j++ == i) {
						return dynamic_cast<T*>(child.get());
					}
				}
			}
			return nullptr;
		}

		template<typename T>
		std::vector<T*> getRuleContexts() {
			std::vector<T*> contexts;
			for (auto& child : children)
				if (antlrcpp::is<T*>(child.get()))
					contexts.push_back(dynamic_cast<T*>(child.get()));
			return contexts;
		}

		misc::Interval getSourceInterval() const noexcept override;

		/**
		 * Get the initial token in this context.
		 * Note that the range from start to stop is inclusive, so for rules that do not consume anything
		 * (for example, zero length or error productions) this token may exceed stop.
		 */
		virtual Token* getStart();

		/**
		 * Get the final token in this context.
		 * Note that the range from start to stop is inclusive, so for rules that do not consume anything
		 * (for example, zero length or error productions) this token may precede start.
		 */
		virtual Token* getStop();

		/// <summary>
		/// Used for rule context info debugging during parse-time, not so much for ATN debugging </summary>
		virtual std::string toInfoString(Parser* recognizer);

		std::unique_ptr<ParseTree> clone(ParseTree* parent) const override;

		template<typename T, typename... Args>
		T* constructChild(Args... arguments)
		{
			auto result = std::make_unique<T>(this, arguments...);
			auto r = result.get();
			addChild(std::move(result));
			return r;
		}
	};

} // namespace antlr4
