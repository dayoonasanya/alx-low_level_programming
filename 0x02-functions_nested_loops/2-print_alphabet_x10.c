#include "main.h"
/**
 * print_alphabet_x10 - prints letter X10
 *
 * Return: 0 if success
 */
void print_alphabet_x10(void)
{
	int x, j;

	j = 0;

	while (j < 10)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		j++;
		_putchar('\n');
	}
}
