#include "main.h"
#include <stdio.h>

/**
 * get_bit - gets bit.
 * @n: pointer to bit.
 * @index: index.
 *
 * Return: return index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
