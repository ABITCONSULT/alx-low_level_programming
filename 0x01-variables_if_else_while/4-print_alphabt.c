#include <stdio.h>
/**
 * main - the program run from here
 *
 * Return:return zero if no erro and non zero if error
*/
int main(void)
{
	int alph;

	alph = 'a';
	while (alph <= 'z')
	{
		if (alph == 'e')
		{
		}
		else
			if (alph == 'q')
			{
			}
			else
				putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
