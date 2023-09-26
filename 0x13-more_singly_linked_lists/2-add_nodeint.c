#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: A pointer to a pointer to the head of the listint_t list.
 * @n: The integer value to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node_n;

	node_n = malloc(sizeof(listint_t));

	if (node_n == NULL)
		return (NULL);
	node_n->n = n;
	node_n->next = *head;
	*head = node_n;

	return (node_n);
}
