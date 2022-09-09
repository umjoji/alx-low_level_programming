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

	n = 0;
	do {
		printf("%d", n);
		n++;
	} while (n < 10);
	putchar(10);
	return (0);
}
