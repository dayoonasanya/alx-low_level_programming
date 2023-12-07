#include "lists.h"

/**
 * sum_dlistint - funtion sum all data
 * @head: single list in
 *
 * Return: sum all dato
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;


	for (sum = 0; head != NULL;)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
