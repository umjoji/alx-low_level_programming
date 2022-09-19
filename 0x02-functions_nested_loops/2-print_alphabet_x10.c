#include "main.h"

/**
 *  print_alphabet_x10 - Prints the alphabet in lower case
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char letter;
	int num;

	for (num = 1; num <= 10; num++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
