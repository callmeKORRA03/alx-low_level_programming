#include "main.h"
/**
 * _strlen - prototype name that returns the length of the string
 * @s: string character
 * Return: length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
