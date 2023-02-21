#include "main.h"

/**
 *	_islower - entry point
 *	@c: the integer value it receives
 *	Description: Checks for lowercase character.
 *	Return: 1 if true. 0 if false.
*/
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}
