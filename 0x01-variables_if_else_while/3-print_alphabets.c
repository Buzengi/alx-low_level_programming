#include <stdio.h>

/**
 * main - prints lowercase and UPPERCASE
 *
 * Return: Always 0
 *
 */

int main(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		putchar (lowercase);
		lowercase++;
	}

	putchar ('\n');

	char uppercase = 'A';

	while (uppercase <= 'Z')
	{
		putchar (uppercase);
		uppercase++;
	}
	putchar ('\n');

	Return(0);
}
