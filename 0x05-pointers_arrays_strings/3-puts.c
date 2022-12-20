nclude "main.h"

/**
 * _puts - write a function that prints a string, followed by a new line
 *
 * @str: This is my input string
 *
 */

void _puts(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
	_putchar(str[index]);
	}
	_puchar('\n');
}
