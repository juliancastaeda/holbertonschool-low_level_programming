#include "holberton.h"

/**
 * _abs - print the absolute value
 * @
 *
 * Return: Alaways 0 (Success)
 */

int _abs(int n)
{
	int m;

	if (n >= 0)
	m = n;
	else
	m = (n * -1);

	return (m);
}
