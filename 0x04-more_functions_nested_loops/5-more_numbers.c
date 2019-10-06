#include "holberton.h"

/**
 * print_more_numbers - print numbers.
 * @ :
 *
 * Return: Alaways 0 (Success)
 */

void more_numbers(void)
{
	int i, j, k;

	j = 0;

	for (k = 0; k < 10; k++)
	{
		for (i = 48; i <= 57; i++)
		{
			if (j >= 15)
				break;
			if (j >= 10)
				_putchar('1');
			_putchar(i);
			j++;
			if (i == 57)
				i = 47;
	}
	i = 48;
	j = 0;
	_putchar('\n');
}
}
