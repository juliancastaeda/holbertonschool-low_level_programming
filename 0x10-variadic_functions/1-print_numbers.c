#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
* print_numbers - print numbers
* @n: varible int
* @separator: pointer char
* Return: value
*
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int a = 0;
unsigned int num;
va_start(list, n);

if (separator != NULL)
{
for (a = 0; a < n; a++)
{
if (a == 0)
{
num = va_arg(list, int);
printf("%d", num);
}
if (a != 0)
{
num = va_arg(list, int);
printf("%s%d", separator, num);
}
}
va_end(list);
{
printf("\n");
}
}
else
{
for (a = 0; a < n; a++)
{
num = va_arg(list, int);
printf("%d", num);
}
printf("\n");
}
}
