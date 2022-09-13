#include "main.h"
/**
 * _islower - to check the case of alph
 *
*/
int _islower(int c)
{
	int alph = 'a';
	while (alph <= 'z')
	{
		if (c == alph)
			return 1;
	}
	return 0;
}
