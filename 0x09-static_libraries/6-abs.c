#include "main.h"
#include <math.h>
/**
 * _abs - computes absolute value of an int
 * @n:the number to get its abs value
 * Return:returns absolute value
*/
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
			n = (n * (-1));
		return (n);
	}
}
