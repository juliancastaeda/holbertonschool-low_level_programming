#include <unistd.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * create_array- create array and allocate memory
 * @size:value of the memory use
 * @c : variable
 * Return: (0).
 *
 */
char *create_array(unsigned int size, char c)
{
	char *n;
	unsigned int m = 0;

	if (size != 0)
	{
	n = malloc(size * sizeof(c));
	}
	else
	{
	return (NULL);
	}
	if (n == 0)
	{
	return (NULL);
	}
	while (m < size)
	{
	n[m] = c;
	m++;
	}
	return (n);
}
