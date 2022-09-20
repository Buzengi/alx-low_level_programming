#include "main.h"

/**
 * _puts - prints a string with a new line
 * @str: pointer to a string to print
 * Return: void
 */

void _puts(char *str)
{
	int j = 0;

	while (str[j])
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
