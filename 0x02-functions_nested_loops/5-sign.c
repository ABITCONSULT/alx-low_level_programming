#include "main.h"
/**
 * print_sign - print the sign of an integer
 * @n:the integer to check
 * Return:returns 1 if positive, 0 if zero, -1 if negative
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else
		if (n == 0)
		{
			_putchar (48);
			return (0);
		}
		else
		{
			_putchar(45);
			return (-1);
		}
}


