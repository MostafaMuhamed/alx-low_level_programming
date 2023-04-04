#include "lists.h"

/**
 * free_listint - Frees a singly linked list of listint_t nodes.
 * @head: A pointer to the head node of the list.
 */

void free_listint(listint_t *head)
{
	listint_t *node = head;

	while (node)
	{
		listint_t *tmp = node;

		node = node->next;

		free(tmp);
	}
}
