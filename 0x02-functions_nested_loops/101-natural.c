#include <stdio.h>i

/**
 * main - entry point
 *Description: Prints the sum of all multiples of 3 or 5 up to 102
 * Retrun: Always 0 (success)
 */

int main(void)
{
	iint i;

	int i, z = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			z += i;
		}
		i++;
	}
	printf("%d\n", z);
	return (0);
}
