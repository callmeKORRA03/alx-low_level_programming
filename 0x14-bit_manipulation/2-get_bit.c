#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: The bit.
 * @index: The index to get the value at - indices start at 0.
 * Return: The value of the bit at index.
 *         -1, if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if ((n & (1 << index)) == 0)
	{
		return (0);
	}
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
		return (1);
}
