#include "main.h"
/**
 * jack_bauer - function that prints all the daily minutes
 * @
 * Return:returns void
*/
void jack_bauer(void)
{
	int H, h, M, m;

	H = '0';
	while (H <= '2')
	{
		h = '0';
		while (h <= '9')
		{
		if (H == '2' && h > '3')
		{
		}
		else
			{
			M = '0';
			while (M <= '5')
			{
			m = '0';
			while (m <= '9')
			{
			_putchar(H);
			_putchar(h);
			_putchar(':');
			_putchar(M);
			_putchar(m);
			_putchar('\n');
			m++;
			} M++;
			} h++;
			}
		} H++;
	}
}
