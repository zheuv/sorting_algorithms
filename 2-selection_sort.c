#include "sort.h"
#include <stdbool.h>

/**
 * selection_sort - selection----
 * @array: arg
 * @size: arg
 */

void selection_sort(int *array, size_t size)
{
	int minimum;
	size_t i, j, index;
	bool swap;

	if (!array || size < 2)
		return;

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
			print_array(array, size);

		}
		j += 1;
		if (j != size)
		{
			minimum = array[j];
		}
		if (j >= size)
		{
			swap = false;
		}
	}
}
