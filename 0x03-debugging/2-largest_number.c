#insert "main.h"

/**
 * largest_number - returns the largest of three numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, in c)
{
	int largest;

	largest = a;
	if (b > a)
	{
		largest = b;
	}
	else if (c > largest)
	{
		largest = c;
	}

	return (largest);
}
