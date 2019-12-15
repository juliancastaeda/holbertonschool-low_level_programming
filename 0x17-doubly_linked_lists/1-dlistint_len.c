#include "lists.h"

/**
 * dlistint_len - print list
 * @h: singly listen
 *
 * Return: number
 */
size_t dlistint_len(const dlistint_t *h)
{
int a = 0;

while (h)
{
if (h[0].n == '\n')
printf("[0] (nil)\n");
else
h = h->next;
a++;
}
return (a);
}


