#include "main.h"
/**
* str_concat - function: concatenates two strings.
*@s1:First string
*@s2:Second string
*
*Return: return concatenated string.
*/
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int index, concat_index = 0,  len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		len++;

	concat_str = malloc(sizeof(char) * len);

	if (concat_str == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		concat_str[concat_index++] = s1[index];

	for (index = 0; s2[index]; index++)
		concat_str[concat_index++] = s2[index];

	return (concat_str);
}
