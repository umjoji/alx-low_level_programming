#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: struct pointer
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h) /* is not NULL */
	{
		/* if string in struct is null */
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] (%s)\n", h->len, h->str);
		}

		h = h->next;	/* move to next node */
		nodes++;
	}

	return (nodes);
}
