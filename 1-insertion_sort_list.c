#include "sort.h"
/**
 * insertion_sort_list - Sorts list of integers
 * @list: Pointer to the list to be sorted.
 */



void insertion_sort_list(listint_t **list)
{
	listint_t *i, *j;

	if (!list || !*list)
		return;

	i = *list;

	while (i != NULL)
	{
		while ((i->prev != NULL) && (i->n < i->prev->n))
		{
			j = i->prev;
			j->next = i->next;
			if (j->next != NULL)
				j->next->prev = j;
			i->next = j;
			if (j->prev != NULL)
				j->prev->next = i;
			i->prev = j->prev;
			j->prev = i;
			if (i->prev == NULL)
				*list = i;
			print_list(*list);
		}
		i = i->next;
	}
}
