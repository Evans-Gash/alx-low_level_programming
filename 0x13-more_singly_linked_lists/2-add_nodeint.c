#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

#include "lists.h"

/**
 * count_list - this line will return the number of elements in a linked list
 * @lst: linked list of type node_t to traverse
 *
 * Return: number of nodes
 */

size_t count_list(const node_t *lst)
{
	size_t count = 0;

	while (lst)
	{
		count++;
		lst = lst->next;
	}

	return (count);
}
