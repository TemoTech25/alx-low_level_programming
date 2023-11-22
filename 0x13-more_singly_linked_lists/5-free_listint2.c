#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - listint_t list and sets the head to NULL.
 * @head: Double pointer to the head of the list.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}

