#include "holberton.h"
/**
 * checkprime - namber prime
 * @n: variable
 * @i: variable
 *
 * Return: int
 */
int checkprime(int n, int i)
{
	if (n == i)
		return (1);
	if (i % n == 0)
		return (0);
	return (checkprime(n + 1, i));
}

/**
 * is_prime_number - Sqrt
 * @n: variable
 * Return: int
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n == 1 || n < 0)
		return (0);
	if (n <= 3)
		return (1);
	return (checkprime(i, n));
}
