#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints the string arg with separator
 * @separator: separator that separates the strings
 * @n: number of strings to print
 * Return: returns nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strr;
	unsigned int i;
	char *str;

	va_start(strr, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strr, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(strr);
}
