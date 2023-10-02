#include "main.h"

/**
 *_puts - function: prints a string.
 * @str: target string.
 * Return: nothing.
 */

void _puts(char *str)
{
while (*str)
_putchar(*str++);

_putchar('\n');
}
