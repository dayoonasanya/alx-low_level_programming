#include "main.h"
/**
 *print_most_numbers - main - print numbers
 *
 *Return: numbers
 */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		if ((x == 2) || (x == 4))
		{
			continue;
		}
		else
		{
			_putchar(x + '0');
		}
	}
	_putchar('\n');
}
