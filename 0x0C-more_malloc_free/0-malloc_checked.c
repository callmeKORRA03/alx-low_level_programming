#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - a function to allocate memory
 * @b: variable name
 * Return: Always a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);
	return (mem);
}
