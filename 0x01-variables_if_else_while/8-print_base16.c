#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
  * main - Entry point
  * Program to print hexadecimals
  * Return: Always 0 (Success)
  */
int main(void)
{
	int front_num;
	int rear_letter;

	rear_letter = 97;
	for (front_num = 0; front_num < 16; front_num++)
	{
		if (front_num < 10)
		{
			putchar(front_num + '0');
		}
		else if (front_num >= 10)
		{
			putchar(rear_letter);
			rear_letter++;
		}
	}
	putchar(10);
	return (0);
}
