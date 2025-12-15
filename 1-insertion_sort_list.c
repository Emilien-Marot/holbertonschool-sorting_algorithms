#include "sort.h"

/**
 * insertion_sort_list - blabla
 *
 * @array: abc
 * @size: def
 *
 * Return: xyz
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *prev, *current;

	current = *list;
	prev = NULL;
	while(current->next != NULL)
	{
		prev = current;
		current = current->next;
		while (prev != NULL && current->n < prev->n)
		{
			if (current->next != NULL)
				current->next->prev = prev;
			if (prev->prev != NULL)
				prev->prev->next = current;
			else
				*list = current;
			current->prev = prev->prev;
			prev->next = current->next;
			prev->prev = current;
			current->next = prev;
			prev = current->prev;
			print_list(*list);
		}
	}
}
