#include <stdio>
/**
 * main - program 50 fibonacci starts here
 *
 * Return: returns 0 (success)
*/
int main(void)
{
	int count, num1, num2, newnum;
	num1 = 1;
	num2 = 2;
	printf("%d, %d, ", num1, num2);
	for (count = 0; count <= 50; count++)
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
