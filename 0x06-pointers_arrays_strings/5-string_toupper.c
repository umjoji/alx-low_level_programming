#include "main.h"
#include "2-strlen.c"

/**
 * string_toupper - changes lowercase to uppercase
 * @str: string
 * Return: uppercase string
 */

char *string_toupper(char *str)
{
	int len = _strlen(str), i, j, k;

	for (i = 0; i < len; i++)
	{

		j = str[i];
		if (j > 96 && j < 123)
		{
			k = j -32;
			*(str + i) = k;
		}

	}
	return (str);
}
