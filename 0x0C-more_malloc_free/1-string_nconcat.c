#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - a function to allocate memory
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: a pointer that points to a newly alllocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, j, str1, str2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
		if (n > j)
			n = j;
	str1 = i + n;
	concat = malloc(sizeof(char) * (str1 + 1));

	if (!concat)
	return (NULL);
	for (str2 = 0; str2 < str1; str2++)
	{
	if (str2 < i)
		concat[str2] = s1[str2];
	else
		concat[str2] = s2[str2 - i];
	concat[i] = '\0';
	}
	return (concat);
}
