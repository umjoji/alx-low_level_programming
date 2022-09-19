#include "2-strlen.c"
#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	/* declare length variables and character variables */
	int len, max_len, half_len;
	char first_char, last_char;

	/* length of string */
	len = _strlen(s);

	/* length of string excluding null character */
	max_len = len - 1;

	half_len = max_len / 2;

	while (half_len >= 0)
	{
		/* first character is taken from the middle */
		first_char = s[max_len - half_len];

		/* last character picked from other side */
		last_char = s[half_len];

		/* Swap last character and first character positions */
		s[half_len] = first_char;
		s[max_len - half_len] = last_char;
		half_len--;
	}
}
