#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "lists.h"

/**
 * insert_nodeint_at_index - will inserts,
 * a node at a particular place,
 * in the linked list
 * @head: double pointer to the first,
 * node in the listint_t linked list
 * @idx: index where the new node will be added
 * @n: data t be placed in the new item or node
 *
 * Return: to the double pointer of the new node,
 * or NULL if it doesn't work
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)

{
	listint_t *latest, *interim = *head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	latest = malloc(sizeof(listint_t));
	if (latest == NULL)
		return (NULL);

	latest->n = n;
	latest->next = NULL;

	if (idx == 0)
	{
		latest->next = *head;
		*head = latest;
		return (latest);
	}

	while (interim != NULL && i < (idx - 1))
	{
		interim = interim->next;
		i++;
	}

	if (interim == NULL)
	{
		free(latest);
		return (NULL);
	}

	latest->next = interim->next;
	interim->next = latest;

	return (latest);
}
