#include "lists.h"

/**
 * reverse_listint - A function that reverses a linked list
 * @head: parameter for pointer to the first node in the list
 *
 * Return: pointer to the first node in the list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_n = NULL;
	listint_t *next_n = NULL;

	while (*head)
	{
		next_n = (*head)->next;
		(*head)->next = prev_n;
		prev_n = *head;
		*head = next_n;
	}

	*head = prev_n;

	return (*head);
}

