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
	int last_digit;

	last_digit = n % 10;
	if (last_digit >= 0)
	{
		_putchar(last_digit + '0');
		return (last_digit);
	}
	else
	{
		last_digit = -last_digit;
		_putchar(last_digit + '0');
		return (last_digit);
	}
}
