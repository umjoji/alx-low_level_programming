#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 122;
	while (n > 96)
	{
		putchar(n);
		n--;
	}
	putchar(10);
	return (0);
}
