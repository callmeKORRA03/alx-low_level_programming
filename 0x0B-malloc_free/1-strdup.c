#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 *           memory containing a copy of the string given as parameter.
 * @str: The string to be copied
 * Return: NULL, If str == NULL or insufficient memory is available
 *         A pointer to the duplicated string, if successful
 */
char *_strdup(char *str)
{
	char *c;
	int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
		len++;

	c = malloc(sizeof(char) * (len + 1));

	if (c == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		c[i] = str[i];

	c[len] = '\0';
	return (c);
}
