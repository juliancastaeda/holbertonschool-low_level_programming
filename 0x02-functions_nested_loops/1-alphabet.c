#include "holberton.h"
/**
 * print_alphabet - print Alphabet.
 *
 * Return: Alaways 0 (Success)
 */
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
