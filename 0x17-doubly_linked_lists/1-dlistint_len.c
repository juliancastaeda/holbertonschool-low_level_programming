#include "lists.h"

/**
 * dlistint_len - print list
 * @h: singly listen
 *
 * Return: number
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t a = 0;

for (a = 0; h != NULL; a++)
{
h = h->next;
}
return (a);
}

