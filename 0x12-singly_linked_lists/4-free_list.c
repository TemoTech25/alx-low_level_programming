#include <stdlib.h>
#include "lists.h"

/**
 * free_list - linked list from frees
 * @head: list_t list freed
 */
void free_list(list_t *head)
{
 list_t *temp;

 while (head)
 {
 temp = head->next;
 free(head->str);
 free(head);
 head = temp;
 }
}

