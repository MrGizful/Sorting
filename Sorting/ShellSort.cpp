#include "ShellSort.h"

std::vector<int> ShellSort::sort(std::vector<int> array)
{
	std::vector<int> step = { 1,4,10,23,57,132,301,701,1750 };
	int j;

	for(int index = step.size() - 1; index >= 0; index--)
		for (int i = step[index]; i < array.size(); i++)
		{
			int element = array[i];

			for (j = i; j >= step[index]; j -= step[index])
			{
				if (array[j - step[index]] > element)
				{
					array[j] = array[j - step[index]];
				}
				else
				{
					break;
				}
			}

			array[j] = element;
		}

 	return array;
}