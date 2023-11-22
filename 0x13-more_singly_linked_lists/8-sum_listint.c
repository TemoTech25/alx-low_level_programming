#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data of a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The sum of all the data if the list is not empty, otherwise 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
 	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
