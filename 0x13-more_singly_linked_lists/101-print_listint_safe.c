#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - A function that Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: parameter for a pointer to the head of the listint_t to check.
 *
 * Return: zero if the list is not looped.
 * Else - the number of unique nodes in the list_t.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *y, *z;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	y = head->next;
	z = (head->next)->next;

	while (z)
	{
		if (y == z)
		{
			y = head;
			while (y != z)
			{
				nodes++;
				y = y->next;
				z = z->next;
			}

			y = y->next;
			while (y != z)
			{
				nodes++;
				y = y->next;
			}

			return (nodes);
		}

		y = y->next;
		z = (z->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - A function that prints a list safely.
 * @head: parameter for pointer to the head of the list.
 *
 * Return: number of nodes (n).
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n, index = 0;

	n = looped_listint_len(head);

	if (n == 0)
	{
		for (; head != NULL; n++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < n; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (n);
}

