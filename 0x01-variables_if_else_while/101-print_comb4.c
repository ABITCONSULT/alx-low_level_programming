#include <stdio.h>
/**
 * main - the program start running here
 *
 * Return: returns zero if error and non zero if no error
*/
int main(void)
{
		int num1, num2, num3;

		num1 = '0';
		while (num1 <= '9')
		{
			for (num2 = '0'; num2 <= '9'; num2++)
			{
			for (num3 = '0'; num3 <= '9'; num3++)
			{
				if (num1 < num2 && num2 < num3)
				{
					putchar(num1);
					putchar(num2);
					putchar(num3);
					if (num1 != '7' && num2 != '8' && num3 != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
				else
				{
				}
			}
			}
		num1++;
		}
		putchar('\n');
		return (0);
}
