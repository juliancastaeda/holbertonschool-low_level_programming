#include "holberton.h"
/**
 * _strchr - locate character.
 *@s: pointer character.
 *@c: variable
 *
 * Return: dest
 */
char *_strchr(char *s, char c)
{
	int n = 0;

	while (s[n] != '0')
	{
	if (s[n] == c)
	{
	s = s + n;
	return (s);
	}
	n++;
	}
	return('\0');
}
