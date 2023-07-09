#include "main.h"
/**
 * _memset - prototype name that fills a block of memory
 * @s: starting address
 * @b: desired value
 * @n: number of bytes
 * Return: changed Array with new value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
