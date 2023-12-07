#include "lists.h"


/**
 * dlistint_len - return elements of a  dlistint_t list.
 * @h: head of a dlistint_t list.
*
 * Return: number of elements in a dlistint_t list.
 */


size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);
	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
