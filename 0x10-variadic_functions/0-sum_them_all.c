#include "variadic_functions.h"

/**
 * sum_them_all - sums all its argument
 * @n: the number of arguments to add
 * Return: returns the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum = 0;
	unsigned int i;

	va_start (ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg (ap, int);

	va_end (ap);
	return (sum);
}
