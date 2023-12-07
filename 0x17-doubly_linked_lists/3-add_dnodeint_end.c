#include "lists.h"

/**
 * add_dnodeint_end - adds a new node
 * @head: head of node.
 * @n: data to be added.
 *
 * Return: Head of the dlistint_t.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	if (head == NULL)
		return (NULL);
	tmp = *head;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	new->prev = tmp;
	return (new);
}
