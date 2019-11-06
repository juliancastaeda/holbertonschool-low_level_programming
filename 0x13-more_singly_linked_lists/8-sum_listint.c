#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - sum node
 * @head: pointer listen
 *
 * Return: int
 */
int sum_listint(listint_t *head)
{
int a = 0;
listint_t *b;

if (head == NULL)
{
return (0);
}
while (head != NULL)
{
b = head;
head = (head)->next;
a += b->n;
}
return (a);
}
