#include <stdio.h>
/**
 * main - program 50 fibonacci starts here
 *
 * Return: returns 0 (success)
*/
int main(void)
{
		long int num1, num2, newnum, sumf;

		sumf = 0;
		num1 = 1;
		num2 = 2;
		while (num2 <= 4000000)
		{
			newnum = num1 + num2;
			if ((num2 % 2) == 0)
			{
			sumf = sumf + num2;
			}
			num1 = num2;
			num2 = newnum;
		}
		printf("%ld\n", sumf);
		return (0);
}
