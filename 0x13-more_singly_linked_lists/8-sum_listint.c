#include "lists.h"

/**
 * sum_listint - A function that calculates the sum of all the data
 * in a listint_t list
 * @head: parameter for he first node in the linked list
 *
 * Return: sum (s)
 */
int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *t = head;

	while (t)
	{
		s += t->n;
		t = t->next;
	}

	return (s);
}

