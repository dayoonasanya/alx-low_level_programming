#include "main.h"


/**
* print_number - function: prints a number
* @n: The number to print
*
*/
void print_number(int n)
{
unsigned int m = n;
if (n < 0)
{
_putchar('-');
m = -m;
}
if (m > 9)
{
print_number(m / 10);
}
_putchar(m % 10 + '0');
}
