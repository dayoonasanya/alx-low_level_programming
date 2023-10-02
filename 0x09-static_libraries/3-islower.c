#include "main.h"

/**
*_islower - function: checks if a character is lower.
*@c: target character.
*Return: returns 0 or 1 after character.
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
