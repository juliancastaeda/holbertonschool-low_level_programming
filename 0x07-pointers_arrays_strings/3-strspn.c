#include "holberton.h"

/**
 * _strspn - print substring
 * @s: String
 * @accept: Char accept
 *
 * Return: c
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, c = 0;

	for (a = 0; s[a] != ' '; a++)
	{
	for (b = 0; accept[b] != '\0'; b++)
	{
	if (s[a] == accept[b])
	c++;
	}
	}
	return(c);
}
