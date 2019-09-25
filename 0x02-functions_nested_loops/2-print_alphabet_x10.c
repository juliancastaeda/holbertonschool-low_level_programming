#include "holberton.h"
/**
 * print_alphabet_x10 - print Alphabet.
 *
 * Return: Alaways 0 (Success)
 */
void print_alphabet_x10(void)
{
	int n, m;
	while (m <= 9)
{
	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
	++m;
}
}
