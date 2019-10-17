#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - concat  s1 s2.
 * @nmemb: array
 * @size: bytes array
 * 
 * Return: (0).
 *
 */
 void *_calloc(unsigned int nmemb, unsigned int size)
{
char *c;
unsigned int b;

if (size == 0 || nmemb == 0)
{
return (NULL);
}
c = malloc(nmemb * size);
if (c == NULL)
{
return (NULL);
}
for (b = 0; b < (nmemb * size); b++)
{
c[b] = 0;
}
return (c);
}