#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * main - op_functions_main
 * @argc: parametro
 * @argv: Vector
 * Return: (0)
*/
int main(int argc, char **argv)
{
	int  num1 = 0, num2 = 0, resul = 0;
	int (*funcion)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	funcion = get_op_func(argv[2]);
	if (funcion == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	resul = funcion(num1, num2);

	printf("%i\n", resul);
	return (0);
}
