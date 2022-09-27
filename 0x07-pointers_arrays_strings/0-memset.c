#include "main.h"

/**
 * _memset - fills memory with costant byte
 * @s: string
 * @b: filler byte
 * @n: number of bytes
 * Return: a pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int num = 0;

	/* replace memory are with filler byte */
	while (num < n)
	{
		*(s + num) = b;
		num++;
	}

	return (s);
}
