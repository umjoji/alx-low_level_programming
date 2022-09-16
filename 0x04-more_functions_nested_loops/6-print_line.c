#include "main.h"

/**
 * print_line - draws a straight line
 * @n: integer
 * Return: void
 */

void print_line(int n)
{
	int i;
	
	i = 0;
	while (!(i >= n))
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
