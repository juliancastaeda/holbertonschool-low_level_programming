#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - print name
* @name: variable
* @f: variable
*
* Return: pointer
*/
void print_name(char *name, void (*f)(char *))

{
if (f != NULL && name != NULL)
{
(f)(name);
}
}
