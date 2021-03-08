#include "CountingSort.h"

std::vector<int> CountingSort::sort(std::vector<int> array, int maxNum)
{
	std::vector<int> sortedArray, workArray;
	sortedArray.resize(array.size());
	workArray.resize(maxNum + 1);

	for (int i = 0; i < array.size(); i++)
		++workArray[array[i]];

	for (int i = 1; i <= maxNum; i++)
		workArray[i] += workArray[i - 1];

	for (int i = array.size() - 1; i >= 0; i--)
	{
		sortedArray[workArray[array[i]] - 1] = array[i];
		--workArray[array[i]];
	}

	return sortedArray;
}