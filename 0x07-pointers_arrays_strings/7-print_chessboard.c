#include "main.h"

/**
 * print_chessboard - prints an empty chessboard
 * @a: input array pointer
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int num, num1;

	for (num = 0; num < 64; num++)
	{
		/* print a new line when it gets to multiples of 8 */
		if (num % 8 == 0 && num != 0)
		{
			num1 = num;
			_putchar('\n');
		}

		_putchar(a[num / 8][num - num1]);
	}

	_putchar('\n');
}
