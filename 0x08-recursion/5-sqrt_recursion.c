#include "main.h"
int is_divisible(int num, int div);
int is_prime_number(int n);
/**
 * is_divisible - number divisible
 * @num: No. to check
 * @div: No. for divisor
 *
 * Return: rturn divisible number
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - return if number prime
 * @n: No. to check
 *
 * Return: return if integer prime
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, div));
}
