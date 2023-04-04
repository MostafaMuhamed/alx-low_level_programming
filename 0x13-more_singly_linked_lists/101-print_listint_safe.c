#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t count = 0;

	slow = head;
	fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;

		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow->next, slow->next->n);
			printf("-> [%p] %d\n", (void *)slow->next->next, slow->next->next->n);
			printf("-> [%p] %d\n", (void *)slow->next->next->next,
					slow->next->next->next->n);
			printf("-> [%p] %d\n", (void *)slow->next->next->next->next,
					slow->next->next->next->next->n);
			printf("-> [%p] %d\n", (void *)slow->next->next->next->next->next,
					slow->next->next->next->next->next->n);

			printf("Error: List contains a loop\n");
			exit(98);
		}
	}

	return (count);
}

