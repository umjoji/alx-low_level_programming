#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - prints a string in reverse
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	/* declare length variable and pointer */
	int len;
	char *str = s;

	for (len = _strlen(str) - 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
