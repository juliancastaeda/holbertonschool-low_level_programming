#include "holberton.h"
/**
 * _strlen_recursion - print recursion
 * @s : recursion
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n++;
			return (n + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
