#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a string copy
 * @str: string
 * Return: pointer to string
 */

char *_strdup(char *str)
{
	char *dup_str;
	unsigned int num1, num2;

	if (str == NULL)
	{
		return (NULL);
	}

	/* iterate through str */
	for (num1 = 0; str[num1] != '\0'; num1++)
		;

	/* allocate the sapce for the duplicate string */
	dup_str = (char *) malloc(sizeof(char) * (num1 + 1));

	if (dup_str == NULL)
		return (NULL);

	/* duplicate string */
	for (num2 = 0; num2 <= num1; num2++)
		dup_str[num2] = str[num2];

	return (dup_str);
}
