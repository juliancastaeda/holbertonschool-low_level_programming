#include "lists.h"

/**
 * add_nodeint_end - create new node
 * @head: singly listen
 * @n: variable
 *
 * Return:  new node
 */
 void free_listint(listint_t *head)
 {
     listint_t *a;

     while ( head != NULL)
     {
     a = head;
     head = head->next;
     free(a);
     }
 }
 