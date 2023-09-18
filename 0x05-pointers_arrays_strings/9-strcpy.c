#include "main.h"
/**
 * _strcpy - function that copies a string
 *
 * @dest: Pointer to buffer
 * @src: Pointer to the string to be copied
 * Return: destination
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; *(src + x) != 0; x++)
	{
		*(dest + x) = *(src + x);
	}
	*(dest + x) = '\0';
	return (dest);
}
