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
	printf("%d \n", n);
	return (0);
}
