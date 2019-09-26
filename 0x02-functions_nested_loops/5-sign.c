#include "holberton.h"

/**
 * print_sign - print signs
 * @n: print_signs
 *
 * Return: 0 sucess
 *
 */

int print_sign(int n)

{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
