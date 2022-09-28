#include "main.h"
#include "2-strlen.c"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: difference in strings
 */

int _strcmp(char *s1, char *s2)
{
	int len_s1 = _strlen(s1);
	int char_s1 = 0, char_s2 = 0, i = 0;
	int diff = 0;

	for (; i < len_s1; i++)
	{
		char_s1 = s1[i];
		char_s2 = s2[i];

		if (char_s1 == char_s2)
		{
			continue;
		}
		else
		{
			diff = char_s1 - char_s2;
			break;
		}
	}

	return (diff);
}
