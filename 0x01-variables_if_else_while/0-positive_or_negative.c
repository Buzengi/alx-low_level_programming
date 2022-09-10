#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - program will assign a random number to the variable
 *
 * if the number is greater than 0: is positive
 * if the number is 0: is zero
 * if the number is less than 0: is negative
 *
 *Return: Always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d\n", n);

	if (n > 0)
	{
		printf("The number is positive");
	}

	else if (n == 0)
	{
		printf("The number is Zero");
	}
	
	else
	{
		printf("The number is negative");
	}

	return (0);
}
