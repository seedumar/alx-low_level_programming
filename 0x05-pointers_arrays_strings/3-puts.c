nclude "main.h"

/**
 * _putchar - Write te character c to stdout
 * @c: The caracter to print
 *
 * Return: On success 1,
 * On error, -1 is returned
 */

void _putchar(char c)
{
	return (write(1, &c, 1));
}
