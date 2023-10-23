#include "lists.h"

/**
 * pop_listint - pop()
 * @head: head.
 *
 * Return: empty list x.
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int x;

	if (*head == NULL)
		return (0);

	tmp = *head;
	x = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (x);
}
