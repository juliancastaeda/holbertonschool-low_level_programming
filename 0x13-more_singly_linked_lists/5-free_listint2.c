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
listint_t *b;
if (head != NULL)
{
while (*head != NULL)
{
b = *head;
*head = b->next;
free(b);
}
}
else
{
return;
}
free(*head);
head = NULL;
}
