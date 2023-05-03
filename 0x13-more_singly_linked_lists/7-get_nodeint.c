#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "lists.h"

/**
 * get_nodeint_at_index - returns the,
 * nth node of an index in the,
 * listint_t linked list
 * @head: double pointer to the,
 * head node of the linked list
 * @index: to return index of the node
 *
 * Return: pointer to the actual node, or NULL if its not there
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *actual = head;
	unsigned int i = 0;

	for (i = 0; actual != NULL && i < index; i++)
		actual = actual->next;

	return (actual == NULL ? NULL : actual);
}
