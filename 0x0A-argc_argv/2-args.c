#include <stdio.h>

/**
 * main - program prints the number
 * @argc: arguments
 * @argv: array arguments
 *
 * Return: always 0
 **/

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
	printf("%s\n", argv[n]);
	}
	return (0);
}
