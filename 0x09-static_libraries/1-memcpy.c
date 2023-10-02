#include "main.h"

/**
*_memcpy - function: copy memory area.
*@dest: area destination.
*@src: source area.
*@n: No. of bytes to copy.
*Return: return n, bytes.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
