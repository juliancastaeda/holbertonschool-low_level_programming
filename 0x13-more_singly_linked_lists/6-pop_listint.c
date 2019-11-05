#include "lists.h"
#include <stdio.h>
/**
 * pop_listint - free lists
 * @head: pointer listen
 *
 * Return: int
 */
int pop_listint(listint_t **head)
{
listint_t *a;
int b = 0;

if (*head == NULL)
{
return (0);
}
a = *head;
*head = (*head)->next;
b = a->n;
if (b != '\0')
{
free(a);
}
return (b);
}
