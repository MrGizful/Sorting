#pragma once
#include <vector>

class SelectionSort
{
public:
	//Best, average and worst cases - O(n^2)
	//Worst space case - O(1) auxiliary
	//Stable depends on the implementation
	std::vector<int> sort(std::vector<int> array);
};

