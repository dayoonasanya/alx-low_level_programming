#include "main.h"
#include <stdio.h>


/**
 * rot13 - function: this is encoder.
 * @s: Pointer, string parameters.
 *
 * Return: *s - this is what is returned
 */

char *rot13(char *s)
{
	int x;
	int y;
	char d_1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char d_2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (s[x] == d_1[y])
			{
				s[x] = d_2[y];
				break;
			}
		}
	}
	return (s);
}
