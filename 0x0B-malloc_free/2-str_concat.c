#include "main.h"
#include <stdlib.h>

/**
 * _strlen - count arrray
 * @s: array of elements
 * Return: length ofstring
 */

int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0') /*Count character of string*/
		i++;
	return (i);
}

/**
 * str_concat - a function that concatenates two strings
 * @s1: holds the first string
 * @s2: holds the second string
 * Return: the pointer to a string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, size;
	char *p;

	/*If the array is empty*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*count size total*/
	size = (_strlen(s1) + _strlen(s2) + 1);

	p = (char *) malloc(size * sizeof(char));

	if (p == 0)
		return (NULL);

	/*Concatenate arrays*/
	for (i = 0; *(s1 + i) != '\0'; i++)
		*(p + i) = *(s1 + i);
	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(p + i) = *(s2 + j);
		i++;
	}
	return (p);
}
