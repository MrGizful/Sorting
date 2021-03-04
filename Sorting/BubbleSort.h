#pragma once
#include <vector>
class BubbleSort
{
public:
	//Best, average and worst cases - O(n^2)
	std::vector<int> sort(std::vector<int> array);

	//Best case - O(n), average and worst cases - O(n^2)
	std::vector<int> improvedSort(std::vector<int> array);
};

