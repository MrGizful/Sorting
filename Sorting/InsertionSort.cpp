#include "InsertionSort.h"

std::vector<int> InsertionSort::sort(std::vector<int> array)
{
	for (int i = 1; i < array.size(); i++)
	{
		int element = array[i];

		int j;
		for (j = i; j > 0; j--)
			if (array[j - 1] > element)
			{
				array[j] = array[j - 1];
			}
			else
			{
				break;
			}

		array[j] = element;
	}

	return array;
}