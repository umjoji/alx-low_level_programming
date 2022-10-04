#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: character
 * Return: a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int num;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(c));

	if (array == NULL)
	{
		return (NULL);
	}

	for (num = 0; num < size; num++)
	{
		array[num] = c;
	}

	return (array);
}
