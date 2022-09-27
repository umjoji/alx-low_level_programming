#include "main.h"

/**
 * _memcpy - copies a memory area from src to dest
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: char dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int num = 0;

	/* copy bytes from src to dest */ 
	while (num < n)
	{
		*(dest + num) = *(src + num);
		num++;
	}

	return (dest);
}
