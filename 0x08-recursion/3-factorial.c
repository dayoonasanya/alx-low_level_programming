#include "main.h"
/**
 * factorial - factorial of a number.
 * @n: The number.
 * Return: returns factorial of number n
 */
int factorial(int n)
{
	int num = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	num *= factorial(n - 1);

	return (num);
}
