/**
 * insertion_sort_list - Sorts a doubly linked list
 * @list: Double pointer to the head of the list
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;
	listint_t *prev;

	if (!list || !*list || !(*list)->next)
		return;

	current = (*list)->next;

	while (current)
	{
		temp = current;
		current = current->next;

		while (temp->prev && temp->n < temp->prev->n)
		{
			prev = temp->prev;
			if (prev->prev)
				prev->prev->next = temp;
			temp->prev = prev->prev;

			prev->next = temp->next;
			if (temp->next)
				temp->next->prev = prev;
			temp->next = prev;
			prev->prev = temp;

			if (!temp->prev)
				*list = temp;

			print_list(*list);
		}
	}
}

