#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "lists.h"

/**
 * find_listint_loop(listint_t *head) - will find the loop,
 * in the listint_t linked list
 * @head: listint_t linked list to find
 *
 * Return: returns address of the element where the loop began, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *moderate = head;
	listint_t *quick = head;

	if (!head)
		return (NULL);

	while (moderate && quick && quick->next)
	{
		quick = quick->next->next;
		moderate = moderate->next;
		if (quick == moderate)
		{
			moderate = head;
			while (moderate != quick)
			{
				moderate = moderate->next;
				quick = quick->next;
			}
			return (quick);
		}
	}

	return (NULL);
}
