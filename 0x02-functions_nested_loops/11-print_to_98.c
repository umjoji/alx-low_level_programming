#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 *
 * @n: integer
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d\n", n);
	}
	else
	{
		while (1)
		{
			if (n < 98)
			{
				printf("%d, ", n);
				n++;
			}
			else if (n > 98)
			{
				printf("%d, ", n);
				n--;
			}
			else
			{
				printf("%d\n", n);
				break;
			}
		}
	}
}
