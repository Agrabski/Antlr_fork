#pragma once
#include <algorithm>

template<typename Collection>
bool all(Collection c)
{
	auto result = std::find_if_not(std::begin(c), std::end(c),[](auto const& x) {return x(); });
	return result == std::end(c);
}

