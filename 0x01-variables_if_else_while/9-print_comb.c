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

	for (n = 48; n <= 57; n++)
	{
	putchar(n);
	if (n < 57)
	{
	putchar(44);
	putchar(' ');
	}
	else
	{
	putchar('\n');
	}
	}
	return (0);
}
