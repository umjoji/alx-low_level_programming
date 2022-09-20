#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: array
 * @n: number of elements to print
 * Return: void
 */

void print_array(int *a, int n)
{
	int num;

	for (num = 0; num < n; num++)
	{
		if (num == n - 1)
		{
			printf("%d", *(a + i);
		}
		else
		{
			printf("%d, ", *(a + i));
		}
	}
}
