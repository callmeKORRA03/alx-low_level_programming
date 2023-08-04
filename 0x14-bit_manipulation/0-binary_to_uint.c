#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 * Return: The converted number.
 *         or 0, if there is no more chars in the string b
 *         that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = strlen(b), len = 0, sum = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (num--)
	{
		if (b[num] != 48 && b[num] != 49)
			return (0);

		if (b[num] == 49)
			sum += 1 << len;

		len++;
	}
	return (sum);
}
