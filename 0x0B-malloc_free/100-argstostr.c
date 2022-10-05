#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the args of a program
 * @ac: argument counter
 * @av: argument vector
 * Return: pointer of ann array of characters
 */

char *argstostr(int ac, char **av)
{
	char *array_out;
	int num1, num2, num3, num4;

	if (ac == 0)
		return (NULL);

	for (num1 = num2 = 0; num2 < ac; num2++)
	{
		if (av[num2] == NULL)
			return (NULL);

		for (num3 = 0; av[num2][num3] != '\0'; num3++)
			num1++;
		num1++;
	}

	array_out = malloc((num1 + 1) * sizeof(char));

	if (array_out == NULL)
	{
		free(array_out);
		return (NULL);
	}

	for (num2 = num3 = num4 = 0; num4 < num1; num3++, num4++)
	{
		if (av[num2][num3] == '\0')
		{
			array_out[num4] = '\n';
			num2++;
			num4++;
			num3 = 0;
		}
		if (num4 < num1 - 1)
			array_out[num4] = av[num2][num3];
	}
	array_out[num4] = '\0';

	return (array_out);
}
