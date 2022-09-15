#include "main.h"

/**
 * print_line - draws a straight line
 * @n: integer
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n != 0)
		{
			_putchar(95);
		}
		else if (n <= 0)
		{
			_putchar('\n');
			break;
		}
	}
	_putchar('\n');
}
