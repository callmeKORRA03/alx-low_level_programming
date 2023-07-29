#include <stdio.h>
void _print(void) __attribute__((constructor));

/**
 * _print - Prints a string
 */
void _print(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
