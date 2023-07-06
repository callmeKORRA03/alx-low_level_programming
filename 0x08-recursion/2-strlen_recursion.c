#include "main.h"
#include <string.h>
/**
* _strlen_recursion - a function that prints out the length of the string
* @s: a variable used to print which is already stored in a main.h file
* Return: the lenth of the array
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0') /* s is used if the counter reaches the end it terminates */
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
