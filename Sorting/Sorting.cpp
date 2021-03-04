#include <iostream>
#include "BubbleSort.h"
#include "SelectionSort.h"

void writeResult(std::vector<int>, std::string);

int main()
{
    std::vector<int> inputArray = { 1, 8, 2, 10, 7, 3, 15, 0, 6 };

    BubbleSort bubbleSort;
    writeResult(bubbleSort.sort(inputArray), "Bubble");
    writeResult(bubbleSort.improvedSort(inputArray), "Improved bubble");

    SelectionSort selectSort;
    writeResult(selectSort.sort(inputArray), "Selection");
}

void writeResult(std::vector<int> array, std::string type)
{
    std::cout << type << " sort: ";
    for (int i = 0; i < array.size(); i++)
        std::cout << array[i] << " ";
    std::cout << std::endl;
}