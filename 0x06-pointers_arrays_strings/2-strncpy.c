#include "holberton.h"
/**
 * _strncpy - return string
 * @dest: printer
 * @src: printer
 * @n: printer
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a] != 0)
		{
			a++;
		}
	while (src[b] != 0)
		{
			b++;
		}
	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	for (; a < n; a++)

		dest[a] = '\0';

	return (dest);
}
