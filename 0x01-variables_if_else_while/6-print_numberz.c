#include <stdio.h>
#include <unistd.h>

/**
 * Main - Entry point
 * Description: prints numbers base 10 starting from 0 with putchar
 * Return: Always 0 (success)
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n')
	return (0);
}
