#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 1 if identical else 0
 */

int wildcmp(char *s1, char *s2)
{
	/* first check for similarity */
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
	{
		return (0);
	}

	/* check if both strings are empty */
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	/* check if first characters are the same */
	if (*s1 == *s2)
	{
		/* recursively check next characters */
		return (wildcmp(s1 + 1, s2 + 1));
	}

	/* check if first character of s2 is '*' */
	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}

	return (0);
}
