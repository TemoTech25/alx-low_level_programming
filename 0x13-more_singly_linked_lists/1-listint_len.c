#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Returns the number of elements listint_t list
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}

	return (counter);
}
