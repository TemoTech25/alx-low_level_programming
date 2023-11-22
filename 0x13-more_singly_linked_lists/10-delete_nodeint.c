#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index
 * @head: Double pointer to the head of the list.
 * @index: The index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, otherwise -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node;
	listint_t *previous_node;
	unsigned int i;

	if (*head == NULL || index == 0)
	{
		if (*head != NULL)
		{
			previous_node = *head;
			*head = (*head)->next;
			free(previous_node);
			return (1);
		}
		return (-1);
	}

	current_node = *head;
	for (i = 0; i < index - 1 && current_node != NULL; i++)
	current_node = current_node->next;

	if (current_node == NULL || current_node->next == NULL)
	return (-1);

	previous_node = current_node->next;
	current_node->next = previous_node->next;
	free(previous_node);

	return (1);
}

