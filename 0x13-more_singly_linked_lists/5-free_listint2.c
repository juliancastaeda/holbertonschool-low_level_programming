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
if (head == NULL)
{
return;
}
while (b != NULL)
{
b = (*head)->next;
free(*head);
*head = b;
}
free(*head);
free(b);
head = NULL;
}
