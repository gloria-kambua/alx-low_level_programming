#include "main.h"

/**
 *	main - entry point
 *	Description: Prints _putchar as a message.
 *	Return: 0
*/
int main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(word[i]);
	_putchar('\n');

	return (0);
}
