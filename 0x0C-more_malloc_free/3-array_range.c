#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - concat  s1 s2.
 * @min: array
 * @max: bytes array
 *
 * Return: (0).
 *
 */
int *array_range(int min, int max)
{
int *a;
int b;

if (min > max)
{
return (NULL);
}
a = malloc(sizeof(int) * (max - min + 1));
if (a == NULL)
{
return (NULL);
}
for (b = 0; b < (max - min + 1); b++)
{
a[b] = (min + b);
}
return (a);
}
