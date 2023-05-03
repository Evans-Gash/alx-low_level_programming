#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "lists.h"

/**
 * size_t print_listint_safe - Prints listint_t linked list.
 * @head: Pointer to pointer to the first element of the linked list.
 *
 * Return: Number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *latest;
    size_t count = 0;

    while (head != NULL)
    {
        printf("[%p] %d\n", (void *)head, head->n);
        count++;
        latest = head;
        head = head->next;
        if (latest <= head)
        {
            printf("-> [%p] %d\n", (void *)head, head->n);
            exit(98);
        }
    }

    return (count);
}
