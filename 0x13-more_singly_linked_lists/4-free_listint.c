#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t linked list
 * @head: pointer to the head of listint_t list to be freed
 *
 * Return: the void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		head = temp;
		temp = head->next;
		free(temp);
	}
}
