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
		for (j = 0; j < 10; j++)
		{
			num = i * j;
			if (j == 0)
			{
				_putchar(num + '0');
			}
			else if (num >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((num / 10) + 48);
				_putchar((num % 10) + 48);
			}
			else if (num < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(num + '0');
			}
		}
		_putchar('\n');
	}
}
