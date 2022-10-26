#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a listint list
 * @h: head node
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	for (; h != NULL; h = h->next)
	{
		count += 1;
	}

	return (count);
}
