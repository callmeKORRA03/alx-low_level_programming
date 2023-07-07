#include "main.h"
/**
 * int_division - function to check if a number is divisible.
 * @n: The number to be checked.
 * @d: The variable that divides
 * Return: 0 if the number is divisible
 *         1 ithe number is not divisible
 */
int int_division(int n, int d)
{
	if (n % d == 0)
	{
		return (0);
	}
	if (d == n / 2)
	{
		return (1);
	}
	return (int_division(n, d + 1));
}

/**
 * is_prime_number - function to check if a number is prime.
 * @n: The number to be checked.
 * Return: 0 if the integer is not prime
 *         1 if the number is prime
 */
int is_prime_number(int n)
{
	int f = 2;

	if (n <= 1)
	{
		return (0);
	}
	if (n >= 2 && n <= 3)
	{
		return (1);
	}
	return (int_division(n, f));
}
