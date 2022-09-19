#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: string
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	for (;; i++)
	{
		if (str[i] == '\0')
		{
			break;
		}
		_putchar(str[i]);
	}
	_putchar('\n');
}
