#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts a new node,
 * in a linked list,
 * at a given position
 * @head: parameter for the pointer to the first node in the list
 * @idx: parameter for the index where the new node is added
 * @n: parameter for the data to insert in the node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *new;
	listint_t *t = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (x = 0; t && x < idx; x++)
	{
		if (x == idx - 1)
		{
			new->next = t->next;
			t->next = new;
			return (new);
		}
		else
			t = t->next;
	}

	return (NULL);
}

