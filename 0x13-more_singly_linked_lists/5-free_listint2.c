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
	listint_t *node;
	listint_t *temp;

	if (head != NULL)
	{
		node = *head;
		for (; (temp = node) != NULL;)
		{
			node = node->next;
			free(temp);
		}

		*head = NULL;
	}
}
