#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node to retrieve, starting at 0.
 *
 * Return: A pointer to the nth node, or NULL if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int love = 0;

	while (current != NULL)
	{
		if (love == index)
			return (current);
		current = current->next;
		love++;
	}
	return (NULL);
}
