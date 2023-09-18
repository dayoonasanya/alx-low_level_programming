#include "main.h"
/**
 * _strlen - function returns length
 *
 * @s: a string
 * Return: @i the length of a string
 */
int _strlen(char *s)
{
	int x;

	x = 0;
	while (*s != '\0')
	{
		x++;
		s++;
	}
	return (x);
}
