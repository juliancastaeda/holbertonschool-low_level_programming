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

for (count = 0; h != NULL; count++)
{
h = h->next;
}
return (count);
}

