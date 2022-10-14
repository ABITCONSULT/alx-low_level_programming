#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print all the argument numbers with separator
 * @separator: what separates the numbers
 * @n: total number of numbers to be printed
 * Return:returns nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}
