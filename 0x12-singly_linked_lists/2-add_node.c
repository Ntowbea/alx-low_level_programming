#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @str: The string to be duplicated and added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node_n;

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
	node_n->next = *head;

	*head = node_n;

	return (node_n);
}
