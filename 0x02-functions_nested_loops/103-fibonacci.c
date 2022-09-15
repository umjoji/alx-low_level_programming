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
	int64_t sum = 22;

	for (i = 4; i <= 50; i++)
	{
		num1 = num2;
		num2 = nextnum;
		nextnum = num1 + num2;

		if (nextnum >= 4000001)
		{
			break;
		}
		else if (nextnum % 2 == 0)
		{
			sum += nextnum;
		}
	}
	printf("%" PRId64 "\n", sum);
	return (0);
}
