#include "main.h"

/**
* _islower - entry point
* Description: function that checks for lowercase character
* @c: the integer value it gets
* return: 1 if true. 0 if false
*/

int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		/* refer int c*/
		if (c == i)
		{
		return (1);
		}
	}
	return (0);
}
