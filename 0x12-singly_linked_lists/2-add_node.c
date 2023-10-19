#include "lists.h"
#include <string.h>
/**
 * add_node - node.
 * @head: head.
 * @str: string.
 *
 * Return: node.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *d;
	int l;
	list_t *n;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	d = strdup(str);
	if (d == NULL)
	{
		free(n);
		return (NULL);
	}

	for (l = 0; str[l];)
		l++;

	n->str = d;
	n->l = l;
	n->next = *head;

	*head = n;

	return (n);
}
