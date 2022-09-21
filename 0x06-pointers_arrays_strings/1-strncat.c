#include "main.h"
#include "2-strlen.c"

/**
 * _strncat - concatenates two strings
 * @dest: destination string to be added to
 * @src: string to be added
 * @n: number of bytes
 * Return: concatenated string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len_dest = _strlen(dest);
	int num = 0;

	/* iterate over length of source and add to destinantion */
	for (; num < n; num++)
	{
		*(dest + len_dest + num) = *(src + num);
		if (dest[len_dest + num] == '\0')
		{
			break;
		}
	}

	return (dest);
}
