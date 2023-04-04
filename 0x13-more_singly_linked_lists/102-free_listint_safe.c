#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list, even if it has a loop.
 * @h: A double pointer to the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	listint_t *next = NULL;
	size_t size = 0;

	while (current != NULL)
	{
		next = current->next;

		/* Check if the current node has been visited before */
		if (current < next)
		{
			size++;
			free(current);
			current = NULL;
		}
		else
		{
			size++;
			free(current);
			break;
		}

		current = next;
	}

	*h = NULL; /* Set the head to NULL */

	return (size);
}
