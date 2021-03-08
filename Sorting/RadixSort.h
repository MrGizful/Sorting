#pragma once
#include <vector>

class RadixSort
{
	std::vector<int> sortedArray;

	void countSort(int exp);

public:
	//Worst case - O(digits*n)
	//Worst space case - O(digits + n)
	//Stable
	std::vector<int> sort(std::vector<int> array, int digits);
};

