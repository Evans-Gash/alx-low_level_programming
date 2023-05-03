#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "lists.h"

/**
 * sum_listint - works out the,
 * sum/addition of all the data,
 * in the listint_t linked list
 * @head: double pointer to the,
 * head node of the linked list
 *
 * Return: the addition of the data,
 * or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *latest = head;
	int sum = 0;

	while (latest != NULL)
	{
		sum += latest->n;
		latest = latest->next;
	}

	return (sum);
}
