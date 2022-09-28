#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to be searched
 * @accept: source of bytes
 * Return: pointer to byte s
 */

char *_strpbrk(char *s, char *accept)
{
	int num, num1;

	/* iterate through s */
	for (num = 0; s[num] != '\0'; num++)
	{
		for (num1 = 0; accept[num1]; num1++)
		{
			/* if the character is found in accept, return pointer */
			if (s[num] == accept[num1])
			{
				return (s + num);
			}
		}
	}
	/* return null if not found */
	return ('\0');
}
