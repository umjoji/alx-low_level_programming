#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: head node
 *
 * Return: returns the nodes data and 0 if node is
 * empty
 */

int pop_listint(listint_t **head)
{
	int node_int;	/* to hold the node contents */
	listint_t *temp;	/* to hold the next node */
	listint_t *current_node;	/* to hold the head node */

	if (*head == NULL)
		return (0);

	/* do the old switcheroo */
	current_node = *head;
	node_int = current_node->n;
	temp = current_node->next;

	free(current_node);
	*head = temp;	/* replace head node */

	return (node_int);
}

