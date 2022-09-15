#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#define LARGETST 10000000000

/**
 * main - entry point
 * Description: Find and print the first 98 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	/* Divide the number into two parts and create holders for them */
	int i;
	uint64_t first_part_num1 = 0, second_part_num1 = 1;  
	uint64_t first_part_num2 = 0, second_part_num2 = 2;
	uint64_t number_holder1, number_holder2, number_holder3;

	printf("%" PRId64 ", ", second_part_num1);
	printf("%" PRId64 ", ", second_part_num2);

	for (i = 3; i <= 98; i++)
	{
		if (second_part_num1 + second_part_num2 > LARGEST || first_part_num1 > 0 || first_part_num2 > 0)
		{
			number_holder1 = (second_part_num1 + second_part_num2) / LARGEST;
			number_holder2 = (second_part_num1 + second_part_num2) % LARGEST;
			number_holder3 = first_part_num1 + first_part_num2 + number_holder1;
			first_part_num1 = first_part_num2, first_part_num2 = number_holder3;
			second_part_num1 = second_part_num2, second_part_num2 = number_holder2;
			printf("%lu%010lu", first_part_num2, second_part_num2);
		}
		else
		{
			number_holder2 = (second_part_num1 + second_part_num2);
			second_part_num1 = second_part_num2, second_part_num2 = number_holder2;
			printf("%" PRId64 "", second_part_num2);
		}
		if (i != 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
