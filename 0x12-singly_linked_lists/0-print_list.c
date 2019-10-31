#include "lists.h"
#include <stdio.h>
/**
 * print_list - print list
 * @h: singly listen
 *
 * Return: number
 */

size_t print_list(const list_t *h)
{
int a = 0;

while (h)
{
if (h[0].str == NULL)
printf("[0] (nil)\n");
else
printf("[%i] %s\n", h[0].len, h[0].str);
h = h->next;
a++;
}
return (a);
}
