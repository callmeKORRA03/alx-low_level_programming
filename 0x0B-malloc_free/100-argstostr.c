#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all arguments of the program
 * @ac: The number of arguments
 * @av: An array of pointers
 * Return: NULL, if ac == 0, av == NULL
 *         A pointer to the new string or NULL if the function fails
 */
char *argstostr(int ac, char **av)
{
	int a, b, c = 0;
	int total = ac;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			total++;
	}

	str = malloc(sizeof(char) * total + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			str[c++] = av[a][b];

		str[c++] = '\n';
	}

	str[total] = '\0';
	return (str);
}
