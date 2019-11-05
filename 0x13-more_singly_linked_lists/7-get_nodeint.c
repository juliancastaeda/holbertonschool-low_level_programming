#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - free lists
 * @head: pointer listen
 * @index: int
 *
 * Return: int
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int b = 0;
listint_t *a = head;

if (a == NULL)
{
return (NULL);
}
while (b != index)
{
a = a->next;
b++;
}
return (a);
}
