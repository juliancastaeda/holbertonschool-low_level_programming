#include "holberton.h"

/**
 * get_endianness - endianness
 *
 *
 * Return: (0)
 */
int get_endianness(void)
{
int16_t a = 1;
int8_t *p = (int8_t *) &a;

if (p[0] == 1)
{
return (1);
}
else
{
return (0);
}
}
