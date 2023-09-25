#include "main.h"


/**
*print_diagsums - function: prints the sum
*
*@a: Pointer, matrix.
*@size: Pointer, size of matrix.
*/

void print_diagsums(int *a, int size)
{
	int x, s1 = 0, s2 = 0;

	for (x = 0; x < size; x++)
	{
		s1 += a[x];
		a += size;
	}

	a -= size;

	for (x = 0; x < size; x++)
	{
		s2 += a[x];
		a -= size;
	}

	printf("%d, %d\n", s1, s2);
}
