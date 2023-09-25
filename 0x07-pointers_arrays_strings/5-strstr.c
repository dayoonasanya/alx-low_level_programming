#include "main.h"

/**
 * _strstr - function: the function locates a substring of string
 *
 * @haystack: Pointer, where to locate.
 * @needle: Poniter, substring to locate.
 * Return: return located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int x;

	int y = 0;

	while (needle[y] != '\0')
	{
		y++;
	}
	while (*haystack)
	{
		for (x = 0; needle[x]; x++)
		{
			if (haystack[x] != needle[x])
			{
				break;
			}
		}
		if (x != y)
		{
			haystack++;
		}
		else
		{
			return (haystack);
		}
	}
	return (NULL);
}
