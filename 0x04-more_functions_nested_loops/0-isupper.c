#include "main.h"
/**
 *_isupper - checks if c is uppercase.
 *@c: tested character
 *Return: 1 if upper and 0 if lower.
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
