#include "main.h"

/**
 * _isalpha - entry point
 * description: function that checks for alphabetic character.
 * c: integer value it gets
 * @c: integer value it gets
 * Return: 1 if true. 0 if false
 */

int _isalpha(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
