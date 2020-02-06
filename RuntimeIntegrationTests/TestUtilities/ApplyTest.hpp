#pragma once
#include <algorithm>


template<typename Collection, typename Function>
bool applyTest(Collection c, Function f)
{
	using std::begin;
	using std::end;
	auto result = std::find_if_not(begin(c), end(c), f);
	return result == end(c);
}
