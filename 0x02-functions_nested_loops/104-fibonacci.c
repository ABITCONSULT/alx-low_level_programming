#include <stdio.h>
/**
 * main - program 50 fibonacci starts here
 *
 * Return: returns 0 (success)
*/
int main(void)
{
		long long num1, num2, newnum;
		int count;

		num1 = 1;
		num2 = 2;
		printf("%lld, %lld, ", num1, num2);
		for (count = 1; count <= 96; count++)
		{
		newnum = num1 + num2;
		if (count < 96)
		printf("%lld, ", newnum);
		else
		printf("%lld\n", newnum);
		num1 = num2;
		num2 = newnum;
		}
		return (0);
}
