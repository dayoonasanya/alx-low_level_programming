#include "main.h"
#include <stdlib.h>


/**
 * str_concat - function: concatenates two strings.
 * @s1: Target string.
 * @s2: Target string.
 *
 * Return: returns concatenated string.
 */

char *str_concat(char *s1, char *s2)
{
	char *cs;
	int i, ci = 0, l = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		l++;

	cs = malloc(sizeof(char) * l);

	if (cs == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		cs[ci++] = s1[i];

	for (i = 0; s2[i]; i++)
		cs[ci++] = s2[i];

	return (0);
}
