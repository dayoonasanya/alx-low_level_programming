#include "main.h"


/**
 * reverse_array - function: reverse an array.
 *
 * @a: array to be reversed contents
 * @n: number of elements in the array contents
 */
void reverse_array(int *a, int n)
{
	int i, en, der;

	en = n - 1;
	for (i = 0; i < (n / 2); i++, en--)
	{
		der = a[i];
		a[i] = a[en];
		a[en] = der;
	}
}
