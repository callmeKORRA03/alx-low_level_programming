#include "main.h"
/**
 * _isalpha - Check for uppper and lower case
 * @c:  The variable used for int
 * Return: Always (0) success
 */
int _isalpha(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
		if (c >= 'a' && c <= 'z')
		{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
