#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* list_len - prints len
*
* @h: pointer list.
*
* Return: returns number.
*/
size_t list_len(const list_t *h)
{
unsigned long a = 0;

if (h != NULL)
{
while (h != NULL)
{
h = h->next;
a++;
}
}
return (a);
}
