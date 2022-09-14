#include "main.h"
/**
 * jack_bauer - function that prints all the daily minutes
 * @
 * Return:returns void
*/
void jack_bauer(void)
{
	int H, h, M, m;

	H = 0;
	while (H <= 2)
	{
	if (H <= 1)
	{
		h = 0;
		while (h <= 9)
		{
		M = 0;
		while (M <= 5)
		{
		m = 0;
		while (m <= 9)
		{
		_putchar(H);
		_putchar(h);
		_putchar(':');
		_putchar(M);
		_putchar(m);
		_putchar('\n');
		}
		}
		}
	else
	{
		h = 0;
		while (h <= 3)
		{
		M = 0;
		while (M <= 5)
		{
		m = 0;
		while (m <= 9)
		{
		_putchar(H);
		_putchar(h);
		_putchar(':');
		_putchar(M);
		_putchar(m);
		_putchar('\n');
		}
		}
		}
	}
	}
	}
	return;
}
