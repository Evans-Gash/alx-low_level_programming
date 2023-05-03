#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "lists.h"

/**
 * delete_nodeint_at_index - this will delete the node at a particular index,
 * of a listint_t linked list
 * @head: pointer to pointer to the first item of listint_t linked list
 * @index: starts with 0, index of the node to be deleted
 *
 * Return: 1 (works), -1 (doesn't work)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *latest, *prior;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	latest = *head;

	if (index == 0)
	{
		*head = latest->next;
		free(latest);
		return (1);
	}

	for (i = 0; latest != NULL && i < index; i++)
	{
		prior = latest;
		latest = latest->next;
	}

	if (latest == NULL)
		return (-1);

	prior->next = latest->next;
	free(latest);

	return (1);
}
