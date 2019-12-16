#include "lists.h"
/**
  * insert_dnodeint_at_index - inserts new node
  * @h: pointer
  * @idx: input
  * @n: input
  *
  * Return: newnode
**/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *temp, *new;
unsigned int i = 0;

temp = *h;
new = malloc(sizeof(dlistint_t));
if (new == NULL || h == NULL)
{
return (NULL);
}
if (idx == 0)
{
temp = add_dnodeint(h, n);
return (temp);
}
while (temp)
{
temp = temp->next;
i++;
}
if (idx == i)
{
temp = add_dnodeint_end(h, n);
return (temp);
}
i = 0;
temp = *h;
while (i < idx && temp)
{
temp = temp->next;
i++;
}
new->next = temp;
new->prev = temp->prev;
temp->prev = new;
temp = new->prev;
temp->next = new;
new->n = n;
return (new);
}
