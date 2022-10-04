#include "main.h"

/**
 * power_function - returns natural square root of n
 * @num: input number
 * @sqr_root: iterator
 * Return: square root or -1
 */

int power_function(int num, int sqr_root)
{
	if (sqr_root %  (num / sqr_root) == 0)
	{
		if (sqr_root * (num  / sqr_root) == num)
			return (sqr_root);
		else
			return (-1);
	}
	return (0 + power_function(num, sqr_root + 1));
}

/**
 * _sqrt_recursion - returns natural square root
 * @n: input number
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (power_function(n, sqr_root));
}

