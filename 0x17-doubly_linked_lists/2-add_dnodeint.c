#include "lists.h"

/**
 * add_dnodeint - add node of the  list
 * @head: head of the linked list
 * @n: data in new node
 *
 * Return: new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *newNode;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (newNode);
	newNode->next = (*head);
	newNode->n = n;
	newNode->prev = NULL;

	if (*head != NULL)
		(*head)->prev = newNode;
	*head = newNode;
	return (newNode);
}
