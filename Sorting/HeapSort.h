#pragma once
#include <vector>

class HeapSort
{
	int heapSize;

	std::vector<int> sortedArray;

	int parent(int index);

	int left(int index);

	int right(int index);

	void maxHeapify(int index);

	void buildMaxHeap();

public:
	//Best, average and worst cases - O(n log(n))
	//Worst space case - O(1) auxiliary
	//Unstable
	std::vector<int> sort(std::vector<int> array);
};

