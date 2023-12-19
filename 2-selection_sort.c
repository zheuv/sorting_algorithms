#include "sort.h"
#include <stdbool.h>


void selection_sort(int *array, size_t size)
{
	int minimum;
	size_t i, j, index;
	bool swap;
	
	swap = true;

	minimum = array[0];
	j = 0;
	while (swap)
	{
		index = j;
		for (i = j ; i < size; i++)
		{
			if (array[i] < minimum)
			{
				minimum = array[i];
				index = i;
			}
		}
		if (index != j)
		{
			array[j] = array[j] + array[index];
			array[index] = array[j] - array[index];
			array[j] = array[j] - array[index];
		}
		j += 1;
		if (j != size)
		{
			minimum = array[j];
			print_array(array, size);
		}
		if ((new_min == false) || (j >= size))
		{
			swap = false;
		}
	}
}
