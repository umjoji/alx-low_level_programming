#include "main.h"
#include "2-strlen.c"

/**
 * _strcat - concatenates two strings
 * @dest: destination string to be added to
 * @src: string to be added
 * Return: concatenated string dest
 */

char *_strcat(char *dest, char *src)
{
	int len_dest = _strlen(dest);
	int len_src = _strlen(src);
	int num = 0;

	/* iterate over length of source and add to destinantion */
	for (; num < len_src; num++)
	{
		*(dest + len_dest + num) = *(src + num);
	}

	return (dest);
}
