#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: struct pointer
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int nodes = 0;

	/* if string in struct is null */
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		h = h->next;	/* move to next struct */
		nodes += 1;
	}

	/* iterate and chack if struct is NULL */
	for (; h != NULL; h = h->next)
	{
		printf("[%u] (%s)\n", h->len, h->str);
		nodes += 1;
	}

	return (nodes);
}
