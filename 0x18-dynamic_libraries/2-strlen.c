#include "holberton.h"
/**
 * _strlen - return string
 * @s : printer
 *
 * Return: (a)
 */

int _strlen(char *s)
{

	int a = 0;

	while (s[a] != 0)
	{
		a++;
	}
	return (a);
}
