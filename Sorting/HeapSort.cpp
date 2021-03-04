#include "HeapSort.h"

int HeapSort::parent(int index)
{
	return (index - 1) / 2;
}

int HeapSort::left(int index)
{
	return index * 2 + 1;
}

int HeapSort::right(int index)
{
	return index * 2 + 2;
}

void HeapSort::maxHeapify(int index)
{
	int l = left(index);
	int r = right(index);

	int largest = index;
	if ((l < heapSize) && (sortedArray[largest] < sortedArray[l]))
		largest = l;
	if ((r < heapSize) && (sortedArray[largest] < sortedArray[r]))
		largest = r;

	if (largest != index)
	{
		int tmp = sortedArray[index];
		sortedArray[index] = sortedArray[largest];
		sortedArray[largest] = tmp;

		maxHeapify(largest);
	}
}

void HeapSort::buildMaxHeap()
{
	heapSize = sortedArray.size();

	for (int i = sortedArray.size() / 2 - 1; i >= 0; i--)
		maxHeapify(i);
}

std::vector<int> HeapSort::sort(std::vector<int> array)
{
	for (int i = 0; i < array.size(); i++)
		sortedArray.push_back(array[i]);

	buildMaxHeap();
	for (int i = sortedArray.size() - 1; i > 0; i--)
	{
		int tmp = sortedArray[i];
		sortedArray[i] = sortedArray[0];
		sortedArray[0] = tmp;

 		heapSize--;
		maxHeapify(0);
	}

	return sortedArray;
}