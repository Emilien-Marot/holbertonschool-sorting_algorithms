#include <stdio.h>
#include "sort.h"

/**
 * quick_sort - blabla
 *
 * @array: abc
 * @size: def
 *
 * Return: xyz
 */
void quick_sort(int *array, size_t size)
{
	quick_sort_rec(array, size, 0, size);
}

/**
 * quick_sort_rec - blabla
 *
 * @array: abc
 * @total_size: def
 * @i_start: ghi
 * @size: jkl
 *
 * Return: xyz
 */
void quick_sort_rec(int *array, size_t total_size, size_t i_start, size_t size)
{
	size_t i_lo, i_hi;
	int pivot, tmp;

	i_lo = i_start;
	i_hi = size - 1;
	if (i_hi == i_lo)
		return;
	pivot = array[size - 1];
	for (i_lo = i_start; i_lo < i_hi; i_lo++)
	{
		if (array[i_lo] >= pivot)
		{
			while (i_hi > i_lo && array[i_hi] >= pivot)
			{
				i_hi--;
			}
			if (i_hi > i_lo)
			{
				tmp = array[i_hi];
				array[i_hi] = array[i_lo];
				array[i_lo] = tmp;
				print_array(array, total_size);
			}
		}
	}
	if (i_hi != size - 1)
	{
		array[size - 1] = array[i_hi];
		array[i_hi] = pivot;
		print_array(array, total_size);
	}
	quick_sort_rec(array, total_size, i_start, i_lo);
	quick_sort_rec(array, total_size, i_hi, size);
}
