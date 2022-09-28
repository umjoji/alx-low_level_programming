#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string to be searched
 * @needle: the string we are sarching for
 * Return: a pointer to the beginning of the located substring or
 * null if not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *haystack2, *needle2;

	/* iterate through haystack */
	while (*haystack != '\0')
	{
		haystack2 = haystack;
		needle2 = needle;


		while (*haystack != '\0' && *needle2 != '\0' && *haystack == *needle2)
		{
			haystack++;
			needle2++;
		}
		if (!*needle2)
		{
			return (haystack2);
		}
		/* move search location by 1 */
		haystack = haystack2 + 1;
	}

	return ('\0');
}
