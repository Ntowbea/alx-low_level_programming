#include <stdio.h>
#include "lists.h"

/**
 * Displays all the contents of a list_t linked list
 * The parameter 'h' is a pointer pointing to the linked list's head
 *
 * Returns the count of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}

		h = h->next;
		cnt++;
	}

	return (cnt);
}


