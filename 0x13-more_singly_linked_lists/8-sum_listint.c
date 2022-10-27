#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sums all data of a listint_t list
 * @head: address of head node
 *
 * Return: sum of data else 0 if empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node;

	node = head;
	if (node == NULL)
		return (0);

	for (; node != NULL; node = node->next)
	{
		sum += node->n;
	}

	return (sum);
}
