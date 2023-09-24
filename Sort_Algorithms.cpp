#include "Sort_Algorithms.h"
#include <iostream>

void Sort_Algorithms::bubble_sort(int *arry, int size){
    std::cout << "bubble_sort " << std::endl;
	for (int i = size -1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (arry[j] > arry[j + 1]) {
				int temp = arry[j];
				arry[j] = arry[j + 1];
				arry[j + 1] = temp;
			}
		}
	}
}

void Sort_Algorithms::selection_sort(int *arry, int size) {
    std::cout << "selection_sort" << std::endl;
    for (int i = 0; i < size - 1; i++) {
        int min = i;

        for (int j = i + 1; j < size; j++) {
            if (arry[j] < arry[min]){
                min = j;
            }
        }
        int temp = arry[i];
        arry[i] = arry[min];
        arry[min] = temp;
    }
}


void Sort_Algorithms::insertion_sort(int *arry, int size) {
    int key, j;
    //for each unsorted element X
    for (int i = 1; i < size; i++) {
        key = arry[i];//'extract' the element X
        j = i - 1;

        //for j <- lastSortedIndex down to 0
        while (j >= 0 && arry[j] > key) {
            arry[j + 1] = arry[j];
            j = j - 1;
        }
        arry[j + 1] = key;
    }
}