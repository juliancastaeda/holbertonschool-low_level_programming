#include "holberton.h"

/**
 * print_sign - print signs
 * @n: print las digit
 *
 * Return: 0 sucess
 *
 */

int print_last_digit(int n)

{
	int m;

	if (n >= 0)
	m = (n % 10);

	return (m);
}
