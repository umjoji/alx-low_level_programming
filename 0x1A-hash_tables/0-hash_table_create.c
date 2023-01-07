#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * *hash_table_create - cretaes a hash table
 * @size: size of the array
 *
 * Return: a pointer to the new hash table
 * else NULL
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	/* declare variables */
	hash_table_t *hash_tab;
	unsigned long int i;

	/* allocate memory space for hash table */
	hash_tab = malloc(sizeof(hash_table_t));
	if (hash_tab == NULL)
		return (NULL);
	/* assign values to hash table properties */
	hash_tab->size = size;
	hash_tab->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_tab->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		hash_tab->array[i] = NULL;

	return (hash_tab);
}
