#include "3-calc-h"

/**
 * main - check the code
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*operation)(int, int);

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", operation(a, b));

	return(0);
}
