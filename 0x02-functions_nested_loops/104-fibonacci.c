#include <stdio.h>
/**
 * main - program 50 fibonacci starts here
 *
 * Return: returns 0 (success)
*/
int main(void)
{
		long int count, num1, num2, newnum;

		num1 = 1;
		num2 = 2;
		printf("%ld, %ld, ", num1, num2);
		for (count = 1; count <= 97; count++)
		{
		newnum = num1 + num2;
		if (count < 97)
		printf("%ld, ", newnum);
		else
		printf("%ld\n", newnum);
		num1 = num2;
		num2 = newnum;
															}
							return (0);
}
