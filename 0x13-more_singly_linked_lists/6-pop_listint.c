#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of a linked list
 * @head: parameter for pointer to the first element in the linked list
 *
 * Return: deleted elemnt data,
 * or zero if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *t;
	int numb;

	if (!head || !*head)
		return (0);

	numb = (*head)->n;
	t = (*head)->next;
	free(*head);
	*head = t;

	return (numb);
}

