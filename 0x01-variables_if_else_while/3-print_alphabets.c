#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - star data
 *
 * Return: Alaways 0 (Success)
 */
int main(void)
{
	char n;
	char j;

	for (n = 'a'; n <= 'z'; n++)
	putchar(n);
	for (j = 'A'; j <= 'Z'; j++)
	putchar(j);
	putchar('\n');
	return (0);
}
