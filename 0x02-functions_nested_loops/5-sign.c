#include "main.h"
/**
 * print_sign - check the sign of a number.
 *
 * @n: number whose sign is checked
 * Return:1-if n is greater than 0: 0- if n eq.
 */



int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
