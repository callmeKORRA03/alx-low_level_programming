#include "main.h"
#include <stdlib.h>
/**
 * create_array - function to create an array of chars and
 *                initialize it with a specific char.
 * @size: The size of the array to be initialized.
 * @c: The specific char to intialize the array with.
 * Return: NULL if size == 0 or the function fails
 *         or a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
