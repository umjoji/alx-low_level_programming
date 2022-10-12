#include "function_pointers.h"

/**
 * array_iterator - executes a function as parameter
 * @array: array
 * @size: size of array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}


