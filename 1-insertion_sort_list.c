#include "sort.h"

/**
 * insertion_sort_list - sorts list with insertion sort
 * @list: list to sort
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	listint_t *temp;
	listint_t *swap;

	if (list == NULL || *list == NULL)
		return;

	current = *list;

	while ((current = current->next))
	{
		swap = current;

		while (swap->prev && swap->n < swap->prev->n)
		{
			temp = swap->prev;

			if (swap->next)
				swap->next->prev = temp;
			if (temp->prev)
				temp->prev->next = swap;
			else
				*list = swap;

			temp->next = swap->next;

			swap->prev = temp->prev;

			swap->next = temp;

			temp->prev = swap;

			print_list(*list);
		}
	}
}
