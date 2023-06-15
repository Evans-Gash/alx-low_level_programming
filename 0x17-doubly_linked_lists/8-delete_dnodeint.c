#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a given position in a-
 * -dlistint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if the deletion succeeded, or -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *current_node = *head;
	unsigned int counter = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current_node->next;
		if (current_node->next == NULL)
			return (-1);
		current_node->next->prev = NULL;
		free(current_node);
		return (1);
	}

	while (counter < index)
	{
		if (current_node->next == NULL)
			return (-1);
		current_node = current_node->next;
		counter++;
	}

	current_node->prev->next = current_node->next;
	if (current_node->next)
		current_node->next->prev = current_node->prev;

	if (current_node->next == NULL)
	{
		temp = current_node->prev;
		temp->next = NULL;
		free(current_node);
		return (1);
	}

	free(current_node);
	return (1);
}
