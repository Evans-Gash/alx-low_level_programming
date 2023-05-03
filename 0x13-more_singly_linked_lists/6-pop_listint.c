#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "lists.h"

/**
 * pop_listint - will delete head node of a listint_t linked list,
 * @head: double pointer to the head or element in the listint_t linked list
 *
 * Return: the head node’s data (n), or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int number;

	if (!head == !*head)
		return (0);

	number = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (number);
}
