#include "main.h"
/**
 * puts2 - function print characters a string
 *
 * @str: string to be printed
 */
void puts2(char *str)
{
	int s, v;

	s = 0;
	for (v = 0; str[v] != 0; v++)
	{
		s++;
	}
	for (v = 0; v < s; v += 2)
	{
		_putchar(str[v]);
	}
	_putchar('\n');
}
