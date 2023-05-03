#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "lists.h"

/**
 * free_listint2 - frees a linked list and the function sets the head to NULL
 * @head: double pointer to the head of the listint_t list to be freed
 */

void free_listint2(listint_t **head)

{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	*head = NULL;
}
