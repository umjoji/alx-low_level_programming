#include "3-calc.h"

/**
 * op_add - add two numbers
 * @a: first number
 * @b: second number
 *
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers
 * @a: first number
 * @b: second number
 *
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: first num
 * @b: second num
 *
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: first number
 * @b: second num
 *
 * Return: quotient
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculates the modulo of two numbers
 * @a: first num
 * @b: second num
 *
 * Return: remainder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
