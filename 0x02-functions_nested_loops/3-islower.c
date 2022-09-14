#include "main.h"
/**
 * _islower - to check the case of alph
 * @c:tha character to check
 * Return:retun 1 if lowercase and zero if uppercase
*/
int _islower(int c)
{
	int alph = 'a';

	while (alph <= 'z')
	{
		if (c == alph)
		{
			return (1);
		}
	alph++;
	}
	return (0);
}
