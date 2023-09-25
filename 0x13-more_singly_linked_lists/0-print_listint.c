#include <stdio.h>
#include "lists.h"

/**
 *print_listint - Function that prints all elements in a listint_t list.
 * @h : A pointer to the head of the listint_t list.
 *
 * Return : The number of nodes (elements) in the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		cnt++;
	}
	return (cnt);
}
