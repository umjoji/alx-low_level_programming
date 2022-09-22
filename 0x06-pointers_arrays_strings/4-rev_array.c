#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses the contents of an array
 * @a: array a
 * @n: number of elements in array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int num;
	int hold;

	for (num = 0; num < n / 2; num ++)
	{
		hold = *(a + num);
		*(a + num) = *(a + n - num - 1);
		*(a + n - num - 1) = hold;
	}
}
