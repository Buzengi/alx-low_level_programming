#include "main.h"

/**
 * _abs - entry point
 * @n: is an integer
 * Description: function that computes the absolute value of an integer
 * Return: int
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
