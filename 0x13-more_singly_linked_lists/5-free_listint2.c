#include "lists.h"
#include <stdio.h>
/**
 * free_listint2 - free lists
 * @head: singly listen
 *
 * Return:  free lists
 */
void free_listint2(listint_t **head)
{
listint_t *b = *head;

while (*head != NULL)
{
b = (*head)->next;
if(b == NULL)
free (b);
free(*head);
*head = b;
}
*head = NULL;
}
