#include <stdio.h>
/**
 * main - prints the highest prime factor of a number n
 *
 * Return:returns 0 on success
 */

int main(void)
{
	long int n;
	long int div;
	int maxFact;

	n = 612852475143;
	div = 2;
	while (n != 0)
	{
		if ((n % div) != 0)
			div = div + 1;
		else
		{
			maxFact = n;
			n = n / div;
			if (n == 1)
			{
				printf("%d\n", maxFact);
				break;
			}
		}
	}
	return (0);
}
