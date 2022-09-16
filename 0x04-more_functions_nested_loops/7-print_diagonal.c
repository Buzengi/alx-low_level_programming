#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: number of character to be printed
 * Return: void
 */

int print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar('\\');
		_putchar('\n');

		for (i = 0; i < (n - 1); i++)
		{
			for (j = i; j >= 0; j--)
			{
				_putchar(' ');
			}
		}
		_putchar('\\');
		_putchar('\n');
	}

}
