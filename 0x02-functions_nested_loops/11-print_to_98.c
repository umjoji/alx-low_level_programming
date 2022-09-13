#include "main.h"

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
		_putchar(n + '0');
	}
	else
	{
		while true
		{
			if (n < 98)
			{
				_putchar(n + '0');
				_putchar(',');
				_putchar(' ');
				n++;
			}
			else if (n > 98)
			{
				_putchar(n + '0');
				_putchar(',');
				_putchar(' ');
				n--;
			}
			else
			{
				_putchar(n + '0');
				break
			}
		}
	}
}
