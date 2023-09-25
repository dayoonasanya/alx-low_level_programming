#include "main.h"

/**
 * _strchr - function: locate char in given string
 *
 * @s: string to be located.
 * @c: character to be located.
 * Return: pointer to first occurence of a character (char).
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	else
	{
	return (NULL);
	}
}
