#include <stdio.h>

/**
 * main - function: print all arguments.
 * @argc: No. of arguments.
 * @argv: array pointer.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);
	return (0);
}
