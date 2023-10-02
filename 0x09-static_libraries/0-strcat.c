#include "main.h"


/**
 *_strcat - function: concatenates pointed string.
 *@dest: appended string
 *@src: concatenated string
 *
 * Return: returns pointer
 */
char *_strcat(char *dest, char *src)
{

	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
