#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include "2-strlen.c"
#include "9-strcpy.c"

/**
 * _strdup - returns a pointer to a string copy
 * @str: string
 * Return: pointer to string
 */

char *_strdup(char *str)
{
	char *dup_str;
	
	if (str == NULL)
	{
		return (NULL);
	}

	/* allocate the sapce for the duplicate string */
	dup_str = (char *) malloc(strlen(str) + 1);
	
	if (dup_str == NULL)
		return (NULL);

	_strcpy(dup_str, str);
	
	return (dup_str);
}
