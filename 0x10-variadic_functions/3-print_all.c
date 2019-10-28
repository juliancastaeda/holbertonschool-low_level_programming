#include "variadic_functions.h"
#include <stdio.h>
/**
* c_char - print char
* @a: va_list
* @separator: separator.
* Return: (0)
*
*/
void c_char(char *separator, va_list a)
{
printf("%s%c", separator, va_arg(a, int));
}

/**
* i_integer - print char
* @a: va_list
* @separator: separator.
* Return: (0)
*
*/
void i_integer(char *separator, va_list a)
{
printf("%s%i", separator, va_arg(a, int));
}

/**
* f_float - print char
* @a: va_list
* @separator: separator.
* Return: (0)
*
*/
void f_float(char *separator, va_list a)
{
printf("%s%f", separator, va_arg(a, double));
}

/**
* s_char - print char
* @a: va_list
* @separator: separator.
* Return: (0)
*
*/
void s_char(char *separator, va_list a)
{
char *b;
b = (va_arg(a, char *));
if (b == NULL)
{
printf("(nil)");
return;
}
printf("%s%s", separator, b);
}

/**
* print_all - print
* @format: variables
* Return: (0)
*
*/
void print_all(const char * const format, ...)
{
form_function list[] = {
{"c", c_char},
{"i", i_integer},
{"f", f_float},
{"s", s_char},
};

va_list a;

va_start(a, format);
int x = 0, y = 0;

char *separator = "";

while (format != NULL && format[x])
{
y = 0;
while (y < 4)
{
if (format[x] == *(list[y]).jc)
{
list[y].f(separator, a);
separator = ", ";
}
y++;
}
x++;
}
printf("\n");
va_end(a);
}
