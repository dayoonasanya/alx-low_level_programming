#include <stdio.h>

/**
*main - program that prints number
*
*
*Return: returns 0
*/
int main(void)
{
int i;
while (i++ < 100)

if ((i % 3 == 0) && (i % 5 == 0))
printf("FizzBuzz ");

else if ((i % 3) == 0)
printf("Fizz ");

else if ((i % 5) == 0)
{
if (i != 100)
printf("Buzz ");

else
printf("Buzz");
}

else
printf("%d ", i);

printf("\n");
return (0);
}
