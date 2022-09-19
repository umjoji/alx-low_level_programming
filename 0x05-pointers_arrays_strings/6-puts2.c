#include "main.h"

/**
 * puts2 - prints a string followed by a new line
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	for (;; i++)
	{
		if (str[i] == '\0')
		{
			break;
		}
		else if (i % 2 != 0)
		{
			continue;
		}
		else if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
