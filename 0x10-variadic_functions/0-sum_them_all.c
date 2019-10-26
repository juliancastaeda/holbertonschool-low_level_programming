#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
* sum_them_all - suma numbers
* @n: varible int
*
* Return: value
*
*/
int sum_them_all(const unsigned int n, ...)
{
va_list list;
unsigned int c;
int sum = 0;


va_start(list, n);
if (n == 0)
{
return (0);
}
for (c = 0; c < n; c++)
{
sum += va_arg(list, unsigned int);
}
va_end(list);
return (sum);
}
