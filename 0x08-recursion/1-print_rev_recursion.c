#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

/**
 * _print_rev_recursion - prints a string reversed
 * @s: character to print
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

