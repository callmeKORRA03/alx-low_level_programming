#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function to Concatenates two strings.
 * @s1: The string to be concatenated
 * @s2: The string to be concatenated
 * Return: NULL, If concatenation fails
 *         else - a pointer to the newly-allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int index, index2 = 0, len = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (index = 0; s1[index] || s2[index]; index++)
		len++;

	str = malloc(sizeof(char) * len);

	if (str == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		str[index2++] = s1[index];

	for (index = 0; s2[index]; index++)
		str[index2++] = s2[index];

	return (str);
}
