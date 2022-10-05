#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: str1
 * @s2: str2
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char str_cat;
	unsigned int num1, num2, num3, end;

	if (s1 == NULL)
		s1 = "";  /* empty string */

	if (s2 == NULL)
		s2 = "";

	/* iterate through string 1 */
	for (num1 = 0; s1[num1] != '\0'; num1++)
		;
	/* iterate through string 2 */
	for (num2 = 0; s2[num2] != '\0'; num2++)
		;

	/* allocate memory for str_cat */
	str_cat = (char *) malloc(sizeof(char) * (num1 + num2 + 1));

	if (str_cat == NULL)
	{
		free(str_cat);
		return (NULL);
	}

	/* copy string 1 to str_cat */
	for (num3 = 0; num3 < num1; num3++)
		str_cat[num3] = s1[num3];

	end = num2;
	/* copy string 2 to str_cat */
	for (num2 = 0; num2 <= end; num3++, num2++)
		str_cat[num3] = s2[num2];

	return (str_cat);
}

