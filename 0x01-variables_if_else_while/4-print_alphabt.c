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
			alph++;
		else
			if (alph == 'q')
				alph++;
			else
				putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
