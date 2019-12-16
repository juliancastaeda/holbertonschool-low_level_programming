#include "lists.h"
/**
 * get_dnodeint_at_index - return new node
 * @head: pointer 
 * @index: input
 *
 * Return: Always 0
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *new;
unsigned int i = 0;

new = head;
if (head == NULL)
{
return (NULL);
}
for (; i <= index; i++)
{
if (i == index)
{
return (new);
}
if (new->next == NULL)
{
return (NULL);
}
new = new->next;
}
return (NULL);
}
