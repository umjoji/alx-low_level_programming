#include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 14
 * Return: void
 */

void print_most_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			{
				_putchar((ch / 10) + 48);
			}
			_putchar((ch % 10) + 48);
		}
	}
	_putchar('\n');
}
