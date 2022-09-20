#include "main.h"

/**
 * puts_half - prints half of a string, then newline
 * @str: string reference
 * Return: 0
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
