#include "main.h"
/**
 * puts_half - function print half characters of string
 *
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int x, y;

	x = 0;
	for (y = 0; str[y] != 0; y++)
	{
		x++;
	}
	if (x % 2 == 0)
	{
		for (y = x / 2; y < x; y++)
		{
			_putchar(str[y]);
		}
	}
	else
	{
		for (y = (x / 2) + 1; y < x; y++)
		{
			_putchar(str[y]);
		}
	}
	_putchar('\n');
}
