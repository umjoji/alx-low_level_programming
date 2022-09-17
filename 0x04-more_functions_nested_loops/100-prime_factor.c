#include <stdio.h>
#include "main.h"

/**
 * main - entry poirt
 * Return: 0
 */

int main(void)
{
	long int n = 612852475143;
	long int i = 3;

	for (; i < 12057; i += 2)
	{
		while (n % i == 0 && n != i)
		{
			n /= i;
		}
	}
	printf("%li\n", n);
	return (0);
}
