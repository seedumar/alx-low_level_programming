#include "main.h"

/**
 * _puts - write a function that prints a string, followed by a new line
 *
 * @str: This is my input string
 *
 */

void _puts(char *str)
{
	int c = 0;

	while (str[c])
	{
		_putchar(str[c]);
		i++;
	}
	_puchar('\n');
}
