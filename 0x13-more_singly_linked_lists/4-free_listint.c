#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head node
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *node = head;
	listint_t *next = NULL;

	for (; node != NULL; node = next)
	{
		next = node->next;
		free(node);
	}
}
