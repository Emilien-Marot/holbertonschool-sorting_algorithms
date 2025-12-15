#include "sort.h"

/**
 * bubble_sort - blabla
 *
 * @array: abc
 * @size: def
 *
 * Return: xyz
 */
void bubble_sort(int *array, size_t size)
{
	size_t i_max, i;
	int tmp, change;

	for (i_max = size - 1; i_max > 0; i_max--)
	{
		change = 0;
		for (i = 0; i < i_max; i++)
		{
			if (array[i] > array[i + 1])
			{
				change = 1;
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
			}
		}
		if (change == 0)
			return;
	}
}
