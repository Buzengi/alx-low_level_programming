#include <stdio.h>

/**
 * main - entry point
 * Description: prints all possible different combinations of three digits
 * return: Always 0 (success)
 */

int main(void)
{
	int i, c, k;

	for (i = '0'; i <= '9'; i++)
	{
		for (c = '0'; c <= '9'; c++)
	{
		for (k = '0'; k <= '9'; k++)
		{
			if (c < i && i < k)
			{
				putchar(c);
				putchar(i);
				putchar(k);

				if (c != '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	}
	putchar('\n');
	return (0);
}
