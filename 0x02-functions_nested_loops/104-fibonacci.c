#include <stdio.h>
/**
 * main - program 50 fibonacci starts here
 *
 * Return: returns 0 (success)
*/
int main(void)
{
		double num1, num2, newnum;
		int count;

		num1 = 1;
		num2 = 2;
		printf("%.0f, %.0f, ", num1, num2);
		for (count = 1; count <= 96; count++)
		{
		newnum = num1 + num2;
		if (count < 96)
		printf("%.0f, ", newnum);
		else
		printf("%.0f\n", newnum);
		num1 = num2;
		num2 = newnum;
															}
							return (0);
}
