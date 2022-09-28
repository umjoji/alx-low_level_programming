#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: main string
 * @accept: substring
 * Return: number of bytes of accept in s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int num1, num2, num3, count = 0;
	char word_sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	/* iterate through s */
	for (num1 = 0; s[num1] != '\0'; num1++)
	{
		for (num2 = 0; num2 <= 13; num2++)
		{
			/* if character is not a letter exit loop */
			if (s[num1] == word_sep[num2])
			{
				return (count);
			}
		}

		/* check if character is in accept */
		for (num3 = 0; accept[num3] != '\0'; num3++)
		{
			if (accept[num3] == s[num1])
			{
				count += 1;
			}
		}
	}
	return (count);
}

