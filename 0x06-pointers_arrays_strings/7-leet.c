#include "main.h"


/**
 * leet - function: encode given string.
 *
 * @s: string given
 * Return: string given
 */
char *leet(char *s)
{
	int x, y;

	char array[] = "AEOTL43071";

	x = 0;
	while (s[x] != '\0')
	{
		for (y = 0; y < 5; y++)
		{
			if (s[x] == array[y] || (s[x] - 32) == array[y])
			{
				s[x] = array[y + 5];
			}
		}
		x++;
	}
	return (s);
}
