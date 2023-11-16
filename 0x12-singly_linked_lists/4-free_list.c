#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 */
void free_list(list_t *head)
{
   if (head == NULL)
       return;

   list_t *temp;
   while (head != NULL)
   {
       temp = head;
       head = head->next;
       free(temp->str);
       free(temp);
   }
}

