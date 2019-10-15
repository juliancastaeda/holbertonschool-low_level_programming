#include <unistd.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup- copy in the array
 * @str: copy
 *
 * Return: (0).
 *
 */
char *_strdup(char *str)
{
	char *n;
	unsigned int m = 0, c = 0;

	if (str == NULL)
	return (NULL);
	while (str[m] != '\0')
	{
	m++;
	}
	m++;
	n = malloc(m * (sizeof(char)));
	if (n == NULL)
	{
	return (NULL);
	}
	while (c < m)
	{
	n[c] = str[c];
	c++;
	}
	return (n);
}
