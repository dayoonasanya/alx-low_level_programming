#include "main.h"


/**
 * _strcmp - function: compare strings
 *
 * @s1: the first string concatenated
 * @s2: second string concatenated
 * Return: integers concatenated
 */
int _strcmp(char *s1, char *s2)
{
	int i, x;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0'))
	{
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
	{
		x = 0;
	}
	else
	{
		x = s1[i] - s2[i];
	}
	return (x);
}
