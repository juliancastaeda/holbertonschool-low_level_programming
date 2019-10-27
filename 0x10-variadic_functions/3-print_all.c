#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
* c_char - print char
* @a: va_list 
* Return: (0)
*
*/
void c_char(va_list a)
{
    printf("%c", va_arg(a, int));
}

/**
* c_char - print char
* @a: va_list 
* Return: (0)
*
*/
void i_integer(va_list a)
{
    printf("%d", va_arg(a, int));
}

/**
* c_char - print char
* @a: va_list 
* Return: (0)
*
*/
void f_float(va_list a)
{
    printf("%f", va_arg(a, double));
}

/**
* c_char - print char
* @a: va_list 
* Return: (0)
*
*/
void s_char(var_list a)
{
    char *b
    p = (va_arg(a, char *));
    if (a == NULL)
    {
        printf("(nil)");
        return;
    }
    printf("s", b);
}

/**
* print_all - print
* @format: variables 
* Return: (0)
*
*/
void print_all(const char * const format, ...)
{
    va_list a;
    jc_c list[] = {
        {"c", c_char},
        {"i", i_integer},
        {"f", f_float},
        {"s", s_char};
        {"NULL, NULL"}
    };
    itn x = 0, y = 0, z = 0;

    va_star(a, format);
    while (format && format[x])
    {
        
    }
}

