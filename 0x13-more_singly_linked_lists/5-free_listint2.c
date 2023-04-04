#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees alistint_t list and sets head to NULL
 * @head: pointer to the head of the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL || *head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		current = *head;

		*head = (*head)->next;

		free(current);
	}

	*head = NULL;
}
