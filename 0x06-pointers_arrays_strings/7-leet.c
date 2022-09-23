#include "main.h"

/**
 * leet - encodes a string into 1337 (leet)
 * @str: string to be converted
 * Return: string
 */

char *leet(char *str)
{
	int num = 0, i;
	int lowercase[] = {'a', 'e', 'o', 't', 'l'};
	int uppercase[] = {'A', 'E', 'O', 'T', 'L'};
	int numbers[] = {'4', '3', '0', '7', '1'};

	/* iterate through string */
	while (*(str + num) != '\0')
	{
		/* iterate through arrays */
		for (i = 0; i < 5; i++)
		{
			if (*(str + num) == lowercase[i] || *(str + num) == uppercase[i])
			{
				/* swap characters */
				*(str + num) = numbers[i];
				break;
			}
		}
		num++;
	}

	return (str);
}
