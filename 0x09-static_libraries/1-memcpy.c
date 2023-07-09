#include "main.h"
/**
 * _memcpy - a prototype that copies memory data
 * @dest: storage memory
 * @src: copy memory
 * @n: number of bytes
 * Return: copied memory with a changed n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
