#include "holberton.h"

/**
 * print_rev - print string.
 * @str: pontier.
 *
 * Return: Alaways 0 (Success)
 */

void print_rev(char *s)
{
	int a, b;

	while (s[b] != 0)
	{
		b--;
	}
	for (a = b-1 ; a <= b; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
