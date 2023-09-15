#include "main.h"
/**
*_isdigit - function: verifies a character
*@c: Character Tested
*Return: Return 1 or 0
*/

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
return (1);

return (0);
}
