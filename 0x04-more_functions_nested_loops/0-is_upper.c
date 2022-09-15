#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: integer
 * Return: 1 if true, 0 if false
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
