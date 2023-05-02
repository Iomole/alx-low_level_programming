#include "lists.h"

/**
 * print_listint - A function to
 * prints all the elements of a linked list
 * @h: parameter for linked list to print
 *
 * Return: nodes number
 */
size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("%d\n", h->n);
		x++;
		h = h->next;
	}

	return (x);
}

