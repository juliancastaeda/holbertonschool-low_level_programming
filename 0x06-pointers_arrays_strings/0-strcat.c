#include "holberton.h"
/**
 * _strcat - return string
 * @dest: printer
 * @src : printer
 * Return: char
 */

char *_strcat(char *dest, char *src)
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
	for (c = 0; c < b; c++)
	{
		dest[a] = src[c];
		a++;
	}
	dest[a] = '\0';

	return (dest);
}
