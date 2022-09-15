#include <stdio.h>
#include "main.h"
/**
 *sum_of_multiples_3_and_5 - sumes the multiples of 3 and 5 below 1024
 *@n: integer below 1024
 *Return: sum of multiples of three and five
 */
int sum_of_multiples_3_and_5(int n)
{
	int i, sum;

	sum = 0;
	for (i = 1; i < n; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum += i;
		}
	}
	return (sum);
}

/**
 * main - entru point
 *
 * Return: zero
 */
int main(void)
{
	int num, r;

	num = 1024;
	r = sum_of_multiples_3_and_5(num);
	printf("%d is the sum of multiples of 3 and 5 below %d.\n", r, num);
	return (0);
}
