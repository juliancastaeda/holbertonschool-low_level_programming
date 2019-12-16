#include "holberton.h"

/**
 * _abs - print the absolute value
 * @n : print absolute value.
 *
 * Return: m, 0, -m
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
