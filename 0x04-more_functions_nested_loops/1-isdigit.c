#include "main.h"
/**
* _isdigit - check if numbers are 0 - 9
* @c: used to check if true or not
* Return:1 if false and 0 if true
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
