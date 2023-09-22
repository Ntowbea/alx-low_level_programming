#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Counts the number of elements in a list_t linked list
 * @h: It takes as input a pointer that points to the head of the linked list.
 *
 * Return: Total elements (nodes) in the list.
 */
size_t list_len(const list_t *h)
{
	size_t cnt = 0;
	while (h != NULL)
	{
		cnt++;
		h = h->next;
	}
	return (cnt);
}
