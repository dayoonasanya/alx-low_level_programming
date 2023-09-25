#include "main.h"

/**
 * _strpbrk - function: Search a string (s) for  any set of_bytes.
 *
 * @s: Pointer to the string containing bytes
 * @accept: Pointer, shows contains bytes
 * Return: return number of bytes
 */

char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
