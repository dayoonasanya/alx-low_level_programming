#include <stdio.h>
#include <stdlib.h>

/**
 * main - function: prints and multiplies two numbers.
 * @argc: No. of arguments.
 * @argv: array pointer.
 *
 * Return: returns 0 or 1.
 */

int main(int argc, char *argv[])
{
	int n, m, p;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	m = atoi(argv[2]);
	p = n * m;

	printf("%d\n", p);

	return (0);
}
