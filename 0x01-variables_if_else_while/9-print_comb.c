#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
  * main - Entry point
  * print a combinantion of numbers
  * Return: Always 0 (Success)
  */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
