#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: A pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h, *next;
	size_t count = 0;

	while (current != NULL)
	{
		next = current->next;
		count++;
		free(current);

		/* Detect and break loops in the list */
		if (current <= next)
		{
			*h = NULL;
			break;
		}

		current = next;
	}

	return (count);
}

