#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: input string
 * Return: encoded string
 */

char *rot13(char *str)
{
	int num, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	/* iterate through string */
	while (*(str + num) != '\0')
	{
		/* iterate through arrays */
		for (i = 0; i < 52; i++)
		{
			if (*(s + count) == alphabet[i])
			{
				/* swap characters */
				*(s + count) = rot13[i];
				break;
			}
		}
		num++;
	}

	return (str);
}
