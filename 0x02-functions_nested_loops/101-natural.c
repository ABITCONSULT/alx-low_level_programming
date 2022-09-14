#include <stdio.h>
/**
 * main-Program that sums multiple of 3 an 5 to 1024
 * Description: computes mult 3 and 5
 * Retun:returns the value of sum
*/
int main(void)
{
	int m3, m5, i, msum;

	m3 = 3;
	m5 = 5;
	msum = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			m3 = i;
			msum = msum + m3;
		}
		if ((i % 5) == 0)
		{
			m5 = i;
			if (m3 == m5)
			{
			}
			else
			msum = msum + m5;
		}
	}
	printf("%d\n", msum);
	return (0);
}
