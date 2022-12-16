#include "main.h"

/**
 * print_line - prints straight line n times.
 *
 * @n: times straight line is printed
 * Return: no return
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		_puchar('_');
	}
	_putchar('\n');
}
