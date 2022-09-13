#include "main.h"
/**
 * main - the main programs to print putchar
 *
 * Return:returns 0
*/
int main(void)
{
	char out[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	for (int i = 0; i < 8; ++i) {
		_putchar("%c", out[i]);
			    }
	return (0);
}
