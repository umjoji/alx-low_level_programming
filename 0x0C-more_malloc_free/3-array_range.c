#include "main.h"
#include <stdlib.h>

/**
 * array_range - returns an array of integers between min and max
 * @min: min integer
 * @max: max integer
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int num, arr_len;
	int *arr_ptr;

	if (min > max)
		return (NULL);

	/* Get array length */
	arr_len = max - min + 1;

	/* allocate space for array */
	arr_ptr = malloc(sizeof(int) * (arr_len));

	if (arr_ptr == NULL)
		return (NULL);

	/* iterate through array length and add elements */
	for (num = 0; num < arr_len; num++)
	{
		arr_ptr[num] = min;
		min++;
	}

	return (arr_ptr);
}
