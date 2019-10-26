#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
* print_strings - print numbers
* @n: varible int
* @separator: pointer char
* Return: value
*
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int a = 0;
char *string;

va_start(list, n);

if (n != 0)
{
for (a = 0; a < n; a++)
{
string = va_arg(list, char *);
if (separator != NULL && a < n - 1)
{
printf("%s%s", string, separator);
}
else
{
printf("%s", string);
}
}
va_end(list);
printf("\n");
}
else
{
printf("\n");
}
}
