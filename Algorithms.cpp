// Algorithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "Sort_Algorithms.h"

void print(int arry[],int arry_size){
    for (size_t i = 0; i < arry_size; i++)
    {
        std::cout << arry[i] << " ";
    }
    std::cout << " " << std::endl;
}

int main()
{
    int arry[] = {8,4,5,6,0,2,1};
    int arry_size = sizeof(arry) / sizeof(int);



    print(arry, arry_size);
//    Sort_Algorithms::bubble_sort(arry, arry_size);
    Sort_Algorithms::selection_sort(arry, arry_size);
    print(arry, arry_size);

    std::cout << " " << std::endl;

    std::cout << "end of program!\n";
}
