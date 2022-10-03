#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array
 * @a: array
 * @n: number of elements
 * Return: void
 */

void print_array(int *a, int n)
{
	int num;

	for (num = 0; num < n; num++)
	{
		if (num != n - 1)
		{
			printf("%d, ", a[num]);
		}
		else
		{
			printf("d, ", a[num]);
		}
	}
	putchar(10);
}
