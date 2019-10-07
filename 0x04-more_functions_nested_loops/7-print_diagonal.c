#include "holberton.h"
/**
 * print_diagonal - print  diagonal line on the terminal.
 *@n: n times to print _
 *
 */

void print_diagonal(int n)
{
	int i, a, b;

	if (n > 0)
	{
		_putchar('\\');
		_putchar('\n');
		a = n;
		b = n;
		for (i = 2; i <= n; i++)
		{
			for (; a <= n; a++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			b--;
			a = b;
		}
	}
	else
		_putchar('\n');
}
