#include <unistd.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat- concat  s1 s2.
 * @s1: array
 * @s2: array
 * @n: variable
 * Return: (0).
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a, *b;
unsigned int i, j;

b = "";
if (s1 == NULL)
s1 = b;
if (s2 == NULL)
s2 = b;
for (i = 0; s1[i] != '\0'; i++)
;
a = malloc(sizeof(char) * (i + n + 1));
if (a == NULL)
return (NULL);
for (i = 0; s1[i] != '\0'; i++)
a[i] = s1[i];
for (j = 0; s2[j] != '\0' && j < n; j++, i++)
a[i] = s2[j];
a[i] = '\0';
return (a);
}
