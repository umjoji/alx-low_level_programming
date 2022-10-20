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
	const list_t ptr = h;
	size_t nodes = 0;

	while (ptr) /* is not NULL */
	{
		/* if string in struct is null */
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] (%s)\n", ptr->len, ptr->str);
		}

		ptr = ptr->next;	/* move to onext node */
		nodes++;
	}

	return (nodes);
}
