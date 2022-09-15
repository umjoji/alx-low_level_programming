#include "main.h"
/**
 * print_times_table - prints the multiplication table up to 15
 * @n: integer between 0 and 15
 * Return: Void
 */
void print_times_table(int n)
{
	int i, j, num = i * j;

	if (n >= 0 && n < 15)
	{
		for (i = 0; i < (n + 1); i++)
		{
			for (j = 0; j < (n + 1); j++)
			{
				if (j == 0)
				{
				_putchar(num + '0');
				}
				else if (num >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((num / 100) + 48);
					_putchar(((num % 100) / 10) + 48);
					_putchar((num % 10) + 48);
				}
				else if (num < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(num + '0');
				}
				else if (num >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((num / 10) + 48);
					_putchar((num % 10) + 48);
				}

			} _putchar('\n');
		}
	}
}
