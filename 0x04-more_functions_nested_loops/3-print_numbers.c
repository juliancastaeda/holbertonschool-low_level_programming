#include "holberton.h"

/**
 * print_numbers - print numbers 0 an 9.
 * @ :
 *
 * Return: Alaways 0 (Success)
 */

void print_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
	_putchar(n);
	}
	_putchar('\n');
}
