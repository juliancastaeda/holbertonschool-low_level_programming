#include "lists.h"
/**
 * add_dnodeint_end-adition new node in the end
 * @head: new node
 * @n: init double linked lists
 *
 * Return: new element or NULL
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
  dlistint_t *new, *a;

new = malloc(sizeof(new));
a = *head;
if (new == NULL)
return (NULL);
if (*head == NULL)
{
new->next = NULL;
new->prev = NULL;
new->n = n;
*head = new;
return (new);
}
while (a->next != NULL)
{
a = a->next;
}
new->prev = a;
new->n = n;
a->next = new;
new->next = NULL;
return (new);
}
