#include "lists.h"
#include <stdio.h>
/**
 * insert_nodeint_at_index - add node index
 * @head: pointer listen
 * @idx: int insigned
 * @n: int variable
 * Return: int
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *a, *b = *head;
int c;

a = malloc(sizeof(listint_t));
if (a == NULL)
{
return (NULL);
}
a->n = n;
if (idx == 1)
{
a->next = *head;
*head = a;
}
else
{
b = *head;
for (c = 1; b != NULL; c++)
{
if (c == idx - 1)
{
a->next = b->next;
b->next = a;
return;
}
a = a->next;
}
}
}
