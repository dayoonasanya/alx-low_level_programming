#include "main.h"
/**
 *print_last_digit - prints last digit
 *@x: the number to compute
 *
 *Return: 0 if success.
 */
int print_last_digit(int x)
{
	int z;

	z = (x % 10);
	if (z < 0)
	{
		z = (-1 * z);
	}
	_putchar(z + '0');
	return (z);
}
