#include "main.h"
/**
*string_toupper - function: changes lowercase letters to uppercase
*@str: parameter and pointer
*Return: returns a character after convertion
*/

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i++])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}

	return (str);
}
