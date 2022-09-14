#include "main.h"
/**
 * print_to_98 - print all numbers from n to 98
 * @n number to start from
 * Return:returns the listy of numbers
*/
void print_to_98(int n)
{
	int n1;
	if (n < 98)
	{
	n1 = n + 1;
	_putchar(n);
	while (n1 <= 98)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(n1);
		n1++;
	}
	}
	if (n > 98)
	{
		n1 = n - 1;
		_putchar(n);
		while (n1 >= 98)
		{
		_putchar(',');
		_putchar(' ');
		_putchar(n1);
		n1--;
		}
	}
}
