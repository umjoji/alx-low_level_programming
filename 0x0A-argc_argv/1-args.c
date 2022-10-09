#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: number of command line arguments
 * @argv: array that contains command line arguments
 * Return: 0 (success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	/* print number of arguments in array */
	printf("%d\n", argc - 1);
	return (0);
}
