#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "list"

/**
 * add_nodeint - it wll new a node at the beginning of a listint_t list.
 *@head: Pointer to the first in the the list.
 * @n: result to be added to the new node.
 *
 * Return: Pointer to the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_n = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new_n->n = n;
	new_n->next = *head;
	*head = new_n;

		return (new_n);
}
