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
	for (; num <= n - 1; num++)
	{
		*(dest + num) = *(src + num);
	}
	
	/* if length of source string less than length od destinantion string, feel remainder with null bytes */
	if (dest[num + 1] == '\0')
	{
		for (; num < len_dest; num++)
		{
			dest[num] = '\0';
		}
	}
	return (dest);
}
