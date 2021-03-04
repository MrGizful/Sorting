#include "QuickSort.h"

int QuickSort::partition(int p, int r)
{
	int pivot = sortedArray[r];
	int i = p - 1;
	for(int j = p; j < r; j++)
		if (sortedArray[j] <= pivot)
		{
			int tmp = sortedArray[++i];
			sortedArray[i] = sortedArray[j];
			sortedArray[j] = tmp;
		}

	int tmp = sortedArray[++i];
	sortedArray[i] = sortedArray[r];
	sortedArray[r] = tmp;

	return i;
}

void QuickSort::quickSort(int p, int r)
{
	if (p < r)
	{
		int q = partition(p, r);
		quickSort(p, q - 1);
		quickSort(q + 1, r);
	}
}

std::vector<int> QuickSort::sort(std::vector<int> array)
{
	for (int i = 0; i < array.size(); i++)
		sortedArray.push_back(array[i]);

	quickSort(0, sortedArray.size() - 1);

	return sortedArray;
}