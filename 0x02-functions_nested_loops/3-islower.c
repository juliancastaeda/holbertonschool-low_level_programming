#include "holberton.h"
/**
 * _islower - print Alphabet.
 *
 * Return: Alaways 0 (Success)
 */
int _islower(int c)
{
	if (c >=97 || c >=122)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
