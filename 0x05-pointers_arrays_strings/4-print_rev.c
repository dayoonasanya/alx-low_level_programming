#include "main.h"
/**
 * print_rev - function print string reverse
 *
 * @s: string to reverse
 */
void print_rev(char *s)
{
	int x;

	int j;

	x = 0;
	for (j = 0; s[j] != 0; j++)
	{
		x++;
	}
	for (j = x - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
