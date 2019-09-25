#include "holberton.h"

/**
 * _islower - print 1 or 0.
 * @c:evaluate if it is capital
 *
 * Return: Alaways 0 (Success)
 */

int _islower(int c)
{
	if (c >= 97 || c >= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
