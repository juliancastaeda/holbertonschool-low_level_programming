#include "holberton.h"

/**
 * print_last_digit - print last digit
 * @n: print las digit
 *
 * Return: 0 sucess
 *
 */

int print_last_digit(int n)

{
	int m;

	m = n % 10;

	if (m < 0)
	m = m * -1;
	_putchar('0' + m);
	return (m);
}
