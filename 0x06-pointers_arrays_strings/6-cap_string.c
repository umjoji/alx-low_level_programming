#include "main.h"
#include "2-strlen.c"

/**
 * cap_string - changes lowercase to uppercase
 * @str: string
 * Return: uppercase string
 */

char *cap_string(char *str)
{
	int num = 0, i;
	int word_sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	/* check first letter */
	if ((str[num] >= 'a' && str[num] <= 'z'))
	{
		/* capitalize */
		*(str + num) = *(str + num) - 32;
	}

	num++;

	/* iterate through string */
	while (*(str + num) != '\0')
	{
		/* iterate through word_sep array */
		for (i = 0; i < 13; i++)
		{
			if (*(str + num) == word_sep[i])
			{
				if ((*(str + (num + 1)) >= 'a') && (*(str + (num + 1)) <= 'z'))
				{
					*(str + (num + 1)) = *(str + (num + 1))	- 32;
					break;
				}
			}
		}
		num++;
	}

	return (str);
}
