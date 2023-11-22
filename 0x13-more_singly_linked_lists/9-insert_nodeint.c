#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given in a listint_t
 * @head: Double pointer to the head of the list.
 * @idx: The index of the list where the new node should be added.
 * @n: The data of the new node.
 *
 * Return: The address of the new node if it was successfully added
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current_node;
	unsigned int i;

	if (*head == NULL || idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current_node = *head;
	for (i = 0; i < idx - 1 && current_node != NULL; i++)
	current_node = current_node->next;

	if (current_node == NULL)
	return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);
	new_node->n = n;
	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}
