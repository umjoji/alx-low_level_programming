#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h - node/struct
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h) /* is not null */
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}

