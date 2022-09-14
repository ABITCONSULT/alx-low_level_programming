#include "main.h"
/**
 * print_to_98 - print all numbers from n to 98
 * @n number to start from
 * Return:returns the listy of numbers
*/
void print_to_98(int n)
{
	int n1, n2;
	if (n < 98)
	{
	n1 = n + 1;
	if (n <= 9)
	_putchar((n % 10) + 48);
	else 
		if (n <= 99)
		{
		_putchar((n / 10) + 48);
		_putchar((n % 10) + 48);
		}
	else 
		if (n > 99)
		{
		_putchar((n1 / 100) + 48);
		n2 = n1 - ((n1/100) * 100);
		_putchar((n2 / 10) + 48);
		_putchar((n2 % 10) + 48);
		}
	while (n1 <= 98)
	{
		_putchar(',');
		_putchar(' ');
		if (n1 <= 9)
		_putchar((n1 % 10) + 48);
		else
		{
		_putchar((n1 / 10) + 48);
		_putchar((n1 % 10) + 48);
		}
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
		if (n1 <= 99)
		{
		_putchar((n1 / 10) + 48);
		_putchar((n1 % 10) + 48);
		}
		else
		{
		_putchar((n1 / 100) + 48);
		n2 = n1 - ((n1/100) * 100);
		_putchar((n2 / 10) + 48);
		_putchar((n2 % 10) + 48);
		}
		n1--;
		}
	}
}
