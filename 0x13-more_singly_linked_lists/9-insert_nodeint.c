#include "lists.h"
#include "7-get_nodeint.c"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts new node at index
 * @head: head node address
 * @idx: index where new node will be inserted
 * @n: node integer
 *
 * Return: node address or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *node1, *new_node_ptr;
	
	new_node_ptr = malloc(sizeof(listint_t));
	if (new_node_ptr == NULL)
		return (NULL);
	
	node = get_nodeint_at_index(*head, idx - 1);
	node1 = get_nodeint_at_index(*head, idx);

	new_node_ptr->n = n;
	node->next = new_node_ptr;
	new_node_ptr->next = node1;

	return (new_node_ptr);
}	
