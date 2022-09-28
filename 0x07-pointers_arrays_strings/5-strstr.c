#include "main.h"
#include "3-strcmp.c"

/**
 * _strstr - locates a substring
 * @haystack: the string to be searched
 * @needle: the string we are sarching for
 * Return: a pointer to the beginning of the located substring or null if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int num;

	/* iterate through haystack */
	for (num = 0; haystack[num] != '\0'; num++)
	{
		if (_strcmp(haystack + num, needle) == 0)
		{
			return (haystack + num);
		}
	}
	
	return ('\0');
}
