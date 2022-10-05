#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, initializes with a spec char
 * @size: unsigned integer
 * @c: char
 * Return: a char size
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
		return (NULL);
	p = malloc(sizeof(char) * size);
	if (p == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}
