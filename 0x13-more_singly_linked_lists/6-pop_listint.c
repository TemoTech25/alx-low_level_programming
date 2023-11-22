#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list and returns the head node’s data.
 * @head: Double pointer to the head of the list.
 *
 * Return: The head node’s data if the list is not empty, otherwise 0.
 */
int pop_listint(listint_t **head)
{
 listint_t *tmp;
 int n;

 if (*head == NULL)
 return 0;

 tmp = *head;
 *head = (*head)->next;
 n = tmp->n;
 free(tmp);

 return n;
}
