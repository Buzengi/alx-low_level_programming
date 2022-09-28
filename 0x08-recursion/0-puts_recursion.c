#include "main.h"

/**
 * _puts_recursion - func that prints a string
 * @*s: pointer to the string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(s + 1);
	_putchar(s[0]);
}
