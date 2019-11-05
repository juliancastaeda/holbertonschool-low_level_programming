#include "lists.h"

/**
 * add_nodeint - create new node
 * @head: singly listen
 * @n: variable
 *
 * Return: node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *a;
a = malloc(sizeof(listint_t));
if (a == NULL)
{
return ('\0');
}
else
{
a->next = *head;
a->n = n;
*head = a;
}
return (a);
}
