#include "main.h" 
#include <stdio.h> 
/** 
 * * Program that sums multiple of 3 an 5 to 1024
 * *  
 * * Retun:returns the value of sum
 * */ 
int main(void) 
{
	int m3, m5, msum, msum1; 
	m3 = 3; 
	m5 = 5; 
	msum1 = 0;
	while (m3 < 1024)
	{
		while (m5 < 1024)
			msum = m3 + m5;
	m3 = m3 + 3;
	m5 = m5 + 5;
	msum1 = msum1 + msum;
	}
printf("%d\n", msum1)
}
