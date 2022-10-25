#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head node
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *ptr = head;
	list_t *next = NULL;

	for (; ptr != NULL; ptr = next)
	{
		next = ptr->next;
		free(ptr->str);
		free(ptr);
	}
}
