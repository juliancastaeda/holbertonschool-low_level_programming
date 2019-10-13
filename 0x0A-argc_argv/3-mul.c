#include <stdio.h>
#include <stdlib.h>

/**
 * main - program prints mult the number
 * @argc: arguments
 * @argv: arguments
 *
 * Return: always 0
 **/

int main(int argc, char *argv[])
{
	int n = 0;
	char m[] = "Error";

	if (argc != 3)
	{
	printf("%s\n ", m);
	return (1);
	}
	n = atoi(argv[1]) * atoi(argv[2]);
	printf("%i\n", n);
        return (0);
}
