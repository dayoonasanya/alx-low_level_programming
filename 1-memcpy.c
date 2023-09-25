#include "main.h"
/**
 * _memcpy - function: copy memory
 *
 * @dest: destination area
 * @src: memory area
 * @n: memory bytes
 * Return: return, pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
