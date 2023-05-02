#include "lists.h"

/**
 * listint_len - A function that returns the number of elements
 * in a linked lists
 * @h: parameter linked list of type listint_t
 *
 * Return: nodes number
 */
size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}

	return (x);
}
