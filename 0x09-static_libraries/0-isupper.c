#include "main.h"
/**
*_isupper - function: verify if a  character is upper or lowercase.
*@c: variable character to be tested.
*Return: 1 if uppercase , 0 if lowercase.
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	return (0);
}
