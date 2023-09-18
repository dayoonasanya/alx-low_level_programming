/**
* _atoi - function: convert a string to an int.
* @s: Pointer, string to be converted
*
* Return: integer returned
*/
int _atoi(char *s)
{
int x = 1;
unsigned int number = 0;
do {
if (*s == '-')
x *= -1;
else if (*s >= '0' && *s <= '9')
number = number * 10 + (*s - '0');
else if (number > 0)
break;
} while (*s++);
return (number *x);
}
