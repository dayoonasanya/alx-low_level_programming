#include "main.h"

/**
 * _strncpy - function: copy a string
 *
 * @dest: destination string concatenate
 * @src: start string concatenate
 * @n: integer n Pointer
 * Return: dest after concatenation
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
