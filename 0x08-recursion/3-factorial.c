#include "main.h"

/**
 * factorial - returns the factorial of an integer
 * @n: finding n!
 * Return: returns n!
 */
int factorial(int n)
{
	if (n < 1)
		return (-1);
	else if ((n == 0) || (n == 1))
		return (1);
	else
		return (n * factorial(n - 1));
}
