#include "lists.h"
#include <stdio.h>
/**
 * listint_len - length
 * @h: head.
 *
 * Return: node.
 */
size_t listint_len(const listint_t *h)
{
	size_t nod = 0;

	while (h)
	{
		nod++;
		h = h->next;
	}

	return (nod);
}
