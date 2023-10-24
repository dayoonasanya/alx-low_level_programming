#include "lists.h"


/**
 * reverse_listint - reverse list.
 * @head: head.
 *
 * Return: head.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *a_head, *tail;

	if (head == NULL || *head == NULL)
		return (NULL);

	tail = NULL;

	while ((*head)->next != NULL)
	{
		a_head = (*head)->next;
		(*head)->next = tail;
		tail = *head;
		*head = a_head;
	}

	(*head)->next = tail;

	return (*head);
}
