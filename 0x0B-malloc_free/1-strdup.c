#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a string copy
 * @str: string
 * Return: pointer to string
 */

char *_strdup(char *str)
{
	char *dup_str;
	unsigned int num, num2;

	if (str == NULL)
	{
		return (NULL);
	}
	
	for (num2 = 0; str[num2] != '\0'; num2++)

		
	dup_str = malloc(sizeof(str) * (num2 + 1));
	for (num = 0; str[num] != '\0'; num++)
	{
		dup_str[num] = str[num];
	}

	return (dup_str);
}
