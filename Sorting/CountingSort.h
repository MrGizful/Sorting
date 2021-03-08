#pragma once
#include <vector>
class CountingSort
{
public:
	//Worst case - O(n + k)
	//Worst space case - O(n + k) auxiliary
	//Stable
	std::vector<int> sort(std::vector<int> array, int maxNum);
};

