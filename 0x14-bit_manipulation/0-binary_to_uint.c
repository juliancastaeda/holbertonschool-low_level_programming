#include "holberton.h"

/**
 * binary_to_uint - add node index
 * @b: pointer a char
 *
 * Return: int
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int c = 0;
int n = 0, m = 0, a = 1;

while (b == NULL)
{
return (0);
}
while (b[n] != '\0')
{
n++;
}
for (m = n - 1; m >= 0; m--)
{
if (b[m] != '0' && b[m] != '1')
{
return (0);
}
if (b[m] == '1')
{
c = c + a;
}
a = a * 2;
}
return (c);
}
