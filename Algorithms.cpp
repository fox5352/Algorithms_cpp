// Algorithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "Sort_Algorithms.h"


int main()
{
    int arry[] = {8,4,5,6,0,2,1};
    int arry_size = sizeof(arry) / sizeof(int);

    for (size_t i = 0; i < arry_size; i++)
    {
        std::cout << arry[i] << " ";
    }
    std::cout << " " << std::endl;

    Sort_Algorithms::bubble_sort(std::move(arry), arry_size);

    for (size_t i = 0; i < arry_size; i++)
    {
        std::cout << arry[i] << " ";
    }
    std::cout << " " << std::endl;

    std::cout << "Hello World!\n";
}
