#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "lists.h"

/**
 * int delete_nodeint_at_index(listint_t **head, unsigned int index) -,
 * will delete the node at index of a linked list within a particular index
 * @head: double pointer to the head  or first Item in listint_t linked list
 * @index: delete the index of the node, starting at 0
 *
 * Return: 1 (works), -1 (doesn't work)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *latest, *preceding;
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
		preceding = latest;
		latest = latest->next;
	}

	if (latest == NULL)
		return (-1);

	preceding->next = latest->next;
	free(latest);

	return (1);
}
