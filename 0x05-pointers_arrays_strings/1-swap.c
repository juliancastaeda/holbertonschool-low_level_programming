#include "holberton.h"

/**
 * swap_int - change numerical values between a and b.
 * @a: number exchange with b.
 * @b: exchange of numbers with a.
 * Return: Alaways 0 (Success)
 */

void swap_int(int *a, int *b)

{
	int c;

	  c = *a;
	 *a = *b;
	 *b = c;
}
