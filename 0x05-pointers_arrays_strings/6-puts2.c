#include "holberton.h"
/**
 * puts2 - function that prints a string in reverse
 *@str: first value to check
 *
 */
void puts2(char *str)
{
	int i = 0, k;

	while (str[i] != '\0')
	{
		i++;
	}
	for (k = 0; k < i;  k = k + 2)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
