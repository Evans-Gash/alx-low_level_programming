#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - it wll new a node at the beginning of a listint_t list.
 *@head: Pointer to the first element in the the list.
 * @n: result to be added to the new node.
 *
 * Return: Pointer to the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int data)
{
listint_t *new_node;
listint_t *temp_node = *head;

new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);

new_node->n = data;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

while (temp_node->next)
temp_node = temp_node->next;

temp_node->next = new_node;

return (new_node);
}
