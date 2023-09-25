#include "main.h"
/**
 * _memset - function: fill memory with byte (const)
 *
 * @s: Pointer, shows to memory
 * @b: constant byte to fill the memory
 * @n: No of bytes of the memory
 * Return: return the pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
