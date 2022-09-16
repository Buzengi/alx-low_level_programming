#include <stdio.h>

/**
 * main - main block
 * Description: new term in the Fibonacci sequence is generated
 * by adding the previous two terms starting with 1 & 2
 * Return: 0
 */

int main(void)
{
	int a = 0, b = 1, next = 0;
	int sum = 0;

	while (next < 4000000)
	{
		next = a + b;
		a = b;
		b = next;
		if (next % 2 == 0)
			sum += next;
	}
	printf("%i\n", sum);
	return (0);
}
