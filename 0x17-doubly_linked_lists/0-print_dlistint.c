#include "lists.h"

/**
 * print_dlistint - print d_listint
 * @h: double listen
 *
 * Return: number
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t a = 0;

while (h)
{
if (h[0].n == '\n')
printf("[0] (nil)\n");
else
printf("%d\n", h[0].n);
h = h->next;
a++;
}
return (a);
}
