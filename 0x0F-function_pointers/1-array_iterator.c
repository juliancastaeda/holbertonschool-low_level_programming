#include "function_pointers.h"
#include <stdio.h>
/**
* array_iterator - iterator
* @array: variable pointer
* @size: variable size
* @action: pointer function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array != NULL && action != NULL)
{
unsigned int a;

for (a = 0; a < size; a++)
{
action(array[a]);
}
}
}
