#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 (success) else 1
 */

int main(int argc, char *argv[])
{
	int num1, num2, add = 0;

	/* for number of arguments */
	for (num1 = 1; num1 < argc; num1++)
	{
		for (num2 = 0; argv[num1][num2] != '\0'; num2++)
		{
			if (!isdigit(argv[num1][num2]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[num1]);
	}
	printf("%d\n", add);

	return (0);
}

