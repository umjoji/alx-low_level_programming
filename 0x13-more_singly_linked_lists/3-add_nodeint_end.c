#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a listint_t list
 * @head: head node
 * @n: node int
 *
 * Return: node address or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last_node;

	/* allocate space for node */
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
	}

	else
	{
		last_node = *head;
		for  (; last_node->next != NULL;)
			last_node = last_node->next;

		last_node->next = new_node;
	}

	return (*head);
}
