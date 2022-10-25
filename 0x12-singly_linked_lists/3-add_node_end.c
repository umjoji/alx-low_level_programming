#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: head of the node
 * @str: string to duplicated
 *
 * Return: new element address if success
 * NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node;
	int str_len;	/* variable to hold string length */

	/* allocate space for node */
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	if (str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (str_len = 0; str[str_len]; str_len++)
		;

	new_node->str = strdup(str);
	new_node->len = str_len;

	if (*head == NULL)
		*head = new_node; /* new node becomes head node */

	else
	{
		/* move from first to last node */
		last_node = *head;
		for (; last_node->next != NULL;)
			last_node = last_node->next;

		/* put new node at the end */
		last_node->next = new_node;
	}

	return (*head);
}
