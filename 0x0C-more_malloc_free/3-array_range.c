#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integer
 * @min: minumum range of values
 * @max: maximum range of values
 * Return: Pointer to the new created array
 */
int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(*ptr) * ((max - min) + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		ptr[i] = min++;
	return (ptr);
}
