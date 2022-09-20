#include "main.h"

/**
 * puts2 - to print every other string
 * @str: the stringto print
 * Return: returns void
 */
void puts2(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str = str + 2;
if (((*(str - 6) == 'o') && (*(str - 4) == 'u')) && (*(str - 2) == '.'))
{
break;
}
}
_putchar('\n');
}
