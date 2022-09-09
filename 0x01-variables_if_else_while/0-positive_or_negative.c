#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this is where the program start running
 *
 * Return:returns zero if no error and non zero if error
*/
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
			                if (n > 0)
				               printf("%d\n is positive", n);
			                else
				               if (n == 0)
					               printf("%d\n is zero", n);
				               else
					               printf("%d\n is negative", n);
		return (0);
}
