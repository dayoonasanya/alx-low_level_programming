#include "main.h"
/**
 * _strcat - function: concatenate two given strings
 *
 * @dest: string to be used
 * @src: string to be used
 * Return: concatnated string (dest)
 */
char *_strcat(char *dest, char *src)
{
	int x, y;

	x = 0;
	y = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
