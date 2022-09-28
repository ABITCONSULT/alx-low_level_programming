#include "main.h"

/**
 * _pow_recursion - returns the power of x as y
 * @x: the base number to multiply recurisively
 * @y: the number of times to multiply x
 * Return: returns x^y
 */

int _pow_recursion(int x, int y)
{
	unsigned int i;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else (y > 0)
	{
		y--;
		i = x * _pow_recursion(x, y);
	}
	return (i);
}
