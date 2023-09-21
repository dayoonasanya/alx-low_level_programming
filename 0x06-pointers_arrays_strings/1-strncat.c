#include "main.h"
/**
 * _strncat - function to concatenate two strings
 *
 * @src: it is a string
 * @dest: is a string
 * @n: it is  the number of bytes to be used
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;

	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
