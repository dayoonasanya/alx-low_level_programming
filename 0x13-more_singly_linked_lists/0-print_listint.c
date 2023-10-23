#include "lists.h"
#include <stdio.h>
/**
 * print_listint - list.
 * @h: head.
 *
 * Return: node.
 */
size_t print_listint(const listint_t *h)
{
	size_t nod = 0;

	while (h)
	{
		nod++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nod);
}
