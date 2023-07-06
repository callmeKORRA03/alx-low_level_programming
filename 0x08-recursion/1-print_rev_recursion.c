#include "main.h"
/**
* _print_rev_recursion - a function that prints a string in reverse
* @s: String to be printed
*/
void _print_rev_recursion(char *s)
{
	if (*s) /* it is used to check if a string is stored in it */
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
