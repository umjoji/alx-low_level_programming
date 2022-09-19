#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0;
	int len = _strlen(str);

	for (i = (len -1) / 2;; i++)
	{
		if (str[i] == '\0')
		{
			break;
		}
		_putchar(str[i]);
	}
	_putchar('\n');
}
