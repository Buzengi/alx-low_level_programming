#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point
 * description: prints the alphabet in lowercase, and then in uppercase
 * Return: always 0 (success)
 */

int main(void)
{
	int alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	for (alph = 'A'; alph <= 'Z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
