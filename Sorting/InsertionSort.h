#pragma once
#include <vector>

class InsertionSort
{
public:
	//Best case - O(n), average and worst cases - O(n^2)
	//Worst space case - O(1) auxiliary
	//Stable
	std::vector<int> sort(std::vector<int> array);
};

