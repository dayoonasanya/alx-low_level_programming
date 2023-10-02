#include "main.h"

/**
*_strpbrk - function: locates a string s.
*
*@s: target string.
*@accept: located search bytes.
*
*Return: returns pointer.
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}

	return ('\0');
}
