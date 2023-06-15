#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a-
 * -given position in a dlistint_t list.
 * @h: Pointer to a pointer to the head of the list.
 * @idx: Index at which the new node should be inserted.
 * @n: Value to be assigned to the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *gash_node, *current_node = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		if (current_node == NULL)
			return (NULL);
		current_node = current_node->next;
	}

	if (current_node->next == NULL)
		return (add_dnodeint_end(h, n));

	gash_node = malloc(sizeof(dlistint_t));

	if (gash_node == NULL)
		return (NULL);

	gash_node->n = n;
	gash_node->next = current_node->next;
	gash_node->prev = current_node;
	current_node->next->prev = gash_node;
	current_node->next = gash_node;

	return (gash_node);
}
