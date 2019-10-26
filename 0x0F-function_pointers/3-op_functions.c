#include "function_pointers.h"
#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * op_add - op_functions_sum
 * @a: Variable a
 * @b: variable b
 * Return: operating result
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - op_functions_Sub
 * @a: Variable a
 * @b: Variable b
 * Return: operating result
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - op_functions_Mul
 * @a: Variable a
 * @b: Variable b
 * Return: operating result
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - op_functions_Div
 * @a: Variable a
 * @b: Variable b
 * Return: operating result
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - op_functions_Mod
 * @a: Variable a
 * @b: Variable b
 * Return: operating result
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
