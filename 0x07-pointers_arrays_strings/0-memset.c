#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string.
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
	return(s);
}
