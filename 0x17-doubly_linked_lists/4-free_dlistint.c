#include "lists.h"
/**
  * free_dlistint - free a double linked lists
  * @head: pointer
  *
  * return : (0)
  **/
void free_dlistint(dlistint_t *head)
{
dlistint_t *clear = head;

while (clear)
{
free(&head->n);
head = clear->next;
clear = clear->next;
}
free(head);
}
