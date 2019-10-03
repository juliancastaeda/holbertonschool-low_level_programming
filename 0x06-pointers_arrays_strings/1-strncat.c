#include "holberton.h"
/**
 * _strncat - return string
 * @dest: printer
 * @src : printer
 * @n: int
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0, c;

	while (dest[a] != 0)
	{
		a++;
	}
	while (src[b] != 0)
	{
		b++;
	}
	for (c = 0; c < n && src[c] != '\0'; c++)
	{
		dest[a] = src[c];
		a++;
	}
	dest[a] = '\0';

	return (dest);
}
