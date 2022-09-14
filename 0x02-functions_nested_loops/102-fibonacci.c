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
	printf("%d, %d, ", num1, num2);
	for (count = 3; count <= 50; count++)
	{
	newnum = num1 + num2;
	if (count < 50)
		printf("%d, ", newnum);
	else
		printf("%d\n", newnum);
	num1 = num2;
	num2 = newnum;
	}
	return (0);
}
