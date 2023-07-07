#include "main.h"
/**
 * factorial - a function that returns the factorial of a given number.
 * @n: variable to find the factorial of that given number.
 * Return: Always 0 if n > 0 and indicate error if n is not
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
	{
		return (-1);
	}
	else if (n >= 0 && n <= 1)
	{
		return (1);
	}
	result *= factorial(n - 1);
	return (result);
}
