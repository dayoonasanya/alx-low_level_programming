#include "lists.h"

/**
 * get_dnodeint_at_index - get a node located for the  index position.
 * @head: head of a dlistint_t list.
 * @index: index position
 *
 * Return: the node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)

	{
		if (i == index)
			return (head);
		head = head->next;
		i++;

	}
	return (NULL);
}
