#include "main.h"
/**
 * _pow_recursion - prints power y of x
 * @x: The value.
 * @y: The number for power.
 * Return: returns the value of x
 */

int _pow_recursion(int x, int y)
{
	int value = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	value *= _pow_recursion(x, y - 1);

	return (value);
}
