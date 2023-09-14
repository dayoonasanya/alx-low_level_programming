#include "main.h"
/**
*_isupper - function that verifies if a  character
*@c: character that is tested
*Return: returns 1 if it is uppercase , 0 if not
*/

int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
return (1);

return (0);
}
