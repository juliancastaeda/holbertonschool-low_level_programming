#include "lists.h"

/**
 * add_nodeint_end - create new node
 * @head: singly listen
 * @n: variable
 *
 * Return:  new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *a, *b = *head;

a = malloc(sizeof(listint_t));
if (a == NULL)
{
return (NULL);
}
a->n = n;
a->next = NULL;
if (*head == NULL)
{
*head = a;
return (a);
}
while (b->next != NULL)
b = b->next;
b->next = a;
return (a);
}
