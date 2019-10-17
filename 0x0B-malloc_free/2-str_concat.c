#include <unistd.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat- concat in the array
 * @s1: array one
 * @s2: array tho
 * Return: (0).
 *
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int t1 = 0, t2 = 0, i = 0;
	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	while (s1[t1] != '\0')
	t1++;
	while (s2[t2] != '\0')
	t2++;
	t2++;
	p = malloc((t1 + t2) *(sizeof(char)));
	if (p == 0)
	return (NULL);
	while (i < t1)
	{
	p[i] = s1[i];
	i++;
	}
	i = 0;
	while (i < t2)
	{
	p[i + t1] = s2[i];
	i++;
	}
	p[t1 + t2] = '\0';
	return (p);
}
