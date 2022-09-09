#include <stdio.h>
/**
 * main - this is where our program starts and end
 *
 * Return:returns zero if no error and non zero if error
*/
int main(void)
{
	int num;

	num = '0';
	while (num <= '9')
	{
		putchar(num);
		putchar(', ');
		num++;
		}
	putchar('\n');
	return (0);
}
