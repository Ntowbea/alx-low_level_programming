#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @str: The string to be duplicated and added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node_n;
	list_t *curr;

	if (str == NULL)
		return (NULL);
	node_n = malloc(sizeof(list_t));

	if (node_n == NULL)
		return (NULL);

	node_n->str = strdup(str);
	if (node_n->str == NULL)
	{
		free(node_n);
		return (NULL);
	}
	node_n->len = strlen(str);
	node_n->next = NULL;

	if (*head == NULL)
	{
	*head = node_n;
	}
	else
	{
	curr = *head;
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = node_n;
	}

	return (node_n);
}
