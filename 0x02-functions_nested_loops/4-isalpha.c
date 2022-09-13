#include <stdio.h>

/**
 * _isalpha - checks if a character is a letter
 * 
 * @c: character to be checked
 *
 * Return: 1 for yes, 0 for no
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 65 && c < 90))
	{
		return (1);
	}
	else
	{

		return (0);
	}
}
