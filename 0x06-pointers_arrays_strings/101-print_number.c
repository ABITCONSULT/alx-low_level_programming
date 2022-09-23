#include "main.h"
/**
 * print_number - to print an integer.
 * @n: input integer.
 * Return: nothing.
 */
void print_number(int n)
{
	unsigned int k, j, i;

	if (n < 0)
	{
		_putchar(45);
		k = n * -1;
	}
	else
	{
		k = n;
	}

	j = k;
	i = 1;

	while (j > 9)
	{
		j /= 10;
		i *= 10;
	}

	for (; i >= 1; i /= 10)
	{
		_putchar(((k / i) % 10) + 48);
	}
}
