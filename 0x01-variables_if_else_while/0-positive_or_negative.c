#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - program will assign a random number to the variable
 *
 *Return: Always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d\n", n);

	if (n < 0)
	{
		printf("is negative");
	}

	if (n == 0)
	{
		printf("is Zero");
	}

	if (n > 0)
	{
		printf("is positive")
	}

	return (0);
}
