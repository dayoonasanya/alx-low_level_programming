#include "main.h"
/**
 * rev_string - function print string -reverse
 *
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int x;

	int y = 0;

	int i;

	int j;

	char k;

	for (x =  0; s[x] != 0; x++)
	{
		y++;
	}
	j = y - 1;
	for (i = 0; i < (y / 2); i++)
	{
		k = s[i];
		s[i] = s[j];
		s[j] = k;
		j--;
	}
}
