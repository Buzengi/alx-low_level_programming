#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be reversed
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;
	int len = 0;

	while (s[i++])
		len++;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
