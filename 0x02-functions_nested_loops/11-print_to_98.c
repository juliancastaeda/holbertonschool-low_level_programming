#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - prints all natural numbers.
 * @n: number to check
 *
 */
void print_to_98(int n)
{

	if (n == 98)
		printf("%d\n", n);
	else if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("98\n");
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("98\n");
	}
}
