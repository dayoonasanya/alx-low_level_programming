#include "lists.h"
/**
 * print_dlistint - funtion for print
 * @h: single list in
 * Return: number of element in the linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		a++;
	}

	return (a);
}
