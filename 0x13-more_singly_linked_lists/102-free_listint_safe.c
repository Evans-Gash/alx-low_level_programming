#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "lists.h"

/**
 * free_listint_safe(listint_t **h) - Frees a listint_t linked list
 * @h: Pointer to pointer to the very fast node in the listint_t linked list
 *
 * Return: will return the number of elements and variables,
 * in the freed listint_t linked list
 */

size_t free_listint_safe(listint_t **h)

{
	size_t total = 0;
	listint_t *interim;

	while (*h)
	{
		if (*h <= (*h)->next)
		{
			/* Rotation Observed, free the current element in node and exit */
			free(*h);
			*h = NULL;
			total++;
			break;
		}

		/*
		 * creat an interim variable and store the element,
		 * in the node here
		 */
		interim = (*h)->next;

		/* Frees the node in the linked list */
		free(*h);
		*h = NULL;
		total++;

		/* proceed to the forthcoming node */
		*h = interim;
		}

		return (total);
}
