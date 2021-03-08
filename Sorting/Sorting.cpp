#include <iostream>
#include <iomanip>
#include "BubbleSort.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "ShellSort.h"
#include "MergeSort.h"
#include "HeapSort.h"
#include "QuickSort.h"
#include "CountingSort.h"
#include "RadixSort.h"

void writeResult(std::vector<int>, std::string);

int main()
{
    std::vector<int> inputArray = { 99,	3, 46, 55, 96, 32, 3, 91, 72, 51, 96, 64, 28, 15, 91, 68, 58, 55, 47, 51, 75, 36, 14, 57, 23 };

    BubbleSort bubbleSort;
    writeResult(bubbleSort.sort(inputArray), "Bubble");
    writeResult(bubbleSort.improvedSort(inputArray), "Improved bubble");

    SelectionSort selectSort;
    writeResult(selectSort.sort(inputArray), "Selection");

    InsertionSort insSort;
    writeResult(insSort.sort(inputArray), "Insertion");

    ShellSort shellSort;
    writeResult(shellSort.sort(inputArray), "Shell");

    MergeSort mergeSort;
    writeResult(mergeSort.sort(inputArray), "Merge");

    HeapSort heapSort;
    writeResult(heapSort.sort(inputArray), "Heap");

    QuickSort quickSort;
    writeResult(quickSort.sort(inputArray), "Quick");

    CountingSort countingSort;
    writeResult(countingSort.sort(inputArray, 99), "Counting");

    RadixSort radixSort;
    writeResult(radixSort.sort(inputArray, 2), "Radix");
}

void writeResult(std::vector<int> array, std::string type)
{
    std::cout << std::setw(15);
    std::cout << type << " sort: ";
    for (int i = 0; i < array.size(); i++)
        std::cout << array[i] << " ";
    std::cout << std::endl;
}