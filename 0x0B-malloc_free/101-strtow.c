#include "main.h"
#include <stdlib.h>

/**
 * count - A function to count the number of words in a string
 * @s: string to evaluate
 * Return: total number of words
 */
int count(char *s)
{
	int i = 0, c, d = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			i = 0;
		else if (i == 0)
		{
			i = 1;
			d++;
		}
	}
	return (d);
}

/**
 * **strtow - function that splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings, if successful
 *         else, NULL if function fails
 */
char **strtow(char *str)
{
	char **strings, *temp;
	int i, j, l;
	int k = 0, len = 0, words, c = 0;

	while (*(str + len))
		len++;
	words = count(str);
	if (words == 0)
		return (NULL);

	strings = (char **) malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				l = i;
				temp = (char *) malloc(sizeof(char) * (c + 1));
				if (temp == NULL)
					return (NULL);
				while (j < l)
					*temp++ = str[j++];
				*temp = '\0';
				strings[k] = temp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			j = i;
	}
	strings[k] = NULL;
	return (strings);
}
