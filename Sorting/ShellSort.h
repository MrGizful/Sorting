#pragma once
#include <vector>
class ShellSort
{
public:
	//Best case - O(n log(n)), average case - O(n (log(n))^2), worst case - O(n^2)
	std::vector<int> sort(std::vector<int> array);
};

