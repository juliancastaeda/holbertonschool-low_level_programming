#include "holberton.h"

/**
 * print_most_numbers - print numbers.
 * @c:evaluate if it is capital
 *
 * Return: Alaways 0 (Success)
 */

void print_most_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	if (n != '2' && n != '8')
	{
		_putchar(n);
	}
	_putchar('\n');


}
