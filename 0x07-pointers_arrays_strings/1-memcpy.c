#include "holberton.h"
/**
 * _strcpy - copies the string.
 *@dest: first value to check.
 *@src: Second value to check.
 *@n: memory size.
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int a;

	for (a = 0; a <= n; a++)
	{
		dest[a] = src[n];
	}
	return (dest);
}
