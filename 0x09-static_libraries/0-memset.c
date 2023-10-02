#include "main.h"

/**
*_memset - function: fill memory with byte constant.
*@s: target variable.
*@b: constant byte.
*@n: target, No. of bytes.
*Return: returns new target value.
*/
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
