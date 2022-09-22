#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: A pointer to the string to be concatenated upon
 * @src: The source string to be appended to @dest
 * Return: A pointer to the destination string @dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = 0, index = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] != '\0'; index++)
		dest[dest_len++] = src[index];

	dest[dest_len] = '\0';

	return (dest);
}
