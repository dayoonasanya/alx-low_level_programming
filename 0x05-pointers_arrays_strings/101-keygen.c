#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function & entry point
 *
 * Return: generated password returned
 */
int main(void)
{
char i;
int y;

srand(time(0));
while (y <= 2645)
{
i = rand() % 128;
y += i;
putchar(i);
}
putchar(2772 - y);
return (0);
}
