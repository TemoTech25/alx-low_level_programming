#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to add to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
   if (*head == NULL)
   {
       *head = malloc(sizeof(list_t));
       if (*head == NULL)
           return NULL;

       (*head)->str = strdup(str);
       if ((*head)->str == NULL)
       {
           free(*head);
           return NULL;
       }
       (*head)->len = strlen(str);
       (*head)->next = NULL;

       return *head;
   }

   list_t *last_node = *head;
   while (last_node->next != NULL)
       last_node = last_node->next;

   list_t *new_node = malloc(sizeof(list_t));
   if (new_node == NULL)
       return NULL;

   new_node->str = strdup(str);
   if (new_node->str == NULL)
   {
       free(new_node);
       return NULL;
   }
   new_node->len = strlen(str);

   new_node->next = NULL;
   last_node->next = new_node;

   return new_node;
}

