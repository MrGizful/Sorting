#include "MergeSort.h"

void MergeSort::merge(int p, int q, int r)
{
	int sizeL = q - p + 1;
	int sizeR = r - q;

	std::vector<int> leftArray, rightArray;

	for (int i = 0; i < sizeL; i++)
		leftArray.push_back(sortedArray[p + i]);
	for (int i = 0; i < sizeR; i++)
		rightArray.push_back(sortedArray[q + i + 1]);

	int i = 0, j = 0;
	for (int k = p; k <= r; k++)
	{
		if (i != sizeL && j != sizeR)
		{
			if (leftArray[i] <= rightArray[j])
			{
				sortedArray[k] = leftArray[i++];
			}
			else
			{
				sortedArray[k] = rightArray[j++];
			}
		}
		else if (i == sizeL && j == sizeR)
		{
			break;
		}
		else if (i == sizeL)
		{
			sortedArray[k] = rightArray[j++];
		}
		else if (j == sizeR)
		{
			sortedArray[k] = leftArray[i++];
		}
	}
}

void MergeSort::mergeSort(int p, int r)
{
	if (p < r)
	{
		int q = (p + r) / 2;
		mergeSort(p, q);
		mergeSort(q + 1, r);
		merge(p, q, r);
	}
}

std::vector<int> MergeSort::sort(std::vector<int> array)
{
	for (int i = 0; i < array.size(); i++)
		sortedArray.push_back(array[i]);
	mergeSort(0, array.size() - 1);

	return sortedArray;
}