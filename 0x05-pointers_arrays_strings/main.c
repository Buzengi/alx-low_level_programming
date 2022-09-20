#include <stdio>

int _strlen(char *);

/**
 * main - main - check the code for Holberton School students
 *
 * Return: always 0.
 */

int main(void)
{
	char *str;
	int len;

	str = "Holberton!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
