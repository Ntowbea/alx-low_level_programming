#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to a pointer to the head of the listint_t list.
 *
 * Return: The data (n) of the head node, or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data = 0;

	if (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		data = temp->n;
		free(temp);
	}
	return (data);
}
