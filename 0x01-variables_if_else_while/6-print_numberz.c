#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char source[] = "0123456789";
	int i;
	int len = strlen(source);

	for (i = 0; i < len; i++)
	{
		putchar(source[i]);
	}
	putchar(10);
	return (0);
}
