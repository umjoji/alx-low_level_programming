#include "main.h"
/**
 * print_times_table - prints the multiplication table up to 15
 * @n: integer between 0 and 15
 * Return: Void
 */
void print_times_table(int n)
{
	int i, j;

	if (n >= 0 && n < 15)
	{
		for (i = 0; i < (n + 1); i++)
		{
			for (j = 0; j < (n + 1); j++)
			{
				if (j == 0)
				{
				_putchar((i * j) + '0');
				}
				else if ((i * j) >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(((i * j) / 100) + 48);
					_putchar((((i * j) % 100) / 10) + 48);
					_putchar(((i * j) % 10) + 48);
				}
				else if ((i * j) < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar((i * j) + '0');
				}
				else if ((i * j) >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(((i * j) / 10) + 48);
					_putchar(((i * j) % 10) + 48);
				}

			} _putchar('\n');
		}
	}
}
