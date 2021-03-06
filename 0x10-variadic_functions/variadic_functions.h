#ifndef PRINTF
#define PRINTF
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * struct jc - struct jc.
 *
 * @jc: operator
 * @f: function
 */

typedef struct jc
{
char *jc;
void (*f)(char *separator, va_list a);
} form_function;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
