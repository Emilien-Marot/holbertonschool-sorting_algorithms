#include "sort.h"

/**
 * selection_sort - blabla
 *
 * @array: abc
 * @size: def
 *
 * Return: xyz
 */
void selection_sort(int *array, size_t size)
{
	size_t i_0, i_min, i;
	int min, change;

	for (i_0 = 0; i_0 < size; i_0++)
	{
		change = 0;
		i_min = i_0;
		min = array[i_0];
		for (i = i_0; i < 10; i++)
		{
			if (array[i] < min)
			{
				change = 1;
				i_min = i;
				min = array[i];
			}
		}
		array[i_min] = array[i_0];
		array[i_0] = min;
		if (change != 0)
			print_array(array, size);
	}
}
