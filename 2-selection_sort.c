#include "sort.h"
#include <stdbool.h>


void selection_sort(int *array, size_t size)
{
	int minimum, j;
	size_t i;
	bool swap;
	bool new_min;
	
	new_min = false;
	swap = true;

	minimum = array[0];
	j = 0;
	while (swap)
	{
		for (i = j ; i < size; i++)
		{
			if (array[i] < minimum)
			{
				minimum = array[i];
				new_min = true;
				index = i;
			}
		}
		if (new_min)
		{
			array[j] = array[j] + array[index];
			array[index] = array[j] - array[index];
			array[j] = array[j] - array[index];
			j += 1;
			if (j != size)
				minimum = array[j];
			print_array(array, size);
		}
		if ((new_min == false) || (j >= size))
		{
			swap = false;
		}
	}
}
