#include <stdio.h>
/**
 * main - the program start running here
 *
 * Return: returns zero if error and non zero if no error
*/
int main(void)
{
	int num1, num2;

	num1 = '0';
	while (num1 <= '9')
	{
		for (num2 = 0; num2 <= '9'; num2++)
		{
			if (num1 < num2)
			{
				putchar(num1);
				putchar(num2);
				putchar(',');
				putchar(' ');
			}
			else
			{
			}
		}
	num1++;
	}
	return (0);
}
