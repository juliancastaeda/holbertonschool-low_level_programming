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
	int n;

	char c;

	for (n = '0'; n <= '9'; n++)

	putchar(n);

	for (c = 'a'; c <= 'f'; c++)

	putchar(c);

	putchar('\n');

	return (0);
}
