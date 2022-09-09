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

	n = 97;
	do {

		if (n == 101 || n == 113)
		{
			n = n + 1;
			continue;
		}
		putchar(n);
		n++;
	} while (n < 123);
	putchar(10);
	return (0);
}
