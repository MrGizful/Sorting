#pragma once
#include <vector>

class MergeSort
{
	std::vector<int> sortedArray;

	void mergeSort(int p, int r);

	void merge(int p, int q, int r);
public:
	//Best, average and worst cases - O(n log(n))
	//Worst space case - O(n) auxiliary
	//Stable
	std::vector<int> sort(std::vector<int> array);
};

