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

for (a = 0; h != NULL; a++)
{
printf("%d\n", h->n);
h = h->next;
}
return (a);
}
