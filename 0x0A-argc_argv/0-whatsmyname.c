#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 * @argc: number of command line arguments
 * @argv: array that contains the number of command line arguments
 * Return: 0 (success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	/* print the initial command which is the function name */
	printf("%s\n", argv[0]);
	return (0);
}
