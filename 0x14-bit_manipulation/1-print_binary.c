#include "holberton.h"

/**
 * print_binary - convert decimal to binary
 * @n: variable
 *
 * Return: (0)
 */
void print_binary(unsigned long int n)
{
if (n > 1)
{
print_binary(n >> 1);
}
_putchar((n & 1) + '0');
}
