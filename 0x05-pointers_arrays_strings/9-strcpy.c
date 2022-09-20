#include "main.h"
#include "2-strlen.c"

/**
 * _strcpy - copies a string
 * @dest: destination pointer
 * @src: source pointer
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int len, num = 0;

	len = _strlen(src);
	for (; num <= len; num++)
	{
		*(dest + num) = *(src + num);
	}	
	return (dest);
}
