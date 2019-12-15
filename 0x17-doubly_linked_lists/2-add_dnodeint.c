#include "lists.h"

/**
 * add_dnodeint: adition new node 
 * @n: new node 
 * @head: init double linked lists 
 * Return: new element or NULL 
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
if (head != NULL)
{
new->n = n;
new->next = *head;
new->prev = NULL;
*head = new;
}
return (new);
}
