#include <stdio.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the numbers from 00 to 99
 *
 * Return: cero
 */
int main(void)
{
	int i = 49;
	int j;
	int k = 49;
	int a = 44;
	int b = 32;

	for (j = 48; j <= 56; j++)
	{
		for (; i <= 57; i++)
		{
			putchar(j);
			putchar(i);
			if ((j == 56) && (i == 57))
				break;
			putchar(a);
			putchar(b);
		}
		k++;
		i = k;
	}
	putchar('\n');
	return (0);
}
