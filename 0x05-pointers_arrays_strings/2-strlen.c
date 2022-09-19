#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: string length
 */

int _strlen(char *s)
{
	int i;

	/* iterate through the string */
	for (i = 0; ; i++)
	if (s[i] == '\0')
	{
		break;
	}
	return (i);
}
