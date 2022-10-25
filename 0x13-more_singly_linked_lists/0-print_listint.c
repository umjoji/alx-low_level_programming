#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head node
 *
 * Return: void
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		count += 1;
	}

	return (count);
}

