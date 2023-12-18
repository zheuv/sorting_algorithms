#include "sort.h"
#include <stdbool.h>

/**
 * is_array_sorted - Checks if an array is sorted
 *
 * This function examines an array of integers to determine if it is sorted
 * in ascending order. It provides information about the sorting status.
 *
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 *
 * Return: A struct containing information about the array's sorting status.
 *   - myBoolean: true if the array is sorted, false otherwise.
 *   - myInteger: If the array is not sorted, the position where sorting
 *                needs to resume; otherwise, set to 0.
 */

struct information is_array_sorted(int *array, size_t size)
{
	size_t i;
	size_t j;
	struct information info;

	for (i = 0; i < (size -1); i++)
	{
		j = i + 1;
		if (array[i] > array[j])
		{
			info.myBoolean = false;
			info.myInteger = i;
			return info;
		}
	}
	info.myBoolean = true;
	info.myInteger = 0;
	return info;
}

/**
 * bubble_sort - Sorts an array using the bubble sort algorithm
 *
 * This function sorts an array of integers in ascending order using the
 * bubble sort algorithm. It prints the intermediate steps of the sorting process.
 *
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	struct information info;
	
	info = is_array_sorted(array, size);
	
	if (!array || size == 0)
		return;
	
	while  (info.myBoolean == false)
	{
		for (i = info.myInteger; i < (size - 1); i++)
		{
			j = i + 1;

			if (array[i] > array[j])
			{
				array[i] = array[i] + array[j];
				array[j] = array[i] - array[j];
				array[i] = array[i] - array[j];
				print_array(array, size);
			}
		}
		info = is_array_sorted(array, size);
	}
}



		
