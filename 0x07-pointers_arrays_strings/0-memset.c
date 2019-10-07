#include "holberton.h"
/**
 * _memset - print pointer..
 * @s: pointer
 * @b: memory
 * @n: memory
 *
 * Return: Char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
