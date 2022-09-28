#include "main.h"

/**
 * sqrtcheck - check for square root
 * @n: number to get its square root
 * @c: increment number to run
 * Return: returns the sqrt of n
 */
int sqrtcheck(int n, int digit)
{
	if (n % (n/digit) == 0)
	{
		if (n * (n/digit) == n)
			return (digit);
		else
			return (-1);
	}
	return (0 + sqrtcheck(n, digit + 1));
}

/**
 * _sqrt_recursion - returns square root of a number
 * @n: the number to gets its sqrt
 * Return: returns sqrt of n
 */
int _sqrt_recursion(int n)
{

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
	{
		return (sqrtcheck(n, 2));
	}
}
