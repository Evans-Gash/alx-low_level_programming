#include "lists.h"

/**
 * free_dlistint - Frees the memory allocated for a dlistint_t list.
 * @head: Pointer to the head of the list.
 *
 * Return: None.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *temp;

	current = head;
	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
}
