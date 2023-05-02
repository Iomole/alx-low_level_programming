#include "lists.h"

/**
 * get_nodeint_at_index - A functions that returns the node
 * at a certain index in a linked list
 * @head: parameter for the first node in the linked list
 * @index: parameter for the index of the node to return
 *
 * Return: pointer to the node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *t = head;

	while (t && x < index)
	{
		t = t->next;
		x++;
	}

	return (t ? t : NULL);
}

