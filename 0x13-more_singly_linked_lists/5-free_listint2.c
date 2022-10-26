#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head node
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *node = *head;
	listint_t *next = NULL;

	if (node == NULL)
		free(node);

	for (; node != NULL; node = next)
	{
		next = node->next;
		free(node);
	}

	*head = NULL;
}
