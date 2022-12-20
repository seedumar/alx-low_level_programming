#include "main.h"

/**
 * print_rev - This function prints a reverse string
 *
 * @s: This is the input string
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
