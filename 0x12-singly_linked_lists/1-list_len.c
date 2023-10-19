#include "lists.h"
/**
 * list_len - length.
 * @h: head.
 *
 * Return: elements.
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
