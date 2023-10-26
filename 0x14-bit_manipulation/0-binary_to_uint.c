#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - conversion.
 * @b: pointer.
 * Return: converted unit.
 */

unsigned int binary_to_uint(const char *b)
{
	int d;
	unsigned int value = 0;

	if (!b)
		return (0);

	for (d = 0; b[d]; d++)
	{
		if (b[d] < '0' || b[d] > '1')
			return (0);
		value = 2 * value + (b[d] - '0');
	}

	return (value);
}
