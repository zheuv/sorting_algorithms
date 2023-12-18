#include "sort.h"




struct information is_array_sorted(int *array, size_t size)
{
	int i;
	int j;
	information info;

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

void bubble_sort(int *array, size_t size)
{
	int i;
	int j;
	struct information info;
	
	info = is_array_sorted(array, size);

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
			else
			{
				break;
			}
		}
		info = is_array_sorted(array, size);
	}
}



		
