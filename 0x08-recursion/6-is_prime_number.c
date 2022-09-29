#include "main.h"

/**
 * primechk - checks for prime number
 * @n: number to check
 * @digit: number to check with
 * Return: returns the prime
 */
int primechk(int n, int digit)
{
	if (n / digit == 0)
	{
		return (0);
	}
	if (digit == n / 2)
	{
		return (1);
	}
	return (0 + primechk(n, digit + 1));
}

/**
 * is_prime_number - check if a number is prime
 * @n: the number to check
 * Return: returns 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (primechk(n, 2));
}
