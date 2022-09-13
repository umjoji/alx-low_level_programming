#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lower case
 *
 * Return: void
 */
void print_alphabet(void)
{
	char x;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
