#include "lists.h"
#include <stdio.h>
/**
 * free_listint - free lists
 * @head: singly listen
 *
 * Return:  new node
 */
void free_listint(listint_t *head)
{
listint_t *a;

while (head != NULL)
{
a = head;
head = head->next;
free(a);
}
}
