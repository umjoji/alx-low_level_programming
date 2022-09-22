#include "main.h"
#include "2-strlen.c"

/**
 * _strncpy - copies a string
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of characters to copy
 * Return: copied string destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int num = 0;
	int len_dest = _strlen(dest);

	/* iterate through length of src and add to destinantion */
	for (; num < n && src[num]; num++)
	{
		*(dest + num) = *(src + num);
	}

	for (; num < n; num++)
	{
		dest[num] = '\0';
	}
	}
	return (dest);
}
