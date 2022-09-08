#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 2015;
	int b = 10;
	int c = 19;
	char str[] = "and that piece of art is useful";
	char str2[] = "Dora Korpar";

	fprintf(stderr, "%s\" - %s, %d-%d-%d\n", str, str2, a, b, c);
	return (1);
}
