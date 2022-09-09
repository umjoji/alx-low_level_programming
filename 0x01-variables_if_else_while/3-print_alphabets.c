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
	int m;

	n = 97;
	while (n < 123)
	{
		putchar(n);
		n++;
	}
	m = 65;
	while (m < 91)
	{
		putchar(m);
		m++;
	}
	putchar(10);
	return (0);
}
