#include "lists.h"
#include <stdio.h>
/**
 * listint_len - print elements
 * @h: singly listen
 *
 * Return: number element
 */
size_t listint_len(const listint_t *h)
{
int a = 0;

while (h)
{
if (h[0].n == '\0')
printf("0 (nil)\n");
else
h = h->next;
a++;
}
return (a);
}
