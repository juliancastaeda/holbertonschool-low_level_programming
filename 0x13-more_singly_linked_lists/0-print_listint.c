#include "lists.h"
#include <stdio.h>
/**
 * print_listint - print listint
 * @h: singly listen
 *
 * Return: number
 */

size_t print_listint(const listint_t *h)
{
int a = 0;

while (h)
{
if (h[0].n == '\0')
printf("0 (nil)\n");
else
printf("%i\n", h[0].n);
h = h->next;
a++;
}
return (a);
}
