#include "main.h"
/**
 * _strchr - function to locate character in a string
 *
 * @s: string
 * @c: character
 * Return: pointer to first occurence of c
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
	return (NULL);
}
