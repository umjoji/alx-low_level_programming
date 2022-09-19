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
	int front_num;
	int rear_num;

	for (front_num = 0; front_num < 100; front_num++)
	{
		for (rear_num = 0; rear_num < 100; rear_num++)
		{
			if (front_num < rear_num)
			{
				putchar((front_num / 10) + 48);
				putchar((front_num % 10) + 48);
				putchar(32);
				putchar((rear_num / 10) + 48);
				putchar((rear_num % 10) + 48);
				if (front_num != 98 || rear_num != 99)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
