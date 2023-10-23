#include "lists.h"

/**
 * sum_listint - sum.
 * @head: head.
 *
 * Return: empty list.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
