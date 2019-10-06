#include "holberton.h"

/**
 * print_line - print numbers.
 * @n : print line
 *
 * Return: Alaways 0 (Success)
 */

void print_line(int n)
{
	int j;

	if (n > 0)
	{
		for (j = 1; j <= n; j++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
