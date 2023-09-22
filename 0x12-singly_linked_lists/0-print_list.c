#include <stdio.h>
#include "lists.h"

/**
 * print_list - Displays all the contents of a list_t linked list
 * @h: The parameter 'h' is a pointer pointing to the linked list's head
 *
 * return: Returns the count of nodes in the list.
 *
 * Description: This function returns the number of nodes in the linked
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


