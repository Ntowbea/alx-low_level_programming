#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: A pointer to a pointer to the head of the listint_t list.
 * @n: The integer value to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_n;
	listint_t *curr;

	node_n = malloc(sizeof(listint_t));

	if (node_n == NULL)
		return (NULL);
	node_n->n = n;
	node_n->next = NULL;
	if (*head == NULL)
	{
		*head = node_n;
		return (node_n);
	}
	curr = *head;
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = node_n;
	return (node_n);
}
