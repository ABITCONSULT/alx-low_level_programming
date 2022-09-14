#include <stdio.h>
/**
 *  * main - program 50 fibonacci starts here
 *   *
 *    * Return: returns 0 (success)
 *    */
int main(void)
{
		long int count, num1, num2, newnum;

		num1 = 1;
		num2 = 2;
		while (num2 <= 4000000)
		{
			newnum = num1 + num2;
			if ((num2 % 2) = 0)
			{
				if (num2 == 4000000)
					printf("%ld\n", num2);
				else
					printf("%ld, ", num2);
			}
			num1 = num2;
			num2 = newnum;
		}
		return (0);
}
