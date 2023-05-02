#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Counts the number of  elements or nodes in a linked list.
 * @head: Pointer to the head node of the list.
 *
 * Return: The number of nodes in the actual list.
 */
size_t listint_len(const listint_t *head)
{
	size_t num_nodes = 0;

	while (head)
	{
		num_nodes++;
		head = head->next;
	}

	return (num_nodes);
}
