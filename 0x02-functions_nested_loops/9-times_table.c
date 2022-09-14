#include "main.h"

/**
 * times_table - prints the multiplication table up to 9
 *
 * Return: Void
 */

void times_table(void)
{
	int i, j, num;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10, j++)
		{
			num = i * j;
			if (j == 9 && num < 10)
			{
				_putchar(num + '0');
			}
			else if (j == 9 && num > 10)
			{
				_putchar((num / 100) + 48);
				_putchar((num % 100) + 48);
			}
			else if (j != 9 && num < 10)
			{
				_putchar(num + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar((num / 100) + 48);
				_putchar((num % 100) + 48);
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}