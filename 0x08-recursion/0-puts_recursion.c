#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: character to print
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
	}
	_putchar(s[i]);
	i++;
	_puts_recursion(s + i);

}

