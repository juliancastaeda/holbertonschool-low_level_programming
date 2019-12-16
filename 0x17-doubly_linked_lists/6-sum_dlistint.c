#include "lists.h"
/**
 * sum_dlistint -sum the node
 * @head: pointer
 *
 * Return: Always the sum of data
 **/
int sum_dlistint(dlistint_t *head)
{
unsigned int new = 0;
dlistint_t *a;

a = head;
while (a != NULL)
{
new = a->n + new;
a = a->next;
}
return (new);
}
