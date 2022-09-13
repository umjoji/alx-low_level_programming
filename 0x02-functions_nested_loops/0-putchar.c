#include "main.h"


/**
 * main - Entry point
 *
 * Return: always 0
 */


int main(void)
{
	char s[9] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(s[i]);
		i++;
	}
	return (0);
}
