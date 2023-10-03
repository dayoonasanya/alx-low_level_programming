#include "main.h"
/**
* _strdup - function: returns a pointer.
*@str: target string
*
*Return: returns the copied string.
*/
char *_strdup(char *str)
{
	char *c;
	int i, l;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		l++;
	c = malloc(sizeof(char) * (l + 1));

	if (c == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		c[i] = str[i];
	}

	c[l] = '\0';

	return (c);

}
