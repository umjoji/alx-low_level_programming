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
	unsigned int num;

	if (str == NULL)
	{
		return (NULL);
	}


	dup_str = malloc(sizeof(str));
	for (num = 0; num < sizeof(str); num++)
	{
		dup_str[num] = str[num];
	}

	return (dup_str);
}
