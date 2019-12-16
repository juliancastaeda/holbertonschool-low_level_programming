#include "holberton.h"

/**
 * _puts - print string.
 * @str: pontier.
 *
 * Return: Alaways 0 (Success)
 */

void _puts(char *str)
{
	int a, b;

	while (str[b] != 0)
	{
		b++;
	}
	for (a = 0; a < b; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
