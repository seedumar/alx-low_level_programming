#include "main.h"

/**
 * _puts - write a function that prints a string, followed by a new line
 *
 * @str: This is my input string
 *
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_puchar('\n');
}
