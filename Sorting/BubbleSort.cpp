#include "BubbleSort.h"

std::vector<int> BubbleSort::sort(std::vector<int> array)
{
	for(int pass = array.size() - 1; pass >= 0; pass--)
		for(int i = 0; i < pass; i++)
			if (array[i] > array[i + 1])
			{
				int tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
			}

	return array;
}

std::vector<int> BubbleSort::improvedSort(std::vector<int> array)
{
	bool swapped = true;

	for (int pass = array.size() - 1; pass >= 0 && swapped; pass--)
	{
		swapped = false;

		for(int i = 0; i < pass; i++)
			if (array[i] > array[i + 1])
			{
				int tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;

				swapped = true;
			}
	}

	return array;
}