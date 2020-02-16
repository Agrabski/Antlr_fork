#pragma once
#include "../../runtime/Cpp/runtime/src/support/Any.h"
#include "../../runtime/Cpp/runtime/src/tree/ParseTree.h"
#include <gsl.h>


unsigned getDepth(not_null<antlr4::tree::ParseTree*>tree)
{
	unsigned result = 0;
	for (auto const& child : tree->children)
	{
		auto temp = getDepth(not_null(child.get())) + 1;
		if (temp > result)
			result = temp;
	}
	return result;
}
