#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum
 * of two diagonals of a square matrix
 * @a: input pointer
 * @size: size of the matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int num, sum1 = 0, sum2 = 0;

	/* iterate through matrix */
	for (num = 0; num < size * size; num++)
	{
		/* add diagonal from the left */
		if (num % (size + 1) == 0)
			sum1 += *(a + num);

		/* add diagonal from the right */
		if (num % (size - 1) == 0)
			sum2 = *(a + num);
	}
	printf("%d, %d\n", sum1, sum2);
}

