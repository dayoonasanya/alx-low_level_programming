#include "main.h"
#include <stdio.h>
/**
 *_strcat - function: concatenates the given strings
 *
 *@dest: string to be concatenated
 *@src: string to be cocatenated
 *
 * Return: returns poiner to @dest
 */

char *_strcat(char *dest, char *src)
{

	int i = 0, y = 0;

	while (dest[i++])
		y++;

	for (i = 0; src[i]; i++)
		dest[y++] = src[i];

	return (dest);
}
