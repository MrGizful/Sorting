#include "RadixSort.h"

void RadixSort::countSort(int exp)
{
	std::vector<int> outputArray, workedArray;
	outputArray.resize(sortedArray.size());
	workedArray.resize(10);

	for (int i = 0; i < outputArray.size(); i++)
		++workedArray[(sortedArray[i] / exp) % 10];

	for (int i = 1; i < 10; i++)
		workedArray[i] += workedArray[i - 1];

	for (int i = outputArray.size() - 1; i >= 0; i--)
	{
		outputArray[workedArray[(sortedArray[i] / exp) % 10] - 1] = sortedArray[i];
		--workedArray[(sortedArray[i] / exp) % 10];
	}

	for (int i = 0; i < outputArray.size(); i++)
		sortedArray[i] = outputArray[i];
}

std::vector<int> RadixSort::sort(std::vector<int> array, int digits)
{
	for (int i = 0; i < array.size(); i++)
		sortedArray.push_back(array[i]);

	for (int i = 1, exp = 1; i <= digits; i++, exp *= 10)
		countSort(exp);

	return sortedArray;
}