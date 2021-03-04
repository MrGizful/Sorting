#pragma once
#include <vector>

class QuickSort
{
	std::vector<int> sortedArray;

	int partition(int p, int r);

	void quickSort(int p, int r);

public:
	//Best nad average cases - O(n log(n)), worst case - O(n^2)
	//Worst space case - O(1)
	std::vector<int> sort(std::vector<int> array);
};

