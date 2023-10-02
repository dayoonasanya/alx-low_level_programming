#include <stdio.h>
#include <stdlib.h>

/**
 * main - function: will print the minimum number.
 * @argc: No. of arguments.
 * @argv: array pointers.
 *
 * Return: returns 0 or 1.
 */
int main(int argc, char *argv[])
{
	int t, i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	t = atoi(argv[1]);

	while (t > 0)
	{
		i++;
		if ((t - 25) >= 0)
		{
			t -= 25;
			continue;
		}
		if ((t - 10) >= 0)
		{
			t -= 10;
			continue;
		}
		if ((t - 5) >= 0)
		{
			t -= 5;
			continue;
		}
		if ((t - 2) >= 0)
		{
			t -= 2;
			continue;
		}
		t--;
	}

	printf("%d\n", i);

	return (0);
}
