#include i"main.h"

/**
* _islower - function that checks for lowercase character.
* Description: function that checks for lowercase character
* @c: the integer value it gets
* return: 1 if true. 0 if false
*/

int _islower(int c)
{
	int i = 'a';
	int c = i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
