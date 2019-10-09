#include "holberton.h"
/**
 * _strstr - Str
 * @haystack: pointer
 * @needle:pointer
 *
 * Return: char
 *
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int n, m;

	if (*needle == 0)
		return (haystack);
	for (n = 0; haystack[n] != '\0'; n++)
	{
		for (m = 0; needle[m] != '\0'; m++)
		{
			if (haystack[n + m] != needle[m])
			{
				break;
			}
		}
		if (needle[m] == '\0')
			return (haystack + n);
	}
	return (0);
}
