#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#define LARGEST 10000000000

/**
 * main - entry point
 * Description: Find and print the first 98 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	/* Divide the number into two parts and create holders for them */
	int i;
	uint64_t fpart_num1 = 0, spart_num1 = 1;
	uint64_t fpart_num2 = 0, spart_num2 = 2;
	uint64_t num_holder1, num_holder2, num_holder3;

	printf("%" PRId64 ", ", spart_num1);
	printf("%" PRId64 ", ", spart_num2);

	for (i = 3; i <= 98; i++)
	{
		if (spart_num1 + spart_num2 > LARGEST || fpart_num1 > 0 || fpart_num2 > 0)
		{
			num_holder1 = (spart_num1 + spart_num2) / LARGEST;
			num_holder2 = (spart_num1 + spart_num2) % LARGEST;
			num_holder3 = fpart_num1 + fpart_num2 + num_holder1;
			fpart_num1 = fpart_num2, fpart_num2 = num_holder3;
			spart_num1 = spart_num2, spart_num2 = num_holder2;
			printf("%lu%010lu", fpart_num2, spart_num2);
		}
		else
		{
			num_holder2 = (spart_num1 + spart_num2);
			spart_num1 = spart_num2, spart_num2 = num_holder2;
			printf("%" PRId64 "", spart_num2);
		}
		if (i != 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
