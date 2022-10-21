#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: head of the node
 * @str: string to duplicated
 *
 * Return: new element address if success
 * NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	int str_len;

	if (new_node == NULL)
		return (NULL);

	if (str == NULL)
		return (NULL);

	for (str_len = 0; str[str_len]; str_len++)
		;

	new_node->str = strdup(str);
	new_node->len = str_len;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
