#include "main.h"

/**
 * print_last_digit - Returns the value of the last digit of n
 *
 * @n: the number
 *
 * Return: The last digit of n
 */

int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (m >= 0)
	{
		_putchar(m + '0');
		return (m);
	}
	else
	{
		m = -m;
		_putchar(m + '0');
		return (m);
	}
}
