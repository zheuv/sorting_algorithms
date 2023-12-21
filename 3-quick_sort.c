#include "sort.h"

/**
 * Swaps two elements in an array.
 *
 * @param array - The array containing elements to be swapped.
 * @param i - Index of the first element to be swapped.
 * @param j - Index of the second element to be swapped.
 */


void swap(int *array, int i, int j)
{
	array[i] = array[i] + array[j];
	array[j] = array[i] - array[j];
	array[i] = array[i] - array[j];
}

/**
 * Partitions an array into two halves based on a pivot element.
 *
 * @param array - The array to be partitioned.
 * @param low - The starting index of the subarray to be partitioned.
 * @param high - The ending index of the subarray to be partitioned.
 * @return The index of the pivot after partitioning.
 */

size_t partition( int *array, size_t low, size_t high, size_t size)
{
	size_t pivot, i, j;
	pivot = high;
	j = low;

	for (i = low; i < pivot; i++)
		if (array[i] < pivot)
		{
			if (i != j)
			{
				swap(array, i, j);
				print_array(array, size);
			j++;
		}
	j++;
	swap(array, j, pivot);
	print_array(array, size);
	return (j + 1);
}

/**
 * Recursively sorts a subarray using the Quicksort algorithm.
 *
 * @param array - The array to be sorted.
 * @param low - The starting index of the subarray.
 * @param high - The ending index of the subarray.
 */

void sort(int *array, size_t low, size_t high, size_t size)
{
	size_t pivot;

	if (low < high)
	{
		pivot = partition(array, low, high, size);
		sort(array, low, pivot - 1, size);
		sort(array, pivot + 1, high, size);
	}
}

/**
 * Sorts an array using the Quicksort algorithm.
 *
 * @param array - The array to be sorted.
 * @param size - The number of elements in the array.
 */

void quick_sort(int *array, size_t size)
{
	size_t low, high;
	low = 0;
	high = size - 1;
	sort(array, low, high, size);
}
