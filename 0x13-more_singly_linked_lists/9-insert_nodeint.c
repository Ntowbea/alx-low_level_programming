#include "lists.h"

/**
 *insert_nodeint_at_index -Inserts node at a given position in a listint_t list
 * @head: A pointer to a pointer to the head of the listint_t list.
 * @idx: The index where the new node should be added. Index starts at 0.
 * @n: The data (n) to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node_n;
	listint_t *curr;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	node_n = malloc(sizeof(listint_t));
	if (node_n == NULL)
		return (NULL);
	node_n->n = n;
	if (idx == 0)
	{
		node_n->next = *head;
		*head = node_n;
		return (node_n);
	}
	curr = *head;
	while (curr != NULL && i < idx - 1)
	{
		curr = curr->next;
		i++;
	}
	if (curr == NULL)
	{
		free(node_n);
		return (NULL);
	}
	node_n->next = curr->next;
	curr->next = node_n;

	return (node_n);
}

