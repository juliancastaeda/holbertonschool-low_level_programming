#include <unistd.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked- array NULL
 * @b:variable
 *
 * Return: (0).
 *
 */
void *malloc_checked(unsigned int b)
{
	char *a;

	a = (malloc(b));

	if (a == NULL)
	{
	exit(98);
	}
	return (a);
}
