#include "main.h"
/**
 * add - add two numbers
 * @
 * Return:returns the sum
*/
int add(int num1, int num2)
{
	int sum;

	sum = num1 + num2;
	if (sum <= 9)
		_putchar((sum % 10) + 48);
	else
	{
		_putchar((sum / 10) + 48);
		_putchar((sum % 10) + 48);
	}
	return (sum);
}
