#include <stdio.h>
/**
 * main - the program run from here
 *
 * Return:return zero if no erro and non zero if error
*/
int main(void)
{
	int num;

	num = '0';
	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
