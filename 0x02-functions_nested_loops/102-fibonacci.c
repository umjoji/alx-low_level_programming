#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int64_t num1 = 1;
	int64_t num2 = 2;
	int64_t nextnum = num1 + num2;

	printf("%" PRId64 "\n", num1);
	printf("%" PRId64 "\n", num2);
	printf("%" PRId64 "\n", nextnum);

	for (i = 4; i <= 50; i++)
	{
		num1 = num2;
		num2 = nextnum;
		nextnum = num1 + num2;

		printf("%" PRId64 "\n", nextnum);
	}
	return (0);
}
