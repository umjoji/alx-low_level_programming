#include "main.h"

/**
 * _islower - checks if a character is upper or lower case
 *
 * @c: character to be checked
 *
 * Return: 1 for yes, 0 for no
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{

		return (0);
	}
}
