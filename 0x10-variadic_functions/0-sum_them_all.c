#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum of parameters.
 * @n: No. of parameters.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: return the sum of all the parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
