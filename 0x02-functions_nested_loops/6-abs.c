#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @i: integer to be checked
 *
 * Return: Absolute value of int
 */

int _abs(int i)
{
	if (i > 0)
	{
		return (i);
	}
	else if (i == 0)
	{
		return (0);
	}
	else
	{
		i = -i;
		return (i);
	}
}
