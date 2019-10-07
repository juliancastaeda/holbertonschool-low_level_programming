#include "holberton.h"
/**
 * _strcpy - copies the string. 
 *@dest: first value to check
 *@src: Second value to check
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{

	char *i = src;
	int j = 0;

	while (*i != '\0')
	{
		dest[j] = src[j];
		i++;
		j++;
	}
	dest[j] = src[j];
	return (dest);
}
