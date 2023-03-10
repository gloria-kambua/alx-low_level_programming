#include "main.h"

/**
 *	_isalpha - entry point
 *	@c: Carrier variable
 *	Description: Checks for alphabetic character.
 *	Return: 1 if c is a letter, lowercase or uppercase. Else 0.
*/
int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				isletter = 1;
		}
	}
	return (isletter);
}
