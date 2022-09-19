#include "main.h"

/**
 * puts2 - prints a string followed by a new line
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	for (;; i += 2)
	{
		if (str[i] == '\0')
		{
			break;
		}
		_putchar(str[i]);
	}
	_putchar('\n');
}
