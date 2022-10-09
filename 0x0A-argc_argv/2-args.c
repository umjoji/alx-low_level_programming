#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array containing arguments
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int num;

	/* iterate through array and print elements */
	for (num = 0; num < argc; num++)
		printf("%s\n", argv[num]);

	return (0);
}
