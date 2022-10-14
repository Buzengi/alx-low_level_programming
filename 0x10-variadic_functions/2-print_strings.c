#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to print between strings
 * @n: number of integers passed to the function
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *words;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		words = va_arg(ap, char *);
		(words) ? printf("%s", words) : printf("(nil)");
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
