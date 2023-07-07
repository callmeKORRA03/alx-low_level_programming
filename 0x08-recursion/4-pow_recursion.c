#include "main.h"
/**
* _pow_recursion - function that returns the value of x^* y
* @x: value to be raised.
* @y: varaible for the power
* Return: varrible favour which stores the value of power y
*/
int _pow_recursion(int x, int y)
{
	int favour = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	favour *= _pow_recursion(x, y - 1);
	return (favour);
}
