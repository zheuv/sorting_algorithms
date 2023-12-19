void insertion_sort_list(listint_t **list)
{
	listint_t *i, *j, *tmp;
	
	i = *list;

	while (i != NULL)
	{
		while ((i->prev != NULL) && (i->n < i->prev->n))
		{
			j = i->prev;
			j->next = i->next;
			i->next->prev = j;
			i->next = j;
			j->prev->next = i;
			i->prev = j->prev;
			j->prev = i;
			print_list(*list);
		}
		i = i->next;
	}
}
