#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns nth node of a
 * listint_t list
 * @head: head address
 * @index: node index
 *
 * Return: nth node or
 * 0 if non existent
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i = 0;

	node = head;

	for (; i < index; i++)
	{
		node = node->next;
	}

	if (node == NULL)
		return (0);

	return (node);
}
