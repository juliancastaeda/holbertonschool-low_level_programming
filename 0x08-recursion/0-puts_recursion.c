#include "holberton.h"
/**
* main - check the code for Holberton School students.
* @s : recursion
* Return: Always 0.
*/

void _puts_recursion(char *s)
{
	char a = *s;

	if (a == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(a);
		_puts_recursion(++s);
	}
}
