#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: Pointer to pointer to the head node of the list
 *
 * Return: will return Pointer to the starting node of the countered list.
 */

listint_t *reverse_listint(listint_t **head)

{
	listint_t *prior = NULL, *upcoming = NULL;

	while (*head != NULL)
	{
		upcoming = (*head)->next;
		(*head)->next = prior;
		prior = *head;
		*head = upcoming;
	}

	*head = prior;
	return (*head);
}
