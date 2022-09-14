#include "main.h"
#include <math.h>
/**
 * _abs - computes absolute value of an int
 * @n:the number to get its abs value
 * Return:returns absolute value
*/
int _abs(int n)
{
	int abs;

	if (n >= 0)
	{
		abs = n;
		_putchar(abs);
	}
	else
	{
			abs = (n + (-2*n));
			_putchar(abs);
	}
	return abs;
}
