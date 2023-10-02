#include "main.h"

/**
 *_strlen - function: returns the length of string.
 * @s: target string.
 *Return: returns length.
 */

int _strlen(char *s)
{
int count, inc;
inc = 0;
for (count = 0; s[count] != '\0'; count++)
inc++;

return (inc);
}
