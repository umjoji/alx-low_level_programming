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

	if (len % 2 == 1)
	{
		i = ((len - 1) / 2) + 1;
	}
	else if (len % 2 == 0)
	{
		i = len / 2;
	}
	for (; i < len; ++i)
	{
		if (str[i] == '\0')
		{
			break;
		}
		else if (str[i] == '\n')
		{
			break;
		}
		_putchar(str[i]);
	}
	_putchar('\n');
}
