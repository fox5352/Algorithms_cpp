#include "Sort_Algorithms.h"
#include <iostream>
#include <array>

void Sort_Algorithms::bubble_sort(int arry[], int size){
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
