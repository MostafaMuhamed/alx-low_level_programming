#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: The list_t list.
 *
 * Return: The number of elements in h.
 */
size_t list_len(const list_t *h)
{
    const list_t *current = h;
    size_t count = 0;

    while (current != NULL)
    {
        count++;
        current = current->next;
    }

    return (count);
}

