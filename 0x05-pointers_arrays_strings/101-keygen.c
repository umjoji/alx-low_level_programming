#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates keygen password
 * Return: 0
 */

int main(void)
{
	int random_num = 0, check = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (check < 2772)
	{
		random_num = rand() % 128;
		if ((check + random_num) > 2772)
		{
			break;
		}
		check = check + random_num;
		printf("%c", random_num);
	}
	
	printf("%c\n", (2772 - check));

	return (0);
}
