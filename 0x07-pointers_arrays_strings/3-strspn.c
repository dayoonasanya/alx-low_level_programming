#include "main.h"

/**
*_strspn - function: No. of initial bytes
*
*@s: Pointer, segment targeted in program
*@accept: Pointer, reference bytes container
*
*Return:r No. of initial bytes
*
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int y = 0;
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (accept[x] == *s)
			{
				y++;
				break;
			}
			else if ((accept[x + 1]) == '\0')
				return (y);
		}
		s++;
	}
	return (y);
}
