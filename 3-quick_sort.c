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
	quick_sort_rec(array, size);
}

void quick_sort_rec(int *array, size_t size)
{
	int pivot, tmp;
	size_t i, j, size_lo = 0, size_hi = 0;

	pivot = array[size - 1];
	printf("pivot: %d\nsize: %lu\n", pivot, size);
	for (i = 0; i < size - 1; i++)
	{
		size_lo = 0;
		size_hi = 0;
		printf("li%lu-", i);
		if (array[i] < pivot)
		{
			size_lo++;
			printf("c:sl%lu-", size_lo);
			continue;
		}
		for (j = size - 2; j > i; j--)
		{
			printf("lj%lu-", j);
			if (array[j] > pivot)
			{
				size_hi++;
				printf("c:sh%lu-", size_hi);
				continue;
			}
			tmp = array[j];
			array[j] = array[i];
			array[i] = tmp;
			size_lo++;
			size_hi++;
			printf("\n");
			print_array(array, size);
		}
	}
	printf("\n");
	print_array(array, size);
}
