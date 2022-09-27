#include "main.h"

/**
 * _strchr - locates a characte in a string
 * @s: string
 * @c: character
 * Return: pointer to first occurence c or NULL if not found
 */

char *_strchr(char *s, char c)
{
	unsigned int num = 0;

	/* iterate through string */
	while (s[num] != '\0')
	{
		/* check for first instance of character */
		if (s[num] == c)
		{
			return (s + num);
		}
		num++;
	}
	return ('\0');
}
