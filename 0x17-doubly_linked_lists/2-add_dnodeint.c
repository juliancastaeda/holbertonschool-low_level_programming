#include "lists.h"
/**
 * add_dnodeint - adition new node
 * @head: new node
 * @n: init double linked lists
 *
 * Return: new element or NULL
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;

new = malloc(sizeof(new));
if (new == NULL)
return (NULL);
if (*head == NULL)
{
*head = new;
(*head)->prev = NULL;
(*head)->next = NULL;
(*head)->n = n;
return (*head);
}
else
{
new->next = *head;
(*head)->prev = new;
new->prev = NULL;
new->n = n;
*head = new;
}
return (*head);
}
