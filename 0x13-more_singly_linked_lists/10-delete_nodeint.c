#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a given index of
 * a listint_t list.
 * @head: A pointer to the address of the head of the listint_t list.
 * @index: The index of the node to be deleted - indices start at 0.
 *
 * Return: 1 if deletion is successful, -1 if it fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head, *prev = NULL;
	unsigned int node;

	if (*head == NULL)
		return (-1);


	if (index == 0)
	{

		*head = current->next;

		free(current);

		return (1);
	}

	for (node = 0; node < index; node++)
	{
		if (current == NULL)
			return (-1);
		prev = current;

		current = current->next;
	}

	if (current == NULL)
		return (-1);

	prev->next = current->next;

	free(current);

	return (1);
}
