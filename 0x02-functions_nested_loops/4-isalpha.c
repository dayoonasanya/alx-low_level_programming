#include "main.h"
/**
 * _isalpha - Checks for alphabet letter
 *@c: point to the number
 * Return: 0 if success
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
