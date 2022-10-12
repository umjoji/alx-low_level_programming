#include "function_pointers.h"

/**
 * int_index - searches an array for an integer
 * @array: array
 * @size: number of elements in array
 * @cmp: pointer to function used to compare values
 *
 * Return: the index of the first element which
 * cmp does not return 0
 * if no match or size <= 0,, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			/* since cmp returns 1 for match */
			if ((*cmp)(array[i]))
			{
				return(i);
			}
		}
	}
	return (-1);
}

