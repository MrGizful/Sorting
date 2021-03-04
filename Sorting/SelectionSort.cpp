#include "SelectionSort.h"

std::vector<int> SelectionSort::sort(std::vector<int> array)
{
	for (int i = 0; i < array.size() - 1; i++)
	{
		int min = i;

		for (int j = i + 1; j < array.size(); j++)
			if (array[j] < array[min])
				min = j;

		int tmp = array[i];
		array[i] = array[min];
		array[min] = tmp;
	}

	return array;
}