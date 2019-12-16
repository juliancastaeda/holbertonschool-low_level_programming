#include "holberton.h"
/**
 * _isupper - print  alphabet .
 * @c:evaluate if it is capital letter
 *
 * Return: Alaways (int)
 */

int _isupper(int c)
{
	if (c >= 65 &&  c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
