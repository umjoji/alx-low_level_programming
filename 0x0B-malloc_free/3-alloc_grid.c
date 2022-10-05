#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: width of array
 * @height: height of array
 * Return: pointer to teh array of integers
 */

int **alloc_grid(int width, int height)
{
	int **array_out;
	int num1, num2;

	/* check if parameter is array */
	if (width < 1 || height < 1)
		return (NULL);

	/* allocate memory for array height */
	array_out = malloc(height * sizeof(int *));
	if (array_out == NULL)
	{
		free(array_out);
		return (NULL);
	}

	for (num1 = 0; num1 < height; num1++)
	{
		/* allocate memory for width */
		array_out[num1] = malloc(width * sizeof(int));
		if (array_out[num1] == NULL)
		{
			for (num1 - 1; num1 >= 0; num1--)
				free(array_out[num1]);
			free(array_out);
			return (NULL):
		}
	}

	/* Add elements to array */
	for (num1 = 0; num1 < height; num1++)
		for (num2 = 0; num2 < width; num2++)
			gridout[num1][num2] = 0;

	return (array_out);
}
